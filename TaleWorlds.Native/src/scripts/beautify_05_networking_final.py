#!/usr/bin/env python3
"""
批量替换05_networking.c中的未美化函数名
"""

import re

def beautify_networking_functions():
    """美化网络相关函数名"""
    
    # 函数名映射字典
    function_mappings = {
        'func_0x000180874320': 'GetNetworkProcessingStartTime',
        'func_0x000180879a50': 'GetNetworkProcessingStartTimePointer',
        'func_0x0001808e64e0': 'GetNetworkPrimaryStatus',
        'func_0x0001808e64d0': 'GetNetworkValidationStatus',
        'FUN_180876180': 'ProcessNetworkResourceLock',
        'FUN_18088d0c0': 'InitializeNetworkProcessing',
        'FUN_18088af30': 'ProcessNetworkConnectionTimeout',
    }
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 批量替换函数名
    for old_name, new_name in function_mappings.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("函数名美化完成")

if __name__ == "__main__":
    beautify_networking_functions()