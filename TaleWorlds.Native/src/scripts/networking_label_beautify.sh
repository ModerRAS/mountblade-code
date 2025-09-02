#!/bin/bash

# 网络模块标签美化脚本
# 将反编译生成的LAB_标签替换为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 美化网络连接相关的标签
sed -i 's/LAB_NetworkConnectionStartProcessing/LAB_NetworkConnectionProcessingStart/g' 05_networking.c
sed -i 's/LAB_NetworkConnectionOperationComplete/LAB_NetworkConnectionOperationComplete/g' 05_networking.c
sed -i 's/LAB_NetworkConnectionValidationStart/LAB_NetworkConnectionValidationStart/g' 05_networking.c
sed -i 's/LAB_NetworkParameterConfigurationStart/LAB_NetworkParameterConfigurationStart/g' 05_networking.c
sed -i 's/LAB_TimestampUpdateLoop/LAB_NetworkTimestampUpdateLoop/g' 05_networking.c
sed -i 's/LAB_TimestampComparisonStart/LAB_NetworkTimestampComparisonStart/g' 05_networking.c

# 美化连接句柄相关的标签
sed -i 's/LAB_ConnectionHandleLoop/LAB_ConnectionHandleProcessingLoop/g' 05_networking.c
sed -i 's/LAB_ConnectionHandleFailure/LAB_ConnectionHandleFailureHandler/g' 05_networking.c

# 美化网络上下文相关的标签
sed -i 's/LAB_NetworkContextProcessing/LAB_NetworkContextProcessingStart/g' 05_networking.c
sed -i 's/LAB_NetworkContextValidation/LAB_NetworkContextValidationCheck/g' 05_networking.c
sed -i 's/LAB_NetworkStatusCheck/LAB_NetworkStatusValidationCheck/g' 05_networking.c
sed -i 's/LAB_NetworkOperationComplete/LAB_NetworkOperationComplete/g' 05_networking.c

# 美化网络状态验证相关的标签
sed -i 's/LAB_NetworkStatusValidation/LAB_NetworkStatusValidationLoop/g' 05_networking.c
sed -i 's/LAB_ConnectionOperationComplete/LAB_ConnectionOperationComplete/g' 05_networking.c
sed -i 's/LAB_ConnectionContextValidation/LAB_ConnectionContextValidationCheck/g' 05_networking.c
sed -i 's/LAB_ConnectionTimeoutCheck/LAB_ConnectionTimeoutValidation/g' 05_networking.c
sed -i 's/LAB_ConnectionStatusUpdate/LAB_ConnectionStatusUpdateHandler/g' 05_networking.c

# 美化连接处理相关的标签
sed -i 's/LAB_connectionIndexValidation/LAB_ConnectionIndexValidationCheck/g' 05_networking.c
sed -i 's/LAB_ConnectionProcessingComplete/LAB_ConnectionProcessingComplete/g' 05_networking.c
sed -i 's/LAB_NetworkContextCleanup/LAB_NetworkContextCleanupHandler/g' 05_networking.c
sed -i 's/LAB_NetworkContextRelease/LAB_NetworkContextReleaseHandler/g' 05_networking.c

# 美化网络操作结果相关的标签
sed -i 's/LAB_NetworkOperationResult/LAB_NetworkOperationResultHandler/g' 05_networking.c
sed -i 's/LAB_NetworkTimeoutValidation/LAB_NetworkTimeoutValidationCheck/g' 05_networking.c
sed -i 's/LAB_NetworkTimeoutComplete/LAB_NetworkTimeoutComplete/g' 05_networking.c
sed -i 's/LAB_NetworkDataProcessing/LAB_NetworkDataProcessingStart/g' 05_networking.c
sed -i 's/LAB_NetworkOperationStatus/LAB_NetworkOperationStatusCheck/g' 05_networking.c

# 美化数据包处理相关的标签
sed -i 's/LAB_PacketDataComparison/LAB_PacketDataComparisonCheck/g' 05_networking.c
sed -i 's/LAB_ConnectionValidationComplete/LAB_ConnectionValidationComplete/g' 05_networking.c
sed -i 's/LAB_NetworkDataTransferComplete/LAB_NetworkDataTransferComplete/g' 05_networking.c
sed -i 's/LAB_ConnectionStatusCodeValidation/LAB_ConnectionStatusCodeValidationCheck/g' 05_networking.c

# 美化数据包数组处理相关的标签
sed -i 's/LAB_PacketArrayProcessing/LAB_PacketArrayProcessingStart/g' 05_networking.c
sed -i 's/LAB_NetworkPacketArrayProcessing/LAB_NetworkPacketArrayProcessingStart/g' 05_networking.c

# 美化网络上下文验证相关的标签
sed -i 's/LAB_NetworkContextValidationTertiary/LAB_NetworkContextValidationTertiaryCheck/g' 05_networking.c
sed -i 's/LAB_NetworkProcessingComplete/LAB_NetworkProcessingComplete/g' 05_networking.c
sed -i 's/LAB_NetworkProcessingCompleteSecondary/LAB_NetworkProcessingCompleteSecondary/g' 05_networking.c
sed -i 's/LAB_NetworkConnectionDataProcessing/LAB_NetworkConnectionDataProcessingStart/g' 05_networking.c
sed -i 's/LAB_NetworkSecurityValidation/LAB_NetworkSecurityValidationCheck/g' 05_networking.c

# 美化上下文处理相关的标签
sed -i 's/LAB_ContextProcessingComplete/LAB_ContextProcessingComplete/g' 05_networking.c
sed -i 's/LAB_NetworkOperationSuccess/LAB_NetworkOperationSuccess/g' 05_networking.c
sed -i 's/LAB_NetworkOperationError/LAB_NetworkOperationErrorHandler/g' 05_networking.c

# 美化网络上下文验证完成相关的标签
sed -i 's/LAB_NetworkContextValidationComplete/LAB_NetworkContextValidationComplete/g' 05_networking.c
sed -i 's/LAB_NetworkContextValidationError/LAB_NetworkContextValidationError/g' 05_networking.c

echo "网络模块标签美化完成"