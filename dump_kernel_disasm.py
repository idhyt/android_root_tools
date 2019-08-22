#!/usr/bin/env python
# encoding: utf-8
"""
@author:     idhyt3r@gmail.com
@date:
@description:
            dump kdisasm for arm 32&64
"""
import sys   
from kerneldisasm import *

if __name__ == '__main__':
    if len(sys.argv) == 1:
        output = "outkdisasm.c"
    else:
        output = sys.argv[1]

    print("[!] set output file : %s" %output)

    ckdisasm.dump_disasm(output)
