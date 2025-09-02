#!/bin/bash

# 批量美化网络模块中的FUN_函数
# 这个脚本会批量重命名05_networking.c中的FUN_函数为语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 处理常见的FUN_函数重命名
sed -i 's/FUN_1808933c0/UpdateNetworkConnectionStatusAndCounter/g' "$INPUT_FILE"
sed -i 's/FUN_180893420/ProcessNetworkConnectionValidation/g' "$INPUT_FILE"
sed -i 's/FUN_180893480/ValidateNetworkConnectionParameters/g' "$INPUT_FILE"
sed -i 's/FUN_180893540/ProcessNetworkConnectionDataTransfer/g' "$INPUT_FILE"
sed -i 's/FUN_180893640/HandleNetworkConnectionContext/g' "$INPUT_FILE"
sed -i 's/FUN_1808936a0/ProcessNetworkConnectionState/g' "$INPUT_FILE"
sed -i 's/FUN_180893700/ValidateNetworkConnectionIntegrity/g' "$INPUT_FILE"
sed -i 's/FUN_180893760/CheckNetworkConnectionStatus/g' "$INPUT_FILE"
sed -i 's/FUN_18089379d/ValidateNetworkConnectionHandle/g' "$INPUT_FILE"
sed -i 's/FUN_1808938c0/ProcessNetworkConnectionCleanup/g' "$INPUT_FILE"

echo "批量重命名完成"