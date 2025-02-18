// SPDX-License-Identifier: BSD-3-Clause

#include <string.h>
#include <stdlib.h>
#include <../include/internal/internal.h>
#include <../include/internal/types.h>

int puts(const char *s) {
    if (s == NULL) {
        return -1;
    }

    size_t len = strlen(s);
    // +2 for newline and null terminator
    char *buffer = (char *)malloc((len + 2) * sizeof(*buffer));

    if (buffer == NULL) {
        return -1;
    }

    // Use memcpy to safely copy the string
    memcpy(buffer, s, len);
    buffer[len] = '\n';
    buffer[len + 1] = '\0';

    long ret = syscall(__NR_write, 1, buffer, strlen(buffer));
    free(buffer);

    if (ret >= 0) {
        return ret;
    }

    return -1;
}