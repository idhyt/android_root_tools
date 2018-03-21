#!/usr/bin/env python
# encoding: utf-8
"""
@author:     'idhyt3r@gmail.com'
@date:       '2016.05'
@description:
            get kernel&&kallsyms form boot.img

            Only test in GNU/Linux with python2

"""
import sys
import os
import kallsymsprint

KERNEL = "kernel"
KALLSYMS = "kallsyms"


def main():
    if len(sys.argv) > 1:
        bootimg = sys.argv[1]
    else:
        bootimg = "boot.img"

    if not os.path.exists(bootimg):
        print("[-] %s not exist!\n" % bootimg)
        sys.exit(-1)

    cmd = "./getkernel %s" % bootimg
    print("[!] %s\n" % cmd)
    os.system(cmd)
    if not os.path.exists(KERNEL):
        print("[-] get kernel false!\n")
        sys.exit(-1)

    kallsymsprint.getkallsyms(KERNEL)
    if not os.path.exists(KALLSYMS):
        print("[-] get kallsyms false!\n")
        sys.exit(-1)

    print("\n[+] success to get kernel&&kallsyms!\n")

if __name__ == "__main__":
    print("")
    print('================================================')
    print('=      boot 2 kernel&&kallsyms by idhyt        =')
    print('=        env: GNU/Linux with python2           =')
    print('================================================')
    print("")

    main()
