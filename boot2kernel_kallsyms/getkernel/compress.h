#ifndef _COMPRESS_H_
#define _COMPRESS_H_

#include <sys/types.h>
#include "format.h"

// Compressions
size_t gzip(int mode, int fd, const void *buf, size_t size);
size_t lzma(int mode, int fd, const void *buf, size_t size);
size_t lz4(int mode, int fd, const void *buf, size_t size);
size_t bzip2(int mode, int fd, const void *buf, size_t size);
size_t lz4_legacy(int mode, int fd, const void *buf, size_t size);
long long comp(format_t type, int to, const void *from, size_t size);
long long decomp(format_t type, int to, const void *from, size_t size);


#endif
