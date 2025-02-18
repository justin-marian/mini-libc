// SPDX-License-Identifier: BSD-3-Clause

#include <../include/time.h>
#include <../include/internal/internal.h>
#include <../include/internal/types.h>

unsigned int sleep(unsigned int seconds) {
    // Create timespec structure for the specified time interval
    const struct timespec time = {seconds, 0};
    // Initialize timespec structure to hold remaining time
    struct timespec remTime = {0, 0};

    // Check if nanosleep operation was successful
    if (nanosleep(&time, &remTime) == 0) {
        return 0; // SUCCESS
    }

    // Return the remaining time if sleep was interrupted
    return remTime.tv_sec;
}
