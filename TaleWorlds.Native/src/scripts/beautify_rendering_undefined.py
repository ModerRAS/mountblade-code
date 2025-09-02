#!/usr/bin/env python3
"""
美化03_rendering.c文件中的undefined类型
将undefined1, undefined2, undefined4, undefined8替换为具体的数据类型
"""

import re
import sys

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_undefined_types(content):
    """将undefined类型替换为具体的C类型"""
    
    # undefined1 -> uint8_t (1字节)
    content = re.sub(r'\bundefined1\b', 'uint8_t', content)
    
    # undefined2 -> uint16_t (2字节)
    content = re.sub(r'\bundefined2\b', 'uint16_t', content)
    
    # undefined4 -> uint32_t (4字节)
    content = re.sub(r'\bundefined4\b', 'uint32_t', content)
    
    # undefined8 -> uint64_t (8字节)
    content = re.sub(r'\bundefined8\b', 'uint64_t', content)
    
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c'
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化undefined类型
    beautified_content = beautify_undefined_types(content)
    
    # 写回文件
    write_file(file_path, beautified_content)
    
    print("完成undefined类型美化")

if __name__ == "__main__":
    main()