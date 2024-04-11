/* SPDX-License-Identifier: BSD-3-Clause */

#ifndef __TYPES_H__
#define __TYPES_H__    1

/* Unsigned integer type of the result of the sizeof operator. */
typedef unsigned long size_t;

/* Signed integer type capable of storing a count of bytes or an error indication. */
typedef long ssize_t;

/* Signed integer type for file offsets. */
typedef long off_t;

/* Signed 64-bit integer type. */
typedef long long quad_t;

/* Unsigned integer type for file attribute bitmasks. */
typedef unsigned int mode_t;

/* Unsigned integer type for file serial numbers. */
typedef unsigned int ino_t;

/* 64-bit type for file serial numbers (Large File Support). */
typedef quad_t ino64_t;

/* Integer type for device numbers. */
typedef int dev_t;

/* Unsigned short integer type for file link counts. */
typedef unsigned short int nlink_t;

/* Unsigned integer type for user identifications. */
typedef unsigned int uid_t;

/* Unsigned integer type for group identifications. */
typedef unsigned int gid_t;

/* Unsigned 8-bit integer type. */
typedef unsigned char uint8_t;

/* Unsigned 16-bit integer type. */
typedef unsigned short uint16_t;

/* Unsigned 32-bit integer type. */
typedef unsigned int uint32_t;

/* Unsigned 64-bit integer type. */
typedef unsigned long uint64_t;

/* Signed 32-bit integer type. */
typedef int int32_t;

/* Signed 64-bit integer type. */
typedef long int64_t;

/* Integer type for representing time. */
typedef long time_t;

/* Null pointer constant. */
#define NULL    ((void *) 0)

#endif /* __TYPES_H__ */
