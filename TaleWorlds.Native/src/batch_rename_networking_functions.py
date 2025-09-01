#!/usr/bin/env python3
"""
网络模块函数美化脚本 - 批量重命名版本
"""

import re
import os

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def rename_functions(content):
    """重命名函数"""
    # 定义函数重命名映射
    rename_map = {
        'FUN_180860690': 'HandleNetworkConnectionProtocol',
        'FUN_180860737': 'ProcessNetworkConnectionEvent',
        'FUN_1808616d8': 'HandleNetworkPacketTransfer',
        'FUN_1808616f0': 'ValidateNetworkPacketHeader',
        'FUN_180861720': 'ProcessNetworkPacketData',
        'FUN_180861780': 'TransmitNetworkPacket',
        'FUN_180861820': 'ReceiveNetworkPacket',
        'FUN_1808618d0': 'HandleNetworkPacketStream',
        'FUN_180861900': 'ProcessNetworkPacketFragment',
        'FUN_180861970': 'GetNetworkPacketStatus',
        'FUN_1808619a0': 'ValidateNetworkPacketChecksum',
        'FUN_1808619d0': 'GetNetworkConnectionState',
        'FUN_180861a00': 'ProcessNetworkPacketQueue',
        'FUN_180861a70': 'HandleNetworkConnectionFlow',
        'FUN_180861aa8': 'GetNetworkSystemStatus',
        'FUN_180861b0c': 'CheckNetworkConnectionHealth',
        'FUN_180861b29': 'ValidateNetworkConnectionIntegrity',
        'FUN_180861cc6': 'ResetNetworkConnectionCounter',
        'FUN_180861ccb': 'InitializeNetworkConnectionCounter',
        'FUN_180861cd0': 'UpdateNetworkConnectionCounter',
        'FUN_180861d0b': 'GetNetworkConnectionMetrics',
        'FUN_180861d76': 'ProcessNetworkConnectionEvent',
        'FUN_180861d98': 'HandleNetworkConnectionSignal',
        'FUN_180861ef0': 'AuthenticateNetworkConnection',
        'FUN_180861f14': 'ValidateNetworkCredentials',
        'FUN_180861fdf': 'GetNetworkAuthenticationStatus',
        'FUN_180862000': 'EncryptNetworkData',
        'FUN_180862080': 'ProcessNetworkEncryption',
        'FUN_18086226d': 'AllocateNetworkBuffer',
        'FUN_18086247a': 'FreeNetworkBuffer',
        'FUN_1808624a0': 'ResizeNetworkBuffer',
        'FUN_180862670': 'GetNetworkBufferSize',
        'FUN_1808626e0': 'ValidateNetworkBufferAccess',
        'FUN_180862910': 'InitializeNetworkBufferPool',
        'FUN_1808629e9': 'CleanupNetworkBufferPool',
        'FUN_1808629f1': 'ResetNetworkBufferPool',
        'FUN_180862ad1': 'InitializeNetworkSocket',
        'FUN_180862b96': 'ConfigureNetworkSocket',
        'FUN_180862bc0': 'BindNetworkSocket',
        'FUN_180862c50': 'ListenNetworkSocket',
        'FUN_180862c75': 'AcceptNetworkConnection',
        'FUN_180862d17': 'GetNetworkSocketStatus',
        'FUN_180862d20': 'ConnectNetworkSocket',
        'FUN_180862d70': 'DisconnectNetworkSocket',
        'FUN_180862e90': 'SendNetworkDataPacket',
        'FUN_180863140': 'ReceiveNetworkDataPacket',
        'FUN_180863180': 'ProcessNetworkDataStream',
        'FUN_180863420': 'GetNetworkTransferStatus',
        'FUN_180863820': 'HandleNetworkDataTransfer',
        'FUN_180863930': 'ExecuteNetworkDataTransfer',
        'FUN_1808639e2': 'GetNetworkTransferMetrics',
        'FUN_180863a57': 'ValidateNetworkTransfer',
        'FUN_180863a80': 'ProcessNetworkTransferQueue',
        'FUN_180863aa3': 'GetNetworkTransferRate',
        'FUN_180863b09': 'HandleNetworkError',
        'FUN_180863b30': 'RecoverNetworkConnection',
        'FUN_180863b80': 'ResetNetworkConnection',
        'FUN_180863bd0': 'InitializeNetworkErrorHandling',
        'FUN_180863bf7': 'CleanupNetworkErrorHandling',
        'FUN_180863c00': 'LogNetworkError',
        'FUN_180863c8b': 'HandleNetworkException',
        'FUN_180863d75': 'ProcessNetworkWarning',
        'FUN_180863d92': 'GetNetworkErrorCode',
        'FUN_180863f57': 'SetNetworkErrorHandler',
        'FUN_180864040': 'ValidateNetworkOperation',
        'FUN_1808646a0': 'GetNetworkConfiguration',
        'FUN_180864780': 'SetNetworkConfiguration',
        'FUN_180864850': 'InitializeNetworkConfiguration',
        'FUN_18086490d': 'UpdateNetworkConfiguration',
        'FUN_1808649b0': 'ValidateNetworkConfiguration',
        'FUN_180864e8c': 'ResetNetworkConfiguration',
        'FUN_180865027': 'GetNetworkConfigurationStatus',
        'FUN_1808650a0': 'ProcessNetworkConfiguration',
        'FUN_180865286': 'GetNetworkStatistics',
        'FUN_1808652fd': 'UpdateNetworkStatistics',
        'FUN_180865470': 'CollectNetworkMetrics',
        'FUN_18086547c': 'ProcessNetworkMetrics',
        'FUN_1808654be': 'GetNetworkPerformance',
        'FUN_18086551b': 'CalculateNetworkThroughput',
        'FUN_180865541': 'MeasureNetworkLatency',
        'FUN_1808655bb': 'AnalyzeNetworkTraffic',
        'FUN_1808657eb': 'InitializeNetworkCompression',
        'FUN_180865800': 'CompressNetworkData',
        'FUN_18086582c': 'DecompressNetworkData',
        'FUN_180865a0f': 'GetNetworkCompressionRatio',
        'FUN_180865c20': 'ProcessNetworkCompression',
        'FUN_180865e20': 'ValidateNetworkCompression',
        'FUN_180865ec0': 'GetNetworkCompressionStatus',
        'FUN_180865f90': 'ConfigureNetworkCompression',
        'FUN_180865fc0': 'HandleNetworkCompression',
        'FUN_1808661e0': 'ProcessNetworkProtocol',
        'FUN_180866340': 'ValidateNetworkProtocol',
        'FUN_180866550': 'HandleNetworkProtocolVersion',
        'FUN_180866820': 'NegotiateNetworkProtocol',
        'FUN_1808668a0': 'ProcessNetworkProtocolData',
        'FUN_1808669b0': 'GetNetworkProtocolStatus',
        'FUN_180866a90': 'HandleNetworkProtocolError',
        'FUN_180866ba0': 'UpdateNetworkProtocol',
        'FUN_180866c90': 'InitializeNetworkProtocol',
        'FUN_180866d00': 'ProcessNetworkProtocolHeader',
        'FUN_180866e25': 'GetNetworkConnectionPool',
        'FUN_180866e97': 'InitializeNetworkConnectionPool',
        'FUN_180866f50': 'ManageNetworkConnectionPool',
        'FUN_180866fe0': 'ValidateNetworkConnectionPool',
        'FUN_180867092': 'GetNetworkConnectionPoolSize',
        'FUN_180867111': 'ResizeNetworkConnectionPool',
        'FUN_180867170': 'ProcessNetworkConnectionPool',
        'FUN_180867280': 'HandleNetworkConnectionPool',
        'FUN_1808672e4': 'AllocateNetworkResource',
        'FUN_18086735a': 'FreeNetworkResource',
        'FUN_1808673a0': 'GetNetworkResourceStatus',
        'FUN_180867470': 'ManageNetworkResource',
        'FUN_1808674e0': 'ValidateNetworkResource',
        'FUN_180867600': 'ProcessNetworkResource',
        'FUN_1808676f0': 'InitializeNetworkResource',
        'FUN_180867714': 'HandleNetworkResource',
        'FUN_1808677fa': 'GetNetworkResourceInfo',
        'FUN_180867810': 'UpdateNetworkResource',
        'FUN_1808678e0': 'ValidateNetworkDataIntegrity',
        'FUN_180867990': 'CheckNetworkDataConsistency',
        'FUN_180867bc0': 'VerifyNetworkDataChecksum',
        'FUN_180867f80': 'ProcessNetworkDataValidation',
        'FUN_180868160': 'GetNetworkDataValidationStatus',
        'FUN_180868210': 'HandleNetworkDataValidation',
        'FUN_180868246': 'ValidateNetworkDataFormat',
        'FUN_18086825f': 'GetNetworkDataValidationResult',
    }
    
    # 应用重命名
    for old_name, new_name in rename_map.items():
        # 只替换完整的函数名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content, rename_map

def main():
    """主函数"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    print("开始处理网络模块函数重命名...")
    
    # 读取文件
    content = read_file(file_path)
    
    # 重命名函数
    content, rename_map = rename_functions(content)
    
    # 写入文件
    write_file(file_path, content)
    
    print(f"重命名完成，共处理 {len(rename_map)} 个函数:")
    for old_name, new_name in rename_map.items():
        print(f"  {old_name} -> {new_name}")

if __name__ == "__main__":
    main()