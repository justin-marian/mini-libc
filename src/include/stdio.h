/* SPDX-License-Identifier: BSD-3-Clause */

#ifndef __STDIO_H__
#define __STDIO_H__	1

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Writes a string to the standard output stream followed by a newline character.
 *
 *  @param s The null-terminated string to be written.
 *  @return On success, a non-negative value is returned. On error, EOF is returned and errno is set appropriately.
 */
int puts(const char *s);


#ifdef __cplusplus
}
#endif

#endif
