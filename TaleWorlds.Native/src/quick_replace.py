#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
网络函数快速替换脚本
专门用于替换剩余的FUN_18088xxxx函数
"""

import re
import os

def quick_replace():
    """快速替换剩余的FUN_函数"""
    
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    # 读取文件
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 高频使用的函数替换
    high_priority_replacements = {
        'FUN_18088c9b0': 'ValidateBufferIntegrity',
        'FUN_18088c060': 'HandleBufferDataTransfer', 
        'FUN_18088c620': 'ProcessBufferQueue',
        'FUN_180882c70': 'FreeNetworkConnection',
        'FUN_180882dd0': 'ReleaseNetworkHandle',
        'FUN_18088dbf0': 'HandleMemoryTransfer',
        'FUN_180885d80': 'ProcessNetworkSecurityData',
        'FUN_180888e80': 'ValidateNetworkSecurity',
        'FUN_180882330': 'SendNetworkPacket',
        'FUN_180882390': 'GetNetworkConnectionInfo',
        'FUN_1808823b0': 'GetNetworkHandle',
        'FUN_1808823f2': 'ShutdownNetworkSystem',
        'FUN_180882400': 'CloseNetworkConnection',
        'FUN_180882440': 'ResetNetworkBuffers',
        'FUN_1808825ef': 'FlushNetworkQueue',
        'FUN_180882c94': 'GetNetworkErrorCode',
        'FUN_180882db4': 'GetNetworkLastError',
        'FUN_180882df4': 'DestroyNetworkSocket',
        'FUN_180882ee4': 'InitializeNetworkSocket',
        'FUN_180882f24': 'CreateNetworkSocket',
        'FUN_180882fec': 'GetNetworkBufferSize',
        'FUN_180883034': 'GetNetworkMemorySize',
        'FUN_180883110': 'PrepareNetworkTransfer',
        'FUN_180883134': 'GetNetworkTransferStatus',
        'FUN_180883279': 'ValidateNetworkProtocol',
        'FUN_180883290': 'StartNetworkTransfer',
        'FUN_1808832b4': 'GetNetworkProtocolVersion',
        'FUN_180883405': 'CheckNetworkCompatibility',
        'FUN_180883444': 'ConfigureNetworkSocket',
        'FUN_1808834ff': 'GetNetworkConfigData',
        'FUN_1808835ff': 'GetNetworkSocketType',
        'FUN_18088394e': 'InitializeNetworkStreamBuffer',
        'FUN_180883960': 'HandleNetworkStreamData',
    }
    
    # 执行替换
    replaced_count = 0
    for old_name, new_name in high_priority_replacements.items():
        pattern = r'\b' + re.escape(old_name) + r'\b'
        if re.search(pattern, content):
            content = re.sub(pattern, new_name, content)
            replaced_count += 1
            print(f"替换: {old_name} -> {new_name}")
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"替换完成！共替换了 {replaced_count} 个函数")
    
    # 检查剩余的FUN_函数
    remaining_funs = re.findall(r'FUN_18088[0-9a-f]+', content)
    print(f"剩余的FUN_函数数量: {len(set(remaining_funs))}")

if __name__ == "__main__":
    quick_replace()