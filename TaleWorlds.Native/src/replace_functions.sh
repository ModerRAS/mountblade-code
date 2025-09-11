#!/bin/bash

# 函数替换脚本
# 用于替换02_core_engine.c中的函数调用

# 定义要替换的函数映射
declare -A function_map=(
    ["FUN_180218bc0"]="ProcessSystemContextAccess"
    ["FUN_180217b00"]="InitializeSystemDataTransfer"
    ["FUN_180219260"]="ExecuteSystemDataTransformation"
    ["FUN_180218a80"]="FinalizeSystemDataOperation"
    ["FUN_180219020"]="ProcessSystemMemoryAccess"
    ["FUN_18021a140"]="RetrieveSystemContextInfo"
    ["FUN_1802121b0"]="InitializeSystemModule"
)

# 遍历函数映射并进行替换
for func in "${!function_map[@]}"; do
    replacement="${function_map[$func]}"
    echo "替换 $func 为 $replacement"
    
    # 使用sed进行替换
    sed -i "s/$func(/$replacement(/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
done

echo "函数替换完成"