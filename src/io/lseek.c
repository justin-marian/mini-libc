// SPDX-License-Identifier: BSD-3-Clause

#include <../include/internal/internal.h>
#include <../include/internal/types.h>

off_t lseek(int fd, off_t offset, int whence) {
    return handle_syscall(syscall(__NR_lseek, fd, offset, whence));
}
