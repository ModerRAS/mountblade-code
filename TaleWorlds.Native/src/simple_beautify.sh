#!/bin/bash

# 简化的网络函数美化脚本
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 基本的void类型函数替换
sed -i 's/FUN_180853230/ProcessNetworkConnectionValidation/g' 05_networking.c
sed -i 's/FUN_180853840/HandleNetworkConnectionTransfer/g' 05_networking.c
sed -i 's/FUN_180853bf0/ProcessNetworkPacketData/g' 05_networking.c
sed -i 's/FUN_180853fc0/HandleNetworkByteTransfer/g' 05_networking.c
sed -i 's/FUN_180854f55/NetworkStatusPlaceholder/g' 05_networking.c
sed -i 's/FUN_180854f70/ProcessNetworkPacketTransfer/g' 05_networking.c
sed -i 's/FUN_180854fc3/NetworkTransferCleanup/g' 05_networking.c
sed -i 's/FUN_18085510b/NetworkSystemReset/g' 05_networking.c

echo "基本函数替换完成"