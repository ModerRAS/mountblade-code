#!/bin/bash

# 批量替换99_unmatched_functions.c中的函数调用
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 定义替换规则
declare -A replacements=(
    ["FUN_180080810"]="SystemMemoryAllocator"
    ["FUN_1800b8630"]="SystemResourceInitializer"
    ["FUN_1800b88d0"]="SystemContextProcessor"
    ["FUN_1802a83f0"]="SystemConfigurationManager"
    ["FUN_1802abc50"]="SystemDataProcessor"
    ["FUN_1800add50"]="SystemErrorHandler"
    ["FUN_1800add90"]="SystemBufferHandler"
    ["FUN_1800ae1b0"]="SystemCleanupHandler"
    ["FUN_1800ae370"]="SystemStreamProcessor"
    ["FUN_1800ae390"]="SystemValidationHandler"
)

# 执行替换
for pattern in "${!replacements[@]}"; do
    replacement="${replacements[$pattern]}"
    echo "替换 $pattern 为 $replacement"
    sed -i "s/$pattern(/$replacement(/g" "$FILE_PATH"
done

echo "替换完成"