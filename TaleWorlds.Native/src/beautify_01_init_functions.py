#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
01_initialization.c 函数名美化脚本
批量替换 FUN_ 函数调用为美化的函数名
"""

import re
import sys

# 函数名映射表 (基于注释中的重命名信息)
function_mapping = {
    # 已在注释中提到的函数映射
    'FUN_1800593f0': 'InitializeSystemConfigurationDataRecursive',
    'FUN_180175aa0': 'ValidateSystemMemoryAllocation',
    'FUN_180175f80': 'ProcessSystemDataTransfer',
    'FUN_18062cb00': 'ExecuteSystemOperation',
    'FUN_180058080': 'FindSystemResourceNode',
    'FUN_180624440': 'CheckSystemMemoryStatus',
    'FUN_1801762b0': 'ConfigureSystemDataBuffer',
    'FUN_180059780': 'CopySystemResourceDataExtended',
    'FUN_18005a050': 'CleanupSystemAndProcessBuffers',
    'FUN_18005b7c0': 'ExecuteSystemResourceOperation',
    'FUN_18005b960': 'InitializeSystemResourceManager',
    'FUN_18005d260': 'ProcessSystemResourceConfiguration',
    'FUN_1800ae520': 'ManageSystemResource',
    'FUN_18005b560': 'CleanupSystemResource',
    'FUN_18005ba80': 'InitializeSystemThread',
    'FUN_180049470': 'ReleaseSystemResources',
    'FUN_18005c590': 'ProcessSystemResourceData',
    'FUN_180046190': 'ConfigureSystemResources',
    'FUN_18005caa0': 'ConfigureSystemResourceMemoryAllocator',
    'FUN_18005cdb0': 'GetSystemResourceStatus',
    'FUN_1800b2bd0': 'CheckSystemInputManagerStatus',
    'FUN_18004b9b0': 'FormatSystemResourceOutput',
    'FUN_1806281a0': 'SearchSystemResourceString',
    'FUN_18005e950': 'CloseSystemHandle',
    'FUN_18020e7b0': 'ManageSystemThreads',
    'FUN_180059ee0': 'SuspendSystemThreads',
    'FUN_18005db30': 'ResumeSystemThreads',
    'FUN_18020e410': 'ProcessSystemResources',
    'FUN_18020e840': 'SuspendSystemThreadsB',
    'FUN_18005eb80': 'GetSystemResourceHandle',
    'FUN_18005f220': 'ProcessSystemResourceHandle',
    'FUN_18005f040': 'InitializeSystemResourceBuffer',
    'FUN_18005fb30': 'ConfigureSystemResourceBuffer',
    'FUN_18005f570': 'SetupSystemResourceConfiguration',
    'FUN_18005ee30': 'AllocateSystemResourceMemory',
    'FUN_18005f340': 'ExpandSystemResourceMemory',
    'FUN_18005ff50': 'GetSystemResourcePointer',
    'FUN_180060080': 'ValidateSystemResourcePointer',
    'FUN_18005f430': 'ExpandSystemResourceAllocator',
    'FUN_180060200': 'InitializeSystemResourceAllocator',
    'FUN_180060420': 'ConfigureSystemResourceAllocator',
    'FUN_18020eba0': 'ProcessSystemResourceAllocation',
    'FUN_18020f530': 'CleanupSystemResourceAllocation',
    'FUN_18020e6c0': 'ReleaseSystemResourceAllocation',
    'FUN_18064e0d0': 'ValidateSystemResourceAllocation',
    'FUN_180060e40': 'CheckSystemResourceAvailability',
    'FUN_180060a50': 'ValidateSystemConfiguration',
    'FUN_180060c60': 'ProcessSystemConfiguration',
    'FUN_180060b80': 'UpdateSystemConfiguration',
    'FUN_180639250': 'FinalizeSystemConfiguration',
    'FUN_180060fc0': 'InitializeSystemComponent',
    'FUN_1800611a0': 'ConfigureSystemComponent',
    'FUN_180061290': 'ValidateSystemComponent',
    'FUN_1800612b0': 'CleanupSystemComponent',
    'FUN_180061300': 'ProcessSystemComponent',
    'FUN_18005e1d0': 'HandleSystemResourceOperationA',
    'FUN_18005e250': 'HandleSystemResourceOperationB',
    'FUN_18005e3e0': 'HandleSystemResourceOperationC',
    'FUN_18005e450': 'HandleSystemResourceOperationD',
    'FUN_18005e4d0': 'GetSystemResourceData',
    'FUN_18005e57a': 'ProcessSystemResourceData',
    'FUN_18005e5ff': 'CleanupSystemResourceData',
    'FUN_18005e630': 'ValidateSystemResourceData',
    'FUN_18005e770': 'ConfigureSystemResourceData',
    'FUN_18005ecfc': 'InitializeSystemResourceData',
    'FUN_1800601c0': 'ProcessSystemMemoryOperation',
    'FUN_1800603e0': 'ConfigureSystemMemoryOperation',
    'FUN_1800605d0': 'ValidateSystemMemoryOperation',
    'FUN_180060610': 'ExecuteSystemMemoryOperation',
    'FUN_180060630': 'HandleSystemMemoryOperation',
    'FUN_1800606e0': 'CleanupSystemMemoryOperation',
    'FUN_1800607f0': 'InitializeSystemMemoryHandle',
    'FUN_1800609c0': 'ValidateSystemMemoryHandle',
    'FUN_180060a50': 'ProcessSystemMemoryHandle',
    'FUN_180060b80': 'ConfigureSystemMemoryHandle',
    'FUN_180060bd0': 'GetSystemMemoryHandle',
    'FUN_180060c60': 'SetSystemMemoryHandle',
    'FUN_180060d76': 'CheckSystemMemoryHandle',
    'FUN_180060e22': 'ValidateSystemMemoryStatus',
    'FUN_180060e40': 'ProcessSystemMemoryStatus',
    'FUN_180060f50': 'UpdateSystemMemoryStatus',
    'FUN_180060fc0': 'InitializeSystemMemoryComponent',
    'FUN_1800611a0': 'ConfigureSystemMemoryComponent',
    'FUN_180061290': 'ValidateSystemMemoryComponent',
    'FUN_1800612b0': 'CleanupSystemMemoryComponent',
    'FUN_180061300': 'ProcessSystemMemoryComponent',
    'FUN_18020ee40': 'GetSystemMemoryInformation',
    'FUN_1800496b0': 'ProcessSystemMemoryInformation',
}

def beautify_functions(content):
    """批量替换函数名"""
    for old_name, new_name in function_mapping.items():
        # 只替换函数调用，不替换注释中的内容
        pattern = r'\b' + re.escape(old_name) + r'\b(?!\s*\*|["\']|.*原始函数名为)'
        content = re.sub(pattern, new_name, content)
    return content

def main():
    if len(sys.argv) != 2:
        print("Usage: python3 beautify_01_init_functions.py <input_file>")
        sys.exit(1)
    
    input_file = sys.argv[1]
    
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 执行函数名替换
        beautified_content = beautify_functions(content)
        
        # 写回文件
        with open(input_file, 'w', encoding='utf-8') as f:
            f.write(beautified_content)
        
        print(f"Successfully beautified {input_file}")
        
    except Exception as e:
        print(f"Error processing {input_file}: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()