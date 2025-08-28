#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
数据定义文件转译脚本
将FUN_、DAT_、UNK_开头的标识符转译为语义化名称
"""

import re
import os
from collections import defaultdict

def analyze_patterns(file_path):
    """分析文件中的模式"""
    patterns = {
        'functions': defaultdict(list),
        'variables': defaultdict(list),
        'unknowns': defaultdict(list)
    }
    
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 分析函数模式
    fun_pattern = r'FUN_180([a-f0-9]+)'
    for match in re.finditer(fun_pattern, content):
        patterns['functions'][match.group(1)].append(match.group(0))
    
    # 分析变量模式
    dat_pattern = r'DAT_180([a-f0-9]+)'
    for match in re.finditer(dat_pattern, content):
        patterns['variables'][match.group(1)].append(match.group(0))
    
    # 分析未知模式
    unk_pattern = r'UNK_180([a-f0-9]+)'
    for match in re.finditer(unk_pattern, content):
        patterns['unknowns'][match.group(1)].append(match.group(0))
    
    return patterns

def generate_function_name(address):
    """根据地址生成语义化函数名"""
    # 根据地址范围推断函数类型
    addr_int = int(address, 16)
    
    # 基于地址范围的启发式命名
    if '02ce' in address:
        return f'initialize_module_{address[-4:]}'
    elif '02d0' in address:
        return f'setup_thread_{address[-4:]}'
    elif '02e4' in address:
        return f'register_string_{address[-4:]}'
    elif '02f0' in address:
        return f'create_object_{address[-4:]}'
    elif '0300' in address:
        return f'process_data_{address[-4:]}'
    elif '0310' in address:
        return f'validate_input_{address[-4:]}'
    elif '0320' in address:
        return f'handle_event_{address[-4:]}'
    elif '0330' in address:
        return f'manage_resource_{address[-4:]}'
    elif '0340' in address:
        return f'configure_system_{address[-4:]}'
    elif '0350' in address:
        return f'execute_operation_{address[-4:]}'
    else:
        return f'function_{address}'

def generate_variable_name(address):
    """根据地址生成语义化变量名"""
    if 'bf5' in address:
        return f'control_flag_{address[-4:]}'
    elif 'bf6' in address:
        return f'status_register_{address[-4:]}'
    elif 'c91' in address:
        return f'thread_mutex_{address[-4:]}'
    elif '98c' in address:
        return f'system_buffer_{address[-4:]}'
    elif '98b' in address:
        return f'data_pointer_{address[-4:]}'
    elif '9fc' in address:
        return f'memory_block_{address[-4:]}'
    elif 'a00' in address:
        return f'string_constant_{address[-4:]}'
    elif '9fd' in address:
        return f'reference_table_{address[-4:]}'
    else:
        return f'variable_{address}'

def generate_unknown_name(address):
    """根据地址生成语义化未知常量名"""
    if '98c' in address:
        return f'system_constant_{address[-4:]}'
    elif '98b' in address:
        return f'base_address_{address[-4:]}'
    elif '9fc' in address:
        return f'fixed_pointer_{address[-4:]}'
    elif 'a00' in address:
        return f'string_data_{address[-4:]}'
    elif '9fd' in address:
        return f'table_reference_{address[-4:]}'
    else:
        return f'constant_{address}'

def translate_file(input_path, output_path):
    """转译文件"""
    print(f"开始转译文件: {input_path}")
    
    # 分析模式
    patterns = analyze_patterns(input_path)
    
    print(f"发现 {len(patterns['functions'])} 个函数模式")
    print(f"发现 {len(patterns['variables'])} 个变量模式")
    print(f"发现 {len(patterns['unknowns'])} 个未知模式")
    
    # 读取原始文件
    with open(input_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 创建替换映射
    replacements = {}
    
    # 函数替换
    for address, functions in patterns['functions'].items():
        new_name = generate_function_name(address)
        for old_name in set(functions):
            replacements[old_name] = new_name
    
    # 变量替换
    for address, variables in patterns['variables'].items():
        new_name = generate_variable_name(address)
        for old_name in set(variables):
            replacements[old_name] = new_name
    
    # 未知常量替换
    for address, unknowns in patterns['unknowns'].items():
        new_name = generate_unknown_name(address)
        for old_name in set(unknowns):
            replacements[old_name] = new_name
    
    # 执行替换
    translated_content = content
    for old_name, new_name in replacements.items():
        translated_content = translated_content.replace(old_name, new_name)
    
    # 添加注释
    lines = translated_content.split('\n')
    commented_lines = []
    
    for line in lines:
        # 为函数定义添加注释
        if 'int ' in line and '(' in line and ')' in line and '{' in line:
            func_name = line.split('int ')[1].split('(')[0].strip()
            if 'initialize' in func_name:
                line = f"    // 初始化函数 - {func_name}\n{line}"
            elif 'setup' in func_name:
                line = f"    // 设置函数 - {func_name}\n{line}"
            elif 'register' in func_name:
                line = f"    // 注册函数 - {func_name}\n{line}"
            elif 'create' in func_name:
                line = f"    // 创建函数 - {func_name}\n{line}"
            elif 'process' in func_name:
                line = f"    // 处理函数 - {func_name}\n{line}"
            elif 'validate' in func_name:
                line = f"    // 验证函数 - {func_name}\n{line}"
            elif 'handle' in func_name:
                line = f"    // 处理函数 - {func_name}\n{line}"
            elif 'manage' in func_name:
                line = f"    // 管理函数 - {func_name}\n{line}"
            elif 'configure' in func_name:
                line = f"    // 配置函数 - {func_name}\n{line}"
            elif 'execute' in func_name:
                line = f"    // 执行函数 - {func_name}\n{line}"
        
        commented_lines.append(line)
    
    # 写入转译后的文件
    with open(output_path, 'w', encoding='utf-8') as f:
        f.write('\n'.join(commented_lines))
    
    print(f"转译完成，输出文件: {output_path}")
    return replacements

if __name__ == "__main__":
    input_file = "/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"
    output_file = "/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/pretty/00/00_data_definitions.h"
    
    translate_file(input_file, output_file)