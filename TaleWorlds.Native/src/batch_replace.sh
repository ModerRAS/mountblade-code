#!/bin/bash

# 批量替换函数名
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换FUN_1800b8500为ProcessSystemBufferCleanupEx
sed -i 's/FUN_1800b8500/ProcessSystemBufferCleanupEx/g' 99_unmatched_functions.c

echo "批量替换完成"