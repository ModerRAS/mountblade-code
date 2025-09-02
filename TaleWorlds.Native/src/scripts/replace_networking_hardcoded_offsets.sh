#!/bin/bash

# 网络文件硬编码偏移量替换脚本
# 为05_networking.c文件中的硬编码偏移量添加语义化常量定义

# 创建常量定义
cat > /tmp/network_offsets.h << 'EOF'
/* 网络连接上下文偏移量 */
#define ConnectionContextFlagsOffset 0x5d
#define ConnectionContextPriorityOffset 0x5c
#define ConnectionContextArrayOffset 0xc
#define ConnectionContextStatusOffset 0xb
#define ConnectionContextDataOffset 0x5
#define ConnectionContextTimeoutOffset 0x49
#define ConnectionContextSettingsOffset 0x48
#define ConnectionContextTableOffset 0x19
#define ConnectionContextEncryptionOffset 0x16
#define ConnectionContextSecurityOffset 0x17
#define ConnectionContextStatusFlagOffset 0x12
#define ConnectionContextPacketDataOffset 0x11
#define ConnectionContextHandleOffset 0x10
#define ConnectionContextSizeOffset 0xf
#define ConnectionContextNetworkOffset 0xe
#define ConnectionContextSessionOffset 0xd
#define ConnectionContextStateOffset 0x2
#define ConnectionContextPrimaryOffset 0x3
#define ConnectionContextSecondaryOffset 0x4
#define ConnectionContextValidationOffset 0x15
#define ConnectionContextParameterOffset 0x14
#define ConnectionContextNetworkDataOffset 0x18

/* 网络数据包偏移量 */
#define PacketDataHeaderOffset 0x18
#define PacketDataSizeOffset 0x28
#define PacketDataHashOffset 0x98
#define PacketDataValidationOffset 0x90
#define PacketDataBufferOffset 0x50
#define PacketDataLengthOffset 0x58
#define PacketDataConnectionOffset 0x10
#define PacketDataIndexOffset 0x20

/* 网络表偏移量 */
#define NetworkTableSizeOffset 0x88
#define NetworkTableDataOffset 0x80
#define NetworkTableEntrySize 0x10
#define NetworkTableValidationOffset 0x38
#define NetworkTableStatusOffset 0x3c
#define NetworkTableConnectionOffset 0x40
#define NetworkTableTransferOffset 0x44
#define NetworkTableProcessorOffset 0x270

/* 网络状态偏移量 */
#define NetworkStatusFlagsOffset 0x24
#define NetworkStatusValidationOffset 0x98
#define NetworkStatusSessionOffset 0x200
#define NetworkStatusDataOffset 0x10
#define NetworkStatusConnectionOffset 0x18
#define NetworkStatusCompressionOffset 0x1c
#define NetworkStatusEncryptionOffset 0x20
#define NetworkStatusPacketOffset 0x24
#define NetworkStatusTransferOffset 0x28
#define NetworkStatusTimeoutOffset 0x30
#define NetworkStatusRetryOffset 0x34
#define NetworkStatusContextOffset 0x40
#define NetworkStatusHandleOffset 0x20
#define NetworkStatusAddressOffset 0x28
#define NetworkStatusPortOffset 0x2c
#define NetworkStatusConfigOffset 0x2c
#define NetworkStatusPrimaryOffset 0x10
#define NetworkStatusSecondaryOffset 0x14
#define NetworkStatusTertiaryOffset 0x18

/* 网络缓冲区偏移量 */
#define NetworkBufferContextOffset 0xc0
#define NetworkBufferTableOffset 0xb0
#define NetworkBufferDataOffset 0x25
#define NetworkBufferSizeOffset 0xa8
#define NetworkBufferValidationOffset 0x1d
#define NetworkBufferProcessingOffset 0x20
#define NetworkBufferCompressionOffset 0x28
#define NetworkBufferEncryptionOffset 0x50

/* 网络安全偏移量 */
#define SecurityContextKeyOffset 0x50
#define SecurityContextValidationOffset 0x24
#define SecurityContextEncryptionOffset 0x1c
#define SecurityContextTimeoutOffset 0x24
#define SecurityContextConnectionOffset 0x44
#define SecurityContextSessionOffset 0x34
#define SecurityContextAuthenticationOffset 0x38
#define SecurityContextProtocolOffset 0x30
#define SecurityContextValidationOffset 0x3c
#define SecurityContextFinalOffset 0x40

/* 网络错误代码 */
#define NetworkErrorNotFound 0x4a
#define NetworkErrorInvalid 0x4b
#define NetworkErrorConnection 0x1c
#define NetworkErrorValidation 0x1f
#define NetworkErrorProcessing 0xc
#define NetworkErrorTimeout 0xb
#define NetworkErrorMemory 0x1f
#define NetworkErrorHandle 0xffffffff
#define NetworkErrorSecurity 0xfffffffc
#define NetworkErrorConnectionFailed 0xfffffffe
#define NetworkErrorTimeoutExtended 0xfffffffd
#define NetworkErrorInitialization 0x1f

/* 网络常量值 */
#define NetworkConnectionMaxParamValue 0x20300
#define NetworkConnectionMinParamValue 0x20200
#define NetworkConnectionRange 0x100
#define NetworkConnectionPrimary 0x20214
#define NetworkConnectionBase 0x20200
#define NetworkConnectionDebug 0x80
#define NetworkConnectionActive 0x1
#define NetworkConnectionSecure 0x2
#define NetworkConnectionConnected 0x4
#define NetworkConnectionSystem 0x98
#define NetworkConnectionSession 0x200
#define NetworkConnectionBuffer 0x28
#define NetworkConnectionData 0x20
#define NetworkConnectionFlags 0x24
#define NetworkConnectionParameter 0xc
#define NetworkConnectionTable 0x1a0
#define NetworkConnectionEntry 0x14
#define NetworkConnectionSecurity 0x100
#define NetworkConnectionPacket 0x18
#define NetworkConnectionStatus 0x2
#define NetworkConnectionIndex 0x1f

/* 网络处理常量 */
#define NetworkProcessingSize 0x10
#define NetworkProcessingOffset 0x270
#define NetworkProcessingValidation 0x38
#define NetworkProcessingStatus 0x3c
#define NetworkProcessingConnection 0x40
#define NetworkProcessingTransfer 0x44
#define NetworkProcessingTimeout 0x58
#define NetworkProcessingBuffer 0x50
#define NetworkProcessingLength 0x58
#define NetworkProcessingData 0x10
#define NetworkProcessingIndex 0x20
#define NetworkProcessingContext 0x18
#define NetworkProcessingSession 0x200
#define NetworkProcessingFlags 0x24
#define NetworkProcessingHandle 0x98
#define NetworkProcessingPacket 0x18
#define NetworkProcessingCompression 0x1c
#define NetworkProcessingEncryption 0x20
#define NetworkProcessingValidationOffset 0x24
#define NetworkProcessingTransferOffset 0x28
#define NetworkProcessingTimeoutOffset 0x30
#define NetworkProcessingRetryOffset 0x34
#define NetworkProcessingContextOffset 0x40
#define NetworkProcessingDataOffset 0x20
#define NetworkProcessingAddressOffset 0x28
#define NetworkProcessingPortOffset 0x2c
#define NetworkProcessingConfigOffset 0x2c
#define NetworkProcessingPrimaryOffset 0x10
#define NetworkProcessingSecondaryOffset 0x14
#define NetworkProcessingTertiaryOffset 0x18
EOF

# 将常量定义添加到文件开头
sed -i '/^\/\* 网络系统偏移量常量定义 \*\//r /tmp/network_offsets.h' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 清理临时文件
rm -f /tmp/network_offsets.h

echo "网络偏移量常量定义已添加到05_networking.c文件"