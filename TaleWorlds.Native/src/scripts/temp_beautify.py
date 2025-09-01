#!/usr/bin/env python3
"""
临时美化脚本：重命名剩余的FUN_函数
"""

import re
import os

def read_file(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(filepath, content):
    with open(filepath, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_remaining_functions():
    filepath = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    content = read_file(filepath)
    
    # 剩余函数重命名映射
    function_renames = {
        'FUN_180860480': 'SendNetworkPacketToConnection',
        'FUN_1808616bc': 'HandleNetworkConnectionError',
        'FUN_180862080': 'ProcessNetworkConnectionData',
        'FUN_180856ec0': 'ProcessNetworkBufferData',
        'FUN_18085ba10': 'GetNetworkPacketFlags',
        'FUN_1808cc190': 'CreateNetworkContextFromData',
        'FUN_1808d6650': 'ProcessNetworkBufferIndex',
        'FUN_180868970': 'ValidateNetworkContextPointer',
        'FUN_1808ccc40': 'CheckNetworkConnectionState',
        'FUN_1808d6410': 'InitializeNetworkConnectionWithData',
        'FUN_1808d84d0': 'ValidateNetworkConnectionHandle',
        'FUN_1808cc000': 'ProcessNetworkConnectionRequest',
        'FUN_1808d3ee0': 'ProcessNetworkPacketWithFlags',
        'FUN_180868330': 'ValidateNetworkPacketData',
        'FUN_1808626e0': 'GetNetworkConnectionStatus',
        'FUN_18085ea80': 'ProcessNetworkConnectionIndex',
        'FUN_1808caa20': 'HandleNetworkDataStream',
        'FUN_1808b8950': 'CreateNetworkConnectionFromContext',
        'FUN_1808bc010': 'ProcessNetworkConnectionWithFlags',
        'FUN_1808ca940': 'ValidateNetworkPacketTransmission',
    }
    
    # 重命名函数调用
    replaced_count = 0
    for old_name, new_name in function_renames.items():
        pattern = r'\b' + re.escape(old_name) + r'\b'
        if re.search(pattern, content):
            content = re.sub(pattern, new_name, content)
            print(f"替换 {old_name} -> {new_name}")
            replaced_count += 1
    
    write_file(filepath, content)
    print(f"剩余函数美化完成，共替换 {replaced_count} 个函数")

if __name__ == "__main__":
    beautify_remaining_functions()