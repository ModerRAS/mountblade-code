#!/bin/bash

# 美化网络模块变量名的脚本
# 将 aTimeoutValue 重命名为 TimeoutValidationBuffer

echo "开始美化网络模块变量名..."

# 替换变量名 aTimeoutValue 为 TimeoutValidationBuffer
sed -i 's/aTimeoutValue/TimeoutValidationBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 替换变量名 aconnectionHandleStatus 为 ConnectionHandleStatusBuffer
sed -i 's/aconnectionHandleStatus/ConnectionHandleStatusBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 替换变量名 NetworkStacknetworkDataBufferOne 为 NetworkStackDataBufferPrimary
sed -i 's/NetworkStacknetworkDataBufferOne/NetworkStackDataBufferPrimary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 替换变量名 NetworkParameterBufferD0 为 NetworkParameterBuffer
sed -i 's/NetworkParameterBufferD0/NetworkParameterBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 替换变量名 queueProcessingResult 为 NetworkQueueProcessingResult
sed -i 's/queueProcessingResult/NetworkQueueProcessingResult/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "变量名美化完成！"