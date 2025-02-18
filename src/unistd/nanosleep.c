// SPDX-License-Identifier: BSD-3-Clause

#include <../include/time.h>
#include <../include/internal/internal.h>
#include <../include/internal/types.h>

int nanosleep(const struct timespec *req, struct timespec *rem) {
    return handle_syscall(syscall(__NR_nanosleep, req, rem));
}
