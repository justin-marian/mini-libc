// SPDX-License-Identifier: BSD-3-Clause

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/stat.h>

#include <internal/types.h>
#include <internal/syscall.h>

#define makedev(major, minor) \
    ((dev_t)((((major) & 0xfff) << 8) | \
	((minor) & 0xff) | (((minor) & ~0xff) << 12) | \
	(((major) & ~0xfff) << 32)))

// Structure describing file characteristics
struct statx {
    uint32_t stx_mask;             // Mask of bits indicating filled fields
    uint32_t stx_blksize;          // Block size for filesystem I/O
    uint64_t stx_attributes;       // File attributes
    uint32_t stx_nlink;            // Number of hard links
    uint32_t stx_uid;              // User ID of owner
    uint32_t stx_gid;              // Group ID of owner
    uint16_t stx_mode;             // File mode
    uint16_t pad1;                 // Padding for alignment
    uint64_t stx_ino;              // Inode number
    uint64_t stx_size;             // Size of file in bytes
    uint64_t stx_blocks;           // Number of 512-byte blocks allocated
    uint64_t stx_attributes_mask;  // Mask to show which attributes are valid
    struct {
        int64_t tv_sec;            // Seconds
        uint32_t tv_nsec;          // Nanoseconds
        int32_t pad;               // Padding for alignment
    } stx_atime, stx_btime, stx_ctime, stx_mtime;  // Access, birth, change, and modification times
    uint32_t stx_rdev_major;       // Major device ID (if file is a character or block special)
    uint32_t stx_rdev_minor;       // Minor device ID (if file is a character or block special)
    uint32_t stx_dev_major;        // Major device ID (for statx() and bstatx())
    uint32_t stx_dev_minor;        // Minor device ID (for statx() and bstatx())
    uint64_t spare[14];            // Padding for future use
};
