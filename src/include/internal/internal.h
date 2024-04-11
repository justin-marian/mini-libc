// SPDX-License-Identifier: BSD-3-Clause

#ifndef INTERNAL_COMMON_H
#define INTERNAL_COMMON_H

#include <./errno.h>
#include <./stdarg.h>
#include <internal/syscall.h>

/** @brief Handles the return value of a system call, setting errno appropriately if an error occurred.
 *
 *  @param ret The return value of the system call.
 *  @return The return value of the system call if it was successful, otherwise -1 and errno is set accordingly.
 */
static inline long handle_syscall(long ret) {
    if (ret >= 0) {
        return ret;
    }
    errno = -ret;
    return -1;
}

#endif // INTERNAL_COMMON_H
