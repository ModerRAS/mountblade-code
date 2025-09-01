#!/usr/bin/env python3
"""
99_unmatched_functions.c 函数美化脚本
用于重命名 FUN_ 函数为语义化名称
"""

import re
import sys

def analyze_function_patterns(file_path):
    """分析文件中的函数模式"""
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找所有 FUN_ 函数定义
    function_patterns = re.findall(r'^undefined.*?FUN_(\w+).*?\n\{', content, re.MULTILINE)
    
    # 查找所有 FUN_ 函数调用
    call_patterns = re.findall(r'FUN_(\w+)\(', content)
    
    return {
        'function_definitions': function_patterns,
        'function_calls': call_patterns
    }

def generate_function_mappings():
    """生成函数名称映射"""
    mappings = {
        # 数据访问函数
        '1800ade00': 'GetDataPointerByIndex',
        '1800ae520': 'ProcessDataPointer',
        '1800a0a00': 'InitializeDataStructure',
        '1800a0c50': 'SetupDataBuffer',
        '1800a1850': 'GetSystemStatus',
        '1800a1a70': 'ProcessDataParameters',
        '18009ec20': 'InitializeMemoryBuffer',
        '18009ec80': 'AllocateMemoryBlock',
        '180626f80': 'ProcessSecurityKey',
        '1800a19c0': 'FinalizeDataStructure',
        '18009fb60': 'CleanupMemoryBuffer',
        '1808fc050': 'ExecuteSecurityOperation',
        '180220810': 'ProcessResourceData',
        '18004a180': 'InitializeResourceHandler',
        '18062b1e0': 'CreateResourceHandle',
        '1800ae430': 'ProcessResourceHandle',
        '18064e990': 'ValidateResourceData',
        
        # 系统函数
        '1800a1a70': 'ProcessSystemParameters',
        '18009ec20': 'InitializeSystemBuffer',
        '18009ec80': 'AllocateSystemMemory',
        '180626f80': 'ValidateSystemAccess',
        '1800a19c0': 'FinalizeSystemOperation',
        '18009fb60': 'CleanupSystemResources',
        '180220810': 'ProcessSystemResource',
        '18004a180': 'InitializeSystemHandler',
        '18062b1e0': 'CreateSystemHandle',
        '1800ae430': 'ProcessSystemHandle',
        '18064e990': 'ValidateSystemData',
        
        # 通用函数
        '1800a1850': 'GetStatusValue',
        '1808fc050': 'ExecuteOperation',
        '1800a0a00': 'InitializeStructure',
        '1800a0c50': 'SetupBuffer',
    }
    
    return mappings

def rename_functions(content, mappings):
    """重命名函数"""
    for old_name, new_name in mappings.items():
        # 替换函数定义
        content = re.sub(r'FUN_' + old_name + r'\b', new_name, content)
        # 替换函数调用
        content = re.sub(r'FUN_' + old_name + r'\b', new_name, content)
    
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c'
    
    # 分析函数模式
    patterns = analyze_function_patterns(file_path)
    print(f"找到 {len(patterns['function_definitions'])} 个函数定义")
    print(f"找到 {len(patterns['function_calls'])} 个函数调用")
    
    # 生成映射
    mappings = generate_function_mappings()
    print(f"生成了 {len(mappings)} 个函数映射")
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 重命名函数
    new_content = rename_functions(content, mappings)
    
    # 写入文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(new_content)
    
    print("函数重命名完成")

if __name__ == '__main__':
    main()