@echo off

python bootimg.py --unpack-bootimg

if exist ramdisk.gz del ramdisk.gz
if exist ramdisk del ramdisk
if exist bootimg.json del bootimg.json
if exist unknown del unknown
if exist dt.img del dt.img

if exist kernel.gz 7z.exe x -tgzip kernel.gz -y

if exist kernel.gz del kernel.gz

if exist kernel (
    adb push kernel data/local/tmp
    ) else (
    echo "can not find kernel"
    pause
    exit)
rem adb push kallsymsprint_arm32 data/local/tmp/kallsymsprint
adb push kallsymsprint_arm64 data/local/tmp/kallsymsprint

adb shell chmod 777 /data/local/tmp/kallsymsprint

adb shell /data/local/tmp/kallsymsprint /data/local/tmp/kernel > kallsyms

rem adb pull data/local/tmp/kallsyms kallsyms

rem del kernel

pause