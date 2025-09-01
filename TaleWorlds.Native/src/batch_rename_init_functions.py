#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量重命名01_initialization.c文件中的FUN_函数
"""

import re
import os

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def find_function_definitions(content):
    """查找所有FUN_函数定义"""
    pattern = r'^[a-zA-Z_][a-zA-Z0-9_]*\s+(FUN_[0-9a-fA-F]+)\s*\([^)]*\)\s*\{'
    matches = re.finditer(pattern, content, re.MULTILINE)
    return [(match.group(1), match.start(), match.end()) for match in matches]

def generate_function_name(fun_name):
    """根据FUN_名称生成有意义的函数名"""
    # 这里可以根据函数的具体功能生成更有意义的名称
    # 现在先使用通用的名称
    function_mappings = {
        'FUN_180057340': 'ProcessSystemResourceWithFlag',
        'FUN_18005736b': 'InitializeSystemResourceExtended',
        'FUN_180057479': 'SetupSystemResourceParameters',
        'FUN_180057490': 'ConfigureSystemResourceContext',
        'FUN_1800574b0': 'CleanupSystemResource',
    }
    
    # 如果有预定义的映射，使用它
    if fun_name in function_mappings:
        return function_mappings[fun_name]
    
    # 否则使用通用名称
    return f"SystemFunction_{fun_name.lower()}"

def create_function_comment(fun_name, new_name):
    """创建函数注释"""
    return f"""/**
 * @brief 系统功能函数
 * 
 * 该函数负责处理系统相关的操作，是系统功能的重要组成部分。
 * 原始函数名为{fun_name}，现已重命名为{new_name}。
 * 
 * @note 这是系统功能的核心函数
 */"""

def rename_functions(content):
    """重命名所有FUN_函数"""
    functions = find_function_definitions(content)
    
    # 按位置倒序处理，避免位置偏移
    functions.sort(key=lambda x: x[1], reverse=True)
    
    for fun_name, start, end in functions:
        # 提取完整的函数定义行
        line_start = content.rfind('\n', 0, start) + 1
        line_end = content.find('\n', end)
        if line_end == -1:
            line_end = len(content)
        
        function_line = content[line_start:line_end]
        
        # 生成新的函数名
        new_name = generate_function_name(fun_name)
        
        # 创建注释
        comment = create_function_comment(fun_name, new_name)
        
        # 替换函数名
        new_function_line = function_line.replace(fun_name, new_name)
        
        # 构建新的函数定义
        new_definition = f"{comment}\n{new_function_line}"
        
        # 替换原内容
        content = content[:line_start] + new_definition + content[line_end:]
    
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    print("开始处理01_initialization.c文件...")
    
    # 读取文件
    content = read_file(file_path)
    
    # 重命名函数
    new_content = rename_functions(content)
    
    # 写入文件
    write_file(file_path, new_content)
    
    print("函数重命名完成！")

if __name__ == '__main__':
    main()