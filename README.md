### Usage

1. 确保`adb`, `python`可用
2. 将`boot.img`放入该目录
3. 插入手机
4. 运行`dump-kallsyms.bat | dump-kallsyms.sh`
5. 生成内核符号表文件`kallsyms`

### Example

#### MAC

    $ ./dump_kallsyms.sh

    python bootimg.py --unpack-bootimg
    arguments: [bootimg file]
    bootimg file: boot.img
    output: kernel[.gz] ramdisk[.gz] second[.gz]
    kernel_addr=0x40080000
    ramdisk_addr=0x44000000
    second_addr=0x40f00000
    tags_addr=0x4e000000
    page_size=2048
    name="56"
    cmdline="bootopt=64S3,32N2,64N2"
    padding_size=2048

    rm ramdisk.gz
    rm bootimg.json
    rm unknown

    gzip -d -f kernel.gz
    gzip: kernel.gz: trailing garbage ignored

    adb push kernel data/local/tmp
    7084 KB/s (15970340 bytes in 2.201s)
    adb push kallsymsprint_arm64 data/local/tmp
    2999 KB/s (33056 bytes in 0.010s)

    adb shell < adb-cmd
    cd data/local/tmp

    chmod 777 kallsymsprint_arm64

    ./kallsymsprint_arm64 kernel > kallsyms

    exit


    shell@X3:/ $ cd data/local/tmp
    shell@X3:/data/local/tmp $
    shell@X3:/data/local/tmp $ chmod 777 kallsymsprint_arm64
    shell@X3:/data/local/tmp $
    shell@X3:/data/local/tmp $ ./kallsymsprint_arm64 kernel > kallsyms
    [+]mmap
      mem=7f869c4000 length=00f3b024 offset=ffffff40796bc000
    [+]kallsyms_addresses=ffffffc000b58200
      count=0001127c
    [+]kallsyms_num_syms=0001127c
    [+]kallsyms_names=ffffffc000be1700
    [+]kallsyms_markers=ffffffc000cb5800
    [+]kallsyms_token_table=ffffffc000cb6100
    [+]kallsyms_token_index=ffffffc000cb6500
    [+]kallsyms_lookup_name
    shell@X3:/data/local/tmp $
    shell@X3:/data/local/tmp $ exit

    adb pull data/local/tmp/kallsyms kallsyms
    9291 KB/s (2764918 bytes in 0.290s)


#### Windows

    D:\idhyt\github\exploit_tools\dump_kallsyms>dump-kallsyms.bat
    arguments: [bootimg file]
    bootimg file: boot.img
    output: kernel[.gz] ramdisk[.gz] second[.gz]
    kernel_addr=0x40080000
    ramdisk_addr=0x44000000
    second_addr=0x40f00000
    tags_addr=0x4e000000
    page_size=2048
    name="1462957561"
    cmdline="bootopt=64S3,32N2,64N2"
    padding_size=2048

    7-Zip [64] 9.20  Copyright (c) 1999-2010 Igor Pavlov  2010-11-18

    Processing archive: kernel.gz

    Extracting  kernel

    Everything is Ok

    Size:       14426148
    Compressed: 6336458
    4860 KB/s (14426148 bytes in 2.898s)
    2481 KB/s (33056 bytes in 0.013s)
    cd data/local/tmp
    chmod 777 kallsymsprint
    ./kallsymsprint kernel > kallsyms
    exit
    shell@GiONEE_GBL7319:/ $ cd data/local/tmp
    shell@GiONEE_GBL7319:/data/local/tmp $ chmod 777 kallsymsprint
    shell@GiONEE_GBL7319:/data/local/tmp $ ./kallsymsprint kernel > kallsyms
    [+]mmap
      mem=7f85927000 length=00dc2024 offset=ffffff407a759000
    [+]kallsyms_addresses=ffffffc000a4f300
      count=0000cb27
    [+]kallsyms_num_syms=0000cb27
    [+]kallsyms_names=ffffffc000ab4e00
    [+]kallsyms_markers=ffffffc000b48400
    [+]kallsyms_token_table=ffffffc000b48b00
    [+]kallsyms_token_index=ffffffc000b48f00
    [+]kallsyms_lookup_name
    shell@GiONEE_GBL7319:/data/local/tmp $ exit
    4591 KB/s (1900908 bytes in 0.404s)
    请按任意键继续. . .