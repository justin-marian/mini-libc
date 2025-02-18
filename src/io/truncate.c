// SPDX-License-Identifier: BSD-3-Clause

#include <../include/internal/internal.h>
#include <../include/internal/types.h>

int truncate(const char *path, off_t length) {
    return handle_syscall(syscall(__NR_truncate, path, length));
}
