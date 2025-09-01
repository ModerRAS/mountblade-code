#!/bin/bash

# 批量替换函数名脚本
# 替换 FUN_1808744f0 为 CleanupNetworkConnectionContext

sed -i 's/FUN_1808744f0/CleanupNetworkConnectionContext/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "函数名替换完成"