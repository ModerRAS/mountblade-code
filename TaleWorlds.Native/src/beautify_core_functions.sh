#!/bin/bash

# 系统函数名替换脚本
# 用于将02_core_engine.c中的FUN_函数调用替换为语义化名称

# 定义函数映射
declare -A function_mapping=(
    ["FUN_18011feb0"]="GetSystemFloatValue2"
    ["FUN_1801293c0"]="CalculateSystemFloatValue"
    ["FUN_18013c760"]="CleanupEventAndSystemMaintenance"
    ["FUN_18011dbd0"]="ManageSystemReferenceCount"
    ["FUN_18012d740"]="ProcessCharacterEncoding"
    ["FUN_18013d860"]="ProcessSystemDataTable"
    ["FUN_18013e100"]="ProcessSystemConfiguration"
    ["FUN_18013e000"]="ProcessSystemConfiguration2"
    ["FUN_180128350"]="AllocateStringBuffer"
    ["FUN_180123d70"]="ConvertCharacterCode"
)

# 遍历函数映射并替换
for func in "${!function_mapping[@]}"; do
    replacement="${function_mapping[$func]}"
    echo "替换 $func 为 $replacement"
    
    # 使用sed进行替换
    sed -i "s/$func(/$replacement(/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
done

echo "函数替换完成"