#!/bin/bash

# 简单的网络函数美化脚本
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换一些关键的函数名
sed -i 's/FUN_180740b40/NetworkConnectionProcessRequest/g' 05_networking.c
sed -i 's/FUN_18073a840/NetworkDataTransferOperation/g' 05_networking.c
sed -i 's/FUN_1808542a0/NetworkConnectionProcessPacket/g' 05_networking.c
sed -i 's/FUN_180854040/NetworkConnectionSendData/g' 05_networking.c
sed -i 's/FUN_180861ce0/NetworkConnectionUpdateStatus/g' 05_networking.c
sed -i 's/FUN_1808c7d50/NetworkConnectionGetHandle/g' 05_networking.c
sed -i 's/FUN_18085dca0/NetworkConnectionCleanup/g' 05_networking.c
sed -i 's/FUN_18085dbf0/NetworkConnectionRelease/g' 05_networking.c
sed -i 's/FUN_18085e4a0/NetworkConnectionReset/g' 05_networking.c
sed -i 's/FUN_1808b1a30/NetworkConnectionInitialize/g' 05_networking.c
sed -i 's/FUN_180861ef0/NetworkConnectionClose/g' 05_networking.c

echo "关键函数替换完成"