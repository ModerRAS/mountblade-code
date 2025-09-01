#!/usr/bin/env python3
"""
批量重命名 FUN_ 函数
"""

import re

def batch_rename_functions(file_path):
    """批量重命名函数"""
    # 函数映射表
    function_mappings = {
        'FUN_1800ade00': 'GetDataPointerByIndex',
        'FUN_1800ae520': 'InitializeDataStructurePointer',
        'FUN_1800a1850': 'GetSystemStatusFlag',
        'FUN_1808fc050': 'ExecuteSecurityOperation',
        'FUN_1800a0a00': 'InitializeDataBuffer',
        'FUN_1800a0c50': 'SetupMemoryBuffer',
        'FUN_1800a1a70': 'ProcessDataParameters',
        'FUN_18009ec20': 'InitializeMemoryBlock',
        'FUN_18009ec80': 'AllocateMemoryRegion',
        'FUN_180626f80': 'ProcessSecurityKey',
        'FUN_1800a19c0': 'FinalizeDataStructure',
        'FUN_18009fb60': 'CleanupMemoryBlock',
        'FUN_180220810': 'ProcessResourceData',
        'FUN_18004a180': 'InitializeResourceHandler',
        'FUN_18062b1e0': 'CreateResourceHandle',
        'FUN_1800ae430': 'ProcessResourceHandle',
        'FUN_18064e990': 'ValidateResourceData',
    }
    
    # 读取文件
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 批量替换
    for old_name, new_name in function_mappings.items():
        # 替换函数定义
        content = re.sub(r'(\b)' + old_name + r'(\b)', new_name, content)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"已重命名 {len(function_mappings)} 个函数")

if __name__ == '__main__':
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c'
    batch_rename_functions(file_path)