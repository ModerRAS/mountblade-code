#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
系统性美化01_initialization.c文件中的变量名
将小写开头的变量名改为大写开头，遵循PascalCase命名规范
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

def find_functions_with_lowercase_vars(content):
    """找到包含小写变量名的函数"""
    # 匹配函数定义
    function_pattern = r'(void\s+\w+\s*\([^)]*\)\s*\{[\s\S]*?\n\s*\})'
    functions = re.finditer(function_pattern, content)
    
    functions_to_process = []
    for match in functions:
        function_content = match.group(1)
        # 检查是否包含小写变量名
        if re.search(r'\b(char|int|long|void|\*\*)\s+[a-z]', function_content):
            functions_to_process.append((match.start(), match.end(), function_content))
    
    return functions_to_process

def capitalize_variable_name(var_name):
    """将变量名首字母大写"""
    if not var_name:
        return var_name
    
    # 处理指针类型
    if var_name.startswith('*'):
        return '*' + capitalize_variable_name(var_name[1:])
    
    # 处理数组类型
    if '[' in var_name:
        base_name = var_name.split('[')[0]
        array_part = '[' + var_name.split('[', 1)[1]
        return capitalize_variable_name(base_name) + array_part
    
    # 将首字母大写
    return var_name[0].upper() + var_name[1:] if var_name else var_name

def process_function_variables(function_content):
    """处理函数中的变量名"""
    lines = function_content.split('\n')
    processed_lines = []
    
    # 记录变量名映射
    var_mapping = {}
    
    for line in lines:
        # 匹配变量声明
        var_decl_pattern = r'\b(char|int|long|void|\*\*)\s+([a-z][a-zA-Z0-9_]*)\s*(;|,|\[|\))'
        processed_line = line
        
        def replace_var_decl(match):
            var_type = match.group(1)
            var_name = match.group(2)
            separator = match.group(3)
            
            # 如果是新的变量名，创建映射
            if var_name not in var_mapping:
                capitalized_name = capitalize_variable_name(var_name)
                var_mapping[var_name] = capitalized_name
            
            return f'{var_type} {var_mapping[var_name]}{separator}'
        
        processed_line = re.sub(var_decl_pattern, replace_var_decl, processed_line)
        
        # 替换变量使用
        for original_var, capitalized_var in var_mapping.items():
            # 只替换完整的单词，避免替换函数名或其他标识符
            word_pattern = r'\b' + re.escape(original_var) + r'\b'
            processed_line = re.sub(word_pattern, capitalized_var, processed_line)
        
        processed_lines.append(processed_line)
    
    return '\n'.join(processed_lines)

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    print("开始系统性美化变量名...")
    
    # 读取文件
    content = read_file(file_path)
    
    # 找到需要处理的函数
    functions_to_process = find_functions_with_lowercase_vars(content)
    
    print(f"找到 {len(functions_to_process)} 个需要美化的函数")
    
    # 从后往前处理，避免位置偏移
    for start, end, function_content in reversed(functions_to_process):
        processed_function = process_function_variables(function_content)
        content = content[:start] + processed_function + content[end:]
        print(f"已处理一个函数")
    
    # 写入文件
    write_file(file_path, content)
    
    print("变量名美化完成！")

if __name__ == "__main__":
    main()