#!/usr/bin/env python
# encoding: utf-8
"""
@author:     idhyt3r@gmail.com
@date:
@description:
            rop gadget
"""

from kdisasm import *


class RopGadget(object):
    def __init__(self):
        self.__is_dump = False
        self.__dump_file = None

    def set_dump_file(self, dump_file):
        self.__dump_file = dump_file
        self.__is_dump = True

    def dump_to_file(self, content):
        with open(self.__dump_file, "a") as f:
            f.write(content)
            f.close()

    # default find rop gadget location from one api
    def get_rop_gadget_location(self, rop_gadget_ins_list, is_get_all=False):

        if not isinstance(rop_gadget_ins_list, list):
            raise

        rop_gadget_list = []

        rop_gadget_len = len(rop_gadget_ins_list)
        all_api_info = ckdisasm.get_kallsyms_instance().get_all_api_info()
        find = False

        for api_info in all_api_info:
            if api_info["length"] < rop_gadget_len * 4:
                continue

            asm_ins_info_list = ckdisasm.get_asm_by_address(api_info["address"], api_info["length"])
            i = 0
            for asm_ins_info in asm_ins_info_list:
                asm_ins = asm_ins_info.split(":")[-1].strip()
                if i < rop_gadget_len and asm_ins == rop_gadget_ins_list[i]:
                        i += 1
                        continue
                else:
                    if i == rop_gadget_len:
                        find = True
                        asm_ins_address = long(asm_ins_info.split(":")[0].strip(), 16) - rop_gadget_len * 4
                        rop_gadget_list.append({"api_name": api_info["api_name"], "address": asm_ins_address})

                        if self.__is_dump:
                            for rop_gadget in rop_gadget_list:
                                rop_gadget_location = "%s: 0x%lx\n\n" % (rop_gadget["api_name"], rop_gadget["address"])
                                self.dump_to_file(rop_gadget_location)
                                # print "[*] rop gadget find in %s ->" % rop_gadget_content
                    i = 0

            print "[ok] %s: 0x%lx" % (api_info["api_name"], api_info["address"])

            if find and not is_get_all:
                break

        return rop_gadget_list

    # default find rop gadget from one api
    def get_rop_gadget_by_regex(self, rop_gadget_regex, is_get_all=False):

        insert_prefix = ""
        insert_regex = ""

        if isinstance(rop_gadget_regex, list):
            insert_prefix = "0xffffff.+: "
            insert_regex = "\s0xfffff.+"

        elif isinstance(rop_gadget_regex, str):
            pass

        else:
            raise

        import re

        rop_gadget_list = []

        regex = insert_prefix + insert_regex.join(rop_gadget_regex)

        pattern = re.compile(regex, re.IGNORECASE)

        rop_gadget_regex_len = len(rop_gadget_regex)
        all_api_info = ckdisasm.get_kallsyms_instance().get_all_api_info()
        find = False

        for api_info in all_api_info:
            if api_info["length"] < rop_gadget_regex_len * 4:
                continue

            asm_ins_info_list = ckdisasm.get_asm_by_address(api_info["address"], api_info["length"])
            asm_ins_info_str = "\n".join(asm_ins_info_list)
            result = pattern.findall(asm_ins_info_str)
            if len(result) > 0:
                rop_gadget_list.extend(result)
                find = True

                if self.__is_dump:
                    for rop_gadget in result:
                        rop_gadget_content = "%s\n\n" % rop_gadget
                        self.dump_to_file(rop_gadget_content)
                        # print rop_gadget_content

            print "[ok] %s: 0x%lx" % (api_info["api_name"], api_info["address"])

            if find and not is_get_all:
                break

        return rop_gadget_list

    # get rop location
    # return api_name: address
    def dump_rop_gadget_location(self, asm_ins_list=None, is_get_all=False):
        if not isinstance(asm_ins_list, list):
            raise

        return self.get_rop_gadget_location(asm_ins_list, is_get_all)

    # get rop gadget
    # return rop gadget list
    def dump_rop_gadget_by_regex(self, regex_asm_ins=None, is_get_all=False):
        if not isinstance(regex_asm_ins, list) and not isinstance(regex_asm_ins, str):
            raise

        return self.get_rop_gadget_by_regex(regex_asm_ins, is_get_all)


ropgadget = RopGadget()


# eg...
def example():
    # rop gadget asm ins list
    asm_ins_list = [
        "ldr x2, [x5, #0x20]",
        # "ldr x5, [x5]",
    ]
    # ropgadget.set_dump_file("example_rop_gadget.txt")
    rop_gadget_location = ropgadget.dump_rop_gadget_location(asm_ins_list, True)
    for location in rop_gadget_location:
        output_log("[*] rop gadget find in %s -> 0x%lx" % (location["api_name"], location["address"]))

    # find rop gadget by asm ins regex
    regex_asm_ins = [
        "ldr.+, \[x5.+",  # ldr w4, [x5, #0x18]
        "ldr.+, \[x5.+",  # ldr w1, [x5, #0x1c]
    ]

    ropgadget.set_dump_file("example_rop_gadget.txt")
    rop_gadget_list = ropgadget.dump_rop_gadget_by_regex(regex_asm_ins, True)

    output_log("******** rop gadget ********")
    for rop_gadget in rop_gadget_list:
        output_log("%s\n" % rop_gadget)

    """
    and is could be write like:
        regex_asm_ins = r"(0xffffff.+: ldr.+, \[x4.+\s0xfffff.+ldr.+, \[x4.+\s)"
    then:
        rop_gadget_list = ropgadget.dump_rop_gadget_by_regex(regex_asm_ins, True)
    you will get result like:
        0xffffffc00008b0dc: ldr x5, [x4]
        0xffffffc00008b0e0: ldr w0, [x4, #0xc]
    """


# used daily
def get_rop_gadget():
    regex_asm_ins = [
        "ldr.+, \[x4.+",
        "ldr.+, \[x4.+",     # ldr x0, [x4, #0xc]
        # "(bl.+)",            # blx x0

    ]

    regex_asm_ins = r"(0xffffff.+: ldr.+, \[x4.+\s0xfffff.+ldr.+, \[x4.+\s.+\s{0,4}0xfffff.+blr.+)"
    regex_asm_ins = r"(0xffffff.+: ldr.+, \[x4.+\s.+\s{0,6}0xfffff.+blr.+)"

    ropgadget.set_dump_file("ldr_x4_rop_gadget.txt")
    rop_gadget_list = ropgadget.dump_rop_gadget_by_regex(regex_asm_ins, True)

    output_log("******** rop gadget ********")
    for rop_gadget in rop_gadget_list:
        output_log("%s\n" % rop_gadget)


if __name__ == '__main__':
    example()
    # get_rop_gadget()
