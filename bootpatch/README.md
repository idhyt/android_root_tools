## boot.img patch

### Todo

- [x] init.rc patch
- [x] dm-verify bypass
- [x] selinux bypass
- [x] bootpatch tools to patch fstab
- [x] bootpatch tools to patch sepolicy

### Test

- [x] nexus5
- [x] kiw-tl00(5x)
- [x] vtr-al00(p10)

## usage

will get new-boot.img and flash it!

```
$ ./bootpatch.sh boot.img sepolicy
11674 KB/s (291440 bytes in 0.024s)
11902 KB/s (18190336 bytes in 1.492s)
19 KB/s (441 bytes in 0.022s)
14 KB/s (241 bytes in 0.015s)
3 KB/s (55 bytes in 0.015s)
MagiskBoot v16.0(1600) (by topjohnwu) - Boot Image Modification Tool
Parsing boot image: [boot.img]
KERNEL [11821409]
RAMDISK [6360810]
SECOND [0]
EXTRA [0]
PAGESIZE [2048]
OS_VERSION [7.0.0]
PATCH_LEVEL [2017-02]
NAME []
CMDLINE [loglevel=4 initcall_debug=n page_tracker=on androidboot.selinux=enforcing]
CHECKSUM [f87308a117cf30266264cb370d52b1ff8b8ffe0d]
KERNEL_FMT [gzip]
RAMDISK_FMT [gzip]
MagiskBoot v16.0(1600) (by topjohnwu) - Boot Image Modification Tool
Loading cpio: [ramdisk.cpio]
Add entry [init.test.rc] (0750)
Dump cpio: [ramdisk.cpio]
MagiskBoot v16.0(1600) (by topjohnwu) - Boot Image Modification Tool
Loading cpio: [ramdisk.cpio]
Add entry [test_script] (0755)
Dump cpio: [ramdisk.cpio]
MagiskBoot v16.0(1600) (by topjohnwu) - Boot Image Modification Tool
Loading cpio: [ramdisk.cpio]
Extracting [init.rc] to [patch_init.rc]
MagiskBoot v16.0(1600) (by topjohnwu) - Boot Image Modification Tool
Loading cpio: [ramdisk.cpio]
Add entry [init.rc] (0750)
Dump cpio: [ramdisk.cpio]
MagiskBoot v16.0(1600) (by topjohnwu) - Boot Image Modification Tool
Parsing boot image: [boot.img]
KERNEL [11821409]
RAMDISK [6360810]
SECOND [0]
EXTRA [0]
PAGESIZE [2048]
OS_VERSION [7.0.0]
PATCH_LEVEL [2017-02]
NAME []
CMDLINE [loglevel=4 initcall_debug=n page_tracker=on androidboot.selinux=enforcing]
CHECKSUM [f87308a117cf30266264cb370d52b1ff8b8ffe0d]
KERNEL_FMT [gzip]
RAMDISK_FMT [gzip]
Repack to boot image: [new-boot.img]
KERNEL [11831717]
RAMDISK [6345636]
SECOND [0]
EXTRA [0]
PAGESIZE [2048]
OS_VERSION [7.0.0]
PATCH_LEVEL [2017-02]
NAME []
CMDLINE [loglevel=4 initcall_debug=n page_tracker=on androidboot.selinux=enforcing]
CHECKSUM [f19aa374302a26789c5a44ad8e0264e723a9e3d4]
14609 KB/s (18182144 bytes in 1.215s)

```

## Record

### sepolicy

extract from root devices

supersu: u:r:init:s0

magisk: u:r:su:s0

### verity_key

delete it

### fstab.xxx

delete `verify`

### init.rc

import init.test.rc

### init.test.rc

to run test_script.sh

