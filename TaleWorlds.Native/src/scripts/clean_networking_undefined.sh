#!/bin/bash

# 清理网络系统代码中的未定义变量
# 这个脚本将批量替换未定义的变量名为更合适的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建临时文件
temp_file=$(mktemp)

# 使用sed进行批量替换
sed -e 's/\bnetworkValidationResult\b/validationResult/g' \
    -e 's/\bNetworkProcessingStatus\b/processingStatus/g' \
    -e 's/\bNetworkPacketProcessingResult\b/packetProcessingResult/g' \
    -e 's/\bNetworkQueueProcessingResult\b/queueProcessingResult/g' \
    -e 's/\bNetworkPacketProcessingProgress\b/packetProcessingProgress/g' \
    -e 's/\bNetworkPacketProcessingStepResult\b/packetStepResult/g' \
    -e 's/\bNetworkOperationStatus\b/operationStatus/g' \
    -e 's/\bNetworkConnectionNetworkContextBuffer\b/networkContextBuffer/g' \
    -e 's/\bNetworkBuffer\b/networkBuffer/g' \
    -e 's/\bNetworkBufferArray\b/networkBufferArray/g' \
    -e 's/\bNetworkBufferTemplate\b/networkBufferTemplate/g' \
    -e 's/\bPacketProcessingTemplate\b/packetProcessingTemplate/g' \
    -e 's/\bConnectionPhaseOneTemplate\b/connectionPhaseOneTemplate/g' \
    -e 's/\bConnectionPhaseTwoTemplate\b/connectionPhaseTwoTemplate/g' \
    -e 's/\bConnectionTemplate\b/connectionTemplate/g' \
    -e 's/\bSecurityTemplate\b/securityTemplate/g' \
    -e 's/\bNetworkProcessingBufferTemplate\b/networkProcessingBufferTemplate/g' \
    -e 's/\bNetworkAdvancedProcessingBuffer\b/networkAdvancedProcessingBuffer/g' \
    -e 's/\bPacketDataBuffer\b/packetDataBuffer/g' \
    -e 's/\bNetworkConnectionTable\b/networkConnectionTable/g' \
    -e 's/\bSecurityValidationData\b/securityValidationData/g' \
    -e 's/\bNetworkSecurityValidationData\b/networkSecurityValidationData/g' \
    -e 's/\bNetworkConnectionPrimaryStatus\b/connectionPrimaryStatus/g' \
    -e 's/\bfirstNetworkFlag\b/primaryNetworkFlag/g' \
    -e 's/\bsecondNetworkFlag\b/secondaryNetworkFlag/g' \
    -e 's/\bthirdNetworkFlag\b/tertiaryNetworkFlag/g' \
    -e 's/\bValidationStatus\b/validationStatus/g' \
    -e 's/\bconnectionCompressionStatus\b/connectionCompressionStatus/g' \
    -e 's/\bpacketValidationStatus\b/packetValidationStatus/g' \
    -e 's/\bnetworkProcessingResult\b/processingResult/g' \
    -e 's/\bnetworkFlag\b/networkFlag/g' \
    -e 's/\bprimaryNetworkHandle\b/primaryNetworkHandle/g' \
    -e 's/\bcumulativeProcessedSize\b/cumulativeProcessedSize/g' \
    -e 's/\bprocessedBytes\b/processedBytes/g' \
    -e 's/\bcurrentOffset\b/currentOffset/g' \
    -e 's/\bnetworkOperationStatus\b/networkOperationStatus/g' \
    -e 's/\bnetworkOperationProgress\b/networkOperationProgress/g' \
    -e 's/\bnetworkPrimaryStatus\b/networkPrimaryStatus/g' \
    -e 's/\bnetworkContext\b/networkContext/g' \
    -e 's/\bconnectionHandle\b/connectionHandle/g' \
    -e 's/\bpacketId\b/packetId/g' \
    -e 's/\bpacketInformation\b/packetInformation/g' \
    -e 's/\bMaxTableEntries\b/maxTableEntries/g' \
    -e 's/\bvalidationResult\b/validationResult/g' \
    -e 's/\bnetworkContextIndex\b/networkContextIndex/g' \
    -e 's/\bnetworkContextArray\b/networkContextArray/g' \
    -e 's/\bnetworkContextEntry\b/networkContextEntry/g' \
    -e 's/\bfirstNetworkProcessingStatus\b/firstNetworkProcessingStatus/g' \
    -e 's/\bsecondNetworkProcessingStatus\b/secondNetworkProcessingStatus/g' \
    -e 's/\bbufferNetworkProcessingStatus\b/bufferNetworkProcessingStatus/g' \
    -e 's/\binitialNetworkProcessingStatus\b/initialNetworkProcessingStatus/g' \
    -e 's/\bInitialNetworkProcessingStatus\b/initialNetworkProcessingStatus/g' \
    -e 's/\bBufferNetworkProcessingStatus\b/bufferNetworkProcessingStatus/g' \
    -e 's/\bencryptionNetworkProcessingStatus\b/encryptionNetworkProcessingStatus/g' \
    -e 's/\bvalidationNetworkProcessingStatus\b/validationNetworkProcessingStatus/g' \
    -e 's/\bcompressionNetworkProcessingStatus\b/compressionNetworkProcessingStatus/g' \
    -e 's/\bfourthNetworkProcessingStatus\b/fourthNetworkProcessingStatus/g' \
    -e 's/\bthirdNetworkProcessingStatus\b/thirdNetworkProcessingStatus/g' \
    -e 's/\bFirstNetworkProcessingStatus\b/firstNetworkProcessingStatus/g' \
    -e 's/\bSecondNetworkProcessingStatus\b/secondNetworkProcessingStatus/g' \
    -e 's/\bNetworkNetworkProcessingStatus\b/networkProcessingStatus/g' \
    -e 's/\bprimaryNetworkProcessingStatus\b/primaryNetworkProcessingStatus/g' \
    -e 's/\bsecondaryNetworkProcessingStatus\b/secondaryNetworkProcessingStatus/g' \
    -e 's/\bnetworkPrimaryNetworkProcessingStatus\b/primaryNetworkProcessingStatus/g' \
    -e 's/\bnetworkSecondaryNetworkProcessingStatus\b/secondaryNetworkProcessingStatus/g' \
    -e 's/\bnetworkDataNetworkProcessingStatus\b/dataNetworkProcessingStatus/g' \
    -e 's/\bnetworknetworkDataBuffer\b/networkDataBuffer/g' \
    -e 's/\bPacketNetworkProcessingStatus\b/packetNetworkProcessingStatus/g' \
    -e 's/\bpacketNetworkProcessingStatus\b/packetNetworkProcessingStatus/g' \
    -e 's/\bPacketDataBuffer\b/packetDataBuffer/g' \
    -e 's/\bPacketProcessingBuffer\b/packetProcessingBuffer/g' \
    -e 's/\bConnectionFoundLabel\b/connectionFoundLabel/g' \
    -e 's/\bdataProcessingOffset\b/dataProcessingOffset/g' \
    -e 's/\bNetworkByte\b/networkByte/g' \
    -e 's/\bNetworkHandle\b/networkHandle/g' \
    -e 's/\bNetworkStatus\b/networkStatus/g' \
    -e 's/\bulong\b/unsigned long/g' \
    -e 's/\bConnectionFoundLabel\b/connectionFoundLabel/g' \
    05_networking.c > "$temp_file"

# 替换原文件
mv "$temp_file" 05_networking.c

echo "未定义变量清理完成"