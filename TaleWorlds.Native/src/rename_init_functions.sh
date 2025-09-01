#!/bin/bash

# 初始化模块函数重命名脚本
# 用于批量重命名01_initialization.c中的FUN_函数

# 定义函数映射
declare -A function_mappings=(
    # 系统初始化相关函数
    ["FUN_180044dc0"]="InitializeSystemCore"
    ["FUN_180045af0"]="SetupSystemConfiguration"
    ["FUN_180045b20"]="ConfigureSystemParameters"
    ["FUN_180045ba0"]="InitializeSystemModule"
    ["FUN_180045bc1"]="FinalizeSystemInitialization"
    ["FUN_180045ea0"]="InitializeSystemMemory"
    ["FUN_180045ee0"]="AllocateSystemMemory"
    ["FUN_180045f60"]="SetupMemoryManager"
    ["FUN_180045f81"]="CompleteMemorySetup"
    ["FUN_180045fa6"]="InitializeMemoryAllocator"
    ["FUN_180045fc0"]="ConfigureMemoryAllocation"
    
    # 系统配置函数
    ["FUN_180046130"]="SetupSystemConfig"
    ["FUN_180046160"]="InitializeConfigManager"
    ["FUN_180046400"]="ConfigureSystemSettings"
    ["FUN_1800464f0"]="UpdateSystemConfiguration"
    ["FUN_180046ca0"]="InitializeSystemController"
    
    # 系统管理函数
    ["FUN_180048a90"]="ManageSystemResources"
    ["FUN_180048c70"]="AllocateSystemResources"
    ["FUN_180048cc0"]="ConfigureSystemResources"
    ["FUN_180049010"]="SetupResourceAllocation"
    ["FUN_180049110"]="InitializeResourcePool"
    ["FUN_1800491b0"]="ManageResourcePool"
    ["FUN_1800494f0"]="CreateResourceHandle"
    ["FUN_1800495d0"]="ProcessResourceRequest"
    ["FUN_1800496b0"]="ValidateResourceAccess"
    
    # 系统状态函数
    ["FUN_1800499c0"]="UpdateSystemStatus"
    ["FUN_180049b30"]="CheckSystemHealth"
    ["FUN_180049bb0"]="MonitorSystemPerformance"
    ["FUN_180049bf0"]="ReportSystemStatus"
    ["FUN_180049c70"]="HandleSystemEvents"
    ["FUN_180049c8f"]="InitializeSystemMonitor"
    ["FUN_180049cb4"]="ResetSystemMonitor"
    ["FUN_180049cd0"]="GetSystemStatus"
    ["FUN_180049d20"]="UpdateSystemMetrics"
    ["FUN_180049eb0"]="CollectSystemData"
    ["FUN_180049f30"]="ProcessSystemData"
    ["FUN_180049fd0"]="AnalyzeSystemData"
    ["FUN_18004a0b0"]="ValidateSystemData"
    ["FUN_18004a0d0"]="VerifySystemIntegrity"
    ["FUN_18004a100"]="CheckSystemConsistency"
    ["FUN_18004a130"]="CleanupSystemData"
    
    # 系统接口函数
    ["FUN_18004a180"]="InitializeSystemInterface"
    ["FUN_18004a220"]="CreateSystemInterface"
    ["FUN_18004a360"]="ConfigureSystemInterface"
    ["FUN_18004a3c0"]="SetupInterfaceConnection"
    ["FUN_18004a400"]="FinalizeInterfaceSetup"
    ["FUN_18004a430"]="GetInterfaceHandle"
    ["FUN_18004a470"]="ManageInterfaceConnection"
    ["FUN_18004a4b0"]="ProcessInterfaceRequest"
    ["FUN_18004a500"]="CheckInterfaceStatus"
    
    # 系统初始化主函数
    ["FUN_18004adc0"]="InitializeGameSystem"
    ["FUN_18004afa0"]="CompleteGameInitialization"
    ["FUN_18004b100"]="SetupGameModules"
    ["FUN_18004b1f0"]="InitializeGameEngine"
    ["FUN_18004b390"]="CheckGameStatus"
    ["FUN_18004b3f0"]="ConfigureGameSettings"
    ["FUN_18004b560"]="InitializeGameController"
    ["FUN_18004b5f0"]="SetupGameParameters"
    ["FUN_18004b640"]="ManageGameInitialization"
    ["FUN_18004b710"]="InitializeGameModule"
    ["FUN_18004b730"]="SetupGameComponent"
    ["FUN_18004b790"]="LoadGameModule"
    ["FUN_18004b7a2"]="EnableGameModule"
    ["FUN_18004b7de"]="StartGameSystem"
    ["FUN_18004b7e0"]="GetGameModule"
    ["FUN_18004b820"]="ConfigureGameModule"
    ["FUN_18004b860"]="SetupGameConfiguration"
    ["FUN_18004b920"]="GetGameConfiguration"
    ["FUN_18004b960"]="LoadGameConfiguration"
    ["FUN_18004b9b0"]="ValidateGameConfiguration"
    
    # 系统工具函数
    ["FUN_18004ba30"]="InitializeSystemTools"
    ["FUN_18004ba60"]="SetupSystemUtilities"
    ["FUN_18004ba90"]="ConfigureSystemTools"
    ["FUN_18004bad0"]="InitializeUtilityModule"
    ["FUN_18004bb00"]="SetupUtilityFunctions"
    ["FUN_18004bb30"]="EnableUtilities"
    ["FUN_18004bb60"]="StartUtilityService"
    ["FUN_18004bb90"]="ConfigureUtilities"
    ["FUN_18004bcb0"]="InitializeUtilitySystem"
    ["FUN_18004bce0"]="SetupUtilityManager"
    ["FUN_18004bd10"]="GetUtilityHandle"
    
    # 系统缓冲区函数
    ["FUN_18004be50"]="InitializeSystemBuffers"
    ["FUN_18004be70"]="ConfigureSystemBuffers"
    ["FUN_18004be90"]="AllocateSystemBuffer"
    ["FUN_18004bf50"]="SetupBufferManager"
    ["FUN_18004bff0"]="InitializeBufferPool"
    ["FUN_18004c010"]="ConfigureBufferPool"
    ["FUN_18004c030"]="ManageBufferAllocation"
    ["FUN_18004c050"]="GetBufferHandle"
    ["FUN_18004c0b0"]="UpdateBufferStatus"
    ["FUN_18004c0d0"]="CheckBufferIntegrity"
    ["FUN_18004c260"]="InitializeBufferSystem"
    ["FUN_18004c290"]="ConfigureBufferSystem"
    ["FUN_18004c2b0"]="StartBufferService"
    ["FUN_18004c2c4"]="EnableBufferSystem"
    ["FUN_18004c31f"]="CompleteBufferSetup"
    
    # 系统核心函数
    ["FUN_18004c480"]="InitializeSystemCore"
    ["FUN_18004ca00"]="SetupSystemCore"
    ["FUN_18004caa0"]="ConfigureSystemCore"
    ["FUN_18004caf0"]="StartSystemCore"
    ["FUN_18004cc20"]="InitializeCoreServices"
    ["FUN_18004d020"]="ConfigureCoreServices"
    ["FUN_18004e5f0"]="StartCoreServices"
    ["FUN_18004e7a0"]="CheckCoreStatus"
    ["FUN_18004eb00"]="ManageCoreServices"
    ["FUN_18004ef60"]="InitializeCoreSystem"
    ["FUN_18004f8e0"]="SetupCoreSystem"
    ["FUN_18004f900"]="ConfigureCoreSystem"
    ["FUN_18004f920"]="StartCoreSystem"
    ["FUN_180050b00"]="InitializeCoreEngine"
    ["FUN_180050b30"]="ConfigureCoreEngine"
    ["FUN_180051150"]="StartCoreEngine"
    ["FUN_180051d00"]="InitializeCoreModule"
    ["FUN_180051d40"]="GetCoreModule"
    ["FUN_180051de4"]="ConfigureCoreModule"
    ["FUN_180051e13"]="EnableCoreModule"
    ["FUN_180051e74"]="StartCoreModule"
    ["FUN_180051eef"]="CompleteCoreSetup"
    ["FUN_180051f00"]="CheckCoreStatus"
)

# 遍历所有映射并执行替换
for old_name in "${!function_mappings[@]}"; do
    new_name="${function_mappings[$old_name]}"
    
    # 执行替换
    sed -i "s/\b${old_name}\b/${new_name}/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
    
    echo "重命名: ${old_name} -> ${new_name}"
done

echo "函数重命名完成"