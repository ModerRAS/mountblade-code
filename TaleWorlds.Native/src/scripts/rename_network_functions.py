#!/usr/bin/env python3
"""
批量重命名网络模块中的函数名
将剩余的FUN_函数重命名为有意义的名称
"""

import re
import sys

def read_file(filepath):
    """读取文件内容"""
    try:
        with open(filepath, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(filepath, content):
    """写入文件内容"""
    try:
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def rename_functions(content):
    """重命名函数"""
    
    # 定义函数重命名映射
    function_renames = {
        'FUN_1808d6410': 'ProcessNetworkPacketDataEx',
        'FUN_1808d84d0': 'ValidateNetworkConnectionEx',
        'FUN_1808cc000': 'ProcessNetworkBufferOperation',
        'FUN_18085ba10': 'EncryptNetworkPacketData',
        'FUN_180856ec0': 'TransmitNetworkPacket',
        'FUN_1808d3ee0': 'ValidateNetworkTransfer',
        'FUN_1808cc190': 'ProcessNetworkContextOperation',
        'FUN_1808d6650': 'HandleNetworkConnectionRequest',
        'FUN_180868970': 'ValidateNetworkSession',
        'FUN_180860480': 'ProcessNetworkConnectionProtocolEx',
        'FUN_1808ccc40': 'CheckNetworkConnectionStatus',
        'FUN_1808d5520': 'ProcessNetworkPacketTransferEx',
        'FUN_180864850': 'InitializeNetworkConnectionStateEx',
        'FUN_1808646a0': 'ResetNetworkConnectionStateEx',
        'FUN_180863bd0': 'ValidateNetworkConnectionSecurity',
        'FUN_180864780': 'CheckNetworkConnectionIntegrityEx',
        'FUN_180853230': 'ProcessNetworkDataTransferEx',
        'FUN_1808d5bd0': 'ValidateNetworkPacketData',
        'FUN_18085c230': 'TransmitNetworkDataEx',
        'FUN_1808d52a0': 'ProcessNetworkBufferTransfer',
        'FUN_1808d5da0': 'FinalizeNetworkPacketTransfer',
        'FUN_18085f440': 'InitializeNetworkConnectionContextEx',
        'FUN_180853c50': 'GetNetworkConnectionInfo',
        'FUN_18085f0e0': 'ValidateNetworkConnectionHandle',
        'FUN_1808538a0': 'ProcessNetworkConnectionRequestEx',
        'FUN_1808d73b0': 'UpdateNetworkConnectionStatus',
        'FUN_1808c2150': 'ValidateNetworkPacketTransfer',
        'FUN_180853d20': 'CheckNetworkConnectionData',
        'FUN_1808c1410': 'ProcessNetworkConnectionDataEx',
        'FUN_1808650a0': 'HandleNetworkConnectionError',
        'FUN_18085f2b0': 'GetNetworkConnectionStatus',
        'FUN_18085f340': 'CloseNetworkConnectionEx',
        'FUN_180863a80': 'ProcessNetworkPacketTransmission',
        'FUN_1808d0760': 'HandleNetworkDataTransfer',
        'FUN_1808cee30': 'ProcessNetworkEncryption',
        'FUN_1808d2850': 'ValidateNetworkPacketHeader',
        'FUN_1808b5060': 'InitializeNetworkTransferBuffer',
        'FUN_1808d6e30': 'ValidateNetworkTransferBuffer',
        'FUN_1808d15f0': 'ProcessNetworkPacketRouting',
        'FUN_18085ff70': 'CheckNetworkConnectionValidity',
        'FUN_180867d60': 'InitializeNetworkSession',
        'FUN_1808b83b0': 'ProcessNetworkSessionData',
        'FUN_1808538a0': 'HandleNetworkSessionRequest',
        'FUN_1808b8130': 'ValidateNetworkSessionTransfer',
        'FUN_1808b9030': 'ProcessNetworkSessionPacket',
        'FUN_1808d38d0': 'ValidateNetworkDataBuffer',
        'FUN_1808d7550': 'ProcessNetworkPacketQueue',
        'FUN_1808d0d90': 'HandleNetworkBufferOperation',
        'func_0x00018084de30': 'GetNetworkConnectionType'
    }
    
    # 执行重命名
    for old_name, new_name in function_renames.items():
        # 使用正则表达式进行更精确的替换
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def main():
    """主函数"""
    filepath = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    # 读取文件
    content = read_file(filepath)
    if content is None:
        sys.exit(1)
    
    # 重命名函数
    new_content = rename_functions(content)
    
    # 写入文件
    if write_file(filepath, new_content):
        print("函数重命名完成")
    else:
        sys.exit(1)

if __name__ == "__main__":
    main()