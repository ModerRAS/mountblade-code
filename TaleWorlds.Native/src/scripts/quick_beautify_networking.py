#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
直接执行05_networking.c文件的变量美化
"""

import re

def beautify_networking_file():
    """直接美化05_networking.c文件"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    # 读取文件
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    print(f"已读取文件: {file_path}")
    
    # 定义需要替换的变量名映射（简化版本，只处理最重要的变量）
    variable_replacements = {
        # 主要变量名
        'DataProcessingResult': 'dataProcessingResult',
        'NetworkProcessingResult': 'networkProcessingResult',
        'NetworkConnectionOperationResult': 'networkConnectionOperationResult',
        'NetworkEncryptionKey': 'networkEncryptionKey',
        'NetworkFlags': 'networkFlags',
        'NetworkEncryptionKeyLength': 'networkEncryptionKeyLength',
        
        # 常见的NetworkConnection系列
        'NetworkConnectionTableHandle': 'networkConnectionTableHandle',
        'NetworkConnectionStatusFlags': 'networkConnectionStatusFlags',
        'NetworkConnectionTimeoutMilliseconds': 'networkConnectionTimeoutMilliseconds',
        'NetworkConnectionMaximumLimit': 'networkConnectionMaximumLimit',
        'NetworkConnectionAttributeFlags': 'networkConnectionAttributeFlags',
        'NetworkConnectionProtocolType': 'networkConnectionProtocolType',
        'NetworkConnectionProtocolVersion': 'networkConnectionProtocolVersion',
        'NetworkConnectionPoolSize': 'networkConnectionPoolSize',
        'NetworkConnectionStateFlags': 'networkConnectionStateFlags',
        'NetworkConnectionContext': 'networkConnectionContext',
        'NetworkConnectionData': 'networkConnectionData',
        'NetworkConnectionManager': 'networkConnectionManager',
        'NetworkConnectionInitializationStatus': 'networkConnectionInitializationStatus',
        'NetworkConnectionHandleIdentifier': 'networkConnectionHandleIdentifier',
        'NetworkConnectionCurrentStatus': 'networkConnectionCurrentStatus',
        'NetworkConnectionFlags': 'networkConnectionFlags',
        
        # 常见的NetworkPacket系列
        'NetworkPacketBufferPointer': 'networkPacketBufferPointer',
        'NetworkPacketHeaderPointer': 'networkPacketHeaderPointer',
        'NetworkPacketPayloadSize': 'networkPacketPayloadSize',
        'NetworkMaxPacketSize': 'networkMaxPacketSize',
        'NetworkPacketContext': 'networkPacketContext',
        'NetworkPacketData': 'networkPacketData',
        
        # 常见的NetworkProcessing系列
        'NetworkProcessingStatus': 'networkProcessingStatus',
        'NetworkProcessingStepResult': 'networkProcessingStepResult',
        'NetworkOperationProgress': 'networkOperationProgress',
        'NetworkErrorCode': 'networkErrorCode',
        'NetworkConnectionStatus': 'networkConnectionStatus',
        'NetworkOperationStatus': 'networkOperationStatus',
        'NetworkDataProcessingResult': 'networkDataProcessingResult',
        'NetworkHeaderValidationResult': 'networkHeaderValidationResult',
        'NetworkFirstPhaseProcessed': 'networkFirstPhaseProcessed',
        'NetworkSecondPhaseProcessed': 'networkSecondPhaseProcessed',
        'NetworkPrimaryStatus': 'networkPrimaryStatus',
        
        # 常见的Connection系列
        'ConnectionEventHandler': 'connectionEventHandler',
        'ConnectionAttempts': 'connectionAttempts',
        'ConnectionFailures': 'connectionFailures',
        'ConnectionTime': 'connectionTime',
        'ConnectionQueue': 'connectionQueue',
        'ConnectionHandle': 'connectionHandle',
        'ConnectionStatus': 'connectionStatus',
        'ConnectionInitStatus': 'connectionInitStatus',
        
        # 常见的Packet系列
        'PacketProcessingStatus': 'packetProcessingStatus',
        'PacketProcessingBuffer': 'packetProcessingBuffer',
        'PacketFlags': 'packetFlags',
        'PacketProcessed': 'packetProcessed',
        
        # 其他常见大写变量
        'ErrorProcessor': 'errorProcessor',
        'ErrorCounter': 'errorCounter',
        'BytesSent': 'bytesSent',
        'BytesReceived': 'bytesReceived',
        'PacketsSent': 'packetsSent',
        'PacketsReceived': 'packetsReceived',
        'ActiveConnections': 'activeConnections',
        'ValidationResult': 'validationResult',
        'InitializationStatus': 'initializationStatus',
        'ProcessedSize': 'processedSize',
        'StatusCode': 'statusCode',
        'OperationStatus': 'operationStatus',
        'CurrentOffset': 'currentOffset',
        'ProcessedBytes': 'processedBytes',
        'FirstProcessingStatus': 'firstProcessingStatus',
        'SecondProcessingStatus': 'secondProcessingStatus',
        'DataProcessedSize': 'dataProcessedSize',
        'PrimaryConnectionStatus': 'primaryConnectionStatus',
        'SecondaryConnectionStatus': 'secondaryConnectionStatus',
        'DataSize': 'dataSize',
        'ProcessingStatus': 'processingStatus',
    }
    
    # 应用变量名替换，按长度从长到短排序以避免部分匹配问题
    sorted_vars = sorted(variable_replacements.items(), key=lambda x: len(x[0]), reverse=True)
    
    replacement_count = 0
    for old_name, new_name in sorted_vars:
        # 使用单词边界确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        matches = re.findall(pattern, content)
        if matches:
            content = re.sub(pattern, new_name, content)
            replacement_count += len(matches)
            print(f"替换: {old_name} -> {new_name} ({len(matches)} 次)")
    
    # 删除多余的空行
    content = re.sub(r'\n\s*\n\s*\n\s*\n', '\n\n\n', content)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"美化完成！共替换了 {replacement_count} 个变量名")
    print(f"结果已写入: {file_path}")

if __name__ == "__main__":
    beautify_networking_file()