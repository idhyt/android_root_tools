#!/usr/bin/env python
# encoding: utf-8
"""
@author:     idhyt
@date:
@description:
            parse result

"""

import os
import argparse


CURRENT_PATH = os.path.split(os.path.realpath(__file__))[0]


def get_args():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)

    parser.add_argument('-f', '--file', help="kernel, xxxxx file")
    args = parser.parse_args()
    return args


def parse_kallsyms(file_name):
    kallsyms_file_path = "/".join([CURRENT_PATH, file_name])
    result = []
    with open(kallsyms_file_path, "r") as f:
        content = f.readlines()
        for line in content:
            if line.find("ffffffc0") == 0 or line.find("c000") == 0:
                result.append(line.replace("\r\n", "\n"))
        f.close()

    with open(kallsyms_file_path, "w") as f:
        f.write("".join(result))
        f.close()


def parse_result():

    args = get_args()
    if args.file == "kallsyms":
        parse_kallsyms(args.file)


if __name__ == '__main__':
    parse_result()