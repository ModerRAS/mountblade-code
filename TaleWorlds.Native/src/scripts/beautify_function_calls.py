#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re
import sys

# 函数名映射字典
function_mapping = {
    'FUN_1802265d0': 'ProcessSystemResourceDataExtended',
    'FUN_18004c2b0': 'InitializeSystemConfiguration',
    'FUN_1806272a0': 'ConfigureSystemDataTemplate',
    'FUN_1800f98e0': 'GetSystemConfigurationValue',
    'FUN_1800f96b0': 'SetSystemConfigurationValue',
    'FUN_180055f70': 'UpdateSystemStatusFlags',
    'FUN_180092940': 'ProcessRenderManagerData',
    'FUN_18005db30': 'ResumeSystemThreads',
    'FUN_18005d190': 'ConfigureSystemResourceParameters',
    'FUN_1800a32b0': 'InitializeTextureManager',
    'FUN_180627e10': 'AllocateSystemMemoryBuffer',
    'FUN_1800f93e0': 'InitializeSystemMemoryManager',
    'FUN_180074090': 'ProcessSystemResourceAllocation',
    'FUN_180073ad0': 'CleanupSystemResourceData',
    'FUN_1800739f0': 'ResetResourceManager',
    'FUN_180074a80': 'ProcessSystemResourcePool',
    'FUN_180639ec0': 'InitializeSystemSecurityContext',
    'FUN_180639bf0': 'CopySystemMemoryData',
    'FUN_180074b30': 'AllocateSystemResourceMemory',
    'FUN_1802abe00': 'CalculateSystemMemoryAddress',
    'FUN_1800b55b0': 'ReleaseSystemMemoryBuffer',
    'FUN_180074c20': 'ExpandSystemResourceManagerHashTable',
    'FUN_1800756e0': 'InitializeSystemResourceManager',
    'FUN_180080060': 'ConfigureSystemMemoryRegion',
    'FUN_180080870': 'InitializeSystemResourceTable',
    'FUN_1800809a0': 'ConfigureSystemResourceTable',
    'FUN_180075990': 'ConfigureSystemResourceManager',
    'FUN_18007f4c0': 'InitializeSystemSecurityContext',
    'FUN_18007f770': 'ProcessSystemOperationCounter',
    'FUN_1800860f0': 'ConfigureSystemResourcePointer',
    'FUN_180085fb0': 'InitializeSystemResourceData',
    'FUN_180085ec0': 'ConfigureSystemResourceParameters',
    'FUN_18007f840': 'FinalizeSystemOperation',
    'FUN_18007f6a0': 'CleanupSystemSecurityContext',
    'FUN_180085c10': 'InitializeSystemUnsignedFlag',
    'FUN_18063a240': 'ProcessSystemFloatData',
    'FUN_180085ac0': 'SetSystemFloatValue',
    'FUN_180085970': 'GetSystemUnsignedFlag',
    'FUN_1800791a0': 'ValidateSystemResourceManager',
    'FUN_180085900': 'AllocateSystemResourcePool',
    'FUN_180049910': 'InitializeSystemDataPointer',
    'FUN_1800861a0': 'GetCharacterInputData',
    'FUN_18063a240': 'ProcessSystemDataOperation',
    'FUN_1800b9f60': 'CleanupSystemDataPointer',
    'FUN_18022f2e0': 'InitializeSystemEncryptionContext',
    'FUN_18022f9b0': 'ProcessSystemEncryptionData',
    'FUN_18022f410': 'CleanupSystemEncryptionContext',
    'FUN_18022f390': 'ValidateSystemEncryptionData',
    'FUN_18023b050': 'ProcessResourceDataOffset',
    'FUN_180240430': 'AllocateSystemMemoryContext',
    'FUN_180237d00': 'ValidateSystemMemoryContext',
    'FUN_180075b70': 'ReleaseSystemMemoryContext',
    'FUN_18022d470': 'GetSystemValue',
    'FUN_180076b90': 'GetSystemOperationStatus',
    'FUN_1800b6f90': 'ConfigureSystemResourceData',
    'FUN_18007b1e0': 'CleanupSystemResourceData',
    'FUN_18066c220': 'ProcessSystemResourceCounter',
    'FUN_180083b20': 'UpdateSystemThreadContext',
    'FUN_180080df0': 'InitializeSystemThreadContext',
    'FUN_180084ea0': 'GetSystemConfigurationFlags',
    'FUN_18007ee70': 'ValidateSystemResourceData',
    'FUN_1800e94a0': 'InitializeSystemHashNodeData',
    'FUN_180080e90': 'ConfigureSystemResourceBuffer',
    'FUN_180085190': 'ProcessSystemStackBuffer',
    'FUN_18024a290': 'ConfigureSystemSecurityParameters',
    'FUN_180077150': 'CleanupSystemResourceManager',
    'FUN_18007b240': 'ProcessSystemThreadData',
    'FUN_180252ca0': 'CreateSystemThread',
    'FUN_180078550': 'InitializeSystemResourceManagerEx',
    'FUN_180084ae0': 'AllocateSystemMemory',
    'FUN_180084760': 'ConfigureSystemMemoryAllocation',
    'FUN_180084c70': 'ProcessSystemMemoryData',
    'FUN_1800786e0': 'ConfigureSystemResourceManagerEx',
    'FUN_180080380': 'CalculateSystemResourceAddress',
    'FUN_1800802e0': 'ProcessSystemResourceAddress',
    'FUN_1802349a0': 'GetSystemFloatValue',
    'FUN_180079520': 'InitializeSystemSecurityManager',
}

def replace_function_calls(content):
    """替换函数调用"""
    for old_name, new_name in function_mapping.items():
        # 替换函数调用
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    return content

def main():
    if len(sys.argv) != 2:
        print("Usage: python beautify_functions.py <filename>")
        sys.exit(1)
    
    filename = sys.argv[1]
    
    try:
        with open(filename, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 替换函数调用
        content = replace_function_calls(content)
        
        with open(filename, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"Successfully beautified function calls in {filename}")
        
    except Exception as e:
        print(f"Error processing {filename}: {e}")

if __name__ == "__main__":
    main()