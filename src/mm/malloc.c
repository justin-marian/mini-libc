// SPDX-License-Identifier: BSD-3-Clause

#include <../include/internal/internal.h>
#include <../include/internal/types.h>
#include <internal/mm/mem_list.h>
#include <internal/essentials.h>
#include <sys/mman.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

void *malloc(size_t size) {
    // Request memory from the operating system
    void *block_start = (void *)syscall(__NR_mmap, NULL, size + sizeof(size_t),
                                        PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);

    // Check if mmap was successful
    if (block_start == MAP_FAILED) {
        return NULL;
    }

    // Store the size of the allocated memory block at the beginning of the block
    *((size_t *)block_start) = size;
    // Add the memory block to the tracking list
    mem_list_add((void *)((size_t *)block_start + 1), size);

    return (void *)((size_t *)block_start + 1);
}

void *calloc(size_t nmemb, size_t size) {
    // Allocate memory using malloc
    void *block_start = malloc(nmemb * size);

    // Check if malloc was successful
    if (block_start == NULL) {
        return NULL;
    }

    // Initialize memory to zero
    memset(block_start, 0, nmemb * size);

    return block_start;
}

void free(void *ptr) {
    // Find the memory block associated with the pointer
    struct mem_list *item = mem_list_find(ptr);

    // If the memory block is found
    if (item != NULL) {
        // Remove the memory block from the tracking list
        mem_list_del(ptr);
        // Unmap the memory block from the address space
        syscall(__NR_munmap, ptr - sizeof(size_t), *((size_t *)ptr - 1) + sizeof(size_t));
    }
}

void *realloc(void *ptr, size_t size) {
    // Retrieve the old size of the memory block
    size_t old_size = *((size_t *)ptr - 1);
    
    // Allocate a new memory block with the requested size
    void *block_start = malloc(size);
    // Check if malloc was successful
    if (block_start == NULL) {
        return NULL;
    }

    // Copy data from the old memory block to the new memory block
    memcpy(block_start, ptr, old_size < size ? old_size : size);
    // Free the old memory block
    free(ptr);

    return block_start;
}

void *reallocarray(void *ptr, size_t nmemb, size_t size) {
    void *block_start = realloc(ptr, nmemb * size);

    // Check if realloc was successful
    if (block_start == NULL) {
        errno = ENOMEM;
    }

    return block_start;
}
