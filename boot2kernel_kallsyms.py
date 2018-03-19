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
    cmd = "./getkernel boot.img"
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
