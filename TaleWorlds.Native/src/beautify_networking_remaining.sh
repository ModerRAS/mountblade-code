#!/bin/bash

# 美化05_networking.c文件中的剩余FUN_函数名
# 这个脚本将剩余的FUN_开头的函数名替换为有意义的名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 替换剩余的FUN_函数名为有意义的名称
sed -i 's/FUN_180863930/ValidateNetworkConnectionParameters/g' "$FILE_PATH"
sed -i 's/FUN_1808c7260/ProcessNetworkDataTransfer/g' "$FILE_PATH"
sed -i 's/FUN_1808592c0/ProcessNetworkConnectionPacket/g' "$FILE_PATH"

echo "剩余FUN_函数名美化完成"