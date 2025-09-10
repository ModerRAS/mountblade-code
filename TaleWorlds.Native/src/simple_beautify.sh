#!/bin/bash

# 简单的函数美化脚本
# 美化99_unmatched_functions.c中的几个FUN_函数

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 美化第一个简单函数
sed -i 's/FUN_1800b96f3/CheckSystemConditionAndExecute/g' "$FILE"
sed -i 's/FUN_1800b96fd/SystemInitializationWrapper/g' "$FILE"

# 美化其他几个函数
sed -i 's/FUN_1800c1a80/ProcessSystemMemoryBufferCleanup/g' "$FILE"
sed -i 's/FUN_1800c3c70/ValidateSystemMemoryState/g' "$FILE"
sed -i 's/FUN_1800da98f/InitializeSystemContext/g' "$FILE"

echo "函数美化完成"