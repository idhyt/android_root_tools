#!/bin/bash

## variable
# GDB="gdb"

GDB="./android-ndk-r10e/toolchains/arm-linux-androideabi-4.9/prebuilt/darwin-x86_64/bin/arm-linux-androideabi-gdb"
VMLINUX="./vmlinux"

## 
adb push gtp.ko /data/local/tmp/gtp.ko
adb push busybox /data/local/tmp/busybox
adb shell chmod 755 /data/local/tmp/busybox

## install gtp.ko
echo -e 'echo su > gtp.txt\necho rmmod gtp.ko >> gtp.txt\necho insmod /data/local/tmp/gtp.ko >> gtp.txt\necho lsmod >> gtp.txt\necho chmod 766 /sys/kernel/debug/gtp >> gtp.txt\nadb shell < gtp.txt' > gtp.sh
chmod 755 gtp.sh
nohup ./gtp.sh &

## gdb
adb forward tcp:1234 tcp:1234
echo 'adb shell "/data/local/tmp/busybox nc -l -p 1234 < /sys/kernel/debug/gtp > /sys/kernel/debug/gtp"' > bind.sh
# echo -e 'echo su > bind.txt\necho "/data/local/tmp/busybox nc -l -p 1234 < /sys/kernel/debug/gtp > /sys/kernel/debug/gtp" >> bind.txt\nadb shell < bind.txt' > bind.sh
chmod 755 bind.sh
nohup ./bind.sh &
sleep 1

echo 'target remote :1234' > ~/.gdbinit

$GDB $VMLINUX

## clean
rm gtp.sh
rm gtp.txt
rm bind.sh
# rm bind.txt
rm nohup.out
rm ~/.gdbinit