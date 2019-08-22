/* xwrap.c - wrappers around existing library functions.
 *
 * Functions with the x prefix are wrappers that either succeed or log the
 * error message. They usually have the same arguments and return value
 * as the function they wrap.
 *
 */

#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>
#include <errno.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mount.h>
#include <sys/mman.h>
#include <sys/sendfile.h>
#include <string.h>

#include "utils.h"

#ifndef MS_SILENT
#define MS_SILENT 32768
#endif

FILE *xfopen(const char *pathname, const char *mode) {
	FILE *fp = fopen(pathname, mode);
	if (fp == NULL) {
		fprintf(stderr, "fopen: %s", pathname);
	}
	return fp;
}

FILE *xfdopen(int fd, const char *mode) {
	FILE *fp = fdopen(fd, mode);
	if (fp == NULL) {
		fprintf(stderr, "fopen");
	}
	return fp;
}

int xopen2(const char *pathname, int flags) {
	int fd = open(pathname, flags);
	if (fd < 0) {
		fprintf(stderr, "open: %s", pathname);
	}
	return fd;
}

int xopen3(const char *pathname, int flags, mode_t mode) {
	int fd = open(pathname, flags, mode);
	if (fd < 0) {
		fprintf(stderr, "open: %s", pathname);
	}
	return fd;
}

int xopenat(int dirfd, const char *pathname, int flags) {
	int fd = openat(dirfd, pathname, flags);
	if (fd < 0) {
		fprintf(stderr, "openat: %s", pathname);
	}
	return fd;
}

ssize_t xwrite(int fd, const void *buf, size_t count) {
	int ret = write(fd, buf, count);
	if (count != ret) {
		fprintf(stderr, "write");
	}
	return ret;
}

// Read error other than EOF
ssize_t xread(int fd, void *buf, size_t count) {
	int ret = read(fd, buf, count);
	if (ret < 0) {
		fprintf(stderr, "read");
	}
	return ret;
}

// Read exact same size as count
ssize_t xxread(int fd, void *buf, size_t count) {
	int ret = read(fd, buf, count);
	if (count != ret) {
		fprintf(stderr, "read");
	}
	return ret;
}

int xpipe2(int pipefd[2], int flags) {
	int ret = pipe2(pipefd, flags);
	if (ret == -1) {
		fprintf(stderr, "pipe2");
	}
	return ret;
}

int xsetns(int fd, int nstype) {
	int ret = setns(fd, nstype);
	if (ret == -1) {
		fprintf(stderr, "setns");
	}
	return ret;
}

DIR *xopendir(const char *name) {
	DIR *d = opendir(name);
	if (d == NULL) {
		fprintf(stderr, "opendir: %s", name);
	}
	return d;
}

DIR *xfdopendir(int fd) {
	DIR *d = fdopendir(fd);
	if (d == NULL) {
		fprintf(stderr, "fdopendir");
	}
	return d;
}

struct dirent *xreaddir(DIR *dirp) {
	errno = 0;
	struct dirent *e = readdir(dirp);
	if (errno && e == NULL) {
		fprintf(stderr, "readdir");
	}
	return e;
}

pid_t xsetsid() {
	pid_t pid = setsid();
	if (pid == -1) {
		fprintf(stderr, "setsid");
	}
	return pid;
}

int xsocket(int domain, int type, int protocol) {
	int fd = socket(domain, type, protocol);
	if (fd == -1) {
		fprintf(stderr, "socket");
	}
	return fd;
}

int xbind(int sockfd, const struct sockaddr *addr, socklen_t addrlen) {
	int ret = bind(sockfd, addr, addrlen);
	if (ret == -1) {
		fprintf(stderr, "bind");
	}
	return ret;
}

int xlisten(int sockfd, int backlog) {
	int ret = listen(sockfd, backlog);
	if (ret == -1) {
		fprintf(stderr, "listen");
	}
	return ret;
}

int xaccept4(int sockfd, struct sockaddr *addr, socklen_t *addrlen, int flags) {
	int fd = accept4(sockfd, addr, addrlen, flags);
	if (fd == -1) {
		fprintf(stderr, "accept");
	}
	return fd;
}

void *xmalloc(size_t size) {
	void *p = malloc(size);
	if (p == NULL) {
		fprintf(stderr, "malloc");
	}
	return p;
}

void *xcalloc(size_t nmemb, size_t size) {
	void *p = calloc(nmemb, size);
	if (p == NULL) {
		fprintf(stderr, "calloc");
	}
	return p;
}

void *xrealloc(void *ptr, size_t size) {
	void *p = realloc(ptr, size);
	if (p == NULL) {
		fprintf(stderr, "realloc");
	}
	return p;
}

ssize_t xsendmsg(int sockfd, const struct msghdr *msg, int flags) {
	int sent = sendmsg(sockfd, msg, flags);
	if (sent == -1) {
		fprintf(stderr, "sendmsg");
	}
	return sent;
}

ssize_t xrecvmsg(int sockfd, struct msghdr *msg, int flags) {
	int rec = recvmsg(sockfd, msg, flags);
	if (rec == -1) {
		fprintf(stderr, "recvmsg");
	}
	return rec;
}

int xpthread_create(pthread_t *thread, const pthread_attr_t *attr,
                          void *(*start_routine) (void *), void *arg) {
	errno = pthread_create(thread, attr, start_routine, arg);
	if (errno) {
		fprintf(stderr, "pthread_create");
	}
	return errno;
}

int xstat(const char *pathname, struct stat *buf) {
	int ret = stat(pathname, buf);
	if (ret == -1) {
		fprintf(stderr, "stat %s", pathname);
	}
	return ret;
}

int xlstat(const char *pathname, struct stat *buf) {
	int ret = lstat(pathname, buf);
	if (ret == -1) {
		fprintf(stderr, "lstat %s", pathname);
	}
	return ret;
}

int xdup2(int oldfd, int newfd) {
	int ret = dup2(oldfd, newfd);
	if (ret == -1) {
		fprintf(stderr, "dup2");
	}
	return ret;
}

ssize_t xreadlink(const char *pathname, char *buf, size_t bufsiz) {
	ssize_t ret = readlink(pathname, buf, bufsiz);
	if (ret == -1) {
		fprintf(stderr, "readlink %s", pathname);
	} else {
		buf[ret] = '\0';
	}
	return ret;
}

ssize_t xreadlinkat(int dirfd, const char *pathname, char *buf, size_t bufsiz) {
	ssize_t ret = readlinkat(dirfd, pathname, buf, bufsiz);
	if (ret == -1) {
		fprintf(stderr, "readlinkat %s", pathname);
	} else {
		buf[ret] = '\0';
	}
	return ret;
}

int xsymlink(const char *target, const char *linkpath) {
	int ret = symlink(target, linkpath);
	if (ret == -1) {
		fprintf(stderr, "symlink %s->%s", target, linkpath);
	}
	return ret;
}

int xmount(const char *source, const char *target,
	const char *filesystemtype, unsigned long mountflags,
	const void *data) {
	int ret = mount(source, target, filesystemtype, MS_SILENT | mountflags, data);
	if (ret == -1) {
		fprintf(stderr, "mount %s->%s", source, target);
	}
	return ret;
}

int xumount(const char *target) {
	int ret = umount(target);
	if (ret == -1) {
		fprintf(stderr, "umount %s", target);
	}
	return ret;
}

int xumount2(const char *target, int flags) {
	int ret = umount2(target, flags);
	if (ret == -1) {
		fprintf(stderr, "umount2 %s", target);
	}
	return ret;
}

int xrename(const char *oldpath, const char *newpath) {
	int ret = rename(oldpath, newpath);
	if (ret == -1) {
		fprintf(stderr, "rename %s->%s", oldpath, newpath);
	}
	return ret;
}

int xmkdir(const char *pathname, mode_t mode) {
	int ret = mkdir(pathname, mode);
	if (ret == -1 && errno != EEXIST) {
		fprintf(stderr, "mkdir %s %u", pathname, mode);
	}
	return ret;
}

int xmkdirs(const char *pathname, mode_t mode) {
	int ret = mkdirs(pathname, mode);
	if (ret == -1) {
		fprintf(stderr, "mkdirs %s", pathname);
	}
	return ret;
}

int xmkdirat(int dirfd, const char *pathname, mode_t mode) {
	int ret = mkdirat(dirfd, pathname, mode);
	if (ret == -1 && errno != EEXIST) {
		fprintf(stderr, "mkdirat %s %u", pathname, mode);
	}
	return ret;
}

void *xmmap(void *addr, size_t length, int prot, int flags,
	int fd, off_t offset) {
	void *ret = mmap(addr, length, prot, flags, fd, offset);
	if (ret == MAP_FAILED) {
		fprintf(stderr, "mmap");
	}
	return ret;
}

ssize_t xsendfile(int out_fd, int in_fd, off_t *offset, size_t count) {
	ssize_t ret = sendfile(out_fd, in_fd, offset, count);
	if (count != ret) {
		fprintf(stderr, "sendfile");
	}
	return ret;
}

pid_t xfork() {
	int ret = fork();
	if (ret == -1) {
		fprintf(stderr, "fork");
	}
	return ret;
}

int mkdirs(const char *pathname, mode_t mode) {
	char *path = strdup(pathname), *p;
	errno = 0;
	for (p = path + 1; *p; ++p) {
		if (*p == '/') {
			*p = '\0';
			if (mkdir(path, mode) == -1) {
				if (errno != EEXIST)
					return -1;
			}
			*p = '/';
		}
	}
	if (mkdir(path, mode) == -1) {
		if (errno != EEXIST)
			return -1;
	}
	free(path);
	return 0;
}


static int _mmap(int rw, const char *filename, void **buf, size_t *size) {
	struct stat st;
	int fd = xopen(filename, rw ? O_RDWR : O_RDONLY);
	fstat(fd, &st);
	if (S_ISBLK(st.st_mode))
		ioctl(fd, BLKGETSIZE64, size);
	else
		*size = st.st_size;
	*buf = *size > 0 ? xmmap(NULL, *size, PROT_READ | (rw ? PROT_WRITE : 0), MAP_SHARED, fd, 0) : NULL;
	close(fd);
	return S_ISBLK(st.st_mode);
}

int mmap_ro(const char *filename, void **buf, size_t *size) {
	return _mmap(0, filename, buf, size);
}

int mmap_rw(const char *filename, void **buf, size_t *size) {
	return _mmap(1, filename, buf, size);
}

void fd_full_read(int fd, void **buf, size_t *size) {
	*size = lseek(fd, 0, SEEK_END);
	lseek(fd, 0, SEEK_SET);
	*buf = xmalloc(*size + 1);
	xxread(fd, *buf, *size);
	((char *) *buf)[*size] = '\0';
}

void full_read(const char *filename, void **buf, size_t *size) {
	int fd = xopen(filename, O_RDONLY);
	if (fd < 0) {
		*buf = NULL;
		*size = 0;
		return;
	}
	fd_full_read(fd, buf, size);
	close(fd);
}

void full_read_at(int dirfd, const char *filename, void **buf, size_t *size) {
	int fd = xopenat(dirfd, filename, O_RDONLY);
	if (fd < 0) {
		*buf = NULL;
		*size = 0;
		return;
	}
	fd_full_read(fd, buf, size);
	close(fd);
}

void stream_full_read(int fd, void **buf, size_t *size) {
	size_t cap = 1 << 20;
	uint8_t tmp[1 << 20];
	*buf = xmalloc(cap);
	ssize_t read;
	*size = 0;
	while (1) {
		read = xread(fd, tmp, sizeof(tmp));
		if (read <= 0)
			break;
		if (*size + read > cap) {
			cap *= 2;
			*buf = realloc(*buf, cap);
		}
		memcpy(*buf + *size, tmp, read);
		*size += read;
	}
}

void write_zero(int fd, size_t size) {
	size_t pos = lseek(fd, 0, SEEK_CUR);
	ftruncate(fd, pos + size);
	lseek(fd, pos + size, SEEK_SET);
}
