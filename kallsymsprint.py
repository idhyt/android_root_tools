#!/usr/bin/env python
# encoding: utf-8
"""
@author:     'idhyt3r@gmail.com'
@date:       '2016.05'
@description:
            python 2
            get kallsyms of kernel
@usage:
            python2 kallsymsprint.py kernel
"""

import sys
import struct

# only need to set default architecture, 32 or 64
ARCHITECTURE = None
# in
KERNEL_FILE = ""
# out
KALLSYMS_FILE = None

kernel_text_start_1 = [
    0x00000000,  # __vectors_start
    0x00001000,  # __stubs_start
    0x00001004,  # vector_rst
    0x00001020,  # vector_irq
    0x000010a0,  # vector_dabt
]

kernel_text_start_2 = [
    0xc0008000,  # __init_begin
    0xc0008000,  # _sinittext
    0xc0008000,  # stext
    0xc0008000,  # _text
]

kernel_text_start_3 = [
    0xc0008000,  # stext
    0xc0008000,  # _text
]

kernel_text_start_4 = [
    0xc00081c0,  # asm_do_IRQ
    0xc00081c0,  # _stext
    0xc00081c0,  # __exception_text_start
]

kernel_text_start_5 = [
    0xc0008180,  # asm_do_IRQ
    0xc0008180,  # _stext
    0xc0008180,  # __exception_text_start
]

kernel_text_start_6 = [
    0xc0100000,  # asm_do_IRQ
    0xc0100000,  # _stext
    0xc0100000,  # __exception_text_start
    0xc0100004,  # do_undefinstr
]

kernel_text_start_7 = [
    0xc0608000,  # stext
    0xc0608000,  # _text
]

kernel_text_start_8 = [
    0xc0108000,  # stext
    0xc0108000,  # _text
]

kernel_text_start_64_0_0 = [
    0xffffffc000080000,  # efi_head
    0xffffffc000080040,  # _text
]

kernel_text_start_64_0 = [
    0xffffffc000080000,  # efi_head
    0xffffffc000080000,  # _text
]

kernel_text_start_64_1 = [
    0xffffffc000206000,  # do_undefinstr
    0xffffffc000206000,  # _stext
    0xffffffc000206000,  # __exception_text_start
]

kernel_text_start_64_2 = [
    0xffffffc000081000,  # do_undefinstr
    0xffffffc000081000,  # _stext
    0xffffffc000081000,  # __exception_text_start
]

kernel_text_start_64_3 = [
    0xffffffc000080000,  # _text
    0xffffffc000080040,  # stext
]

kernel_text_start_64_4 = [
    0xffffffc000680000,  # t efi_head
    0xffffffc000680000,  # T _text
]

kernel_text_start = [
    kernel_text_start_1,
    kernel_text_start_2,
    kernel_text_start_3,
    kernel_text_start_4,
    kernel_text_start_5,
    kernel_text_start_6,
    kernel_text_start_7,
    kernel_text_start_8,
]

kernel_text_start_64 = [
    kernel_text_start_64_0_0,
    kernel_text_start_64_0,
    kernel_text_start_64_1,
    kernel_text_start_64_2,
    kernel_text_start_64_3,
    kernel_text_start_64_4,
]

# The size of the LONG (8) in a 64-bit architecture
DDWORD_SIZE = struct.calcsize("Q")

# The size of the DWORD (4) in a 32-bit architecture
DWORD_SIZE = struct.calcsize("I")

# The size of the WORD (2) in a 32-bit architecture
WORD_SIZE = struct.calcsize("H")

# The alignment of labels in the resulting kernel file
LABEL_ALIGN = DWORD_SIZE * 4

# The minimal number of repeating addresses pointing to the kernel's text start address
# which are used as a heuristic in order to find the beginning of the kernel's symbol
# table. Since usually there are at least two symbols pointing to the beginning of the
# text segment ("stext", "_text"), the minimal number for the heuristic is 2.
KALLSYMS_ADDRESSES_MIN_HEURISTIC = 2


def read_ddword(kernel_data, offset):
    """
    Reads double DWORD (8-bit) from the given offset within the kernel data
    """
    return struct.unpack("<Q", kernel_data[offset: offset + DDWORD_SIZE])[0]


def read_dword(kernel_data, offset):
    """
    Reads a DWORD (4-bit) from the given offset within the kernel data
    """
    return struct.unpack("<I", kernel_data[offset: offset + DWORD_SIZE])[0]


def read_word(kernel_data, offset):
    """
    Reads a WORD (2-bit) from the given offset within the kernel data
    """
    return struct.unpack("<H", kernel_data[offset: offset + WORD_SIZE])[0]


def read_byte(kernel_data, offset):
    """
    Reads an unsigned byte (1-bit) from the given offset within the kernel data
    """
    return struct.unpack("<B", kernel_data[offset: offset + 1])[0]


def read_c_string(kernel_data, offset):
    """
    Reads a NUL-delimited C-string from the given offset
    """
    current_offset = offset
    result_str = ""
    while kernel_data[current_offset] != '\x00':
        result_str += kernel_data[current_offset]
        current_offset += 1
    return result_str


def label_align(*args):
    """
    Aligns the given value to the closest label output boundary
    """
    if len(args) == 1:
        address, align_size = args[0], LABEL_ALIGN
    elif len(args) == 2:
        address, align_size = args[0], args[1]
    else:
        raise ValueError
    return address & ~(align_size - 1)


def label_align_bak(address):
    """
    Aligns the given value to the closest align_size output boundary
    """
    return address & ~(LABEL_ALIGN - 1)


def find_kallsyms_addresses(kernel_data):
    """
    Searching for the beginning of the kernel's symbol table
    Returns the offset of the kernel's symbol table, or -1 if the symbol table could not be found
    kernel_start_address is address list for search
    """

    # The default address at which the kernel text segment is loaded
    kernel_start_address = kernel_text_start_64 if ARCHITECTURE == 64 else kernel_text_start

    offset = -1
    for address in kernel_start_address:
        search_str = ""
        for value in address:
            if ARCHITECTURE == 64:
                search_str += struct.pack("<Q", value)
            else:
                search_str += struct.pack("<I", value)

        offset = kernel_data.find(search_str)
        if offset > 0:
            break

    return offset


def get_kernel_platform(kernel_data):
    """
    :param kernel_data:
    :return: kernel version and platform
    """
    import re
    kernel_version, kernel_platform = "", ""
    # version = r"Linux\sversion\s\d+.\d+.\d+.*(\#.*\d+:\d+:\d+\s.*\s[\d+]{4})"
    version = r"Linux\sversion\s\d+.\d+.\d+.*(\#.*\d+:\d+:\d+\s.*[\d+]{4})"

    v_regex = re.search(version, kernel_data)
    if v_regex:
        kernel_version = v_regex.group(0)

        platform = v_regex.group(1) + "\x00+(\w+)\x00"
        pattern = re.compile(platform, re.IGNORECASE)
        p_regex = pattern.search(kernel_data, pos=v_regex.end())
        if p_regex:
            kernel_platform = p_regex.group(1)

    print("[+] %s: %s" % (kernel_platform, kernel_version))

    return kernel_version, kernel_platform


def set_architecture(kernel_data):
    global ARCHITECTURE

    kernel_version, kernel_platform = get_kernel_platform(kernel_data)
    if kernel_platform == "arm64":
        ARCHITECTURE = 64
    elif kernel_platform == "arm":
        ARCHITECTURE = 32
    else:
        ARCHITECTURE = None

    return ARCHITECTURE


def get_kernel_symbol_nums(kernel_data, kernel_symbol_start_offset):
    if ARCHITECTURE == 64:
        kernel_symbol_end_offset = kernel_data.find(struct.pack("<Q", 0), kernel_symbol_start_offset)
        calc_symbol_nums = (kernel_symbol_end_offset - kernel_symbol_start_offset) / DDWORD_SIZE
    else:
        kernel_symbol_end_offset = kernel_data.find(struct.pack("<I", 0), kernel_symbol_start_offset)
        calc_symbol_nums = (kernel_symbol_end_offset - kernel_symbol_start_offset) / DWORD_SIZE

    print("[*] kernel symbol range offset: 0x%x - 0x%x" % (kernel_symbol_start_offset, kernel_symbol_end_offset))

    # Making sure that kallsyms_num_syms matches the table size
    if kernel_symbol_end_offset % 4 == 0:
        record_symbol_nums_offset = label_align(kernel_symbol_end_offset + LABEL_ALIGN)
    else:
        record_symbol_nums_offset = label_align(kernel_symbol_end_offset)

    record_symbol_nums = read_ddword(kernel_data, record_symbol_nums_offset) if ARCHITECTURE == 64 \
        else read_dword(kernel_data, record_symbol_nums_offset)

    # fix bug : 64 need 0x100 align in some kernel
    if record_symbol_nums == 0 and ARCHITECTURE == 64:
        record_symbol_nums_offset = label_align(kernel_symbol_end_offset + 0x100, 0x100)
        record_symbol_nums = read_ddword(kernel_data, record_symbol_nums_offset)

    if record_symbol_nums != calc_symbol_nums:
        print("[-] record actual symbol table size: %d, read symbol table size: %d" %
              (record_symbol_nums, calc_symbol_nums))
        return None

    return record_symbol_nums, record_symbol_nums_offset


def get_kernel_symbol_token(kernel_data, symbol_name_offset, symbol_nums, token_table):
    if not isinstance(token_table, list):
        raise TypeError

    current_offset = symbol_name_offset
    # length index...length index...
    # 03 25 74 7E 03 8E 74 7E 0C B3 20 F5 76 FC 62 6F 6F FE D8 67 73 06...

    for i in range(0, symbol_nums):
        current_offset += read_byte(kernel_data, current_offset) + 1
    symbol_markers_offset = label_align(current_offset + LABEL_ALIGN)
    # skip there is filled by 0x0
    while read_dword(kernel_data, symbol_markers_offset) == 0:
        symbol_markers_offset += DWORD_SIZE
    print("[*] kernel symbol markers offset: 0x%x" % symbol_markers_offset)

    # Reading the token table
    symbol_token_table_offset = symbol_markers_offset + ((symbol_nums - 1) >> 8) * DDWORD_SIZE if ARCHITECTURE == 64 \
        else symbol_markers_offset + ((symbol_nums - 1) >> 8) * DWORD_SIZE
    # skip there is filled by 0x0
    while read_dword(kernel_data, symbol_token_table_offset) == 0:
        symbol_token_table_offset += DWORD_SIZE
    print("[*] kernel symbol token table offset: 0x%x" % symbol_token_table_offset)

    current_offset = symbol_token_table_offset
    for i in range(0, 256):
        token_str = read_c_string(kernel_data, current_offset)
        current_offset += len(token_str) + 1
    symbol_token_index_offset = label_align(current_offset + LABEL_ALIGN)
    # skip there is filled by 0x0
    while read_dword(kernel_data, symbol_token_index_offset) == 0:
        symbol_token_index_offset += DWORD_SIZE
    print("[*] kernel symbol token index offset: 0x%x" % symbol_token_index_offset)

    # Creating the token table
    for i in range(0, 256):
        index = read_word(kernel_data, symbol_token_index_offset + i * WORD_SIZE)
        token_table.append(read_c_string(kernel_data, symbol_token_table_offset + index))

    return token_table


def get_kernel_symbol_table(kernel_data):
    """
    Retrieves the kernel's symbol table from the given kernel file
    """
    # Init architecture
    if not set_architecture(kernel_data):
        print("[-] set_architecture failed!")
        return None

    # Getting the beginning and end of the kallsyms_addresses table
    kernel_symbol_start_offset = find_kallsyms_addresses(kernel_data)
    if kernel_symbol_start_offset < 0:
        print("[-] getting the kernel symbol table address offset false!")
        return None
    print("[*] kernel symbol start offset: 0x%x" % kernel_symbol_start_offset)

    symbol_nums, record_symbol_nums_offset = get_kernel_symbol_nums(kernel_data, kernel_symbol_start_offset)
    if not symbol_nums:
        return None
    print("[*] kernel symbol nums: 0x%x, record offset: 0x%x" % (symbol_nums, record_symbol_nums_offset))

    # Calculating the location of the markers table
    symbol_name_offset = label_align(record_symbol_nums_offset + LABEL_ALIGN)
    # skip there is filled by 0x0
    while read_dword(kernel_data, symbol_name_offset) == 0:
        symbol_name_offset += DWORD_SIZE
    print("[*] kernel symbol name offset: 0x%x" % symbol_name_offset)

    token_table = []
    get_kernel_symbol_token(kernel_data, symbol_name_offset, symbol_nums, token_table)
    if not token_table:
        print("[-] getting kernel symbol token table false!")
        return None

    # Decompressing the symbol table using the token table
    offset = symbol_name_offset
    symbol_table = []
    for i in range(0, symbol_nums):
        token_nums = read_byte(kernel_data, offset)
        offset += 1
        symbol_name = ""
        for j in range(token_nums, 0, -1):
            token_table_idx = read_byte(kernel_data, offset)
            symbol_name += token_table[token_table_idx]
            offset += 1

        symbol_address = read_ddword(kernel_data, kernel_symbol_start_offset + i * DDWORD_SIZE) if ARCHITECTURE == 64 \
            else read_dword(kernel_data, kernel_symbol_start_offset + i * DWORD_SIZE)
        symbol_table.append((symbol_address, symbol_name[0], symbol_name[1:]))

    return symbol_table


def kallsymsprint(is_print=False, is_dump=True):
    global KALLSYMS_FILE

    if is_print is False and is_dump is False:
        return

    kernel_data = open(KERNEL_FILE, "rb").read()
    # kernel_data = open(r"D:\work\code\python\auto_adapt\config\file\meizu-m3note_5.1.3.5.kernel", "rb").read()
    # Getting the kernel symbol table
    symbol_table = get_kernel_symbol_table(kernel_data)
    if not symbol_table:
        print("[-] failed!!!")
        return

    print("[+] success!!!")

    if is_print:
        for symbol in symbol_table:
            print("%0lx %s %s" % symbol)

    if is_dump:
        if not KALLSYMS_FILE:
            KALLSYMS_FILE = "kallsyms"

        print("[+] dump kallsyms to %s" % KALLSYMS_FILE)
        with open(KALLSYMS_FILE, "w") as f:
            for symbol in symbol_table:
                f.write("%0lx %s %s\n" % symbol)


def main():
    global KERNEL_FILE, KALLSYMS_FILE
    # Verifying the arguments
    if len(sys.argv) < 2:
        print("[!] USAGE: %s: in <KERNEL_FILE> out <KALLSYMS_FILE>" % sys.argv[0])
        return
    elif len(sys.argv) == 2:
        KERNEL_FILE, KALLSYMS_FILE = sys.argv[1], "kallsyms"
    elif len(sys.argv) == 3:
        KERNEL_FILE, KALLSYMS_FILE = sys.argv[1], sys.argv[2]
    else:
        pass

    kallsymsprint()


if __name__ == "__main__":
    main()

