#!/usr/bin/env python3
"""
批量重命名06_utilities.c文件中的Unwind_函数
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

def generate_unwind_function_name(index):
    """根据索引生成Unwind函数名"""
    # 根据不同的功能类型生成不同的函数名前缀
    categories = [
        "UnwindSystemContext",
        "UnwindResourceHandler", 
        "UnwindMemoryManager",
        "UnwindProcessController",
        "UnwindExceptionHandler",
        "UnwindStackFrame",
        "UnwindThreadContext",
        "UnwindModuleManager",
        "UnwindEventProcessor",
        "UnwindStateController"
    ]
    
    category = categories[index % len(categories)]
    number = (index // len(categories)) + 1
    return f"{category}{number:03d}"

def beautify_unwind_functions(content):
    """美化Unwind函数"""
    # 查找所有Unwind_函数定义
    pattern = r'void (Unwind_[0-9a-fA-F]{8})\(([^)]*)\)'
    
    def replace_function(match):
        old_name = match.group(1)
        params = match.group(2)
        
        # 从已处理的函数映射中获取新名称，如果没有则生成新的
        if not hasattr(beautify_unwind_functions, 'function_map'):
            beautify_unwind_functions.function_map = {}
            beautify_unwind_functions.counter = 0
        
        if old_name not in beautify_unwind_functions.function_map:
            new_name = generate_unwind_function_name(beautify_unwind_functions.counter)
            beautify_unwind_functions.function_map[old_name] = new_name
            beautify_unwind_functions.counter += 1
        
        new_name = beautify_unwind_functions.function_map[old_name]
        
        # 返回美化后的函数定义
        return f'void {new_name}({params})'
    
    # 替换函数定义
    content = re.sub(pattern, replace_function, content)
    
    # 替换函数调用
    for old_name, new_name in beautify_unwind_functions.function_map.items():
        content = content.replace(old_name, new_name)
    
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化Unwind函数
    beautified_content = beautify_unwind_functions(content)
    
    # 写入文件
    write_file(file_path, beautified_content)
    
    print(f"已成功美化 {beautify_unwind_functions.counter} 个Unwind函数")

if __name__ == "__main__":
    main()