#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
网络函数美化脚本 - 智能分析版本
用于智能分析05_networking.c文件中的FUN_函数并生成重命名建议
"""

import re
import os

def extract_function_signatures(file_path):
    """提取函数签名"""
    function_signatures = []
    
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 匹配FUN_函数定义
    pattern = r'^\s*([a-zA-Z_][a-zA-Z0-9_]*\s+\*?)?(FUN_[0-9a-fA-F]+)\s*\([^)]*\)\s*\{'
    matches = re.finditer(pattern, content, re.MULTILINE)
    
    for match in matches:
        return_type = match.group(1) or ''
        function_name = match.group(2)
        function_signatures.append((return_type.strip(), function_name))
    
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
        context_start = max(0, start_pos - 300)
        context_end = min(len(content), start_pos + 1000)
        context = content[context_start:context_end]
        
        # 分析上下文中的关键词
        network_keywords = [
            'network', 'connection', 'socket', 'packet', 'data', 'buffer',
            'send', 'receive', 'transmit', 'transfer', 'protocol',
            'handle', 'context', 'state', 'status', 'error',
            'initialize', 'cleanup', 'validate', 'process',
            'client', 'server', 'host', 'port', 'address',
            'security', 'encryption', 'authentication', 'authorization',
            'queue', 'stack', 'memory', 'allocation', 'free',
            'read', 'write', 'flush', 'close', 'open',
            'sync', 'async', 'thread', 'mutex', 'lock'
        ]
        
        found_keywords = []
        for keyword in network_keywords:
            if keyword.lower() in context.lower():
                found_keywords.append(keyword)
        
        # 分析参数类型
        param_types = []
        if 'connectionContext' in context:
            param_types.append('connection_context')
        if 'packetData' in context:
            param_types.append('packet_data')
        if 'dataSize' in context:
            param_types.append('data_size')
        if 'NetworkHandle' in context:
            param_types.append('network_handle')
        
        return found_keywords, param_types, context
    
    return [], [], ''

def generate_function_name(function_name, keywords, param_types, return_type):
    """基于关键词、参数类型和返回类型生成语义化函数名"""
    base_id = function_name.replace('FUN_', '')[-4:]
    
    # 根据返回类型分类
    if 'NetworkHandle' in return_type:
        if '*' in return_type:
            # 返回指针类型
            if 'connection' in keywords:
                return f'GetNetworkConnectionPtr{base_id}'
            elif 'handle' in keywords:
                return f'GetNetworkHandlePtr{base_id}'
            else:
                return f'GetNetworkPtr{base_id}'
        else:
            # 返回值类型
            if 'connection' in keywords:
                return f'CreateNetworkConnection{base_id}'
            elif 'handle' in keywords:
                return f'CreateNetworkHandle{base_id}'
            elif 'validate' in keywords:
                return f'ValidateNetworkHandle{base_id}'
            else:
                return f'GetNetworkHandle{base_id}'
    
    elif 'void' in return_type:
        # 无返回值
        if 'initialize' in keywords or 'init' in keywords:
            if 'connection' in keywords:
                return f'InitializeNetworkConnection{base_id}'
            elif 'context' in keywords:
                return f'InitializeNetworkContext{base_id}'
            else:
                return f'InitializeNetworkSystem{base_id}'
        
        elif 'process' in keywords:
            if 'packet' in keywords:
                return f'ProcessNetworkPacket{base_id}'
            elif 'data' in keywords:
                return f'ProcessNetworkData{base_id}'
            elif 'connection' in keywords:
                return f'ProcessNetworkConnection{base_id}'
            else:
                return f'ProcessNetworkOperation{base_id}'
        
        elif 'send' in keywords or 'transmit' in keywords:
            return f'SendNetworkData{base_id}'
        
        elif 'receive' in keywords:
            return f'ReceiveNetworkData{base_id}'
        
        elif 'cleanup' in keywords or 'clean' in keywords:
            if 'connection' in keywords:
                return f'CleanupNetworkConnection{base_id}'
            else:
                return f'CleanupNetworkSystem{base_id}'
        
        elif 'validate' in keywords:
            return f'ValidateNetwork{base_id}'
        
        elif 'buffer' in keywords:
            return f'ManageNetworkBuffer{base_id}'
        
        elif 'close' in keywords:
            return f'CloseNetworkConnection{base_id}'
        
        elif 'open' in keywords:
            return f'OpenNetworkConnection{base_id}'
        
        else:
            return f'NetworkOperation{base_id}'
    
    elif 'int' in return_type:
        # 整数返回值
        if 'status' in keywords or 'state' in keywords:
            return f'GetNetworkStatus{base_id}'
        elif 'validate' in keywords:
            return f'ValidateNetwork{base_id}'
        elif 'size' in keywords:
            return f'GetNetworkSize{base_id}'
        else:
            return f'GetNetworkValue{base_id}'
    
    elif 'NetworkStatus' in return_type:
        return f'GetNetworkStatus{base_id}'
    
    elif 'longlong' in return_type:
        return f'GetNetworkLongValue{base_id}'
    
    else:
        return f'NetworkFunction{base_id}'

def create_comprehensive_rename_script(file_path, output_path):
    """创建全面的重命名脚本"""
    signatures = extract_function_signatures(file_path)
    
    print(f"找到 {len(signatures)} 个FUN_函数")
    
    rename_commands = []
    
    for return_type, function_name in signatures:
        keywords, param_types, context = analyze_function_context(file_path, function_name)
        new_name = generate_function_name(function_name, keywords, param_types, return_type)
        
        rename_commands.append((function_name, new_name, return_type, keywords, param_types))
    
    # 生成重命名脚本
    with open(output_path, 'w', encoding='utf-8') as f:
        f.write("#!/bin/bash\n")
        f.write("# 网络模块函数重命名脚本\n")
        f.write("# 智能批量重命名05_networking.c中的FUN_函数\n\n")
        
        for old_name, new_name, return_type, keywords, param_types in rename_commands:
            f.write(f"# {old_name} -> {new_name}\n")
            f.write(f"# 返回类型: {return_type}\n")
            f.write(f"# 关键词: {keywords}\n")
            f.write(f"# 参数类型: {param_types}\n")
            f.write(f"sed -i 's/{old_name}/{new_name}/g' {file_path}\n\n")
    
    print(f"重命名脚本已生成: {output_path}")
    return rename_commands

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    output_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/comprehensive_rename_network.sh'
    
    print("开始智能分析网络文件中的FUN_函数...")
    
    rename_commands = create_comprehensive_rename_script(file_path, output_path)
    
    print(f"\n生成了 {len(rename_commands)} 个重命名命令")
    print("前15个重命名示例:")
    
    for i, (old_name, new_name, return_type, keywords, param_types) in enumerate(rename_commands[:15]):
        print(f"{i+1}. {old_name} -> {new_name}")
        print(f"   返回类型: {return_type}")
        print(f"   关键词: {keywords}")
        print(f"   参数类型: {param_types}")
        print()

if __name__ == "__main__":
    main()