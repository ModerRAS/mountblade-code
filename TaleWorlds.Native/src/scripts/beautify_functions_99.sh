#!/bin/bash

# 美化99_unmatched_functions.c中的函数定义
# 这个脚本将为函数定义添加语义化名称

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 处理函数定义，将 "undefined FUN_180xxxxxx;" 格式替换为语义化名称
sed -E '
# 函数定义美化
s|^// 函数: undefined FUN_1800f88f0;|// 函数: undefined SystemFunction0f88f0;|g
s|^// 函数: undefined FUN_1800f8630;|// 函数: undefined SystemFunction0f8630;|g
s|^// 函数: undefined FUN_1800fcf80;|// 函数: undefined SystemFunction0fcf80;|g
s|^// 函数: undefined ManageSystemBufferCache \(FUN_1801b99e0\);|// 函数: undefined ManageSystemBufferCache;|g
s|^// 函数: undefined OptimizeSystemBufferAllocation \(FUN_1801bc9a0\);|// 函数: undefined OptimizeSystemBufferAllocation;|g
s|^// 函数: undefined ValidateSystemBufferAccess \(FUN_1801bc8d0\);|// 函数: undefined ValidateSystemBufferAccess;|g
s|^// 函数: undefined CleanupSystemBufferResources \(FUN_1801bc6c0\);|// 函数: undefined CleanupSystemBufferResources;|g
s|^// 函数: undefined ProcessSystemBufferData \(FUN_1801bc4e0\);|// 函数: undefined ProcessSystemBufferData;|g
s|^// 函数: undefined HandleBufferStateOperations \(FUN_1801bc5d0\);|// 函数: undefined HandleBufferStateOperations;|g
s|^// 函数: undefined InitializeSystemBufferControl \(FUN_1801bbc00\);|// 函数: undefined InitializeSystemBufferControl;|g
' "$FILE" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$FILE"

echo "函数定义美化完成"