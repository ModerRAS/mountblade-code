#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
批量替换网络模块中的函数名
"""

import re

def replace_functions():
    """替换函数名"""
    
    # 读取源文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 函数名映射
    replacements = {
        'func_0x000180867370': 'CheckNetworkFlags',
        'func_0x00018088a120': 'ResetNetworkConnection',
        'func_0x00018088c570': 'ProcessNetworkHandle',
        'func_0x0001808bad50': 'GetNetworkContext',
        'func_0x00018088be40': 'UpdateNetworkContext',
        'func_0x0001808db610': 'ProcessNetworkContext',
        'func_0x0001808dcac0': 'ValidateNetworkContext',
        'func_0x0001808661c0': 'CheckConnectionState',
        'func_0x0001808661d0': 'VerifyConnectionState',
        'func_0x000180866330': 'ResetConnectionState',
        'func_0x0001808671f0': 'CleanupNetworkResources',
        'func_0x000180874280': 'InitializeConnectionData',
        'func_0x0001808da780': 'ProcessNetworkIndex',
        'func_0x0001808c6590': 'UpdateNetworkFlags',
        'func_0x00018088e470': 'ValidateNetworkPacket',
        'func_0x0001808676e0': 'ProcessConnectionData',
        'func_0x0001808e2ff0': 'GetNetworkHandle',
        'func_0x000180866b40': 'VerifyConnectionData',
        'func_0x000180866440': 'ProcessPacketData',
        'func_0x0001808e0070': 'SendNetworkData',
        'func_0x0001808e0080': 'ReceiveNetworkData',
        'func_0x0001808ded80': 'InitializeNetworkArray',
        'func_0x0001808e3470': 'ProcessNetworkRequest',
        'func_0x0001808e57e0': 'HandleNetworkResponse',
        'func_0x0001808967b0': 'ProcessNetworkTimeout',
        'func_0x000180767970': 'InitializeNetworkSystem',
        'func_0x000180772c00': 'SetupConnectionParameters',
        'func_0x000180874320': 'ValidateConnectionHandle',
        'func_0x000180879a50': 'GetNetworkStatusPointer',
        'func_0x0001808e64e0': 'ProcessNetworkTransfer',
        'func_0x0001808e64d0': 'ValidateNetworkTransfer',
        'func_0x000180881f80': 'ReadNetworkByte',
        'func_0x0001808e64b0': 'FinalizeNetworkTransfer',
        'func_0x0001808e63f0': 'ProcessNetworkPacket',
        'func_0x000180879a40': 'GetPacketContext',
        'func_0x00018085fa80': 'CheckNetworkAvailability',
        'func_0x00018074b7b0': 'ProcessNetworkBuffer',
        'func_0x000180851460': 'ValidateNetworkEntry',
        'func_0x000180861a30': 'CheckNetworkStack',
        'func_0x0001808757f0': 'ProcessNetworkConnection',
        'func_0x0001808d2620': 'StartNetworkTransfer',
        'func_0x0001808d2660': 'ContinueNetworkTransfer',
        'func_0x0001808d2830': 'CompleteNetworkTransfer',
        'func_0x0001808c2130': 'HandleNetworkEvent',
        'func_0x00018088aed0': 'CleanupPacketData',
        'func_0x0001808c8710': 'AcquireNetworkResource',
        'func_0x0001808c8700': 'ReleaseNetworkResource',
        'func_0x0001808c8470': 'ValidateNetworkResource',
        'func_0x0001808c7d30': 'CheckConnectionHandle',
        'func_0x000180867680': 'GetNetworkPosition',
        'func_0x000180867960': 'SetNetworkPosition',
        'func_0x000180867660': 'CreateNetworkHandle',
        'func_0x0001808c7ed0': 'ValidateNetworkTimeout',
        'func_0x00018076b3e0': 'AllocateNetworkBuffer',
        'func_0x00018074be80': 'ProcessNetworkStream',
        'func_0x00018076b8a0': 'ValidateNetworkString',
        'func_0x00018076a7d0': 'ReadNetworkData',
        'func_0x000180069ee0': 'ResetNetworkContext',
        'func_0x0001808de610': 'GetNetworkFloatValue'
    }
    
    # 执行替换
    count = 0
    for old, new in replacements.items():
        pattern = r'\b' + re.escape(old) + r'\b'
        matches = re.findall(pattern, content)
        if matches:
            content = re.sub(pattern, new, content)
            count += len(matches)
            print(f"替换 {old} -> {new} ({len(matches)} 次)")
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"总共替换了 {count} 个函数调用")
    return count > 0

if __name__ == "__main__":
    replace_functions()