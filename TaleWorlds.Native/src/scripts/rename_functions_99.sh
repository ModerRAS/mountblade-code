#!/bin/bash

# 批量重命名99_unmatched_functions.c中的FUN_函数
# 为每个函数赋予有意义的名称

# 函数重命名映射表
declare -A function_rename_map=(
    # 系统初始化相关函数
    ["FUN_1801b9190"]="InitializeSystemEventHandler"
    ["FUN_1801b9690"]="CleanupMemoryPointers"
    ["FUN_1801b96f0"]="ProcessCoordinateTransform"
    ["FUN_180049b30"]="CreateStringBuffer"
    ["FUN_180220810"]="RegisterSystemCallback"
    ["FUN_1802230e0"]="InitializeDataProcessor"
    ["FUN_180624440"]="CreateNetworkConnection"
    ["FUN_1806276d0"]="EstablishSecureChannel"
    ["FUN_18062dee0"]="ProcessDataStream"
    ["FUN_180627c50"]="ConfigureDataPipeline"
    ["FUN_1800ac700"]="ReleaseSystemMemory"
    ["FUN_1800ac530"]="FreeSystemResources"
    ["FUN_1801c93c0"]="ExecuteSystemCleanup"
    ["FUN_1800ab6f0"]="ClearResourceCache"
    ["FUN_18029c9d0"]="ProcessNetworkData"
    ["FUN_18062b1e0"]="AllocateSystemBuffer"
    ["FUN_18023a2e0"]="CreateDataStructure"
    
    # 数据处理相关函数
    ["FUN_18023e880"]="BuildNetworkConnection"
    ["FUN_18023e750"]="DisconnectNetworkConnection"
    ["FUN_18023e4f0"]="ValidateNetworkConnection"
    ["FUN_18023e620"]="RestoreNetworkConnection"
    ["FUN_18023e240"]="ConfigureNetworkConnection"
    ["FUN_18023e3d0"]="MonitorNetworkConnection"
    ["FUN_1802e51e0"]="TransferNetworkData"
    ["FUN_1800a1326"]="ProcessStringWithDispatch"
    ["FUN_1800a367b"]="InitializeResourceHandles"
    ["FUN_1800a3691"]="InitializeSystemResources"
    ["FUN_1800a379e"]="ConfigureSystemResources"
    ["FUN_1800a6184"]="ProcessConfigurationParameters"
    ["FUN_1800a62cd"]="ExecuteResourceCallback"
    ["FUN_1800a73e0"]="InitializeResourceManagement"
    ["FUN_1800aace0"]="ReleaseSystemResources"
)

# 遍历映射表，替换函数名
for old_name in "${!function_rename_map[@]}"; do
    new_name="${function_rename_map[$old_name]}"
    echo "重命名函数: $old_name -> $new_name"
    
    # 使用sed替换函数名
    sed -i "s/\b$old_name\b/$new_name/g" "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
done

echo "函数重命名完成"