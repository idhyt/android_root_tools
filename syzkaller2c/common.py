#!/usr/bin/env python
# encoding: utf-8
"""
@author:     'idhyt'
@date:
@description:

"""
import os
import time
import json
from collections import OrderedDict, Counter
import re
import platform


def log(out_info, show=True, date=False):

    if show is True:
        if date is True:
            current_time = time.ctime(time.time())
            print("[%s] %s" % (str(current_time), out_info))
        else:
            print("%s" % out_info)


def travel_files_by_suffix(dir_path, suffix=None):
    """
    get file list of dir_path
    :param dir_path:
    :param suffix: str or list
    :return:
    """
    if suffix is not None:
        if not isinstance(suffix, str) and not isinstance(suffix, list):
            raise TypeError

    slash = "\\" if "windows" in platform.system().lower() else "/"

    match_files = []
    try:
        for root, dirs, files in os.walk(dir_path):
            for file_ in files:
                if suffix is not None and file_.lower().split(".")[-1] not in suffix:
                    continue
                file_full_path = "".join([root, slash, file_])
                match_files.append(file_full_path)

        return match_files
    except Exception as e:
        print(str(e))


def json_load(json_file_name):
    """
    load a json file
    :param json_file_name: in
    :return:
    """
    with open(json_file_name, "r") as f:
        content = json.load(f,  object_pairs_hook=OrderedDict)
        return content


def json_dump(json_file_name, content):
    """
    dump a json file
    :param json_file_name: out
    :param content:
    :return:
    """
    with open(json_file_name, "w") as f:
        f.write(json.dumps(content))


def content_dump(out_file, content):
    with open(out_file, "w") as f:
        f.write(content)


def match_by_regex(src_str, regex):
    """ get match str from src_str by regex
    :param src_str: from
    :param regex:
    :return: match str list
    """
    pattern = re.compile(regex, re.I)
    result = pattern.findall(src_str)
    if len(result) > 0:
        return result[0]
    else:
        return None


# source code op
def get_xrefs_from(name, code):
    """
    Return all references from func
    :param name: function name
    :param code: function code
    :return: list[]
    """
    pass


def remove_list_duplicate(target_list):
    result = []

    for line in target_list:
        if line not in result:
            result.append(line)

    return result


def find_dups(serial):
    """
    统计重复列表
    :param serial:
    :return:
    """
    counter = Counter(serial)
    return [k for k, v in counter.items() if v > 1]


