#!/bin/bash
set -v on

python bootimg.py --unpack-bootimg

rm ramdisk.gz
rm bootimg.json
rm unknown
rm kernel

gzip -d -f kernel.gz

adb push kernel data/local/tmp
adb push kallsymsprint_arm64 data/local/tmp

adb shell < adb-cmd

adb pull data/local/tmp/kallsyms kallsyms

# rm kernel
