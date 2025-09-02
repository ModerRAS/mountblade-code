#!/usr/bin/env python3
"""
网络系统变量美化脚本 - 简化版本
"""

import re
import sys

def beautify_networking_file():
    """美化05_networking.c文件中的变量名"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    # 读取文件内容
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return
    
    # 变量名映射表 - 只处理确定的变量名
    variable_replacements = {
        # 栈变量
        r'\bcStack_([0-9a-fA-F]+)\b': lambda m: f'StackCharVar{m.group(1)}',
        r'\buStack_([0-9a-fA-F]+)\b': lambda m: f'StackUintVar{m.group(1)}',
        r'\bauStack_([0-9a-fA-F]+)\b': lambda m: f'StackUcharArray{m.group(1)}',
        r'\bpuStack_([0-9a-fA-F]+)\b': lambda m: f'StackPointer{m.group(1)}',
        r'\blStack_([0-9a-fA-F]+)\b': lambda m: f'StackLongVar{m.group(1)}',
        
        # 标签变量
        r'\bLAB_([0-9a-fA-F]+)\b': lambda m: f'LabelLocation{m.group(1)}',
        
        # 输入参数
        r'\bin_([A-Z]+)\b': lambda m: f'InputParameter{m.group(1)}',
        
        # 通用变量
        r'\blocal_([0-9a-fA-F]+)\b': lambda m: f'LocalVariable{m.group(1)}',
        r'\bparam([0-9]+)\b': lambda m: f'Parameter{m.group(1)}',
        r'\bpuVar([0-9]+)\b': lambda m: f'ProcessVariable{m.group(1)}',
        r'\bunk_([0-9a-fA-F]+)\b': lambda m: f'UnknownVariable{m.group(1)}',
    }
    
    # 应用变量替换
    for pattern, replacement in variable_replacements.items():
        content = re.sub(pattern, replacement, content)
    
    # 写回文件
    try:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        print("文件美化完成")
    except Exception as e:
        print(f"写入文件失败: {e}")

if __name__ == "__main__":
    beautify_networking_file()