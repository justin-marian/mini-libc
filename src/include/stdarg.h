/* SPDX-License-Identifier: BSD-3-Clause */

#ifndef __STDARG_H__
#define __STDARG_H__  1

#ifdef __cplusplus
extern "C" {
#endif

#include <internal/types.h>

/** @brief Initializes the va_list object to retrieve the arguments of a variadic function.
 *
 *  @param v The va_list object to initialize.
 *  @param l The last named parameter before the ellipsis (...) in the function declaration.
 */
#define va_start(v, l)  __builtin_va_start(v, l)

/** @brief Cleans up the va_list object after retrieving all the arguments of a variadic function.
 *
 *  @param v The va_list object to clean up.
 */
#define va_end(v)   __builtin_va_end(v)

/** @brief Retrieves the next argument from the va_list object.
 *
 *  @param v The va_list object.
 *  @param l The type of the next argument.
 *  @return The next argument from the va_list object.
 */
#define va_arg(v, l)    __builtin_va_arg(v, l)

/** @brief Copies the va_list object from source to destination.
 *
 *  @param d The destination va_list object.
 *  @param s The source va_list object.
 */
#define va_copy(d, s)   __builtin_va_copy(d, s)

/** @brief A type representing a pointer to the list of arguments in a variadic function. */
typedef __builtin_va_list va_list;


#ifdef __cplusplus
}
#endif

#endif
