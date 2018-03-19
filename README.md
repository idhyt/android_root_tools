# Extract kernel, kallsyms form boot.img

## Usage

linux with python2

put `boot.img` to root dir, run `python boot2kernel_kallsyms.py`

```

python boot2kernel_kallsyms.py 

================================================
=      boot 2 kernel&&kallsyms by idhyt        =
=        env: GNU/Linux with python2           =
================================================

Parsing boot image: [boot.img]
KERNEL [11821409]
RAMDISK [6360810]
CMDLINE [loglevel=4 initcall_debug=n page_tracker=on androidboot.selinux=enforcing]
CHECKSUM [fffffff87308ffffffa117ffffffcf30266264ffffffcb370d52ffffffb1ffffffffffffff8bffffff8ffffffffe0d]
KERNEL_FMT [gzip]
RAMDISK_FMT [gzip]

================================================
=      kallsymsprint by idhyt3r@gmail.com      =
=            support arm32 && arm64            =
================================================

[+] arm64: Linux version 4.1.18-gfd75bbb (android@localhost) (gcc version 4.9 20150123 (prerelease) (GCC) ) #1 SMP PREEMPT Thu Mar 2 17:29:20 CST 2017

[+] success to get kernel&&kallsyms!


```