#!/bin/bash

# 06_utilities.c 变量名美化脚本
# 将未定义变量名改为符合语义的名称

# 定义替换规则
declare -A replacements=(
    # 系统配置项
    ["SystemConfigurationEntry13"]="SystemConfigurationDebugMode"
    ["SystemConfigurationEntry14"]="SystemConfigurationLogLevel"
    ["SystemConfigurationEntry15"]="SystemConfigurationPerformanceMode"
    
    # 事件处理器槽位
    ["SystemEventHandlerSlot01"]="SystemEventHandlerInput"
    ["SystemEventHandlerSlot02"]="SystemEventHandlerRender"
    ["SystemEventHandlerSlot03"]="SystemEventHandlerAudio"
    ["SystemEventHandlerSlot04"]="SystemEventHandlerNetwork"
    ["SystemEventHandlerSlot05"]="SystemEventHandlerPhysics"
    ["SystemEventHandlerSlot06"]="SystemEventHandlerAnimation"
    ["SystemEventHandlerSlot07"]="SystemEventHandlerUI"
    ["SystemEventHandlerSlot08"]="SystemEventHandlerScript"
    ["SystemEventHandlerSlot09"]="SystemEventHandlerResource"
    ["SystemEventHandlerSlot10"]="SystemEventHandlerMemory"
    ["SystemEventHandlerSlot11"]="SystemEventHandlerThread"
    ["SystemEventHandlerSlot12"]="SystemEventHandlerFile"
    ["SystemEventHandlerSlot13"]="SystemEventHandlerDatabase"
    ["SystemEventHandlerSlot14"]="SystemEventHandlerSecurity"
    ["SystemEventHandlerSlot15"]="SystemEventHandlerCustom01"
    ["SystemEventHandlerSlot16"]="SystemEventHandlerCustom02"
    ["SystemEventHandlerSlot17"]="SystemEventHandlerCustom03"
    ["SystemEventHandlerSlot18"]="SystemEventHandlerCustom04"
    ["SystemEventHandlerSlot19"]="SystemEventHandlerCustom05"
    ["SystemEventHandlerSlot20"]="SystemEventHandlerCustom06"
    ["SystemEventHandlerSlot21"]="SystemEventHandlerCustom07"
    ["SystemEventHandlerSlot22"]="SystemEventHandlerCustom08"
    ["SystemEventHandlerSlot23"]="SystemEventHandlerCustom09"
    ["SystemEventHandlerSlot24"]="SystemEventHandlerCustom10"
    ["SystemEventHandlerSlot25"]="SystemEventHandlerCustom11"
    
    # 内存和资源管理
    ["MemoryAllocationChunk"]="MemoryAllocationBlockSize"
    ["ResourceAllocationTable"]="ResourceAllocationHashTable"
    ["bytePointer5"]="ByteProcessingPointer"
    ["resourcePointer5"]="ResourceProcessingPointer"
    ["localContextPointer"]="LocalExecutionContext"
    ["ProcessedFloatValue"]="CalculatedFloatResult"
    ["ReleaseResourceHandle"]="ReleaseResourceContextHandle"
    ["loopCounter"]="IterationCounter"
    ["unsignedResult3"]="OperationResultCode"
    ["punsignedResult4"]="OperationResultPointer"
    ["ProcessResourceOperation"]="ExecuteResourceProcessing"
    ["resourceHash"]="ResourceValidationHash"
    ["validationContextParam"]="ValidationContextParameter"
    ["objectContextParam"]="ObjectContextParameter"
    ["ThreadContextData"]="ThreadExecutionData"
    ["DefaultThreadResource"]="DefaultThreadContext"
    ["SystemResourceManagerPointer"]="SystemResourceManagementPointer"
    ["SystemResourceData"]="SystemResourcePoolData"
    ["ReleaseSystemResources"]="ReleaseSystemResourcePool"
    ["ResourceCleanupMarker"]="ResourceCleanupStatusMarker"
    ["EmergencyResourceCleanup"]="ExecuteEmergencyResourceCleanup"
    ["ResourceResetMarker"]="ResourceResetStatusMarker"
    ["FinalizeResourceCleanup"]="CompleteResourceCleanupProcess"
    ["ResourceType"]="SystemResourceType"
    ["ResourceInstance"]="SystemResourceInstance"
    ["CleanupOptions"]="ResourceCleanupOptions"
    ["CleanupFlags"]="ResourceCleanupFlags"
    ["ResourceManagementHandle"]="ResourceManagementContext"
)

# 应用替换规则
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/\b$old_name\b/$new_name/g" 06_utilities.c
done

echo "06_utilities.c 变量名美化完成"