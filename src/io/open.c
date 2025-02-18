// SPDX-License-Identifier: BSD-3-Clause

#include <../include/internal/internal.h>
#include <../include/internal/types.h>

int open(const char *filename, int flags, ...) {
    va_list args;

	// Start processing variable arguments
    va_start(args, flags);

    mode_t mode = va_arg(args, mode_t);
    int ret = handle_syscall(syscall(__NR_open, filename, flags, mode));

	// End processing variable arguments
    va_end(args);

    return ret;
}
