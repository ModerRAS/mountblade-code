#!/bin/bash

# 函数替换映射表 - 根据文件中的重命名注释
declare -A FUNCTION_MAP=(
    # 已知的函数映射
    ["FUN_180628380"]="ProcessSystemMemoryOperation"
    ["FUN_1801719d0"]="CleanupSystemResource"
    ["FUN_1801718f0"]="ReleaseSystemResource"
    ["FUN_18004c2b0"]="ExecuteSystemCleanup"
    ["FUN_18005dab0"]="ProcessMemoryTimeout"
    ["FUN_1800a32b0"]="ProcessRenderContext"
    ["FUN_18006f590"]="ProcessSystemBuffer"
    ["FUN_1800623b0"]="ValidateSystemConfiguration"
    ["FUN_180074090"]="UpdateSystemDataStructure"
    ["FUN_180074a80"]="CleanupSystemBufferAllocationStatus"
    ["FUN_180639ec0"]="ProcessSystemDataTransfer"
    ["FUN_180639bf0"]="ProcessSystemMemoryCopy"
    ["FUN_180194940"]="ProcessMemoryBlockAllocation"
    ["FUN_18063a240"]="ProcessMemoryDataTransfer"
    ["FUN_1800b9f60"]="ProcessSystemBufferCleanup"
)

# 临时文件
temp_file="/tmp/core_engine_temp.c"

# 复制原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c "$temp_file"

# 遍历所有需要替换的函数
for func in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$func]}"
    echo "替换 $func 为 $new_name"
    sed -i "s/$func/$new_name/g" "$temp_file"
done

# 替换完成，复制回原文件
cp "$temp_file" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
rm "$temp_file"

echo "函数替换完成"