#!/usr/bin/env python3
"""
批量替换05_networking.c文件中的FUN_函数调用为语义化名称
"""

import re
import sys

def read_file(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(filepath, content):
    with open(filepath, 'w', encoding='utf-8') as f:
        f.write(content)

def replace_functions(content):
    # FUN_函数名称到语义化名称的映射
    function_map = {
        'FUN_1808787d0': 'ProcessNetworkConnectionValidation',
        'FUN_18087e0b0': 'ValidateNetworkConnectionContext',
        'FUN_1808690e0': 'InitializeNetworkConnectionPrimary',
        'FUN_180873f80': 'GetNetworkConnectionHandle',
        'FUN_180869400': 'InitializeNetworkConnectionSecondary',
        'FUN_1808740c0': 'ProcessNetworkConnectionData',
        'FUN_1808c7ff0': 'SendNetworkPacketData',
        'FUN_1808c2060': 'ValidateNetworkPacket',
        'FUN_1808c5220': 'ProcessNetworkConnectionRequest',
        'FUN_1808db1d0': 'ExecuteNetworkDataTransfer',
        'FUN_1808bc120': 'ProcessNetworkPacket',
        'FUN_180872630': 'CloseNetworkConnection',
        'FUN_180873cd0': 'CleanupNetworkResources',
        'FUN_1808dc190': 'ResetNetworkConnection',
        'FUN_180869ab0': 'GetNetworkContextIndex',
        'FUN_18084b5a0': 'ProcessNetworkData',
        'FUN_1808793e0': 'ValidateNetworkData',
        'FUN_180868de0': 'CheckNetworkConnectionPrimary',
        'FUN_180868fc0': 'CheckNetworkConnectionSecondary',
        'FUN_180868ea0': 'CheckNetworkConnectionTertiary',
        'FUN_18084c470': 'TransferNetworkData',
        'FUN_180877560': 'ProcessNetworkPacketHeader',
        'FUN_180868a80': 'ValidateNetworkPacketData',
        'FUN_180877970': 'InitializeNetworkConnection',
        'FUN_180877f00': 'SetupNetworkConnection',
        'FUN_1808780d0': 'ConfigureNetworkConnection',
        'FUN_18087dd70': 'ProcessNetworkRequest',
        'FUN_180877030': 'ValidateNetworkRequest',
        'FUN_1808c84b0': 'ProcessNetworkResponse',
        'FUN_180869080': 'CheckNetworkStatusPrimary',
        'FUN_180869020': 'CheckNetworkStatusSecondary',
        'FUN_180868f60': 'CheckNetworkStatusTertiary',
        'FUN_1808782a0': 'ValidateNetworkConnection',
        'FUN_180879270': 'ProcessNetworkConnection',
        'FUN_180868e40': 'CheckNetworkDataIntegrity',
        'FUN_1808777c0': 'ValidateNetworkDataIntegrity',
        'FUN_1808df350': 'CheckNetworkConnectionState',
        'FUN_1808698b0': 'InitializeNetworkTransfer',
        'FUN_180879510': 'StartNetworkTransfer',
        'FUN_1808df2b0': 'CheckNetworkTransferState',
        'FUN_1808deff0': 'ValidateNetworkTransfer',
        'FUN_1808df570': 'CompleteNetworkTransfer',
        'FUN_180868d20': 'CheckTransferStatusPrimary',
        'FUN_1808794d0': 'ProcessNetworkTransfer',
        'FUN_180868d80': 'ValidateTransferRequest',
        'FUN_180877810': 'ProcessTransferRequest',
        'FUN_180876eb0': 'CompleteTransferRequest',
        'FUN_1808b0660': 'SetNetworkStatus',
        'FUN_1808b06c0': 'UpdateNetworkStatus',
        'FUN_18086da90': 'ProcessNetworkContext',
        'FUN_1808c53d0': 'ValidateNetworkContext',
        'FUN_1808c52b0': 'CleanupNetworkContext',
        'FUN_180874afe': 'InitializeNetworkSystem',
        'FUN_180875d28': 'CleanupNetworkSystem',
        'FUN_180870500': 'ClearDataBufferFirstInstance',
        'FUN_1808705f0': 'ClearDataBufferSecondInstance',
        'FUN_1808706e0': 'ClearDataBufferThirdInstance',
    }
    
    # 替换函数调用
    for old_name, new_name in function_map.items():
        # 使用正则表达式确保只替换函数调用
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def main():
    filepath = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    try:
        # 读取文件
        content = read_file(filepath)
        print(f"文件读取成功，长度: {len(content)} 字符")
        
        # 替换函数名
        new_content = replace_functions(content)
        print("函数名替换完成")
        
        # 检查是否有变化
        if new_content != content:
            # 写入文件
            write_file(filepath, new_content)
            print("文件写入成功")
        else:
            print("没有检测到需要替换的内容")
            
    except Exception as e:
        print(f"处理文件时发生错误: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()