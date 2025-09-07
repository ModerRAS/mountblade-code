#!/bin/bash

# 替换FUN_1800b8500为ProcessSystemBufferCleanupEx
sed -i 's/FUN_1800b8500/ProcessSystemBufferCleanupEx/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

echo "替换完成：FUN_1800b8500 -> ProcessSystemBufferCleanupEx"