#!/bin/bash

bootimg="boot.img"
sepolicy="sepolicy"

init_test_rc=init.test.rc
test_script=test_script.sh
tmpdir=/data/local/tmp/bootpatch

magiskpath=Magisk-v16.0

arch=`adb shell getprop ro.product.cpu.abi`

# param 1 for boot.img path
if [ $# -ge 2 ] ; then
  bootimg=$1
  sepolicy=$2
fi

# check boot.img sepolicy exist
if [ ! -f "$bootimg" ]; then
  echo "- $bootimg not exist!"
  exit
fi

if [ ! -f "$sepolicy" ]; then
  echo "- $sepolicy not exist!"
  exit
fi

if [ "$arch" = "arm64-v8a" ]; then magiskboot=$magiskpath/arm64/magiskboot; fi;
if [ "$arch" = "armeabi-v7a" ]; then magiskboot=$magiskpath/arm/magiskboot; fi;
if [ "$arch" = "x86" ]; then magiskboot=$magiskpath/x86/magiskboot; fi;
if [ "$arch" = "x86_64" ]; then magiskboot=$magiskpath/x64/magiskboot; fi;

if [ ! -f "$magiskboot" ]; then
  echo "[-] $magiskboot not exist!"
  exit
fi

echo "+ bootimg: $bootimg"
echo "+ sepolicy: $sepolicy"
echo "+ magiskboot: $magiskboot"

# clean
rm new-boot.img
adb shell rm -rf $tmpdir
adb shell mkdir $tmpdir

# magiskboot
adb push $magiskboot $tmpdir
adb shell chmod 777 $tmpdir/magiskboot

# boot.img
adb push $bootimg $tmpdir/boot.img

# sepolicy
adb push $sepolicy $tmpdir/sepolicy

# boot.img repack script
adb push patch $tmpdir/patch
adb shell chmod 777 $tmpdir/patch

# test script
adb push $init_test_rc $tmpdir
adb push $test_script $tmpdir

# get newboot
adb shell $tmpdir/patch
adb pull $tmpdir/new-boot.img