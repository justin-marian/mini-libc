/* SPDX-License-Identifier: BSD-3-Clause */

#ifndef __SYSCALL_LIST_X86_64__
#define __SYSCALL_LIST_X86_64__		1

#define __NR_read 0                    // Read from a file descriptor
#define __NR_write 1                   // Write to a file descriptor
#define __NR_open 2                    // Open a file
#define __NR_close 3                   // Close a file descriptor
#define __NR_stat 4                    // Get file status
#define __NR_fstat 5                   // Get file status (for an open file)
#define __NR_lstat 6                   // Get file status (for a symbolic link)
#define __NR_poll 7                    // Wait for some event on a file descriptor
#define __NR_lseek 8                   // Reposition read/write file offset
#define __NR_mmap 9                    // Map files or devices into memory
#define __NR_mprotect 10               // Set protection on a region of memory
#define __NR_munmap 11                 // Unmap a region of memory
#define __NR_brk 12                    // Change the size of the heap
#define __NR_rt_sigaction 13           // Examine and change a signal action
#define __NR_rt_sigprocmask 14         // Examine and change blocked signals
#define __NR_rt_sigreturn 15           // Return from a signal handler and cleanup
#define __NR_ioctl 16                  // Control device
#define __NR_pread64 17                // Read from or write to a file descriptor at a given offset
#define __NR_pwrite64 18               // Write to a file descriptor at a given offset
#define __NR_readv 19                  // Read data into multiple buffers
#define __NR_writev 20                 // Write data from multiple buffers
#define __NR_access 21                 // Check user's permissions for a file
#define __NR_pipe 22                   // Create a pipe
#define __NR_select 23                 // Wait for some event on a file descriptor
#define __NR_sched_yield 24            // Yield the processor
#define __NR_mremap 25                 // Remap a region of memory
#define __NR_msync 26                  // Synchronize a file with a memory map
#define __NR_mincore 27                // Determine whether pages are resident in memory
#define __NR_madvise 28                // Give advice about the use of memory
#define __NR_shmget 29                 // Allocate a System V shared memory segment
#define __NR_shmat 30                  // Attach a System V shared memory segment
#define __NR_shmctl 31                 // System V shared memory control
#define __NR_dup 32                    // Duplicate a file descriptor
#define __NR_dup2 33                   // Duplicate a file descriptor
#define __NR_pause 34                  // Wait for signal
#define __NR_nanosleep 35              // High-resolution sleep
#define __NR_getitimer 36              // Get value of an interval timer
#define __NR_alarm 37                  // Set an alarm clock for delivery of a signal
#define __NR_setitimer 38              // Set value of an interval timer
#define __NR_getpid 39                 // Get process ID
#define __NR_sendfile 40               // Send a file from one file descriptor to another
#define __NR_socket 41                 // Create an endpoint for communication
#define __NR_connect 42                // Initiate a connection on a socket
#define __NR_accept 43                 // Accept a connection on a socket
#define __NR_sendto 44                 // Send a message on a socket
#define __NR_recvfrom 45               // Receive a message from a socket
#define __NR_sendmsg 46                // Send a message on a socket
#define __NR_recvmsg 47                // Receive a message from a socket
#define __NR_shutdown 48               // Shut down part of a full-duplex connection
#define __NR_bind 49                   // Bind a name to a socket
#define __NR_listen 50                 // Listen for connections on a socket
#define __NR_getsockname 51            // Get socket name
#define __NR_getpeername 52            // Get name of connected peer socket
#define __NR_socketpair 53             // Create a pair of connected sockets
#define __NR_setsockopt 54             // Set options on sockets
#define __NR_getsockopt 55             // Get options on sockets
#define __NR_clone 56                  // Create a child process
#define __NR_fork 57                   // Create a child process
#define __NR_vfork 58                  // Create a child process and block parent
#define __NR_execve 59                 // Execute a program
#define __NR_exit 60                   // Terminate the current process
#define __NR_wait4 61                  // Wait for process to change state
#define __NR_kill 62                   // Send a signal to a process
#define __NR_uname 63                  // Get name and information about current kernel
#define __NR_semget 64                 // Get a System V semaphore set identifier
#define __NR_semop 65                  // Perform operations on selected semaphores
#define __NR_semctl 66                 // Control operations on a semaphore set
#define __NR_shmdt 67                  // Detach a System V shared memory segment
#define __NR_msgget 68                 // Get a message queue identifier
#define __NR_msgsnd 69                 // Send a message to a message queue
#define __NR_msgrcv 70                 // Receive a message from a message queue
#define __NR_msgctl 71                 // Perform control operations on a message queue
#define __NR_fcntl 72                  // Manipulate file descriptor
#define __NR_flock 73                  // Apply or remove an advisory lock on an open file
#define __NR_fsync 74                  // Synchronize a file's in-core state with storage device
#define __NR_fdatasync 75              // Synchronize a file's in-core state with storage device (data only)
#define __NR_truncate 76               // Change the size of a file
#define __NR_ftruncate 77              // Change the size of an open file
#define __NR_getdents 78               // Get directory entries
#define __NR_getcwd 79                 // Get current working directory
#define __NR_chdir 80                  // Change working directory
#define __NR_fchdir 81                 // Change working directory (using file descriptor)
#define __NR_rename 82                 // Rename a file or directory
#define __NR_mkdir 83                  // Create a directory
#define __NR_rmdir 84                  // Remove a directory
#define __NR_creat 85                  // Create a new file or rewrite an existing one
#define __NR_link 86                   // Create a new link (hard link) to an existing file
#define __NR_unlink 87                 // Remove a file
#define __NR_symlink 88                // Create a symbolic link
#define __NR_readlink 89               // Read the value of a symbolic link
#define __NR_chmod 90                  // Change permissions of a file
#define __NR_fchmod 91                 // Change permissions of a file (using file descriptor)
#define __NR_chown 92                  // Change ownership of a file
#define __NR_fchown 93                 // Change ownership of a file (using file descriptor)
#define __NR_lchown 94                 // Change ownership of a symlink
#define __NR_umask 95                  // Set file creation mode mask
#define __NR_gettimeofday 96           // Get the current time
#define __NR_getrlimit 97              // Get resource limits
#define __NR_getrusage 98              // Get resource usage
#define __NR_sysinfo 99                // Return system information
#define __NR_times 100                 // Get process times
#define __NR_ptrace 101                // Process trace
#define __NR_getuid 102                // Get user identity
#define __NR_syslog 103                // Read and/or clear the kernel message ring buffer
#define __NR_getgid 104                // Get group identity
#define __NR_setuid 105                // Set user identity
#define __NR_setgid 106                // Set group identity
#define __NR_geteuid 107               // Get effective user identity
#define __NR_getegid 108               // Get effective group identity
#define __NR_setpgid 109               // Set process group ID
#define __NR_getppid 110               // Get parent process ID
#define __NR_getpgrp 111               // Get process group ID
#define __NR_setsid 112                // Create session and set process group ID
#define __NR_setreuid 113              // Set real and effective user ID
#define __NR_setregid 114              // Set real and effective group ID
#define __NR_getgroups 115             // Get list of supplementary group IDs
#define __NR_setgroups 116             // Set list of supplementary group IDs
#define __NR_setresuid 117             // Set real, effective, and saved user ID
#define __NR_getresuid 118             // Get real, effective, and saved user ID
#define __NR_setresgid 119             // Set real, effective, and saved group ID
#define __NR_getresgid 120             // Get real, effective, and saved group ID
#define __NR_getpgid 121               // Get process group ID for a process
#define __NR_setfsuid 122              // Set user ID used for filesystem checks
#define __NR_setfsgid 123              // Set group ID used for filesystem checks
#define __NR_getsid 124                // Get session ID
#define __NR_capget 125                // Get capabilities of a process
#define __NR_capset 126                // Set capabilities of a process
#define __NR_rt_sigpending 127         // Examine pending signals
#define __NR_rt_sigtimedwait 128       // Wait for a signal
#define __NR_rt_sigqueueinfo 129       // Queue a signal and data
#define __NR_rt_sigsuspend 130         // Replace the signal mask for a thread and suspend execution
#define __NR_sigaltstack 131           // Set and/or get signal stack context
#define __NR_utime 132                 // Change access and modification times of a file
#define __NR_mknod 133                 // Create a filesystem node
#define __NR_uselib 134                // Load a shared library (obsolete in most systems)
#define __NR_personality 135           // Set/get a process's execution domain
#define __NR_ustat 136                 // Get filesystem statistics (deprecated)
#define __NR_statfs 137                // Get filesystem statistics
#define __NR_fstatfs 138               // Get filesystem statistics, using file descriptor
#define __NR_sysfs 139                 // Interface to the kernel's sysfs filesystem
#define __NR_getpriority 140           // Get program scheduling priority
#define __NR_setpriority 141           // Set program scheduling priority
#define __NR_sched_setparam 142        // Set scheduling parameters for a process
#define __NR_sched_getparam 143        // Get scheduling parameters for a process
#define __NR_sched_setscheduler 144    // Set scheduling policy and parameters for a process
#define __NR_sched_getscheduler 145    // Get scheduling policy for a process
#define __NR_sched_get_priority_max 146// Get maximum priority value for a policy
#define __NR_sched_get_priority_min 147// Get minimum priority value for a policy
#define __NR_sched_rr_get_interval 148 // Get the round-robin time quantum for a process
#define __NR_mlock 149                 // Lock a section of a process's virtual memory into RAM
#define __NR_munlock 150               // Unlock a section of a process's virtual memory
#define __NR_mlockall 151              // Lock all of a process's virtual memory into RAM
#define __NR_munlockall 152            // Unlock all of a process's virtual memory
#define __NR_vhangup 153               // Hang up a virtual terminal
#define __NR_modify_ldt 154            // Modify local descriptor table (largely obsolete)
#define __NR_pivot_root 155            // Change the root filesystem (used during system startup)
#define __NR__sysctl 156               // Interface for passing system information (obsolete)
#define __NR_prctl 157                 // Operations on a process (set/get options)
#define __NR_arch_prctl 158            // Set architecture-specific process state
#define __NR_adjtimex 159              // Tune or set the kernel's clock
#define __NR_setrlimit 160             // Set resource limits
#define __NR_chroot 161                // Change root directory
#define __NR_sync 162                  // Flush filesystem buffers
#define __NR_acct 163                  // Turn process accounting on or off
#define __NR_settimeofday 164          // Set the system clock
#define __NR_mount 165                 // Mount a filesystem
#define __NR_umount2 166               // Unmount a filesystem
#define __NR_swapon 167                // Enable a swap area
#define __NR_swapoff 168               // Disable a swap area
#define __NR_reboot 169                // Reboot or enable/disable Ctrl-Alt-Del
#define __NR_sethostname 170           // Set the system's hostname
#define __NR_setdomainname 171         // Set the system's NIS/YP domain name
#define __NR_iopl 172                  // Change the I/O privilege level (requires root)
#define __NR_ioperm 173                // Set port input/output permissions (requires root)
#define __NR_create_module 174         // Create a loadable kernel module (obsolete)
#define __NR_init_module 175           // Load a kernel module
#define __NR_delete_module 176         // Remove a kernel module
#define __NR_get_kernel_syms 177       // Get kernel symbol table (obsolete)
#define __NR_query_module 178          // Query information about modules (obsolete)
#define __NR_quotactl 179              // Manipulate disk quotas
#define __NR_nfsservctl 180            // NFS server control (obsolete)
#define __NR_getpmsg 181               // Receive a POSIX message (obsolete)
#define __NR_putpmsg 182               // Send a POSIX message (obsolete)
#define __NR_afs_syscall 183           // AFS system call (obsolete)
#define __NR_tuxcall 184               // Reserved for Tuxedo (never implemented)
#define __NR_security 185              // Reserved for security modules
#define __NR_gettid 186                // Get thread ID
#define __NR_readahead 187             // Preload file data into cache
#define __NR_setxattr 188              // Set an extended attribute value
#define __NR_lsetxattr 189             // Set an extended attribute value, symlink not followed
#define __NR_fsetxattr 190             // Set an extended attribute value, using file descriptor
#define __NR_getxattr 191              // Get an extended attribute value
#define __NR_lgetxattr 192             // Get an extended attribute value, symlink not followed
#define __NR_fgetxattr 193             // Get an extended attribute value, using file descriptor
#define __NR_listxattr 194             // List the extended attribute names
#define __NR_llistxattr 195            // List the extended attribute names, symlink not followed
#define __NR_flistxattr 196            // List the extended attribute names, using file descriptor
#define __NR_removexattr 197           // Remove an extended attribute
#define __NR_lremovexattr 198          // Remove an extended attribute, symlink not followed
#define __NR_fremovexattr 199          // Remove an extended attribute, using file descriptor
#define __NR_tkill 200                 // Send a signal to a thread
#define __NR_time 201                 // Get system time
#define __NR_futex 202                // Fast userspace mutex operations
#define __NR_sched_setaffinity 203    // Set a thread's CPU affinity mask
#define __NR_sched_getaffinity 204    // Get a thread's CPU affinity mask
#define __NR_set_thread_area 205      // Set a thread's TLS (Thread Local Storage) area
#define __NR_io_setup 206             // Setup asynchronous I/O context
#define __NR_io_destroy 207           // Destroy an asynchronous I/O context
#define __NR_io_getevents 208         // Retrieve I/O events from an asynchronous I/O context
#define __NR_io_submit 209            // Submit I/O requests to an asynchronous I/O context
#define __NR_io_cancel 210            // Cancel an asynchronous I/O operation
#define __NR_get_thread_area 211      // Retrieve a thread's TLS (Thread Local Storage) area
#define __NR_lookup_dcookie 212       // Translate a dentry cookie into a file name
#define __NR_epoll_create 213         // Create a new epoll file descriptor
#define __NR_epoll_ctl_old 214        // Deprecated, use epoll_ctl instead
#define __NR_epoll_wait_old 215       // Deprecated, use epoll_wait instead
#define __NR_remap_file_pages 216     // Remap arbitrary pages of a process's memory (deprecated)
#define __NR_getdents64 217           // Read directory entries (with 64-bit compatibility)
#define __NR_set_tid_address 218      // Set pointer to thread ID
#define __NR_restart_syscall 219      // Restart a system call after interruption by a signal
#define __NR_semtimedop 220           // Perform operations on a semaphore with a timeout
#define __NR_fadvise64 221            // Predeclare an access pattern for file data
#define __NR_timer_create 222         // Create a POSIX per-process timer
#define __NR_timer_settime 223        // Set a POSIX per-process timer's time
#define __NR_timer_gettime 224        // Get a POSIX per-process timer's time
#define __NR_timer_getoverrun 225     // Get the overrun count of a POSIX per-process timer
#define __NR_timer_delete 226         // Delete a POSIX per-process timer
#define __NR_clock_settime 227        // Set a clock's time
#define __NR_clock_gettime 228        // Get a clock's time
#define __NR_clock_getres 229         // Get a clock's resolution
#define __NR_clock_nanosleep 230      // High-resolution sleep with a specified clock
#define __NR_exit_group 231           // Exit all threads in a process
#define __NR_epoll_wait 232           // Wait for an I/O event on an epoll file descriptor
#define __NR_epoll_ctl 233            // Control interface for an epoll file descriptor
#define __NR_tgkill 234               // Send a signal to a specific thread
#define __NR_utimes 235               // Change access and modification times of a file with microsecond precision
#define __NR_vserver 236              // Virtual server operation (unused)
#define __NR_mbind 237                // Bind a process to a subset of the system's memory nodes
#define __NR_set_mempolicy 238        // Set memory allocation policy for a process
#define __NR_get_mempolicy 239        // Retrieve memory policy for a process
#define __NR_mq_open 240              // Open a message queue
#define __NR_mq_unlink 241            // Remove a message queue
#define __NR_mq_timedsend 242         // Send a message to a message queue with a timeout
#define __NR_mq_timedreceive 243      // Receive a message from a message queue with a timeout
#define __NR_mq_notify 244            // Register for notification when a message is available in a queue
#define __NR_mq_getsetattr 245        // Get and set attributes of a message queue
#define __NR_kexec_load 246           // Load a new kernel for later execution
#define __NR_waitid 247               // Wait for state changes in a child process
#define __NR_add_key 248              // Add a key to the kernel's key management facility
#define __NR_request_key 249          // Request a key from the kernel's key management facility
#define __NR_keyctl 250               // Manipulate the kernel's key management facility
#define __NR_ioprio_set 251           // Set I/O scheduling class and priority of a process
#define __NR_ioprio_get 252           // Get I/O scheduling class and priority of a process
#define __NR_inotify_init 253         // Initialize an inotify instance
#define __NR_inotify_add_watch 254    // Add a watch to an inotify instance
#define __NR_inotify_rm_watch 255     // Remove a watch from an inotify instance
#define __NR_migrate_pages 256        // Move all pages in a process to another set of nodes
#define __NR_openat 257               // Open a file relative to a directory file descriptor
#define __NR_mkdirat 258              // Create a directory relative to a directory file descriptor
#define __NR_mknodat 259              // Create a filesystem node relative to a directory file descriptor
#define __NR_fchownat 260             // Change ownership of a file relative to a directory file descriptor
#define __NR_futimesat 261            // Change timestamps of a file relative to a directory file descriptor
#define __NR_newfstatat 262           // Get file status relative to a directory file descriptor
#define __NR_unlinkat 263             // Remove a file or directory relative to a directory file descriptor
#define __NR_renameat 264             // Move a file within a filesystem, relative to directory file descriptors
#define __NR_linkat 265               // Create a link to a file relative to directory file descriptors
#define __NR_symlinkat 266            // Create a symbolic link relative to a directory file descriptor
#define __NR_readlinkat 267           // Read the target of a symbolic link relative to a directory file descriptor
#define __NR_fchmodat 268             // Change permissions of a file relative to a directory file descriptor
#define __NR_faccessat 269            // Check user's permissions for a file relative to a directory file descriptor
#define __NR_pselect6 270             // Synchronous I/O multiplexing with a timeout and signal mask
#define __NR_ppoll 271                // Wait for multiple file descriptors' events with a timeout and signal mask
#define __NR_unshare 272              // Unshare shared system resources
#define __NR_set_robust_list 273      // Set the head of the robust futex list
#define __NR_get_robust_list 274      // Get the head of the robust futex list
#define __NR_splice 275               // Move data between two file descriptors without copying to user space
#define __NR_tee 276                  // Duplicate data from one pipe to another without consuming it
#define __NR_sync_file_range 277      // Sync a file segment with disk
#define __NR_vmsplice 278             // Splice user pages into a pipe
#define __NR_move_pages 279           // Move individual pages of a process to another node
#define __NR_utimensat 280            // Update timestamps of a file relative to a directory file descriptor with nanosecond precision
#define __NR_epoll_pwait 281          // Wait for I/O events on an epoll file descriptor with a signal mask
#define __NR_signalfd 282             // Create a file descriptor for accepting signals
#define __NR_timerfd_create 283       // Create a file descriptor for timer notifications
#define __NR_eventfd 284              // Create a file descriptor for event notifications
#define __NR_fallocate 285            // Manipulate file space
#define __NR_timerfd_settime 286      // Set time for timerfd file descriptor
#define __NR_timerfd_gettime 287      // Get time for timerfd file descriptor
#define __NR_accept4 288              // Accept a connection on a socket with flags
#define __NR_signalfd4 289            // Create a file descriptor for accepting signals with flags
#define __NR_eventfd2 290             // Create a file descriptor for event notifications with flags
#define __NR_epoll_create1 291        // Create a new epoll file descriptor with flags
#define __NR_dup3 292                 // Duplicate a file descriptor with flags
#define __NR_pipe2 293                // Create a pipe with flags
#define __NR_inotify_init1 294        // Initialize an inotify instance with flags
#define __NR_preadv 295               // Read data into multiple buffers at a specific offset
#define __NR_pwritev 296              // Write data from multiple buffers at a specific offset
#define __NR_rt_tgsigqueueinfo 297    // Send a signal and data to a specific thread
#define __NR_perf_event_open 298      // Open a performance monitoring event
#define __NR_recvmmsg 299             // Receive multiple messages on a socket
#define __NR_fanotify_init 300        // Initialize a fanotify instance
#define __NR_fanotify_mark 301        // Mark filesystem objects for monitoring by fanotify
#define __NR_prlimit64 302            // Set/get resource limits
#define __NR_name_to_handle_at 303    // Obtain a handle for a pathname
#define __NR_open_by_handle_at 304    // Open a file by a handle
#define __NR_clock_adjtime 305        // Adjust a clock's time
#define __NR_syncfs 306               // Synchronize the filesystem containing the given file
#define __NR_sendmmsg 307             // Send multiple messages on a socket
#define __NR_setns 308                // Reassociate thread with a namespace
#define __NR_getcpu 309               // Determine CPU and NUMA node on which the calling thread is running
#define __NR_process_vm_readv 310     // Read a remote process's virtual memory
#define __NR_process_vm_writev 311    // Write to a remote process's virtual memory
#define __NR_kcmp 312                 // Compare two processes to determine if they share kernel resources
#define __NR_finit_module 313         // Load a kernel module from a file descriptor
#define __NR_sched_setattr 314        // Set scheduling attributes for a process
#define __NR_sched_getattr 315        // Get scheduling attributes for a process
#define __NR_renameat2 316            // Rename a file, with additional flags
#define __NR_seccomp 317              // Operate on Secure Computing (seccomp) filter
#define __NR_getrandom 318            // Obtain random bytes
#define __NR_memfd_create 319         // Create an anonymous file
#define __NR_kexec_file_load 320      // Load a new kernel for kexec
#define __NR_bpf 321                  // Perform operations on eBPF maps and programs
#define __NR_execveat 322             // Execute a program relative to a directory file descriptor
#define __NR_userfaultfd 323          // Create a file descriptor for handling page faults in user space
#define __NR_membarrier 324           // Issue a memory barrier on a set of threads
#define __NR_mlock2 325               // Lock memory (including zero pages)
#define __NR_copy_file_range 326      // Copy a range of data from one file to another
#define __NR_preadv2 327              // Read data into multiple buffers at a specific offset, with flags
#define __NR_pwritev2 328             // Write data from multiple buffers at a specific offset, with flags
#define __NR_pkey_mprotect 329        // Set protection on a region of memory (with keys)
#define __NR_pkey_alloc 330           // Allocate a protection key
#define __NR_pkey_free 331            // Free a protection key
#define __NR_statx 332                // Get detailed file status (with extended attributes)


#endif	/* __SYSCALL_LIST_X86_64__ */
