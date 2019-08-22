#!/usr/bin/env python3
# encoding: utf-8
"""
@author:     'idhyt'
@date:       '16/05/2017'
@description:

"""

import re
import common

ALIGN = 4

INTs = {
    "int8": 1,
    "int16": 2,
    "int32": 4,
    "int64": 8
}

CALLs = {
    "ioctl": r"ioctl\$.+"
}

syzkaller_project_path = "./syzkaller"
sys_txt_path = syzkaller_project_path + "/sys"

all_c_struct_list = []
out_c_struct_file_path = "./out/syzkaller/struct.h"


struct_include_head = [
    "#include \"common.h\"",
    "#include \"type_flags_maps.h\"",
    "\n\n"
]

struct_type_define = [
    "#define int8 char",
    "#define int16 short",
    "#define int32 int",
    "#define int64 long",
    "#define int8be char",
    "#define int16be short",
    "#define int32be int",
    "#define int64be long",
    "#define intptr int*",
    "#define get_uid int",
    "#define get_pid int",
    "#define get_gid int",
    "\n\n"
]

# !!! need to init
struct_fd_type_define = [
    "#define fd_bpf_map int",
    "#define fd int",
    "#define fd_bpf_prog int",
]

struct_global_var = [
    # "char *rand_buf = (char *)randbuf(0xff);",
    "long get_map_page() {\n\tprintf(\"get a page by [mmap/munmap/mremap/madvise]\");\n\treturn 0;\n}",
    "\n\n"
]

struct_init_var = [
    "char *rand_buf = (char *)randbuf(0xff);",
    "\n\n"
]

all_fuzzy_c_struct_list = []
out_fuzzy_c_struct_file_path = "./out/syzkaller/jni/fuzzy_struct.h"

type_flags_include_head = [
    "#include \"marcos.h\"",
    "\n\n"
]
type_flags_maps_header_file = "./out/syzkaller/jni/type_flags_maps.h"

syzkaller_source_file = "./out/syzkaller/jni/syzkaller.c"
syzkaller_include_head = [
    "#include \"fuzzy_struct.h\"",
    "\n\n"
]
syzkaller_test_main = "int main() {\n\tprintf(\"test struct\");\n\treturn 0;\n}"

arm64_const_file = "./out/syzkaller/arm64_const.txt"
arm64_struct_file = "./out/syzkaller/arm64_struct.txt"

define_marcos_header_file = "./out/syzkaller/jni/marcos.h"

struct_init_maps = {}
struct_init_maps_file = "./out/syzkaller/struct_init_maps.json"


def align_size(size):
    result = (int(size / ALIGN) + 1) * ALIGN if size % ALIGN != 0 else size
    return result


def get_info_from_file_by_regex(file_full_path, info_list, regex):
    """
    get info from file by regex
    :param file_full_path:
    :param info_list:
    :param regex:
    :return: []
    """
    if not isinstance(file_full_path, str) or not isinstance(info_list, list) or not isinstance(regex, str):
        raise TypeError
    info_regex = regex
    with open(file_full_path, "r") as f:
        content = f.read()
        result = re.finditer(info_regex, content)
        for line in result:
            info = line.group()
            info_list.append(info)


def get_all_struct(info_list, m_name):
    struct_regex = r".+\{[\s\S]+?\}"
    sys_txt_file_list = common.travel_files_by_suffix(sys_txt_path, "txt")
    for txt in sys_txt_file_list:
        if m_name in txt:
            struct_list = []
            get_info_from_file_by_regex(txt, struct_list, struct_regex)
            common.log("[+] %s: %d" % (txt, len(struct_list)))
            info_list.extend(struct_list)


def get_all_c_struct():
    org_struct_list = []
    all_c_struct_list.extend(struct_type_define)
    all_c_struct_list.extend(struct_fd_type_define)

    get_all_struct(org_struct_list)

    for st in org_struct_list:

        lines = st.split("\n")

        len_ = len(lines)

        if "#" in lines[0] or "{" not in lines[0] or "}" not in lines[len_ - 1]:
            print("[-] error struct: %s " % st)
            continue
            # raise TypeError

        lines[0] = "struct " + lines[0]
        lines[-1] += ";\n"

        for x in range(1, len_ - 1):
            try:

                if "icmpv6_ni_packet" in lines[0]:
                    print("debug")

                if len(lines[x]) < 1 or "#" in lines[x][0]:
                    common.log("[*] pass %s" % lines[x])
                    continue

                lines[x] = lines[x].replace("\t", " ").replace(", ", ",").strip()

                tmp = lines[x].split(" ")
                type_ = tmp[-1]
                name_ = lines[x].split(type_)[0].strip()

                lines[x] = "\t" + type_ + " " + name_ + ";"

            except Exception as e:
                common.log("[-] Exception %s: %s" % (str(e), lines[x]))
                raise IndexError

        common.log("[+] %s" % lines[0])
        all_c_struct_list.append("\n".join(lines))


def get_arm64_all_struct(info_list):
    with open(arm64_struct_file, "r") as f:
        lines = f.readlines()
        for line in lines:
            struct_name = line.split(":")[0].split("{")[-1].split(" ")[0]
            info_list.append(struct_name)


def get_all_fuzzy_c_struct():
    int_type_regex = r"\w+.+(int\d{1,2})"
    const_type_regex = r"\w+\[.*(int\d{1,2}).*\]"

    org_struct_list = []

    all_fuzzy_c_struct_list.extend(struct_include_head)
    all_fuzzy_c_struct_list.extend(struct_type_define)
    all_fuzzy_c_struct_list.extend(struct_global_var)

    arm64_struct_list = []
    get_arm64_all_struct(arm64_struct_list)

    get_all_struct(org_struct_list, "socket")

    for st in org_struct_list:

        lines = st.split("\n")

        len_ = len(lines)

        if "#" in lines[0] or "{" not in lines[0] or "}" not in lines[len_ - 1]:
            print("[-] error struct: %s " % st)
            continue
            # raise TypeError

        struct_name = lines[0].split("{")[0].strip()
        if struct_name not in arm64_struct_list:
            continue

        init_struct = []

        init_rand_buf = "char *rand_buf = (char *)randbuf(0xff);"
        alloc_struct = "struct %s *st_%s = (struct %s *)rand_buf;" % (struct_name, struct_name, struct_name)

        lines[0] = "struct " + lines[0]
        lines[-1] += ";\n"

        for x in range(1, len_ - 1):
            try:

                if "drm_client" in lines[0]:
                    print("debug")

                if len(lines[x]) < 1 or "#" in lines[x][0]:
                    common.log("[*] pass %s" % lines[x])
                    lines[x] = "// " + lines[x]
                    continue

                lines[x] = lines[x].replace("\t", " ").replace(", ", ",").strip()

                tmp = lines[x].split(" ")
                type_ = tmp[-1]
                name_ = lines[x].split(type_)[0].strip()

                # pid pid
                if len(name_) == 0:
                    name_ = type_
                    type_ = "get_" + type_

                # eg: flags[bpf_map_type,int32] type;
                if "flags[" in type_:
                    flags_name = type_.split(",")[0].split("[")[-1]
                    init_var = \
                        "st_%s->%s = %s[randnum(1)" % (struct_name, name_, flags_name) +  \
                        "%" +   \
                        "ARRAY_SIZE(%s)];" % flags_name

                    init_struct.append(init_var)

                    s = re.search(int_type_regex, type_)
                    if s:
                        type_ = s.group(1)
                    elif "intptr" in type_:
                        type_ = "intptr"

                # eg: string[snd_timer_name,80] name;
                elif "string[" in type_:
                    string_name = type_.split(",")[0].split("[")[-1]
                    init_var = \
                        "st_%s->%s = %s[randnum(1)" % (struct_name, name_, string_name) + \
                        "%" + \
                        "ARRAY_SIZE(%s)];" % string_name
                    init_struct.append(init_var)
                    type_ = "char *"

                # eg: buffer[in] key;
                elif "buffer[" in type_ or "ptr[" in type_ or "array[" in type_:
                    init_var = "st_%s->%s = randbuf(0xff);" % (struct_name, name_)
                    init_struct.append(init_var)
                    type_ = "char *"

                # eg: len[name,intptr] namelen;
                elif "len[" in type_:
                    len_type = type_.split(",")[-1].split("]")[0]
                    init_var = "st_%s->%s = randnum(2);" % (struct_name, name_)
                    init_struct.append(init_var)
                    type_ = len_type

                # eg: vma handle;
                elif "vma" in type_:
                    init_var = "st_%s->%s = (long *)get_map_page();" % (struct_name, name_)
                    init_struct.append(init_var)
                    type_ = "long *"

                elif "const[" in type_ or "csum[" in type_ or "bytesize" in type_ or "proc[" in type_:
                    s = re.search(const_type_regex, type_)
                    if s:
                        type_ = s.group(1)
                    elif "intptr" in type_:
                        type_ = "intptr"

                elif "int8[" in type_ or "int16[" in type_ or "int32[" in type_ or "int64[" in type_:
                    type_ = type_.split("[")[0]

                elif "int8:" in type_ or "int16:" in type_ or "int32:" in type_ or "int64:" in type_:
                    type_ = type_.split(":")[0]

                lines[x] = "\t" + type_ + " " + name_ + ";"

            except Exception as e:
                common.log("[-] Exception %s: %s" % (str(e), lines[x]))
                raise IndexError

        common.log("[+] %s" % lines[0])
        all_fuzzy_c_struct_list.append("\n".join(lines))

        if not init_struct:
            continue

        init_struct.insert(0, alloc_struct)
        init_struct.insert(0, init_rand_buf)

        init_struct.append("\n")

        need_init_struct = True
        if need_init_struct:
            all_fuzzy_c_struct_list.extend(init_struct)

        if struct_name not in struct_init_maps:
            struct_init_maps.setdefault(struct_name, "\n".join(init_struct))
        else:
            common.log("[-] duplicate ? %s" % struct_name)
            raise str("dup")


def dump_all_c_struct(out_path):
    if not all_c_struct_list:
        get_all_c_struct()

    all_c_struct_list.append(syzkaller_test_main)

    with open(out_path, "w") as f:
        f.write("\n".join(all_c_struct_list))


def dump_fuzzy_struct_h(out_path):
    if not all_fuzzy_c_struct_list:
        get_all_fuzzy_c_struct()

    common.content_dump(out_path, "\n".join(all_fuzzy_c_struct_list))

    common.json_dump(struct_init_maps_file, struct_init_maps)


def get_var_type_maps(info_dict):
    int_type = "int"
    sys_txt_file_list = common.travel_files_by_suffix(sys_txt_path, "txt")
    for txt in sys_txt_file_list:
        with open(txt, "r") as f:
            lines = f.readlines()
            for line in lines:
                if "=" in line and "{" not in line and (len(line) > 0 and "#" not in line[0]):
                    type_map_name = line.split("=")[0].strip()
                    type_map_value = line.split("=")[1].strip("\n")
                    if '"' in line:
                        define_type_map = "char* %s[] = {%s};" % (type_map_name, type_map_value)
                    else:
                        define_type_map = "%s %s[] = {%s};" % (int_type, type_map_name, type_map_value)
                    if type_map_name not in info_dict:
                        info_dict.setdefault(type_map_name, define_type_map)
                    else:
                        common.log("[-] duplicate ? %s" % line)
                        raise TypeError


def get_struct_size(file_full_path, size_info):
    struct_regex = r".+\{[\s\S]+?\}"
    type_regex = r"\w+.+(int\d{1,2})"
    struct_list = []
    get_info_from_file_by_regex(file_full_path, struct_list, struct_regex)
    for struct in struct_list:
        lines = struct.split("\n")
        len_ = len(lines)
        if "{" not in lines[0] or "}" not in lines[len_ - 1]:
            print("[-] %s " % struct)
            raise TypeError

        struct_name = lines[0].split("{")[0].strip()
        struct_size = 0
        for x in range(1, len_-1):
            s = re.search(type_regex, lines[x])
            if not s:
                struct_size = 0
                break
            type_ = s.group(1)
            if type_ in INTs:
                struct_size += INTs[type_]
            else:
                raise TypeError
        if struct_name in size_info:
            print("[-] % exist" % struct_name)
            raise TypeError

        struct_size = align_size(struct_size)
        print("[+] %s: %d" % (struct_name, struct_size))
        size_info.setdefault(struct_name, struct_size)


def get_calls_list(file_full_path):
    call_dict = {}

    for call in CALLs:
        call_dict.setdefault(call, [])
        get_info_from_file_by_regex(file_full_path, call_dict[call], CALLs[call])

        print("[+] %s: %d" % (call, len(call_dict[call])))


def dump_type_flags_maps():
    var_type_maps = {}
    get_var_type_maps(var_type_maps)

    tmp = []
    tmp.extend(type_flags_include_head)

    for x in var_type_maps:
        tmp.append(var_type_maps[x])

    common.content_dump(type_flags_maps_header_file, "\n".join(tmp))


def create_syzkaller_c():
    syzkaller_code_list = []

    syzkaller_code_list.extend(syzkaller_include_head)
    syzkaller_code_list.append(syzkaller_test_main)
    common.content_dump(syzkaller_source_file, "\n".join(syzkaller_code_list))


def create_marcos_define_h():
    all_marcos_list = []
    marcos_name_list = []

    all_const_file_list = common.travel_files_by_suffix(sys_txt_path, "const")
    all_const_file_list.insert(0, arm64_const_file)

    for const_file in all_const_file_list:
        with open(const_file, "r") as f:
            lines = f.readlines()
            for line in lines:
                if "=" in line:
                    name_ = line.split("=")[0].strip()
                    value_ = line.split("=")[1].strip()

                    if name_ not in marcos_name_list:
                        marcos_name_list.append(name_)
                        all_marcos_list.append("#define %s %s" % (name_, value_))
                    else:
                        common.log("[-] duplicate? %s in %s" % (line, const_file))

    common.content_dump(define_marcos_header_file, "\n".join(all_marcos_list))


def get_marcos_define(info_dict):

    marcos_name_list = []

    all_const_file_list = common.travel_files_by_suffix(sys_txt_path, "const")
    all_const_file_list.insert(0, arm64_const_file)

    for const_file in all_const_file_list:
        with open(const_file, "r") as f:
            lines = f.readlines()
            for line in lines:
                if "=" in line:
                    name_ = line.split("=")[0].strip()
                    value_ = line.split("=")[1].strip()

                    if name_ not in marcos_name_list:
                        marcos_name_list.append(name_)
                        info_dict.setdefault(name_, value_)
                        # all_marcos_list.append("#define %s %s" % (name_, value_))
                    else:
                        common.log("[-] duplicate? %s in %s" % (line, const_file))


extract_rand_type_table = "./out/rand_type_table.c"
extract_macros_table = "./out/macros_table.c"


def extract_info():
    # 获取定义的随机变量值
    rand_type_table = {}
    get_var_type_maps(rand_type_table)

    # 获取宏定义
    macros_table = {}
    get_marcos_define(macros_table)

    # # AUTOGENERATED FILE
    auto_generate_content = []
    cut_off = "/* %s %s %s */\n\n" % ("-" * 10, "auto generate file", "-" * 10)
    auto_generate_content.append(cut_off)

    has_used_macros = []
    un_used_macros = []

    for type_name, type_value in rand_type_table.items():
        cut_off = "/* %s %s %s */\n" % ("-" * 10, type_name, "-" * 10)
        auto_generate_content.append(cut_off)
        type_name_list = type_value.split("=")[-1].replace("{", "").replace("}", "").replace(";", "").replace(" ", "").split(",")
        for name_ in type_name_list:
            if name_ in macros_table:
                value_ = macros_table[name_]
                has_used_macros.append(name_)
            else:
                value_ = "Undefined in const file! Need to manually fill out !"
                common.log("[-] Undefined %s in %s" % (name_, type_name))
            name_define = "#define %s %s" % (name_, value_)
            auto_generate_content.append(name_define)

        auto_generate_content.append("\n")
        type_define_table = rand_type_table[type_name].replace("{ ", "{\n\t").replace(", ", ",\n\t").replace("}", "\n}")
        auto_generate_content.append(type_define_table)
        auto_generate_content.append("\n")

    # unUsed macros
    for macros_name in macros_table:
        if macros_name not in has_used_macros:
            macros_define = "#define %s %s" % (macros_name, macros_table[macros_name])
            un_used_macros.append(macros_define)

    cut_off = "/* %s other macros %s */\n" % ("-" * 10, "-" * 10)
    auto_generate_content.append(cut_off)
    auto_generate_content.extend(un_used_macros)

    common.content_dump(extract_rand_type_table, "\n".join(auto_generate_content))


def main():
    # get_all_struct()
    # dump_all_c_struct(out_c_struct_file_path)

    # create_marcos_define_h()

    # dump_type_flags_maps()
    dump_fuzzy_struct_h(out_fuzzy_c_struct_file_path)
    # create_syzkaller_c()


if __name__ == '__main__':
    # main()
    extract_info()
