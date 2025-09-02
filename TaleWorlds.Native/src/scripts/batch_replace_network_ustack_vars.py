#!/usr/bin/env python3
"""
批量替换网络模块中的uStack_变量
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def replace_ustack_variables(content):
    """替换uStack_变量"""
    # 找到所有uStack_变量
    ustack_pattern = r'uStack_[0-9a-fA-F]+'
    ustack_vars = re.findall(ustack_pattern, content)
    
    # 去重并排序
    unique_ustacks = sorted(set(ustack_vars))
    
    # 创建映射
    mapping = {}
    for i, var in enumerate(unique_ustacks):
        mapping[var] = f'networkStackVar{i+3}'  # 从3开始，因为1和2已经使用了
    
    # 执行替换
    for old_var, new_var in mapping.items():
        content = content.replace(old_var, new_var)
        print(f"替换 {old_var} -> {new_var}")
    
    return content

def main():
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    print("开始批量替换uStack_变量...")
    content = read_file(file_path)
    content = replace_ustack_variables(content)
    write_file(file_path, content)
    print("批量替换完成！")

if __name__ == "__main__":
    main()