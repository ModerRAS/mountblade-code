#!/bin/bash

# 美化05_networking.c中的变量名
# 将数字序号命名的变量改为更具语义化的名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 状态变量美化
sed -i 's/OperationPrimaryStatus/PrimaryOperationStatus/g' "$FILE_PATH"
sed -i 's/networkOperationSecondaryStatus/SecondaryOperationStatus/g' "$FILE_PATH"
sed -i 's/QuaternaryStatusFlag/QuaternaryStatusFlag/g' "$FILE_PATH"
sed -i 's/QuinaryStatusFlag/QuinaryStatusFlag/g' "$FILE_PATH"
sed -i 's/SecondaryStatus/SecondaryStatusFlag/g' "$FILE_PATH"
sed -i 's/ProcessingStatus/NetworkProcessingStatus/g' "$FILE_PATH"
sed -i 's/networkErrorFlag/NetworkErrorStatus/g' "$FILE_PATH"
sed -i 's/networkTransferStatus/NetworkTransferStatus/g' "$FILE_PATH"

# 连接相关变量美化
sed -i 's/ConnectionHandleTertiary/TertiaryConnectionHandle/g' "$FILE_PATH"
sed -i 's/ConnectionHandleMax/MaximumConnectionHandle/g' "$FILE_PATH"
sed -i 's/primaryConnectionHandle/PrimaryConnectionHandle/g' "$FILE_PATH"
sed -i 's/secondaryConnectionHandle/SecondaryConnectionHandle/g' "$FILE_PATH"

# 缓冲区变量美化
sed -i 's/DataBuffer/NetworkDataBuffer/g' "$FILE_PATH"
sed -i 's/DataBufferHandle/NetworkDataBufferHandle/g' "$FILE_PATH"
sed -i 's/networkContextArray/NetworkContextArray/g' "$FILE_PATH"
sed -i 's/networkDataArray/NetworkDataArray/g' "$FILE_PATH"
sed -i 's/networkStackBuffer/NetworkStackBuffer/g' "$FILE_PATH"
sed -i 's/networkStackOffset/NetworkStackOffset/g' "$FILE_PATH"
sed -i 's/NetworkStackLong1/NetworkStackPointer/g' "$FILE_PATH"

# 循环变量美化
sed -i 's/NetworkIterationCounter/NetworkLoopCounter/g' "$FILE_PATH"
sed -i 's/dataAccumulator/DataAccumulator/g' "$FILE_PATH"
sed -i 's/currentOffset/CurrentDataOffset/g' "$FILE_PATH"
sed -i 's/processedSize1/ProcessedDataSize/g' "$FILE_PATH"
sed -i 's/processedBytes/ProcessedByteCount/g' "$FILE_PATH"

# 指针变量美化
sed -i 's/pnetworkContextEntry/NetworkContextEntryPointer/g' "$FILE_PATH"
sed -i 's/pProcessingStatus/ProcessingStatusPointer/g' "$FILE_PATH"
sed -i 's/packetDataPointer/PacketDataPointer/g' "$FILE_PATH"
sed -i 's/PacketFlagsPointer/PacketFlagsPointer/g' "$FILE_PATH"
sed -i 's/pConnectionHandlePacket/ConnectionHandlePacketPointer/g' "$FILE_PATH"

# 其他变量美化
sed -i 's/networkContextPointer/NetworkContextPointer/g' "$FILE_PATH"
sed -i 's/networkFlags/NetworkFlags/g' "$FILE_PATH"
sed -i 's/HandleVar/HandleVariable/g' "$FILE_PATH"
sed -i 's/networkSecurityContext/NetworkSecurityContext/g' "$FILE_PATH"
sed -i 's/OperationStatus/NetworkOperationStatus/g' "$FILE_PATH"
sed -i 's/networkSecondaryStatusFlag/SecondaryNetworkStatusFlag/g' "$FILE_PATH"
sed -i 's/networkOperationQuaternaryStatus/QuaternaryOperationStatus/g' "$FILE_PATH"
sed -i 's/networkOperationTertiaryStatus/TertiaryOperationStatus/g' "$FILE_PATH"

echo "网络变量名美化完成"