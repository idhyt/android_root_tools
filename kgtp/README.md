# KGTP USAGE IN ANDROID

Android真机函数调用动态跟踪器

## environment

### target

`device`: Nexus 5 with root

`rom`: hammerhead-m4b30z-factory-625c027b-6.0.1_r77.zip

### host

ubuntu

## 快速开始使用kgtp

1.将kgtp项目克隆下来

2.切换到/kgtp/nexus5目录下

3.`第一次运行`或者`手机重启`需要配置环境，运行./install.sh，以后都不需要再运行该脚本。

4.修改/kgtp/nexue5目录下的gdb.sh中的两个变量`GDB`和`VMLINUX`，设置为自己机器中所在的路径。

5.运行gdb.sh之后，你会得到一个gdb接口。

运行日志如下所示：

```
$ ./gdb.sh
appending output to nohup.out
GNU gdb (GDB) 7.7
Copyright (C) 2014 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "--host=x86_64-apple-darwin --target=arm-linux-android".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://source.android.com/source/report-bugs.html>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
0x00000000 in ?? ()
Reading symbols from ./vmlinux...done.

```
~~启动成功的标志为出现`0x00000000 in ?? ()`，否则启动失败，失败原因见后边。~~

6.修改/kgtp/nexus5目录下的tp.gdb脚本，将`trace trace_func`改为自己所要trace的函数。

7.编译好自己的触发样本sample并push到手机`/data/local/tmp`目录下，然后执行`source tp.gdb`。

8.执行`tstop`和`tfind`操作，如果触发成功，则会打印出相应的信息。

9.分别执行`bt`和`info reg`收集堆栈信息和寄存器信息，也可以从/kgtp/nexus5目录下的`gdb.log`文件中获取。


## issue

### 1234: Operation timed out OR 1234: Connection refused.

运行gdb.sh会出现该问题，并且没有显示前边所提到的启动成功的标志，则表明启动失败，原因是端口被占用。

解决方法：杀掉busybox进程即可。

### Device or resource busy

运行`adb shell "/data/local/tmp/busybox nc -l -p 1234 < /sys/kernel/debug/gtp > /sys/kernel/debug/gtp"`会出现该问题，表明监听端口失败。

解决方法：杀掉busybox进程即可。


### Memory at address *** unavailable

trace成功一次以后，再次trace其他函数会找不到符号表，如下所示：

```
(gdb) trace sys_read
Memory at address 0xc02a8940 unavailable.

```

解决方法：退出gdb重新执行gdb.sh脚本即可。

### remote.c: error in outgoing packet at field #6.

执行`delete`即可。

https://github.com/teawater/kgtp/commit/c55973ed7e67a6c011d4b4fe16327e35b3a15f89
