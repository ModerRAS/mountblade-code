#!/usr/bin/env python3
"""
网络模块函数重命名脚本
用于批量重命名05_networking.c文件中的FUN_函数
"""

import re
import sys

def analyze_function_patterns(file_path):
    """分析文件中的函数模式"""
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找所有FUN_函数定义
    function_definitions = re.findall(r'^[a-zA-Z_].*FUN_[0-9a-f]+.*\(.*\)$', content, re.MULTILINE)
    
    # 查找所有FUN_函数调用
    function_calls = re.findall(r'FUN_[0-9a-f]+\([^)]*\)', content)
    
    return function_definitions, function_calls

def generate_function_name(function_signature, function_id):
    """根据函数签名生成有意义的函数名"""
    # 分析函数参数和返回类型来确定功能
    if 'NetworkHandle' in function_signature:
        if 'void' in function_signature:
            return f"NetworkConnectionHandler_{function_id[-4:]}"
        elif '*' in function_signature:
            return f"GetNetworkConnectionPtr_{function_id[-4:]}"
        else:
            return f"ProcessNetworkConnection_{function_id[-4:]}"
    elif 'void' in function_signature:
        if 'connectionContext' in function_signature:
            return f"InitializeNetworkContext_{function_id[-4:]}"
        else:
            return f"NetworkSystemOperation_{function_id[-4:]}"
    elif 'int' in function_signature:
        return f"GetNetworkStatus_{function_id[-4:]}"
    elif 'NetworkStatus' in function_signature:
        return f"ValidateNetworkStatus_{function_id[-4:]}"
    else:
        return f"NetworkFunction_{function_id[-4:]}"

def create_rename_script(file_path, output_path):
    """创建重命名脚本"""
    function_definitions, function_calls = analyze_function_patterns(file_path)
    
    print(f"发现 {len(function_definitions)} 个函数定义")
    print(f"发现 {len(function_calls)} 个函数调用")
    
    # 创建函数ID到新名称的映射
    function_map = {}
    for func_def in function_definitions:
        match = re.search(r'FUN_([0-9a-f]+)', func_def)
        if match:
            function_id = match.group(1)
            old_name = f"FUN_180{function_id}"
            new_name = generate_function_name(func_def, function_id)
            function_map[old_name] = new_name
    
    # 生成重命名命令
    with open(output_path, 'w', encoding='utf-8') as f:
        f.write("#!/bin/bash\n")
        f.write("# 网络模块函数重命名脚本\n\n")
        
        for old_name, new_name in function_map.items():
            f.write(f"# 重命名 {old_name} -> {new_name}\n")
            f.write(f"sed -i 's/{old_name}/{new_name}/g' {file_path}\n")
            f.write("\n")
    
    print(f"重命名脚本已生成: {output_path}")
    return function_map

def main():
    if len(sys.argv) != 3:
        print("用法: python rename_network_functions.py <输入文件> <输出脚本>")
        sys.exit(1)
    
    input_file = sys.argv[1]
    output_script = sys.argv[2]
    
    function_map = create_rename_script(input_file, output_script)
    
    print("\n函数重命名映射:")
    for old_name, new_name in sorted(function_map.items()):
        print(f"  {old_name} -> {new_name}")

if __name__ == "__main__":
    main()