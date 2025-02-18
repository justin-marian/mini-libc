// SPDX-License-Identifier: BSD-3-Clause

#include <../include/internal/internal.h>
#include <../include/internal/types.h>

ssize_t write(int fd, const void *buf, size_t len) {
    return handle_syscall(syscall(__NR_write, fd, buf, len));
}

ssize_t read(int fd, void *buf, size_t len) {
    return handle_syscall(syscall(__NR_read, fd, buf, len));
}
