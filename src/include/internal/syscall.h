/* SPDX-License-Identifier: BSD-3-Clause */

#ifndef __SYSCALL_H__
#define __SYSCALL_H__	1

#ifdef __cplusplus
extern "C" {
#endif

#include <internal/arch/x86_64/syscall_list.h>

/** @brief Performs a system call with the specified system call number and arguments. */
long syscall(long n, ...);

#ifdef __cplusplus
}
#endif

#endif
