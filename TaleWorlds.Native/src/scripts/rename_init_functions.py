#!/usr/bin/env python3
"""
批量重命名01_initialization.c中的FUN_函数
"""

import re
import os

def read_file(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(filepath, content):
    with open(filepath, 'w', encoding='utf-8') as f:
        f.write(content)

def rename_functions(content):
    # 函数重命名映射
    function_map = {
        'FUN_18006cd80': 'ProcessSystemResourceData',
        'FUN_18006cf00': 'InitializeSystemResourceManager',
        'FUN_18006d810': 'ManageSystemResourceAllocation',
        'FUN_18006da90': 'GetSystemResourceHash',
        'FUN_18006d920': 'CalculateAndFindSystemResourceManager',
        'FUN_18006dcb0': 'ConfigureResourceManagerData',
        'FUN_18006da50': 'ProcessSystemResourceData',
        'FUN_18006dc10': 'CleanupSystemResourceData',
        'FUN_180069130': 'UpdateSystemConfigurationData',
        'FUN_18006e5d0': 'CleanupSystemResourceArray',
        'FUN_18006e640': 'CleanupSystemResourceBatch',
        'FUN_18006e140': 'InitializeSystemThreadObject'
    }
    
    # 执行重命名
    for old_name, new_name in function_map.items():
        # 替换函数调用
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
        # 替换函数定义中的注释
        content = re.sub(r'// 函数: .*?' + old_name + r'\(', '// 函数: ' + new_name + '(', content)
        # 替换函数名注释
        content = re.sub(r'\*' + old_name + r'：', '*' + new_name + '：', content)
    
    return content

def main():
    filepath = 'TaleWorlds.Native/src/01_initialization.c'
    
    print("正在读取文件...")
    content = read_file(filepath)
    
    print("正在重命名函数...")
    content = rename_functions(content)
    
    print("正在写入文件...")
    write_file(filepath, content)
    
    print("完成！")

if __name__ == "__main__":
    main()