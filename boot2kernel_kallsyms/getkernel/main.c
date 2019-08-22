#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/types.h>
#include "utils.h"
#include "bootimg.h"
#include "compress.h"

/********************
  Patch Boot Image
*********************/

int main(int argc, char *argv[]) {
	char clean = 1;
	if (argc < 2) {
	  	fprintf(stderr, "usage: %s boot.img\n", argv[0]);
		return -1;
	}

	if (argc == 3)
		clean = 0;

	unpack(argv[1], clean);

	if(clean) {
		remove("ramdisk.cpio");
		remove("dtb");
	}

	return 0;
}
