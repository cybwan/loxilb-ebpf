/* Common function that with time should be moved to libbpf */

#include <errno.h>
#include <string.h>

#include <bpf/bpf.h>
#include <bpf/libbpf.h>

#include "common_libbpf.h"

/* From: include/linux/err.h */
#define MAX_ERRNO       4095
#define IS_ERR_VALUE(x) ((x) >= (unsigned long)-MAX_ERRNO)
static inline bool IS_ERR_OR_NULL(const void *ptr)
{
        return (!ptr) || IS_ERR_VALUE((unsigned long)ptr);
}

#define pr_warning printf
