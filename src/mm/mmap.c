// SPDX-License-Identifier: BSD-3-Clause

#include <errno.h>
#include <sys/mman.h>
#include <internal/syscall.h>

void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset) {
    long ret_value = syscall(__NR_mmap, addr, length, prot, flags, fd, offset);
    if (ret_value >= 0) {
        return (void *)ret_value;
    }

    // Set errno and return MAP_FAILED in case of error
    errno = -ret_value;
    return MAP_FAILED;
}

void *mremap(void *old_address, size_t old_size, size_t new_size, int flags) {
    long ret_value = syscall(__NR_mremap, old_address, old_size, new_size, flags);
    if (ret_value >= 0) {
        return (void *)ret_value;
    }

    // Set errno and return MAP_FAILED in case of error
    errno = -ret_value;
    return MAP_FAILED;
}

int munmap(void *addr, size_t length) {
    long ret_value = syscall(__NR_munmap, addr, length);
    if (ret_value >= 0) {
        return 0;
    }

    // Set errno and return -1 in case of error
    errno = -ret_value;
    return -1;
}
