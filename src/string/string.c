#include <../include/string.h>

char *strcpy(char *destination, const char *source) {
    char *start = destination;

	// Copy characters until null terminator
    while ((*destination++ = *source++) != '\0');

    return start;
}

char *strncpy(char *destination, const char *source, size_t len) {
    char *start = destination;

    // Copy characters until len or null terminator is reached
    for (size_t i = 0; i < len; ++i) {
        if (*source != '\0') {
            *destination++ = *source++;
        } else {
            *destination++ = '\0';
        }
    }

    return start;
}

char *strcat(char *destination, const char *source) {
    char *start = destination;

    // Move destination pointer to the end of string
    while (*destination) ++destination;
    // Copy characters from source to destination
    while ((*destination++ = *source++));

    return start;
}

char *strncat(char *destination, const char *source, size_t len) {
    char *start = destination;

    // Move destination pointer to the end of string
    while (*destination) ++destination;
    // Copy characters from source to destination until len or null terminator
    for (size_t i = 0; i < len && (*destination++ = *source++); ++i);

    *destination = '\0'; // Ensure null termination
    return start;
}

int strcmp(const char *str1, const char *str2) {
    while (*str1 && *str1 == *str2) ++str1, ++str2;
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int strncmp(const char *str1, const char *str2, size_t len) {
    for (size_t i = 0; i < len && *str1 && *str2; ++i, ++str1, ++str2) {
		// Return the difference in ASCII values
        if (*str1 != *str2)
            return *(unsigned char *)str1 - *(unsigned char *)str2; 
    }
    return 0; // Strings are equal
}

size_t strlen(const char *str) {
    const char *ptr = str;
    while (*ptr) ++ptr;
    return ptr - str;
}

char *strchr(const char *str, int c) {
    while (*str) {
		// Return pointer to the first occurrence of c
        if (*str == c)
            return (char *)str;
        ++str;
    }

    return NULL;
}

char *strrchr(const char *str, int c) {
    const char *last = NULL;
    while (*str) {
		// Update last occurrence of c
        if (*str == c) {
            last = str;
		}
        ++str;
    }

    return (char *)last;
}

char *strstr(const char *haystack, const char *needle) {
    while (*haystack) {
        const char *h = haystack, *n = needle;

		while (*h && *n && *h == *n) ++h, ++n; 	// Continue until characters match or needle ends
        if (!*n) return (char *)haystack; 		// Return pointer to the start of needle in haystack

		++haystack;
    }

    return NULL;
}

char *strrstr(const char *haystack, const char *needle) {
    const char *last = NULL;

    while (*haystack) {
        const char *h = haystack, *n = needle;

        while (*h && *n && *h == *n) ++h, ++n; // Continue until characters match or needle ends
        if (!*n) last = haystack; 			   // Update last occurrence of needle in haystack

        ++haystack;
    }

    return (char *)last;
}

void *memcpy(void *destination, const void *source, size_t num) {
    char *d = destination;
    const char *s = source;

	// Copy num bytes from source to destination
    while (num--) *d++ = *s++;

    return destination;
}

void *memmove(void *destination, const void *source, size_t num) {
    char *d = destination;
    const char *s = source;

    if (d < s) {
		// Copy num bytes from source to destination
        while (num--) *(d++) = *(s++); 
    } else {
        d += num, s += num;
		// Copy num bytes from source to destination
        while (num--) *(--d) = *(--s); 
    }

    return destination;
}

int memcmp(const void *ptr1, const void *ptr2, size_t num) {
    const unsigned char *p1 = ptr1, *p2 = ptr2;

	// Return the difference in values
    for (size_t i = 0; i < num; ++i) {
        if (p1[i] != p2[i]) {
            return p1[i] - p2[i];
		}
	}

	// Memory areas are equal
    return 0;
}

void *memset(void *source, int value, size_t num) {
    unsigned char *s = source;
    
	// Set num bytes in source to value
	while (num--) *s++ = (unsigned char)value;

    return source;
}
