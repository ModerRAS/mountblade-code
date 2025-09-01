#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
网络函数美化脚本
用于分析05_networking.c文件中的FUN_函数并提供重命名建议
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

def generate_function_name(function_name, keywords):
    """基于关键词生成语义化函数名"""
    base_name = function_name.replace('FUN_', '')
    
    # 根据关键词生成函数名
    if 'initialize' in keywords or 'init' in keywords:
        if 'network' in keywords:
            return 'InitializeNetwork' + base_name
        elif 'connection' in keywords:
            return 'InitializeConnection' + base_name
        else:
            return 'InitializeSystem' + base_name
    
    elif 'process' in keywords:
        if 'packet' in keywords:
            return 'ProcessNetworkPacket' + base_name
        elif 'data' in keywords:
            return 'ProcessNetworkData' + base_name
        elif 'connection' in keywords:
            return 'ProcessConnection' + base_name
        else:
            return 'ProcessNetworkOperation' + base_name
    
    elif 'send' in keywords or 'transmit' in keywords:
        return 'SendNetworkData' + base_name
    
    elif 'receive' in keywords:
        return 'ReceiveNetworkData' + base_name
    
    elif 'validate' in keywords:
        return 'ValidateNetwork' + base_name
    
    elif 'cleanup' in keywords or 'clean' in keywords:
        return 'CleanupNetwork' + base_name
    
    elif 'handle' in keywords:
        return 'HandleNetwork' + base_name
    
    elif 'buffer' in keywords:
        return 'ManageNetworkBuffer' + base_name
    
    elif 'status' in keywords or 'state' in keywords:
        return 'GetNetworkStatus' + base_name
    
    elif 'error' in keywords:
        return 'HandleNetworkError' + base_name
    
    else:
        return 'NetworkOperation' + base_name

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    print("分析网络文件中的FUN_函数...")
    
    # 提取函数签名
    signatures = extract_function_signatures(file_path)
    print(f"找到 {len(signatures)} 个FUN_函数")
    
    # 分析前20个函数作为示例
    for i, (return_type, function_name) in enumerate(signatures[:20]):
        keywords, context = analyze_function_context(file_path, function_name)
        new_name = generate_function_name(function_name, keywords)
        
        print(f"\n函数 {i+1}: {function_name}")
        print(f"返回类型: {return_type}")
        print(f"关键词: {keywords}")
        print(f"建议名称: {new_name}")
        print("-" * 50)

if __name__ == "__main__":
    main()