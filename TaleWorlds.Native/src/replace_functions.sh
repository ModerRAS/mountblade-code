#!/bin/bash

# 函数替换映射表
declare -A FUNCTION_MAP=(
    ["FUN_180062380"]="ConfigureSystemData"
    ["FUN_1800623b0"]="ValidateSystemConfiguration"
    ["FUN_1800634b0"]="FormatSystemString"
    ["FUN_1800669c0"]="ValidateSystemCoreConfiguration"
    ["FUN_1800f96b0"]="UpdateSystemStatus"
    ["FUN_1801718f0"]="ReleaseSystemResource"
    ["FUN_1801719d0"]="CleanupSystemResource"
    ["FUN_1801723a0"]="ProcessSystemResource"
    ["FUN_180628380"]="ProcessSystemMemoryOperation"
    ["FUN_18004c2b0"]="ExecuteSystemCleanup"
    ["FUN_18005d190"]="ProcessMemoryAllocation"
    ["FUN_18005dab0"]="ProcessMemoryTimeout"
    ["FUN_1800a32b0"]="ProcessRenderContext"
    ["FUN_18006f590"]="ProcessSystemBuffer"
)

# 遍历所有需要替换的函数
for func in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$func]}"
    echo "替换 $func 为 $new_name"
    sed -i "s/$func/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
done

echo "函数替换完成"