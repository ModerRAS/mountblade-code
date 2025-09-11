#!/bin/bash

# 函数替换脚本
# 用于替换99_unmatched_functions.c中的函数调用

# 定义要替换的函数映射
declare -A function_map=(
    ["FUN_18029fc10"]="ProcessSystemDataTransferAndValidation"
    ["FUN_18029d760"]="ProcessSystemDataWithIndexAndBuffer"
    ["FUN_18029d930"]="ProcessSystemDataWithIndexAndSize"
    ["FUN_18029c8a0"]="ProcessSystemDataWithParameters"
    ["FUN_1800cd410"]="ProcessSystemBufferAndCleanup"
    ["FUN_1802c2ac0"]="ProcessSystemContextAndValidation"
    ["FUN_1800c6320"]="ProcessSystemStringEncoding"
    ["FUN_1802c8260"]="ProcessSystemDataWithConfiguration"
)

# 遍历函数映射并进行替换
for func in "${!function_map[@]}"; do
    replacement="${function_map[$func]}"
    echo "替换 $func 为 $replacement"
    
    # 使用sed进行替换
    sed -i "s/$func(/$replacement(/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
done

echo "函数替换完成"