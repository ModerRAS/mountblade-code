#!/usr/bin/env python3
"""
网络模块函数美化脚本
用于批量重命名05_networking.c文件中的FUN_函数
"""

import re

def beautify_networking_functions():
    """美化网络模块中的函数名"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 函数名映射表
    function_mappings = {
        'FUN_180890bb8': 'ProcessNetworkConnectionData',
        'FUN_180890c06': 'ValidateNetworkConnectionStateExtended',
        'FUN_180890c66': 'HandleNetworkConnectionEvents',
        'FUN_180890d39': 'UpdateNetworkConnectionStatus',
        'FUN_180890dac': 'ProcessNetworkPacketData',
        'FUN_180890e03': 'ValidateNetworkPacketHeaders',
        'FUN_180890e5c': 'HandleNetworkSecurityValidation',
        'FUN_180890ed2': 'ProcessNetworkDataTransmission',
        'FUN_180890f2c': 'ValidateNetworkDataIntegrity',
        'FUN_180890f7f': 'HandleNetworkConnectionTimeout',
        'FUN_180890fe2': 'ProcessNetworkErrorRecovery',
        'FUN_180891062': 'InitializeNetworkBufferManager',
        'FUN_18089107f': 'ConfigureNetworkProtocolSettings',
        'FUN_1808910e9': 'HandleNetworkConnectionPooling',
        'FUN_180891185': 'ProcessNetworkConnectionRouting',
        'FUN_1808911a2': 'ValidateNetworkConnectionEndpoints',
        'FUN_1808911b0': 'ProcessNetworkConnectionSynchronization',
        'FUN_180891280': 'ValidateNetworkConnectionParameters',
        'FUN_1808913ff': 'HandleNetworkConnectionEventsExtended'
    }
    
    # 执行替换
    original_content = content
    for old_name, new_name in function_mappings.items():
        # 替换函数定义和调用
        content = re.sub(rf'\b{old_name}\b', new_name, content)
    
    # 检查是否有变化
    if original_content != content:
        # 写回文件
        with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"成功美化 {len(function_mappings)} 个网络函数")
        return True
    else:
        print("没有找到需要美化的函数")
        return False

if __name__ == "__main__":
    beautify_networking_functions()