#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
美化06_utilities.c文件中的变量名
"""

import re
import os

def beautify_utilities_file():
    """美化06_utilities.c文件"""
    
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
    
    # 检查文件是否存在
    if not os.path.exists(file_path):
        print(f"错误：文件 {file_path} 不存在")
        return False
    
    # 读取文件内容
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
    except Exception as e:
        print(f"读取文件失败：{e}")
        return False
    
    # 统计替换次数
    replacements = {
        'puStack': 0,
        'uStack': 0,
        'auStack': 0,
        'union_fields': 0
    }
    
    # 1. 处理 puStack_* 变量（栈指针变量）
    def replace_puStack(match):
        number = match.group(1)
        replacements['puStack'] += 1
        return f"StackPointer{number}"
    
    content = re.sub(r'\bpuStack_([0-9a-f]+)', replace_puStack, content)
    
    # 2. 处理 uStack_* 变量（栈变量）
    def replace_uStack(match):
        number = match.group(1)
        replacements['uStack'] += 1
        return f"StackVariable{number}"
    
    content = re.sub(r'\buStack_([0-9a-f]+)', replace_uStack, content)
    
    # 3. 处理 auStack_* 变量（栈数组变量）
    def replace_auStack(match):
        number = match.group(1)
        replacements['auStack'] += 1
        return f"StackArray{number}"
    
    content = re.sub(r'\bauStack_([0-9a-f]+)', replace_auStack, content)
    
    # 4. 处理联合体成员访问 ._数字_数字_
    def replace_union_field(match):
        first_num = match.group(1)
        second_num = match.group(2)
        replacements['union_fields'] += 1
        return f".Field{first_num}{second_num}"
    
    content = re.sub(r'\._([0-9]+)_([0-9]+)_', replace_union_field, content)
    
    # 写回文件
    try:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
    except Exception as e:
        print(f"写入文件失败：{e}")
        return False
    
    # 输出替换统计
    print("=== 06_utilities.c 变量名美化完成 ===")
    print(f"puStack_* 变量替换次数: {replacements['puStack']}")
    print(f"uStack_* 变量替换次数: {replacements['uStack']}")
    print(f"auStack_* 变量替换次数: {replacements['auStack']}")
    print(f"联合体字段替换次数: {replacements['union_fields']}")
    print(f"总计替换次数: {sum(replacements.values())}")
    
    return True

if __name__ == "__main__":
    beautify_utilities_file()