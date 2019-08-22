#!/bin/bash
if false; then

1 usage
═══════

  需要先配置GDB和VMLINUX的路径


1.1 本地
────────

  将REMOTE设置为false即可


1.2 远程
────────

  1. REMOTE设置为true

  2. REMOTE_IP设置为手机IP

  3. 手机端开启和关闭远程连接:

     ┌────
     │ # su 权限下进行
     │ 
     │ # 设置远程连接端口
     │ setprop service.adb.tcp.port 5555
     │ stop adbd
     │ start adbd
     │ 
     │ # 取消远程连接端口
     │ setprop service.adb.tcp.port -1
     │ stop adbd
     │ start adbd
     └────

  4. pc 端开启和关闭远程连接

     ┌────
     │ # 开启远程连接
     │ adb connect [mobile ip]:5555
     │ 
     │ # 关闭远程连接
     │ adb usb
     └────

fi

echo "begin..."

## variable
GDB="./android-ndk-r10e/toolchains/arm-linux-androideabi-4.9/prebuilt/darwin-x86_64/bin/arm-linux-androideabi-gdb"
VMLINUX="./vmlinux"
## remote
REMOTE=false
REMOTE_IP="192.168.199.146"


## gdb
if $REMOTE
then
    echo "Remote connect!"
else
    echo "Local connect!"
    adb forward tcp:1234 tcp:1234
fi

echo 'adb shell "/data/local/tmp/busybox nc -l -p 1234 < /sys/kernel/debug/gtp > /sys/kernel/debug/gtp"' > bind.sh
# echo -e 'echo su > bind.txt\necho "/data/local/tmp/busybox nc -l -p 12345 < /sys/kernel/debug/gtp > /sys/kernel/debug/gtp" >> bind.txt\nadb shell < bind.txt' > bind.sh
chmod 755 bind.sh
nohup ./bind.sh &
sleep 1

if $REMOTE
then
    # REMOTE
    # echo "Remote connect!"
    echo "target REMOTE ""$REMOTE_IP"":1234" > ~/.gdbinit
else
    # local
    # echo "Local connect!"
    echo 'target REMOTE :1234' > ~/.gdbinit
fi

$GDB $VMLINUX

## clean
rm bind.sh
# rm bind.txt
rm nohup.out
rm ~/.gdbinit
