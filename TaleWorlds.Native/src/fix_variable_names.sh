#!/bin/bash

# 批量修改变量名脚本 - 将camelCase改为PascalCase
# 注意：这是一个简化实现，用于演示目的

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 定义要替换的变量名映射
declare -A variable_mapping=(
    ["isSystemNodeActive"]="IsSystemNodeActive"
    ["systemRootNodePointer"]="SystemRootNodePointer"
    ["memoryCompareResult"]="MemoryCompareResult"
    ["systemDataTablePointer"]="SystemDataTablePointer"
    ["memoryAllocationSize"]="MemoryAllocationSize"
    ["currentSystemNode"]="CurrentSystemNode"
    ["previousSystemNode"]="PreviousSystemNode"
    ["nextSystemNode"]="NextSystemNode"
    ["allocatedSystemNode"]="AllocatedSystemNode"
    ["systemTimeValue"]="SystemTimeValue"
    ["systemInitializationFlag"]="SystemInitializationFlag"
    ["baseAllocatorFunctionPointer"]="BaseAllocatorFunctionPointer"
    ["tempSystemNode"]="TempSystemNode"
    ["systemMemoryPointer"]="SystemMemoryPointer"
)

# 执行替换
for old_name in "${!variable_mapping[@]}"; do
    new_name="${variable_mapping[$old_name]}"
    sed -i "s/\b$old_name\b/$new_name/g" "$FILE_PATH"
done

echo "变量名批量替换完成"