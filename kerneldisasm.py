#!/usr/bin/env python
# encoding: utf-8
"""
@author:     idhyt3r@gmail.com
@date:       2016.03.01
@description:
            android kernel disassemble

"""
import os
import time
from capstone import *

# http://www.capstone-engine.org/lang_python.html
Architecture = "@"
BasicMode = "@"

KERNEL_BASE_ADDR = "@"
BYTE_SIZE = 0

# need set first
KERNEL_FILE_NAME = "kernel"
KALLSYMS_FILE_NAME = "kallsyms"
CURRENT_PATH = os.path.split(os.path.realpath(__file__))[0]
KERNEL_FILE_PATH = os.path.join(CURRENT_PATH, KERNEL_FILE_NAME)
KALLSYMS_FILE_PATH = os.path.join(CURRENT_PATH, KERNEL_FILE_NAME)


def set_mode(func):
    global Architecture, BasicMode, KERNEL_BASE_ADDR, BYTE_SIZE

    ckernel = Kernel(KERNEL_FILE_PATH)

    if ckernel.get_kernel_platform() == "arm64":
        Architecture, BasicMode, KERNEL_BASE_ADDR, BYTE_SIZE = \
            CS_ARCH_ARM64, CS_MODE_ARM, 0xffffffc000080000, 8

    elif ckernel.get_kernel_platform() == "arm":
        Architecture, BasicMode, KERNEL_BASE_ADDR, BYTE_SIZE = \
            CS_ARCH_ARM, CS_MODE_ARM, 0xc0008000, 4

    else:
        raise

    del ckernel

    return func


def output_log(print_info, is_print=True, is_print_time=False):

    if is_print:
        date = ""
        if is_print_time:
            date = "[%s] " % time.ctime(time.time())
        print '%s%s' % (str(date), print_info)


# kernel file
class Kernel(object):
    def __init__(self, kernel_file_path):
        if not isinstance(kernel_file_path, str):
            raise
        self.__kernel_file_path = kernel_file_path
        self.__all_kernel_content = None
        self.__kernel_version = None
        self.__kernel_platform = None

    def __clean__(self):
        self.__kernel_file_path = None
        self.__all_kernel_content = None

    def get_part_kernel_content(self, start, len_=0x100):
        with open(self.__kernel_file_path, "rb") as f:
            f.seek(start, 0)
            hex_content = f.read(len_)
            f.close()

        return hex_content

    def get_all_kernel_content(self):
        if self.__all_kernel_content is None:
            with open(self.__kernel_file_path, "rb") as f:
                self.__all_kernel_content = f.read()
                f.close()

        return self.__all_kernel_content

    def get_kernel_version(self):
        if self.__kernel_version is None:
            self.get_kernel_info()

        return self.__kernel_version

    def get_kernel_platform(self):
        if self.__kernel_platform is None:
            self.get_kernel_info()

        return self.__kernel_platform

    # param: offset of kernel file
    # return: value
    def read_value_by_offset(self, offset):
        value = 0
        with open(self.__kernel_file_path, "rb") as f:
            f.seek(offset)
            for i in xrange(BYTE_SIZE):
                c = f.read(1)
                value += ord(c) << (i * 8)
            f.close()

        return value

    # param: address of kernel
    # return: value
    def read_value_by_kernel_address(self, kernel_address):
        if kernel_address < KERNEL_BASE_ADDR:
            raise
        return self.read_value_by_offset(kernel_address - KERNEL_BASE_ADDR)

    # return: kernel version and platform
    def get_kernel_info(self):
        # linux = "\x4C\x69\x6E\x75\x78"
        import re
        version = r"Linux\sversion\s\d+.\d+.\d+.*(\#.*\d+:\d+:\d+\s.*\s[\d+]{4})"
        v_regex = re.search(version, self.get_all_kernel_content())
        if v_regex:
            self.__kernel_version = v_regex.group(0)

            platform = v_regex.group(1) + "\x00+(\w+)\x00"
            pattern = re.compile(platform, re.IGNORECASE)
            p_regex = pattern.search(self.get_all_kernel_content(), pos=v_regex.end())
            if p_regex:
                self.__kernel_platform = p_regex.group(1)

        return self.__kernel_version, self.__kernel_platform


# kernel kallsyms
class KallSyms(object):
    def __init__(self, kallsyms_file_path):
        if not isinstance(kallsyms_file_path, str):
            raise

        self.__kallsyms_file_path = kallsyms_file_path
        self.__all_kallsyms_content = None
        self.__all_kallsyms_api_info = None

    def __clean__(self):
        self.__kallsyms_file_path = None
        self.__all_kallsyms_content = None
        self.__all_kallsyms_api_info = None

    # return []
    def get_all_kallsyms_content(self):
        if self.__all_kallsyms_content is None:
            with open(self.__kallsyms_file_path, "r+") as f:
                self.__all_kallsyms_content = f.readlines()
                f.close()
        return self.__all_kallsyms_content

    def get_kallsyms_api_info(self):
        if self.__all_kallsyms_api_info is None:
            self.__all_kallsyms_api_info = self.get_all_api_info()

        return self.__all_kallsyms_api_info

    # return = [
    #     {"api_name": "xxx", "address": 0, "length": 0},
    #     {"api_name": "xxx", "address": 0, "length": 0},
    # ]
    def get_all_api_info(self):
        all_kallsyms_list = []

        all_kallsyms_content = self.get_all_kallsyms_content()
        if not isinstance(all_kallsyms_content, list):
            raise

        for index_ in xrange(0, len(all_kallsyms_content)):
            cur_aip_name = all_kallsyms_content[index_].split(" ")[-1].strip()
            cur_api_addr = long("0x" + all_kallsyms_content[index_].split(" ")[0].strip(), 16)

            # last one default disassemble 0x100
            next_api_addr = long("0x" + all_kallsyms_content[index_+1].split(" ")[0].strip(), 16) \
                if index_ < len(all_kallsyms_content)-1 else cur_api_addr + 0x100

            cur_api_len = next_api_addr - cur_api_addr

            temp = {}
            temp["api_name"] = str(cur_aip_name)
            temp["address"] = cur_api_addr
            temp["length"] = cur_api_len
            all_kallsyms_list.append(temp)

        return all_kallsyms_list

    # param ["api_name", "api_name2", ...]
    # return [{"api_name": address}, {}, ...]
    def find_apis_address(self, api_name_list):
        if not isinstance(api_name_list, list):
            raise

        apis_addr_dict = {}

        all_kallsyms_content = self.get_all_kallsyms_content()

        for cur_line in all_kallsyms_content:
            cur_line = cur_line.strip("\n")
            cur_api_name = cur_line.split(" ")[-1].strip()
            if cur_api_name in api_name_list:
                cur_api_addr = "0x" + cur_line.split(" ")[0].strip()
                apis_addr_dict.setdefault(cur_api_name, long(cur_api_addr, 16))
                api_name_list.remove(cur_api_name)
                # print "0x" + c_line

            if len(api_name_list) == 0:
                break

        if len(api_name_list) > 0:
            output_log("get [%s] address lost" % (", ".join(api_name_list)))
            for api_name in api_name_list:
                apis_addr_dict.setdefault(api_name, 0)

        return apis_addr_dict


# Disassemble and dump
@set_mode
class KDisAsm(object):
    def __init__(self, kernel_file_path=None, kallsyms_file_path=None):
        if not isinstance(kernel_file_path, str) or not isinstance(kallsyms_file_path, str):
            raise

        self.__kernel_file_path = kernel_file_path
        self.__kallsyms_file_path = kallsyms_file_path

        self.__kernel_base_addr = KERNEL_BASE_ADDR

        self.__kernel = Kernel(self.__kernel_file_path)
        self.__kallsyms = KallSyms(self.__kallsyms_file_path)

    def __clean__(self):
        self.__kernel_file_path = None
        self.__kallsyms_file_path = None
        self.__kernel = None
        self.__kallsyms = None

    def get_kernel_instance(self):
        if self.__kernel is None:
            self.__kernel = Kernel(self.__kernel_file_path)
        return self.__kernel

    def get_kallsyms_instance(self):
        if self.__kallsyms is None:
            self.__kallsyms = KallSyms(self.__kernel_file_path)
        return self.__kallsyms

    @staticmethod
    def disasm_hex_code(hex_code, disasm_base_addr=0x1000, is_dump=False):
        if len(hex_code) == 0:
            return []
        asm_list = []
        try:
            md = Cs(Architecture, BasicMode)
            for i in md.disasm(hex_code, disasm_base_addr):
                # print "0x%x:\t%s\t%s" % (i.address, i.mnemonic, i.op_str)
                # print "0x%x: %s %s" % (i.address, i.mnemonic, i.op_str)
                if is_dump:
                    asm_list.append("0x%x: %s %s\n" % (i.address, i.mnemonic, i.op_str))
                else:
                    asm_list.append("0x%x: %s %s" % (i.address, i.mnemonic, i.op_str))
            return asm_list
        except CsError as e:
            output_log(str(e))

    def get_asm_by_address(self, disasm_start_addr, disasm_len):
        disasm_file_offset = disasm_start_addr - self.__kernel_base_addr
        buf = self.__kernel.get_part_kernel_content(disasm_file_offset, disasm_len)
        return self.disasm_hex_code(buf, disasm_start_addr)

    def dump_disasm(self, dump_file_name):
        all_api_info = self.__kallsyms.get_kallsyms_api_info()

        if not isinstance(all_api_info, list):
            raise

        with open(dump_file_name, "w+") as f:
            for aip_info in all_api_info:

                start_ = aip_info["address"] - self.__kernel_base_addr
                cur_hex_code = self.__kernel.get_part_kernel_content(start_, aip_info["length"])
                cur_ins_list = self.disasm_hex_code(cur_hex_code, aip_info["address"], True)
                cur_ins_info = "0x%lx %s 0x%lx" % (aip_info["address"], aip_info["api_name"], aip_info["length"])
                cur_ins_list.insert(0, "\n\n%s\n" % cur_ins_info)

                f.writelines(cur_ins_list)

                del cur_ins_list[:]

                output_log("[ok]" + cur_ins_info)

        f.close()

    # param: "api_name"
    # return: ["asm1", "asm2", ...]
    def get_asm_by_name(self, api_name):

        if not isinstance(api_name, str):
            raise

        all_api_info = self.__kallsyms.get_kallsyms_api_info()

        if not isinstance(all_api_info, list):
            raise

        for api_info in all_api_info:
            if api_info["api_name"] == api_name:
                return self.get_asm_by_address(api_info["address"], api_info["length"])


ckdisasm = KDisAsm(KERNEL_FILE_PATH, KALLSYMS_FILE_PATH)


# example disassemble
def dump_asm():
    ckdisasm.dump_disasm("nexus5-4.4-KRT16M.c")


# example find api address
def get_apis_addr():
    api_name_list = [
        "pty_init",
        "tty_ioctl",
        "enforcing_setup",
        "mtk_wcn_cmb_stub_query_ctrl",
        "stat_seq_show",
        "clk_composite_set_parent",
        "el1_irq",
        "do_vfs_ioctl",
        "usb_hcd_irq"
    ]
    apis_addr_dict = ckdisasm.get_kallsyms_instance().find_apis_address(api_name_list)
    print apis_addr_dict


def get_api_asm():
    asm_list = ckdisasm.get_asm_by_name("enforcing_setup")
    for asm in asm_list:
        print asm


def main():
    # dump_asm()
    # get_apis_addr()
    get_api_asm()


if __name__ == '__main__':
    main()
    pass


