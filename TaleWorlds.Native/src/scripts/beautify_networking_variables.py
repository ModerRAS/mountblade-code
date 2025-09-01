#!/usr/bin/env python3
"""
网络系统变量美化脚本
用于批量重命名网络系统中的变量为语义化名称
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(file_path, content):
    """写入文件内容"""
    try:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def beautify_networking_variables(content):
    """美化网络系统变量名"""
    
    # 定义变量替换规则
    replacements = [
        # 网络数据包相关变量
        (r'anetworkConnectionHandle\b', 'NetworkPacketValidationBuffer'),
        (r'anetworkStack28\b', 'NetworkPacketEncryptionBuffer'),
        (r'packetBuffer\b', 'NetworkPacketDataBuffer'),
        
        # 网络标志变量
        (r'primaryNetworkFlag\b', 'NetworkPrimaryStatusFlag'),
        (r'secondaryNetworkFlag\b', 'NetworkSecondaryStatusFlag'),
        (r'tertiaryNetworkFlag\b', 'NetworkTertiaryStatusFlag'),
        (r'quaternaryNetworkFlag\b', 'NetworkQuaternaryStatusFlag'),
        (r'quinaryNetworkFlag\b', 'NetworkQuinaryStatusFlag'),
        
        # 网络栈变量
        (r'anetworkStack\d+\b', 'NetworkStackBuffer'),
        (r'networkStack\d+\b', 'NetworkStackData'),
        
        # 网络指针变量
        (r'networkPointer\d+\b', 'NetworkContextPointer'),
        (r'pnetworkPointer\d+\b', 'NetworkContextPointer'),
        (r'pnetworkFlags\b', 'NetworkFlagsPointer'),
        (r'ptertiaryNetworkFlag\b', 'NetworkTertiaryFlagPointer'),
        
        # 网络状态变量
        (r'networkStatus\d+\b', 'NetworkOperationStatus'),
        (r'networkResult\d+\b', 'NetworkOperationResult'),
        (r'networkIndex\d+\b', 'NetworkConnectionIndex'),
        
        # 网络缓冲区变量
        (r'networkBuffer\b', 'NetworkDataBuffer'),
        (r'networkBufferIndex\b', 'NetworkBufferIndex'),
        
        # 网络偏移变量
        (r'networkOffset\d+\b', 'NetworkDataOffset'),
        
        # 网络句柄变量
        (r'networkHandle\d+\b', 'NetworkConnectionHandle'),
        (r'pnetworkHandle\d+\b', 'NetworkHandlePointer'),
        
        # 网络数据变量
        (r'networkDataPointer\d+\b', 'NetworkDataPointer'),
        (r'networkArrayIndex\b', 'NetworkArrayIndex'),
        (r'networkArray\d+\b', 'NetworkDataArray'),
        
        # 网络连接变量
        (r'connectionContext\b', 'NetworkConnectionContext'),
        (r'connectionData\d+\b', 'NetworkConnectionData'),
        
        # 网络迭代变量
        (r'networkLoopCounter\b', 'NetworkIterationCounter'),
        (r'NetworkIterationCounter\b', 'NetworkOperationCounter'),
        
        # 网络标志变量
        (r'networkPacketFlags\b', 'NetworkPacketFlags'),
        (r'networkConnectionFlags\b', 'NetworkConnectionFlags'),
        (r'NetworkConnectionParameter\b', 'NetworkConnectionParameters'),
        
        # 网络安全变量
        (r'NetworkSecurityGuardValue\b', 'NetworkSecurityContext'),
        (r'NetworkSecurityGuardCleanup\b', 'NetworkSecurityCleanup'),
        
        # 网络内存变量
        (r'NetworkMemoryAllocator\b', 'NetworkMemoryManager'),
        
        # 网络验证变量
        (r'NetworkStackValidation\d+\b', 'NetworkValidationBuffer'),
        
        # 网络模板变量
        (r'NetworkPacketTemplateBuffer\b', 'NetworkTemplateBuffer'),
        
        # 网络地址变量
        (r'NetworkAddressBuffer\b', 'NetworkAddressData'),
        
        # 网络超时变量
        (r'ConnectionTimeoutValue\b', 'NetworkTimeoutDuration'),
        
        # 网络传输变量
        (r'BufferProcessingResult\b', 'NetworkBufferStatus'),
        (r'NetworkTransferStatus\b', 'NetworkTransferState'),
        
        # 网络ID变量
        (r'networkConnectionId\b', 'NetworkConnectionIdentifier'),
        (r'NetworkConnectionIdInitialize\b', 'NetworkConnectionIdSetup'),
        
        # 网络会话变量
        (r'ConnectionSessionData\b', 'NetworkSessionData'),
        
        # 网络验证变量
        (r'SecurityCertificateValidation\b', 'NetworkCertificateCheck'),
        
        # 网络传输变量
        (r'NetworkTransmissionContext\b', 'NetworkTransferContext'),
        (r'NetworkTransmissionProtocol\b', 'NetworkTransferProtocol'),
        
        # 网络通道变量
        (r'NetworkPacketChannel\b', 'NetworkDataChannel'),
        
        # 网络初始化变量
        (r'NetworkHandleInitResult\b', 'NetworkHandleInitialization'),
        
        # 网络栈变量
        (r'NetworkStackLong\d+\b', 'NetworkStackData'),
        
        # 网络验证变量
        (r'ValidateAndProcessNetworkConnectionData\b', 'NetworkConnectionValidation'),
        
        # 网络握手变量
        (r'ProcessConnectionHandshake\b', 'NetworkHandshakeProcess'),
        
        # 网络操作变量
        (r'HandleNetworkPacketReceive\b', 'NetworkPacketReceiveHandler'),
        (r'ProcessNetworkPacketStream\b', 'NetworkPacketStreamProcessor'),
        
        # 网络配置变量
        (r'NetworkSocketParameter\b', 'NetworkSocketParameters'),
        (r'StackParameterBuffer\d+\b', 'ParameterDataBuffer'),
        
        # 网络设置变量
        (r'NetworkSetupConnectionParameters\b', 'NetworkConnectionSetup'),
        
        # 网络最终化变量
        (r'NetworkFinalizeConnectionSetup\b', 'NetworkConnectionFinalize'),
        
        # 网络准备变量
        (r'PrepareNetworkPacketTransmission\b', 'NetworkPacketTransmissionPrepare'),
        
        # 网络缓冲区变量
        (r'GetNetworkTransmissionBuffer\b', 'NetworkTransmissionBufferGet'),
        (r'ConfigureNetworkTransmissionBuffer\b', 'NetworkTransmissionBufferConfigure'),
        
        # 网络写入变量
        (r'WriteToNetworkBuffer\b', 'NetworkBufferWrite'),
        
        # 网络处理变量
        (r'ProcessNetworkBuffer\b', 'NetworkBufferProcessor'),
        (r'ValidateBufferData\b', 'NetworkBufferValidation'),
        
        # 网络创建变量
        (r'NetworkCreateConnectionHandle\b', 'NetworkConnectionHandleCreate'),
        
        # 网络状态变量
        (r'NetworkConnectionStatusSync\b', 'NetworkConnectionStateSync'),
        
        # 网络操作变量
        (r'ProcessNetworkConnectionStatus\b', 'NetworkConnectionStatusProcess'),
        
        # 网络数据变量
        (r'ProcessNetworkDataTransfer\b', 'NetworkDataTransferProcess'),
        
        # 网络错误码变量
        (r'GetNetworkErrorCode\b', 'NetworkErrorCodeGet'),
        
        # 网络表变量
        (r'NetworkConnectionTableHandle\b', 'NetworkConnectionTable'),
        
        # 网络超时变量
        (r'NetworkConnectionTimeoutDuration\b', 'NetworkConnectionTimeout'),
        
        # 网络数据变量
        (r'NetworkPacketBufferData\b', 'NetworkPacketBuffer'),
        (r'NetworkPacketHeaderData\b', 'NetworkPacketHeader'),
        
        # 网络限制变量
        (r'NetworkConnectionMaximumLimit\b', 'NetworkConnectionLimit'),
        
        # 网络属性变量
        (r'NetworkConnectionAttributeFlags\b', 'NetworkConnectionAttributes'),
        
        # 网络协议变量
        (r'NetworkConnectionProtocolType\b', 'NetworkConnectionProtocol'),
        (r'NetworkConnectionProtocolVersion\b', 'NetworkProtocolVersion'),
        
        # 网络地址变量
        (r'NetworkServerIpAddress\b', 'NetworkServerAddress'),
        (r'NetworkServerPortNumber\b', 'NetworkServerPort'),
        (r'NetworkClientIpAddress\b', 'NetworkClientAddress'),
        (r'NetworkClientPortNumber\b', 'NetworkClientPort'),
        
        # 网络套接字变量
        (r'NetworkSocketFileDescriptor\b', 'NetworkSocketDescriptor'),
        (r'NetworkSocketCategory\b', 'NetworkSocketType'),
        (r'NetworkSocketProtocolType\b', 'NetworkSocketProtocol'),
        
        # 网络连接池变量
        (r'NetworkConnectionPool\b', 'NetworkConnectionPool'),
        
        # 网络缓冲区变量
        (r'NetworkSendBuffer\b', 'NetworkTransmissionBuffer'),
        (r'NetworkReceiveBuffer\b', 'NetworkReceptionBuffer'),
        (r'NetworkSendBufferCapacity\b', 'NetworkTransmissionCapacity'),
        (r'NetworkReceiveBufferCapacity\b', 'NetworkReceptionCapacity'),
        
        # 网络数据包变量
        (r'NetworkPacketPayloadSize\b', 'NetworkPayloadSize'),
        (r'NetworkMaxPacketSize\b', 'NetworkMaximumPacketSize'),
        
        # 网络超时变量
        (r'NetworkConnectionTimeoutMilliseconds\b', 'NetworkConnectionTimeout'),
        
        # 网络安全变量
        (r'NetworkEncryptionKey\b', 'NetworkSecurityKey'),
        (r'NetworkCompressionLevel\b', 'NetworkDataCompression'),
        
        # 网络状态变量
        (r'NetworkConnectionStateFlags\b', 'NetworkConnectionState'),
        
        # 网络配置变量
        (r'NetworkConnectionInitializationConfigDataPointer\b', 'NetworkInitializationConfig'),
        (r'NetworkConnectionAlternateConfigDataPointer\b', 'NetworkAlternateConfig'),
        (r'NetworkConnectionHeaderConfigDataPointer\b', 'NetworkHeaderConfig'),
        (r'NetworkConnectionDataConfigDataPointer\b', 'NetworkDataConfig'),
        (r'NetworkConnectionRequestConfigDataPointer\b', 'NetworkRequestConfig'),
        (r'NetworkConnectionFirstProcessingConfigDataPointer\b', 'NetworkPrimaryProcessingConfig'),
        (r'NetworkConnectionSecondaryProcessingConfigDataPointer\b', 'NetworkSecondaryProcessingConfig'),
        (r'NetworkConnectionTertiaryProcessingConfigDataPointer\b', 'NetworkTertiaryProcessingConfig'),
        (r'NetworkConnectionQuaternaryProcessingConfigDataPointer\b', 'NetworkQuaternaryProcessingConfig'),
        (r'NetworkConnectionQuinaryProcessingConfigDataPointer\b', 'NetworkQuinaryProcessingConfig'),
        
        # 网络上下文变量
        (r'NetworkConnectionContextData\b', 'NetworkContextData'),
        (r'NetworkConnectionSecurityContext\b', 'NetworkSecurityContext'),
        (r'NetworkConnectionBufferPool\b', 'NetworkBufferPool'),
        (r'NetworkConnectionRequestData\b', 'NetworkRequestData'),
        (r'NetworkConnectionResponseData\b', 'NetworkResponseData'),
        (r'NetworkConnectionErrorData\b', 'NetworkErrorData'),
        (r'NetworkConnectionStatusData\b', 'NetworkStatusData'),
        (r'NetworkConnectionTimeoutData\b', 'NetworkTimeoutData'),
        (r'NetworkConnectionValidationData\b', 'NetworkValidationData'),
        (r'NetworkConnectionEncryptionData\b', 'NetworkEncryptionData'),
        (r'NetworkConnectionCompressionData\b', 'NetworkCompressionData'),
        
        # 网络处理缓冲区变量
        (r'NetworkPacketProcessingBuffer\b', 'NetworkProcessingBuffer'),
        (r'NetworkPacketValidationBuffer\b', 'NetworkValidationBuffer'),
        (r'NetworkPacketEncryptionBuffer\b', 'NetworkEncryptionBuffer'),
        (r'NetworkPacketCompressionBuffer\b', 'NetworkCompressionBuffer'),
        (r'NetworkPacketRoutingBuffer\b', 'NetworkRoutingBuffer'),
        (r'NetworkPacketQueueBuffer\b', 'NetworkQueueBuffer'),
        (r'NetworkPacketCacheBuffer\b', 'NetworkCacheBuffer'),
        (r'NetworkPacketFilterBuffer\b', 'NetworkFilterBuffer'),
        
        # 网络安全变量
        (r'NetworkSecurityContextData\b', 'NetworkSecurityData'),
        (r'NetworkSecurityValidationData\b', 'NetworkSecurityValidation'),
        (r'NetworkSecurityEncryptionData\b', 'NetworkSecurityEncryption'),
        (r'NetworkSecurityAuthenticationData\b', 'NetworkSecurityAuthentication'),
        (r'NetworkSecurityAuthorizationData\b', 'NetworkSecurityAuthorization'),
        (r'NetworkSecurityAuditData\b', 'NetworkSecurityAudit'),
        (r'NetworkSecurityPolicyData\b', 'NetworkSecurityPolicy'),
        (r'NetworkSecurityCertificateData\b', 'NetworkSecurityCertificate'),
        
        # 网络连接池变量
        (r'NetworkConnectionPoolData\b', 'NetworkPoolData'),
        (r'NetworkConnectionPoolMetadata\b', 'NetworkPoolMetadata'),
        (r'NetworkConnectionPoolStatistics\b', 'NetworkPoolStatistics'),
        (r'NetworkConnectionPoolConfiguration\b', 'NetworkPoolConfiguration'),
        (r'NetworkConnectionPoolHealth\b', 'NetworkPoolHealth'),
        (r'NetworkConnectionPoolMetrics\b', 'NetworkPoolMetrics'),
        (r'NetworkConnectionPoolAllocation\b', 'NetworkPoolAllocation'),
        (r'NetworkConnectionPoolDeallocation\b', 'NetworkPoolDeallocation'),
        
        # 网络上下文变量
        (r'NetworkConnectionContextTemplate\b', 'NetworkContextTemplate'),
        (r'NetworkConnectionPrimaryConfigData\b', 'NetworkPrimaryConfig'),
        (r'NetworkConnectionSecondaryConfigData\b', 'NetworkSecondaryConfig'),
        (r'NetworkConnectionProcessingConfigData\b', 'NetworkProcessingConfig'),
        (r'NetworkConnectionTransportConfigData\b', 'NetworkTransportConfig'),
        (r'NetworkConnectionProtocolConfigData\b', 'NetworkProtocolConfig'),
        (r'NetworkConnectionValidationConfigData\b', 'NetworkValidationConfig'),
        (r'NetworkConnectionRoutingConfigDataA\b', 'NetworkRoutingConfigA'),
        (r'NetworkConnectionRoutingConfigDataB\b', 'NetworkRoutingConfigB'),
        (r'NetworkConnectionRoutingConfigDataC\b', 'NetworkRoutingConfigC'),
        (r'NetworkConnectionRoutingConfigDataD\b', 'NetworkRoutingConfigD'),
        
        # 网络绑定变量
        (r'NetworkSocketBindingInfo\b', 'NetworkBindingData'),
        
        # 网络上下文变量
        (r'NetworkConnectionContextDataStructure\b', 'NetworkContextStructure'),
        
        # 栈变量替换
        (r'uStack_[0-9a-f_]+', 'StackVariable'),
        (r'lStack_[0-9a-f_]+', 'StackVariable'),
        (r'auStack_[0-9a-f_]+', 'StackArray'),
        (r'puStack_[0-9a-f_]+', 'StackPointer'),
        (r'plStack_[0-9a-f_]+', 'StackPointer'),
        (r'in_[A-Z][0-9a-f_]+', 'InputParameter'),
        
        # 局部变量替换
        (r'local_[0-9a-f_]+', 'LocalVariable'),
        
        # 标签替换
        (r'LAB_[0-9a-f]{8}', 'LabelLocation'),
        
        # 网络数据类型替换
        (r'NetworkByte\b', 'NetworkDataByte'),
        (r'NetworkStatus\b', 'NetworkStatusData'),
        (r'NetworkHandle\b', 'NetworkConnectionHandle'),
    ]
    
    # 应用替换规则
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("使用方法: python beautify_networking_variables.py <文件路径>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    # 读取文件
    content = read_file(file_path)
    if content is None:
        sys.exit(1)
    
    # 美化变量名
    beautified_content = beautify_networking_variables(content)
    
    # 写入文件
    if write_file(file_path, beautified_content):
        print(f"文件 {file_path} 美化完成")
    else:
        sys.exit(1)

if __name__ == "__main__":
    main()