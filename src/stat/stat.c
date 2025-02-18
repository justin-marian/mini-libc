// SPDX-License-Identifier: BSD-3-Clause

#include <../include/sys/stat.h>
#include <../include/internal/internal.h>
#include <../include/internal/types.h>

int stat(const char *restrict path, struct stat *restrict buf) {
	return handle_syscall(syscall(__NR_stat, path, buf));
}
