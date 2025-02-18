// SPDX-License-Identifier: BSD-3-Clause

#include <../include/internal/internal.h>

int close(int fd) {
    return handle_syscall(syscall(__NR_close, fd));
}
