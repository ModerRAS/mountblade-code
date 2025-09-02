#!/usr/bin/env python3
"""
替换FUN_1800f98e0为GetSystemContextFlag的脚本
"""

import os
import re
from pathlib import Path

def replace_function_in_file(file_path):
    """替换文件中的函数名"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 统计替换次数
        original_count = content.count('FUN_1800f98e0')
        
        if original_count == 0:
            return 0
        
        # 替换函数调用
        content = re.sub(r'FUN_1800f98e0\s*\(', 'GetSystemContextFlag(', content)
        
        # 替换函数定义（在99_unmatched_functions.c中）
        content = re.sub(r'undefined4 FUN_1800f98e0\(', 'undefined4 GetSystemContextFlag(', content)
        
        # 替换头文件声明
        content = re.sub(r'undefined4 FUN_1800f98e0\(', 'undefined4 GetSystemContextFlag(', content)
        
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        return original_count
    except Exception as e:
        print(f"处理文件 {file_path} 时出错: {e}")
        return 0

def main():
    """主函数"""
    base_dir = "/dev/shm/mountblade-code/TaleWorlds.Native"
    
    # 需要处理的文件列表
    files_to_process = [
        "src/01_initialization.c",
        "src/02_core_engine.c", 
        "src/99_unmatched_functions.c",
        "TaleWorlds.Native.dll.h",
        "TaleWorlds.Native.dll.c"
    ]
    
    total_replacements = 0
    
    print("开始替换 FUN_1800f98e0 为 GetSystemContextFlag...")
    
    for file_name in files_to_process:
        file_path = os.path.join(base_dir, file_name)
        
        if os.path.exists(file_path):
            replacements = replace_function_in_file(file_path)
            if replacements > 0:
                print(f"文件 {file_name}: 替换了 {replacements} 处")
                total_replacements += replacements
        else:
            print(f"文件不存在: {file_path}")
    
    print(f"\n总共替换了 {total_replacements} 处")
    
    # 在99_unmatched_functions.c中添加函数注释
    unmatched_file = os.path.join(base_dir, "src/99_unmatched_functions.c")
    if os.path.exists(unmatched_file):
        add_function_comment(unmatched_file)

def add_function_comment(file_path):
    """在函数定义前添加注释"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 查找函数定义位置
        function_pattern = r'(undefined4 GetSystemContextFlag\(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 formatFlags\))'
        
        replacement = r'''// 获取系统上下文标志
// 从系统数据缓冲区中提取和处理系统配置信息，返回系统状态标志
// 用于系统初始化、配置验证和上下文管理
\1'''
        
        content = re.sub(function_pattern, replacement, content)
        
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"已在 {file_path} 中添加函数注释")
    except Exception as e:
        print(f"添加注释时出错: {e}")

if __name__ == "__main__":
    main()