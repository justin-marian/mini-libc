// SPDX-License-Identifier: BSD-3-Clause

#include <../include/sys/stat.h>
#include <../include/internal/internal.h>
#include <../include/internal/types.h>

int fstat(int fd, struct stat *st) {
	return handle_syscall(syscall(__NR_fstat, fd, st));
}
