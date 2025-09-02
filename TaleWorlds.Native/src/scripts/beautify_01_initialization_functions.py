#!/usr/bin/env python3
"""
批量美化01_initialization.c文件中的函数名
"""

import re
import sys

def beautify_function_names():
    """美化函数名"""
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 函数名映射字典
    function_mappings = {
        'FUN_18006d0b0': 'GetThreadLocalStorageEntry',
        'FUN_18006d4e0': 'GetSystemDataResourcePointer',
        'FUN_18006d6c0': 'ProcessSystemResourceAllocation',
        'FUN_18006d810': 'InitializeSystemResourceContext',
        'FUN_18006e460': 'ConfigureSystemResourceManager',
        'FUN_180072e80': 'ExecuteSystemInitialization',
        'FUN_180073630': 'SetupSystemResourcePool',
        'FUN_180073730': 'InitializeSystemMemoryPool',
        'FUN_180073adc': 'ProcessSystemCleanup',
        'FUN_180073b64': 'HandleSystemResourceRelease',
        'FUN_180073e0b': 'ManageSystemMemoryAllocation',
        'FUN_1800740a2': 'ProcessSystemDataTransfer',
        'FUN_1800742ea': 'InitializeSystemThreadContext',
        'FUN_1800746c0': 'ConfigureSystemDataBuffer',
        'FUN_180074840': 'ProcessSystemResourceAllocation',
        'FUN_1800748d0': 'InitializeSystemThreadManager',
        'FUN_180074a80': 'HandleSystemResourceCleanup',
        'FUN_180074b30': 'ProcessSystemMemoryOperation',
        'FUN_180074c20': 'ExecuteSystemDataOperation',
        'FUN_180074ed0': 'InitializeSystemResourceContext',
        'FUN_180074f70': 'GetSystemResourcePointer',
        'FUN_180075030': 'ConfigureSystemThreadContext',
        'FUN_180075580': 'ProcessSystemMemoryAllocation',
        'FUN_1800755c0': 'ValidateSystemResourceAccess',
        'FUN_180075630': 'HandleSystemResourceConfiguration',
        'FUN_1800756e0': 'ProcessSystemResourceRelease',
        'FUN_180075990': 'InitializeSystemDataProcessor',
        'FUN_180075af0': 'GetSystemResourceHandle',
        'FUN_180075b70': 'ProcessSystemFloatOperation',
        'FUN_180075ff0': 'ConfigureSystemMemoryPool',
    }
    
    # 替换函数名
    for old_name, new_name in function_mappings.items():
        # 替换函数定义
        content = re.sub(rf'\b{old_name}\b', new_name, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"已美化 {len(function_mappings)} 个函数名")

if __name__ == "__main__":
    beautify_function_names()