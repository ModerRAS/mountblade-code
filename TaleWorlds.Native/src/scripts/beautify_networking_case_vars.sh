#!/bin/bash

# 美化05_networking.c文件中的变量名
# 将大写开头的变量名改为小写开头（PascalCase命名规范）

echo "开始美化05_networking.c文件中的变量名..."

file_path="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 备份原始文件
cp "$file_path" "$file_path.backup_variable_case"

# 主要变量名替换
sed -i 's/\bDataProcessingResult\b/dataProcessingResult/g' "$file_path"
sed -i 's/\bNetworkProcessingResult\b/networkProcessingResult/g' "$file_path"
sed -i 's/\bNetworkConnectionOperationResult\b/networkConnectionOperationResult/g' "$file_path"
sed -i 's/\bNetworkEncryptionKey\b/networkEncryptionKey/g' "$file_path"
sed -i 's/\bNetworkFlags\b/networkFlags/g' "$file_path"
sed -i 's/\bNetworkEncryptionKeyLength\b/networkEncryptionKeyLength/g' "$file_path"

# NetworkConnection系列
sed -i 's/\bNetworkConnectionTableHandle\b/networkConnectionTableHandle/g' "$file_path"
sed -i 's/\bNetworkConnectionStatusFlags\b/networkConnectionStatusFlags/g' "$file_path"
sed -i 's/\bNetworkConnectionTimeoutMilliseconds\b/networkConnectionTimeoutMilliseconds/g' "$file_path"
sed -i 's/\bNetworkConnectionMaximumLimit\b/networkConnectionMaximumLimit/g' "$file_path"
sed -i 's/\bNetworkConnectionAttributeFlags\b/networkConnectionAttributeFlags/g' "$file_path"
sed -i 's/\bNetworkConnectionProtocolType\b/networkConnectionProtocolType/g' "$file_path"
sed -i 's/\bNetworkConnectionProtocolVersion\b/networkConnectionProtocolVersion/g' "$file_path"
sed -i 's/\bNetworkConnectionPoolSize\b/networkConnectionPoolSize/g' "$file_path"
sed -i 's/\bNetworkConnectionStateFlags\b/networkConnectionStateFlags/g' "$file_path"
sed -i 's/\bNetworkConnectionContext\b/networkConnectionContext/g' "$file_path"
sed -i 's/\bNetworkConnectionData\b/networkConnectionData/g' "$file_path"
sed -i 's/\bNetworkConnectionManager\b/networkConnectionManager/g' "$file_path"
sed -i 's/\bNetworkConnectionInitializationStatus\b/networkConnectionInitializationStatus/g' "$file_path"
sed -i 's/\bNetworkConnectionHandleIdentifier\b/networkConnectionHandleIdentifier/g' "$file_path"
sed -i 's/\bNetworkConnectionCurrentStatus\b/networkConnectionCurrentStatus/g' "$file_path"
sed -i 's/\bNetworkConnectionFlags\b/networkConnectionFlags/g' "$file_path"

# NetworkPacket系列
sed -i 's/\bNetworkPacketBufferPointer\b/networkPacketBufferPointer/g' "$file_path"
sed -i 's/\bNetworkPacketHeaderPointer\b/networkPacketHeaderPointer/g' "$file_path"
sed -i 's/\bNetworkPacketPayloadSize\b/networkPacketPayloadSize/g' "$file_path"
sed -i 's/\bNetworkMaxPacketSize\b/networkMaxPacketSize/g' "$file_path"
sed -i 's/\bNetworkPacketContext\b/networkPacketContext/g' "$file_path"
sed -i 's/\bNetworkPacketData\b/networkPacketData/g' "$file_path"

# NetworkProcessing系列
sed -i 's/\bNetworkProcessingStatus\b/networkProcessingStatus/g' "$file_path"
sed -i 's/\bNetworkProcessingStepResult\b/networkProcessingStepResult/g' "$file_path"
sed -i 's/\bNetworkOperationProgress\b/networkOperationProgress/g' "$file_path"
sed -i 's/\bNetworkErrorCode\b/networkErrorCode/g' "$file_path"
sed -i 's/\bNetworkConnectionStatus\b/networkConnectionStatus/g' "$file_path"
sed -i 's/\bNetworkOperationStatus\b/networkOperationStatus/g' "$file_path"
sed -i 's/\bNetworkDataProcessingResult\b/networkDataProcessingResult/g' "$file_path"
sed -i 's/\bNetworkHeaderValidationResult\b/networkHeaderValidationResult/g' "$file_path"
sed -i 's/\bNetworkFirstPhaseProcessed\b/networkFirstPhaseProcessed/g' "$file_path"
sed -i 's/\bNetworkSecondPhaseProcessed\b/networkSecondPhaseProcessed/g' "$file_path"
sed -i 's/\bNetworkPrimaryStatus\b/networkPrimaryStatus/g' "$file_path"

# Connection系列
sed -i 's/\bConnectionEventHandler\b/connectionEventHandler/g' "$file_path"
sed -i 's/\bConnectionAttempts\b/connectionAttempts/g' "$file_path"
sed -i 's/\bConnectionFailures\b/connectionFailures/g' "$file_path"
sed -i 's/\bConnectionTime\b/connectionTime/g' "$file_path"
sed -i 's/\bConnectionQueue\b/connectionQueue/g' "$file_path"
sed -i 's/\bConnectionHandle\b/connectionHandle/g' "$file_path"
sed -i 's/\bConnectionStatus\b/connectionStatus/g' "$file_path"
sed -i 's/\bConnectionInitStatus\b/connectionInitStatus/g' "$file_path"

# Packet系列
sed -i 's/\bPacketProcessingStatus\b/packetProcessingStatus/g' "$file_path"
sed -i 's/\bPacketProcessingBuffer\b/packetProcessingBuffer/g' "$file_path"
sed -i 's/\bPacketFlags\b/packetFlags/g' "$file_path"
sed -i 's/\bPacketProcessed\b/packetProcessed/g' "$file_path"

# 其他常见大写变量
sed -i 's/\bErrorProcessor\b/errorProcessor/g' "$file_path"
sed -i 's/\bErrorCounter\b/errorCounter/g' "$file_path"
sed -i 's/\bBytesSent\b/bytesSent/g' "$file_path"
sed -i 's/\bBytesReceived\b/bytesReceived/g' "$file_path"
sed -i 's/\bPacketsSent\b/packetsSent/g' "$file_path"
sed -i 's/\bPacketsReceived\b/packetsReceived/g' "$file_path"
sed -i 's/\bActiveConnections\b/activeConnections/g' "$file_path"
sed -i 's/\bValidationResult\b/validationResult/g' "$file_path"
sed -i 's/\bInitializationStatus\b/initializationStatus/g' "$file_path"
sed -i 's/\bProcessedSize\b/processedSize/g' "$file_path"
sed -i 's/\bStatusCode\b/statusCode/g' "$file_path"
sed -i 's/\bOperationStatus\b/operationStatus/g' "$file_path"
sed -i 's/\bCurrentOffset\b/currentOffset/g' "$file_path"
sed -i 's/\bProcessedBytes\b/processedBytes/g' "$file_path"
sed -i 's/\bFirstProcessingStatus\b/firstProcessingStatus/g' "$file_path"
sed -i 's/\bSecondProcessingStatus\b/secondProcessingStatus/g' "$file_path"
sed -i 's/\bDataProcessedSize\b/dataProcessedSize/g' "$file_path"
sed -i 's/\bPrimaryConnectionStatus\b/primaryConnectionStatus/g' "$file_path"
sed -i 's/\bSecondaryConnectionStatus\b/secondaryConnectionStatus/g' "$file_path"
sed -i 's/\bDataSize\b/dataSize/g' "$file_path"
sed -i 's/\bProcessingStatus\b/processingStatus/g' "$file_path"

# 删除多余的空行（3个或更多连续空行替换为2个）
sed -i '/^$/N;/^\n$/N;/^\n$/d' "$file_path"

echo "变量名美化完成！"
echo "文件已更新: $file_path"
echo "备份文件: $file_path.backup_variable_case"