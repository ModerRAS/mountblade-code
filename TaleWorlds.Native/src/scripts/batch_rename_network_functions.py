#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
网络函数美化脚本 - 批量处理版本
用于批量重命名05_networking.c文件中的FUN_函数
"""

import re
import os

def extract_function_signatures(file_path):
    """提取函数签名"""
    function_signatures = []
    
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 匹配FUN_函数定义
    pattern = r'^\s*(\w+\s+\*?)?(FUN_[0-9a-fA-F]+)\s*\([^)]*\)\s*\{'
    matches = re.finditer(pattern, content, re.MULTILINE)
    
    for match in matches:
        return_type = match.group(1) or ''
        function_name = match.group(2)
        function_signatures.append((return_type, function_name))
    
    return function_signatures

def analyze_function_context(file_path, function_name):
    """分析函数上下文以确定其用途"""
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找函数定义位置
    pattern = rf'\b{function_name}\s*\([^)]*\)\s*\{{'
    match = re.search(pattern, content)
    
    if match:
        start_pos = match.start()
        # 获取函数定义前后的上下文
        context_start = max(0, start_pos - 500)
        context_end = min(len(content), start_pos + 2000)
        context = content[context_start:context_end]
        
        # 分析上下文中的关键词
        network_keywords = [
            'network', 'connection', 'socket', 'packet', 'data', 'buffer',
            'send', 'receive', 'transmit', 'transfer', 'protocol',
            'handle', 'context', 'state', 'status', 'error',
            'initialize', 'cleanup', 'validate', 'process',
            'client', 'server', 'host', 'port', 'address'
        ]
        
        found_keywords = []
        for keyword in network_keywords:
            if keyword.lower() in context.lower():
                found_keywords.append(keyword)
        
        return found_keywords, context
    
    return [], ''

def generate_function_name(function_name, keywords, return_type):
    """基于关键词和返回类型生成语义化函数名"""
    base_name = function_name.replace('FUN_', '')
    
    # 根据返回类型和关键词生成函数名
    if 'NetworkHandle' in return_type:
        if 'void' not in return_type:
            if 'connection' in keywords:
                return f'GetNetworkConnection{base_name[-4:]}'
            elif 'handle' in keywords:
                return f'GetNetworkHandle{base_name[-4:]}'
            else:
                return f'CreateNetworkHandle{base_name[-4:]}'
        else:
            return f'ProcessNetworkHandle{base_name[-4:]}'
    
    elif 'void' in return_type:
        if 'initialize' in keywords or 'init' in keywords:
            return f'InitializeNetwork{base_name[-4:]}'
        elif 'process' in keywords:
            if 'packet' in keywords:
                return f'ProcessNetworkPacket{base_name[-4:]}'
            elif 'data' in keywords:
                return f'ProcessNetworkData{base_name[-4:]}'
            elif 'connection' in keywords:
                return f'ProcessConnection{base_name[-4:]}'
            else:
                return f'ProcessNetworkOperation{base_name[-4:]}'
        elif 'send' in keywords or 'transmit' in keywords:
            return f'SendNetworkData{base_name[-4:]}'
        elif 'receive' in keywords:
            return f'ReceiveNetworkData{base_name[-4:]}'
        elif 'cleanup' in keywords or 'clean' in keywords:
            return f'CleanupNetwork{base_name[-4:]}'
        elif 'validate' in keywords:
            return f'ValidateNetwork{base_name[-4:]}'
        elif 'buffer' in keywords:
            return f'ManageNetworkBuffer{base_name[-4:]}'
        else:
            return f'NetworkOperation{base_name[-4:]}'
    
    elif 'int' in return_type:
        if 'status' in keywords or 'state' in keywords:
            return f'GetNetworkStatus{base_name[-4:]}'
        elif 'validate' in keywords:
            return f'ValidateNetwork{base_name[-4:]}'
        else:
            return f'GetNetworkValue{base_name[-4:]}'
    
    elif 'NetworkStatus' in return_type:
        return f'GetNetworkStatus{base_name[-4:]}'
    
    else:
        return f'NetworkFunction{base_name[-4:]}'

def create_rename_commands(file_path, output_path):
    """创建重命名命令"""
    signatures = extract_function_signatures(file_path)
    
    print(f"找到 {len(signatures)} 个FUN_函数")
    
    rename_commands = []
    
    for return_type, function_name in signatures:
        keywords, context = analyze_function_context(file_path, function_name)
        new_name = generate_function_name(function_name, keywords, return_type)
        
        rename_commands.append((function_name, new_name, return_type, keywords))
    
    # 生成重命名脚本
    with open(output_path, 'w', encoding='utf-8') as f:
        f.write("#!/bin/bash\n")
        f.write("# 网络模块函数重命名脚本\n")
        f.write("# 批量重命名05_networking.c中的FUN_函数\n\n")
        
        for old_name, new_name, return_type, keywords in rename_commands:
            f.write(f"# {old_name} -> {new_name}\n")
            f.write(f"# 返回类型: {return_type}, 关键词: {keywords}\n")
            f.write(f"sed -i 's/{old_name}/{new_name}/g' {file_path}\n\n")
    
    print(f"重命名脚本已生成: {output_path}")
    return rename_commands

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    output_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/batch_rename_network_functions.sh'
    
    print("开始分析网络文件中的FUN_函数...")
    
    rename_commands = create_rename_commands(file_path, output_path)
    
    print(f"\n生成了 {len(rename_commands)} 个重命名命令")
    print("前10个重命名示例:")
    
    for i, (old_name, new_name, return_type, keywords) in enumerate(rename_commands[:10]):
        print(f"{i+1}. {old_name} -> {new_name}")
        print(f"   返回类型: {return_type}")
        print(f"   关键词: {keywords}")
        print()

if __name__ == "__main__":
    main()