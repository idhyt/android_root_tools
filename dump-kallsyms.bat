@echo off

python bootimg.py --unpack-bootimg

if exist ramdisk.gz del ramdisk.gz
if exist ramdisk del ramdisk
if exist bootimg.json del bootimg.json
if exist unknown del unknown
if exist dt.img del dt.img

if exist kernel del kernel

7z.exe x -tgzip kernel.gz -y

if exist kernel.gz del kernel.gz

adb push kernel data/local/tmp
adb push kallsymsprint_arm32 data/local/tmp/kallsymsprint
rem adb push kallsymsprint_arm64 data/local/tmp/kallsymsprint

adb shell < adb-cmd

adb pull data/local/tmp/kallsyms kallsyms

rem del kernel

pause