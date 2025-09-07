#!/bin/bash

# 美化99_unmatched_functions.c文件中的函数名和变量名

# 定义函数名映射
declare -A function_map=(
    ["FUN_1800ed900"]="InitializeSystemBufferAndConfiguration"
    ["FUN_1800ed9c0"]="InitializeSystemContext"
    ["FUN_1800edc10"]="HandleSystemContextInitialization"
    ["FUN_1800edc40"]="HandleSystemContextCleanup"
    ["FUN_1800edc70"]="ProcessSystemResourceRelease"
    ["FUN_1800edda0"]="HandleSystemContextCleanup"
    ["FUN_180049830"]="PerformSystemMemoryInitialization"
    ["FUN_1808fc838"]="PerformSystemMemoryAllocation"
    ["FUN_1800ee210"]="ProcessSystemData"
)

# 定义变量名映射
declare -A variable_map=(
    ["pMemoryAllocationResult"]="MemoryAllocationPointer"
    ["pcVar2"]="CallbackFunction"
    ["Counter"]="SystemAllocationCounter"
    ["uVar5"]="LoopCounter"
    ["pLeftChildIndex"]="ChildNodePointer"
    ["RegisterContext"]="RegisterContext"
    ["SystemContextPointer"]="SystemContextPointer"
    ["RegisterContext1"]="RegisterContext1"
    ["UNK_180a04880"]="SystemBufferConfigurationData"
)

# 处理函数名
for old_name in "${!function_map[@]}"; do
    new_name="${function_map[$old_name]}"
    sed -i "s/\b$old_name\b/$new_name/g" TaleWorlds.Native/src/99_unmatched_functions.c
done

# 处理变量名
for old_name in "${!variable_map[@]}"; do
    new_name="${variable_map[$old_name]}"
    sed -i "s/\b$old_name\b/$new_name/g" TaleWorlds.Native/src/99_unmatched_functions.c
done

echo "美化完成"