#!/bin/bash

# 美化99_unmatched_functions.c中的函数调用
# 创建临时脚本处理函数调用美化

# 定义函数映射
declare -A function_map=(
    ["FUN_1808fc8a8"]="ProcessSystemMemoryAllocation"
    ["FUN_180045af0"]="InitializeSystemDataStructure"
    ["FUN_18004c030"]="SetupSystemMemoryConfiguration"
    ["FUN_1802ab7f0"]="ConfigureSystemDataProcessor"
    ["FUN_18023c450"]="ProcessCharacterEncodingConversion"
    ["FUN_18023b050"]="ReleaseSystemResourceLock"
    ["FUN_1802abf70"]="CalculateVertexProcessingData"
    ["FUN_1800be9a0"]="ProcessSystemResourceWithLock"
    ["FUN_180627c50"]="InitializeMemoryContext"
    ["FUN_1808fcb90"]="ValidateSystemDataPointer"
    ["FUN_1808fc820"]="ExecuteSystemCleanupOperation"
    ["FUN_180941a30"]="PerformSystemMaintenance"
    ["FUN_1808fcb30"]="ReleaseSystemDataPointer"
    ["FUN_180225ee0"]="ProcessMemoryAllocationRequest"
    ["FUN_1800b8cb0"]="ProcessSystemDataWithContext"
    ["FUN_1800b8500"]="CleanupSystemBuffer"
    ["FUN_18023ab60"]="ReleaseSystemMemoryResources"
    ["FUN_18023cb40"]="CalculateMemoryRegionSize"
)

# 处理每个函数
for func in "${!function_map[@]}"; do
    new_name="${function_map[$func]}"
    echo "替换函数: $func -> $new_name"
    
    # 使用sed进行替换
    sed -i "s/$func(/$new_name(/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
done

echo "函数调用美化完成"