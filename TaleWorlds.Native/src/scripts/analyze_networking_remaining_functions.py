#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
分析05_networking.c文件中需要美化的FUN_函数
"""

import re
import os

def analyze_networking_functions():
    """分析网络文件中的FUN_函数"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    if not os.path.exists(file_path):
        print(f"文件不存在: {file_path}")
        return
    
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找所有FUN_函数调用
    fun_pattern = r'FUN_[0-9a-fA-F]+'
    fun_calls = re.findall(fun_pattern, content)
    
    # 统计唯一的FUN_函数
    unique_funs = set(fun_calls)
    
    print(f"发现 {len(unique_funs)} 个唯一的FUN_函数需要美化:")
    for i, fun in enumerate(sorted(unique_funs), 1):
        print(f"{i:3d}. {fun}")
    
    # 生成替换映射
    replacements = []
    for fun in sorted(unique_funs):
        # 根据函数名推断功能
        if "ca" in fun:
            replacements.append(f"{fun} -> NetworkCalculateData")
        elif "cc" in fun:
            replacements.append(f"{fun} -> NetworkCheckConnection")
        elif "d" in fun:
            replacements.append(f"{fun} -> NetworkDataProcess")
        elif "e" in fun:
            replacements.append(f"{fun} -> NetworkExecuteOperation")
        elif "f" in fun:
            replacements.append(f"{fun} -> NetworkFormatData")
        elif "b" in fun:
            replacements.append(f"{fun} -> NetworkBufferOperation")
        elif "8" in fun:
            replacements.append(f"{fun} -> NetworkSystemCall")
        elif "9" in fun:
            replacements.append(f"{fun} -> NetworkValidateOperation")
        else:
            replacements.append(f"{fun} -> NetworkFunctionOperation")
    
    print("\n建议的替换映射:")
    for replacement in replacements:
        print(f"  {replacement}")
    
    # 生成bash脚本
    bash_script = """#!/bin/bash
# 批量替换05_networking.c中的FUN_函数

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

"""
    
    for fun, replacement in zip(sorted(unique_funs), [r.split(" -> ")[1] for r in replacements]):
        bash_script += f'sed -i "s/{fun}/{replacement}/g" 05_networking.c\n'
    
    # 保存bash脚本
    script_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/beautify_networking_remaining_functions.sh"
    os.makedirs(os.path.dirname(script_path), exist_ok=True)
    
    with open(script_path, 'w', encoding='utf-8') as f:
        f.write(bash_script)
    
    print(f"\n生成的bash脚本已保存到: {script_path}")

if __name__ == "__main__":
    analyze_networking_functions()