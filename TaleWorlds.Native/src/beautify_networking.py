#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
05_networking.c 函数美化脚本
批量替换 FUN_ 函数为语义化名称
包含 18085xxxx 和 18088xxxx 系列函数
"""

import os
import re
from pathlib import Path

def beautify_networking_functions():
    """美化网络函数名称"""
    
    # 设置文件路径
    file_path = Path("/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c")
    
    if not file_path.exists():
        print(f"错误：文件 {file_path} 不存在")
        return
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义替换规则
    replacements = {
        # void 类型函数
        'FUN_180853230': 'ProcessNetworkConnectionValidation',
        'FUN_180853840': 'HandleNetworkConnectionTransfer',
        'FUN_180853bf0': 'ProcessNetworkPacketData',
        'FUN_180853fc0': 'HandleNetworkByteTransfer',
        'FUN_180854f55': 'NetworkStatusPlaceholder',
        'FUN_180854f70': 'ProcessNetworkPacketTransfer',
        'FUN_180854fc3': 'NetworkTransferCleanup',
        'FUN_18085510b': 'NetworkSystemReset',
        'FUN_1808556a0': 'InitializeNetworkContext',
        'FUN_1808556b9': 'NetworkContextSetup',
        'FUN_180855774': 'NetworkContextInitialize',
        'FUN_180855780': 'ValidateNetworkContext',
        'FUN_180855810': 'ProcessNetworkDataTransfer',
        'FUN_180856512': 'NetworkSystemInitialize',
        'FUN_180856ec0': 'ProcessNetworkPacketStream',
        'FUN_18085791f': 'NetworkBufferCleanup',
        'FUN_180857aa1': 'NetworkStreamReset',
        'FUN_180857b70': 'ProcessNetworkStreamTransfer',
        'FUN_180857bad': 'NetworkStreamCleanup',
        'FUN_180857c7a': 'NetworkConnectionReset',
        'FUN_180857c8f': 'ValidateNetworkStatus',
        'FUN_180857de5': 'NetworkDataCleanup',
        'FUN_1808596d0': 'ProcessNetworkDataPacket',
        'FUN_180859ba0': 'HandleNetworkDataStream',
        'FUN_18085b8e0': 'NetworkSystemShutdown',
        'FUN_18085bbe0': 'ProcessNetworkStatusUpdate',
        'FUN_18085c230': 'HandleNetworkDataTransfer',
        'FUN_18085c5b0': 'ProcessNetworkPacketTransmission',
        'FUN_18085c620': 'HandleNetworkStreamData',
        'FUN_18085ca30': 'ProcessNetworkTransferOperation',
        'FUN_18085d7f0': 'HandleNetworkStatusTransfer',
        'FUN_18085dca0': 'NetworkContextCleanup',
        'FUN_18085dd4b': 'ProcessNetworkConnection',
        'FUN_18085dd7c': 'NetworkTransferComplete',
        'FUN_18085dff0': 'ValidateNetworkConnection',
        'FUN_18085e003': 'ProcessNetworkConnectionData',
        'FUN_18085e112': 'NetworkSystemReady',
        'FUN_18085e221': 'NetworkConnectionActive',
        'FUN_18085e4a0': 'HandleNetworkConnectionState',
        'FUN_18085ec78': 'NetworkControlInitialize',
        'FUN_18085f294': 'NetworkStatusCheck',
        'FUN_18085f299': 'NetworkConnectionCheck',
        'FUN_18085f336': 'NetworkSystemCheck',
        'FUN_18085f39d': 'NetworkTransferCheck',
        'FUN_18085f670': 'ProcessNetworkControl',
        'FUN_18085f879': 'NetworkControlReady',
        'FUN_18085fd51': 'NetworkSystemFinalize',
        
        # NetworkHandle 类型函数 (部分示例)
        'FUN_180851840': 'GetNetworkConnectionHandle',
        'FUN_18085186c': 'CreateNetworkConnection',
        'FUN_180851917': 'InitializeNetworkHandle',
        'FUN_18085198d': 'GetNetworkHandleInstance',
        'FUN_1808519e0': 'ProcessNetworkConnection',
        'FUN_180851a40': 'GetNetworkContextHandle',
        'FUN_180851a66': 'AcquireNetworkHandle',
        'FUN_180851b86': 'AllocateNetworkHandle',
        'FUN_180851c50': 'TransferNetworkData',
        'FUN_180851d20': 'ProcessNetworkStream',
        'FUN_180851d5f': 'ValidateNetworkHandle',
        'FUN_180851d83': 'GetDefaultNetworkHandle',
        
        # 18088xxxx 系列函数 (网络核心功能)
        'FUN_1808801f0': 'ProcessNetworkConnectionRequest',
        'FUN_180880350': 'ValidateNetworkConnectionData',
        'FUN_180881eb0': 'EstablishNetworkConnection',
        'FUN_180881fa0': 'ProcessNetworkPacketData',
        'FUN_180881fbc': 'HandleNetworkPacketStream',
        'FUN_180882120': 'InitializeNetworkSystem',
        'FUN_180882143': 'ResetNetworkConnection',
        'FUN_18088217c': 'ValidateNetworkPacketHeader',
        'FUN_1808822c3': 'CleanupNetworkResources',
        'FUN_1808822d5': 'CheckNetworkStatus',
        'FUN_180882330': 'SendNetworkPacket',
        'FUN_180882390': 'GetNetworkConnectionInfo',
        'FUN_1808823b0': 'GetNetworkHandle',
        'FUN_1808823f2': 'ShutdownNetworkSystem',
        'FUN_180882400': 'CloseNetworkConnection',
        'FUN_180882440': 'ResetNetworkBuffers',
        'FUN_1808825ef': 'FlushNetworkQueue',
        'FUN_180882610': 'ProcessNetworkBufferData',
        'FUN_180882a50': 'ParseNetworkPacketHeader',
        'FUN_180882c20': 'HandleNetworkDataTransfer',
        'FUN_180882c70': 'FreeNetworkConnection',
        'FUN_180882c94': 'GetNetworkErrorCode',
        'FUN_180882db4': 'GetNetworkLastError',
        'FUN_180882dd0': 'ReleaseNetworkHandle',
        'FUN_180882df4': 'DestroyNetworkSocket',
        'FUN_180882ee4': 'InitializeNetworkSocket',
        'FUN_180882f00': 'AllocateNetworkBuffer',
        'FUN_180882f24': 'CreateNetworkSocket',
        'FUN_180882fec': 'GetNetworkBufferSize',
        'FUN_180883010': 'ReserveNetworkMemory',
        'FUN_180883034': 'GetNetworkMemorySize',
        'FUN_180883110': 'PrepareNetworkTransfer',
        'FUN_180883134': 'GetNetworkTransferStatus',
        'FUN_180883279': 'ValidateNetworkProtocol',
        'FUN_180883290': 'StartNetworkTransfer',
        'FUN_1808832b4': 'GetNetworkProtocolVersion',
        'FUN_180883405': 'CheckNetworkCompatibility',
        'FUN_180883420': 'InitializeNetworkStream',
        'FUN_180883444': 'ConfigureNetworkSocket',
        'FUN_1808834ff': 'GetNetworkConfigData',
        'FUN_180883520': 'SetupNetworkConnection',
        'FUN_180883544': 'BindNetworkSocket',
        'FUN_1808835ff': 'GetNetworkSocketType',
        'FUN_180883620': 'EstablishNetworkStream',
        'FUN_180883644': 'GetNetworkStreamInfo',
        'FUN_180883732': 'ValidateNetworkStream',
        'FUN_180883750': 'ProcessNetworkStream',
        'FUN_180883774': 'GetNetworkStreamStatus',
        'FUN_18088394e': 'InitializeNetworkStreamBuffer',
        'FUN_180883960': 'HandleNetworkStreamData',
        
        # 网络数据包验证和处理函数
        'FUN_18088ee20': 'ValidateNetworkPacket',
        'FUN_18088ee60': 'ProcessNetworkPacket',
        'FUN_18088eea0': 'ConvertNetworkFloatData',
        'FUN_18088ef0e': 'ValidatePacketHeader',
        'FUN_18088efaa': 'GetPacketSize',
        'FUN_18088f050': 'HandlePacketTransfer',
        'FUN_18088f1a0': 'ValidatePacketStream',
        'FUN_18088f2d0': 'ProcessPacketStream',
        'FUN_18088f310': 'InitializePacketStream',
        'FUN_18088f3a0': 'HandlePacketChunk',
        'FUN_18088f470': 'ValidatePacketChunk',
        'FUN_18088f4d0': 'ProcessNetworkDataStream',
        'FUN_18088f530': 'ProcessPacketChunk',
        'FUN_18088f710': 'ValidatePacketData',
        
        # 网络缓冲区和数据处理函数
        'FUN_18088c060': 'HandleBufferDataTransfer',
        'FUN_18088c620': 'ProcessBufferQueue',
        'FUN_18088c9b0': 'ValidateBufferIntegrity',
        
        # 网络内存管理函数
        'FUN_18088ce50': 'FreeNetworkMemory',
        'FUN_18088d850': 'ValidateMemoryPool',
        'FUN_18088da50': 'ProcessMemoryRequest',
        'FUN_18088dbf0': 'HandleMemoryTransfer',
        'FUN_18088dcf0': 'ValidateMemoryTransfer',
        'FUN_18088dd60': 'ProcessMemoryTransfer',
        
        # 网络事件和错误处理函数
        'FUN_18088e480': 'ProcessNetworkEvent',
        'FUN_18088e700': 'ProcessEventQueue',
        'FUN_18088e8b0': 'ProcessEvent',
    }
    
    # 执行替换
    original_content = content
    replaced_count = 0
    
    for old_name, new_name in replacements.items():
        # 替换函数定义
        pattern = r'\b' + re.escape(old_name) + r'\b'
        if re.search(pattern, content):
            content = re.sub(pattern, new_name, content)
            replaced_count += 1
            print(f"替换: {old_name} -> {new_name}")
    
    # 统计信息
    print(f"\n替换完成！")
    print(f"总共替换了 {replaced_count} 个函数名称")
    print(f"原文件大小: {len(original_content)} 字符")
    print(f"新文件大小: {len(content)} 字符")
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"文件已保存: {file_path}")
    
    # 验证替换结果
    remaining_funs = re.findall(r'FUN_18085[0-9a-f]+', content)
    if remaining_funs:
        print(f"警告：仍有 {len(set(remaining_funs))} 个FUN_函数未替换")
        print("未替换的函数：")
        for fun in sorted(set(remaining_funs)):
            print(f"  - {fun}")
    else:
        print("所有FUN_函数已成功替换！")

if __name__ == "__main__":
    beautify_networking_functions()