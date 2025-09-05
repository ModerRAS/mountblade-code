#!/bin/bash

# 美化99_unmatched_functions.c中的函数名
# 为重要的函数添加语义化名称和注释

cd "/dev/shm/mountblade-code/TaleWorlds.Native/src"

# 函数替换映射表
declare -A function_map=(
    ["FUN_1800a1b20"]="ProcessSystemDataOperations"
    ["FUN_1800a25c0"]="InitializeSystemResourceHandle"
    ["FUN_1800a2ff0"]="ValidateSystemParameters"
    ["FUN_1800a30a0"]="ConfigureSystemSettings"
    ["FUN_1800a3660"]="ManageSystemMemoryPool"
    ["FUN_1800a367b"]="ProcessSystemMemoryAllocation"
    ["FUN_1800a3691"]="InitializeSystemMemoryManager"
    ["FUN_1800a3880"]="ProcessSystemResourceRequest"
    ["FUN_1800a4010"]="ProcessSystemResourceAllocation"
    ["FUN_1800a43c0"]="ManageSystemComponents"
    ["FUN_1800a4c50"]="ProcessSystemQueue"
    ["FUN_1800a5110"]="ManageSystemTasks"
    ["FUN_1800a5810"]="ProcessSystemDataFlow"
    ["FUN_1800a5f50"]="HandleSystemEvents"
    ["FUN_1800a5f90"]="ProcessSystemMessages"
    ["FUN_1800a5fc0"]="HandleSystemSynchronization"
    ["FUN_1800a6011"]="CheckSystemStatus"
    ["FUN_1800a609a"]="ValidateSystemConfiguration"
    ["FUN_1800a6184"]="ProcessSystemBatch"
    ["FUN_1800a62cd"]="CleanupSystemOperations"
    ["FUN_1800a62e7"]="ResetSystemState"
    ["FUN_1800a62f7"]="InitializeSystemOperations"
    ["FUN_1800a6320"]="ConfigureSystem"
    ["FUN_1800a63d0"]="ValidateSystemDataIntegrity"
    ["FUN_1800a6420"]="UpdateSystemStatus"
    ["FUN_1800a73c0"]="ProcessSystemBuffer"
    ["FUN_1800a73e0"]="AllocateSystemMemory"
    ["FUN_1800aa220"]="ManageSystemData"
    ["FUN_1800aace0"]="MonitorSystemPerformance"
    ["FUN_1800aad40"]="MonitorSystemResources"
    ["FUN_1800ab420"]="ManageSystemStatus"
)

# 进行函数名替换
for old_name in "${!function_map[@]}"; do
    new_name="${function_map[$old_name]}"
    echo "替换 $old_name 为 $new_name"
    sed -i "s/$old_name/$new_name/g" 99_unmatched_functions.c
done

echo "函数名替换完成"