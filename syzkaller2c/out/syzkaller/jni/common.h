#ifndef __COMMEN_H
#define __COMMEN_H

#include <stdlib.h>
#include <stdio.h>

#include <fcntl.h>
#include <string.h>
#include <stdint.h>

// #include <sys/ioctl.h>
#include <sys/mman.h>
#include <sys/select.h>
#include <sys/socket.h>

#include <errno.h>

#include <pthread.h>
#include <netinet/ip.h>

#include <sys/uio.h>
#include <sys/types.h>
#include <sys/stat.h>

#include <unistd.h>

// #include <sys/syscall.h>

#include <sys/prctl.h>

#include <sys/utsname.h>

#include <time.h>
#include <linux/if.h>
#include <linux/if_ether.h>
/*
#include <sys/resource.h>
#include <sys/wait.h>
#include <sys/system_properties.h>

#include <linux/futex.h>

#include <arpa/inet.h>
*/
// #include "ioctl.h"

#define ARRAY_SIZE(a)       (sizeof (a) / sizeof (*(a)))

#define _DEBUG

#ifdef _DEBUG
    #define LOG(...) {printf("%s @ function %s line %d with log:", __FILE__, __FUNCTION__, __LINE__);printf(__VA_ARGS__);}
#else
    #define LOG(...)
#endif

#endif
