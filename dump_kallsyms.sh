#!/bin/bash
# set -v

python bootimg.py --unpack-bootimg

rm ramdisk.gz
rm bootimg.json
rm unknown
rm dt.img

if [ -f "kernel.gz" ]; then 
    gzip -d -f kernel.gz
fi 

if [ ! -f "kernel" ]; then 
    echo "can not find kernel"
    exit
fi 

adb push kernel /data/local/tmp

adb push kallsymsprint_arm64 /data/local/tmp/kallsymsprint

adb shell chmod 777 /data/local/tmp/kallsymsprint

adb shell /data/local/tmp/kallsymsprint /data/local/tmp/kernel > kallsyms

# adb pull data/local/tmp/kallsyms kallsyms

# rm kernel

read -p "any key to run."