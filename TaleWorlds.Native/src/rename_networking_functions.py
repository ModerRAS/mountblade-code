#!/usr/bin/env python3
"""
网络模块函数重命名脚本
用于批量重命名05_networking.c文件中的FUN_函数
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def create_function_mapping():
    """创建函数映射表"""
    return {
        'FUN_1808949c0': 'ProcessNetworkPacketBuffer',
        'FUN_1808deb90': 'ValidateNetworkConnectionState',
        'FUN_180894b00': 'ProcessNetworkPacketHeader',
        'FUN_180891970': 'InitializeNetworkConnectionContext',
        'FUN_1808919c0': 'SetupNetworkConnectionParameters',
        'FUN_180891e40': 'ConfigureNetworkConnectionSettings',
        'FUN_18084de40': 'ProcessNetworkContextData',
        'FUN_18088d720': 'HandleNetworkContextProcessing',
        'FUN_180840950': 'ValidateNetworkPacketIntegrity',
        'FUN_1808de900': 'ProcessNetworkDataTransmission',
        'FUN_18088c7c0': 'CreateNetworkBufferContext',
        'FUN_18088ca20': 'InitializeNetworkBufferAllocation',
        'FUN_18088f530': 'ProcessNetworkDataStream',
        'FUN_18088f5c0': 'HandleNetworkDataStreaming',
        'FUN_18088f620': 'ManageNetworkDataFlow',
        'FUN_180895130': 'ValidateNetworkConnectionStatus',
        'FUN_180896040': 'InitializeNetworkConnection',
        'FUN_180895ef0': 'GetNetworkConnectionTimeout',
        'FUN_180895c60': 'ProcessNetworkConnectionStep',
        'FUN_180892120': 'GetNetworkProtocolPointer',
        'FUN_1808920e0': 'GetNetworkContextHandle',
        'FUN_180891d40': 'GetNetworkBufferSize',
        'FUN_180891cf0': 'GetNetworkCompressionPointer',
        'FUN_180891ca0': 'GetNetworkValidationPointer',
        'FUN_180894300': 'GetNetworkValidationFlag',
        'FUN_180891af0': 'GetNetworkMemoryAddress',
        'FUN_18088c970': 'IterateNetworkContext',
        'FUN_18088cbb0': 'GetNextNetworkContext',
        'FUN_1808987e0': 'ValidateNetworkContext',
        'FUN_180897560': 'InitializeNetworkSystem',
        'FUN_1808975a6': 'SetupNetworkParameters',
        'FUN_180897644': 'ConfigureNetworkSettings',
        'FUN_1808976b0': 'InitializeNetworkBuffers',
        'FUN_180897859': 'ProcessNetworkConnectionSetup',
        'FUN_180897b16': 'FinalizeNetworkInitialization',
        'FUN_180897d20': 'ValidateNetworkInitialization',
        'FUN_1808975e0': 'CheckNetworkConnectionState',
        'FUN_180896c60': 'CreateNetworkConnectionEntry',
        'FUN_180898e70': 'ProcessNetworkConnectionRequest',
        'FUN_180898ef0': 'HandleNetworkConnectionResponse',
        'FUN_180898f40': 'ProcessNetworkConnectionData',
        'FUN_180899180': 'ManageNetworkConnectionState',
        'FUN_1808992c4': 'InitializeNetworkPacketProcessor',
        'FUN_1808992f0': 'ProcessNetworkPacketData',
        'FUN_180899360': 'HandleNetworkPacketTransmission',
        'FUN_1808993e0': 'ProcessNetworkPacketStream',
        'FUN_180899090': 'ValidateNetworkPacketHeader',
        'FUN_180898fc0': 'ProcessNetworkPacketContext',
        'FUN_180899650': 'HandleNetworkDataProcessing',
        'FUN_1808af2e0': 'ValidateNetworkDataStream',
        'FUN_180899740': 'ProcessNetworkConnection',
        'FUN_180899763': 'InitializeNetworkHandler',
        'FUN_180899790': 'SetupNetworkHandler',
        'FUN_180899799': 'ConfigureNetworkHandler',
        'FUN_1808997b0': 'ProcessNetworkRequest',
        'FUN_1808997f0': 'HandleNetworkResponse',
        'FUN_180899816': 'FinalizeNetworkProcessing',
        'FUN_180899891': 'CleanupNetworkResources',
        'FUN_1808998a0': 'ProcessNetworkData',
        'FUN_180899950': 'HandleNetworkPacket',
        'FUN_1808ac750': 'ValidateNetworkPacketData',
        'FUN_180899c60': 'ProcessNetworkDataBuffer',
        'FUN_1808affb0': 'HandleNetworkDataStream',
        'FUN_1808aca30': 'ProcessNetworkPacketStream',
        'FUN_1808999c1': 'ManageNetworkConnection',
        'FUN_180899ae6': 'HandleNetworkDisconnection',
        'FUN_180899040': 'ValidateNetworkStream',
        'FUN_1808b0010': 'ProcessNetworkStreamData',
        'FUN_180899c96': 'InitializeNetworkStream',
        'FUN_180899d7f': 'FinalizeNetworkStream',
        'FUN_180899d90': 'ProcessNetworkStreamPacket',
        'FUN_180899dc7': 'HandleNetworkStreamError',
        'FUN_180899ed5': 'CleanupNetworkStream',
        'FUN_180899f80': 'ProcessNetworkStreamRequest',
        'FUN_180899fe0': 'HandleNetworkStreamResponse',
        'FUN_1808aff40': 'ValidateNetworkStreamData',
        'FUN_18089a059': 'ProcessNetworkConnection',
        'FUN_1808a365': 'InitializeNetworkProcessor',
        'FUN_18089a370': 'ProcessNetworkDataPacket',
        'FUN_1808b00b0': 'ValidateNetworkDataPacket',
        'FUN_18089a51d': 'HandleNetworkProcessing',
        'FUN_1808ac8a0': 'ProcessNetworkValidation',
        'FUN_18089a685': 'CleanupNetworkProcessing',
        'FUN_18089a690': 'HandleNetworkPacketProcessing',
        'FUN_18089a6e8': 'ProcessNetworkPacketTransfer',
        'FUN_18089a73c': 'FinalizeNetworkPacket',
        'FUN_18089a7e0': 'ManageNetworkPacketStream',
        'FUN_18089a880': 'ProcessNetworkTransfer',
        'FUN_18089a8b4': 'HandleNetworkTransferComplete',
        'FUN_18089a9d5': 'InitializeNetworkTransfer',
        'FUN_18089a9dd': 'FinalizeNetworkTransfer',
        'FUN_18089a9f0': 'ProcessNetworkRequestData',
        'FUN_18089aa40': 'HandleNetworkResponseData',
        'FUN_18089abe0': 'ProcessNetworkDataTransfer',
        'FUN_1808ddc20': 'ValidateNetworkTransfer',
        'FUN_180899360': 'ProcessNetworkConnectionTransfer',
        'FUN_1808afc70': 'HandleNetworkTransferValidation',
        'FUN_1808a2890': 'ProcessNetworkDataStream',
        'FUN_18089ac64': 'HandleNetworkDataProcessing',
        'FUN_18089ac96': 'FinalizeNetworkDataProcessing',
        'FUN_18089ace4': 'InitializeNetworkDataHandler',
        'FUN_18089cc80': 'ProcessNetworkDataHandler',
        'FUN_1808a8620': 'HandleNetworkDataCompletion',
        'FUN_18089ae2d': 'CleanupNetworkDataHandler',
        'FUN_18089ae35': 'InitializeNetworkDataStream',
        'FUN_18089ae3d': 'FinalizeNetworkDataStream'
    }

def rename_functions(content, function_mapping):
    """重命名函数"""
    for old_name, new_name in function_mapping.items():
        # 替换函数调用
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
        # 替换函数定义
        content = re.sub(r'\b' + re.escape(old_name) + r'\(', new_name + '(', content)
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    # 读取文件内容
    content = read_file(file_path)
    
    # 创建函数映射
    function_mapping = create_function_mapping()
    
    # 重命名函数
    new_content = rename_functions(content, function_mapping)
    
    # 写入文件
    write_file(file_path, new_content)
    
    print(f"成功重命名 {len(function_mapping)} 个函数")

if __name__ == '__main__':
    main()