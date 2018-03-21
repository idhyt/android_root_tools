# Extract kernel, kallsyms form boot.img

## Usage

linux with python2

put `boot.img` to root dir, run `python boot2kernel_kallsyms.py [boot.img]`

```

$ python boot2kernel_kallsyms.py ../boot.img

================================================
=      boot 2 kernel&&kallsyms by idhyt        =
=        env: GNU/Linux with python2           =
================================================

[!] ./getkernel ../boot.img

Parsing boot image: [../boot.img]
KERNEL [21004822]
RAMDISK [9857747]
SECOND [0]
EXTRA [0]
PAGESIZE [4096]
OS_VERSION [8.1.0]
PATCH_LEVEL [2018-02]
NAME []
CMDLINE [console=ttyHSL0,115200,n8 androidboot.console=ttyHSL0 androidboot.hardware=marlin user_debug=31 ehci-hcd.park=3 lpm_levels.sleep_disabled=1 cma=32M@0-0xffffffff loop.max_part=7 buildvariant=user veritykeyid=id:34e81e2c57675086f628c1b2e4b4ade8e0a1941d]
CHECKSUM [ffffffeaffffffae281b2d4c0a570e5a3b3c5410ffffffd561fffffff74dffffffd564]
DTB [7810654]
KERNEL_FMT [lz4]
RAMDISK_FMT [gzip]

================================================
=      kallsymsprint by idhyt3r@gmail.com      =
=            support arm32 && arm64            =
================================================

[+] arm64: Linux version 3.18.70-g674349727b4e (android-build@wpef28.hot.corp.google.com) (gcc version 4.9.x-google 20140827 (prerelease) (GCC) ) #1 SMP PREEMPT Wed Dec 6 22:50:21 UTC 2017

[+] success to get kernel&&kallsyms!


```