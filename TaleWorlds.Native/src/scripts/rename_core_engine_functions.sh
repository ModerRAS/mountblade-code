#!/bin/bash

# 批量重命名FUN_函数的脚本
# 用于美化02_core_engine.c文件中的函数名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 定义函数重命名映射
declare -A FUNCTION_MAP=(
    ["FUN_180046240"]="CoreEngineProcessDataPacket"
    ["FUN_180046444"]="CoreEngineResetSystemStatusFlag"
    ["FUN_180046840"]="CoreEngineCleanupDataBuffer"
    ["FUN_180047e40"]="SetThreadLocalStorageTemplate"
    ["FUN_180048ee0"]="CoreEngineInitializeThreadLocalStorageDataCompareAndAllocate"
    ["FUN_180049010"]="CoreEngineCreateLinkedListDataStructure"
    ["FUN_180049110"]="CoreEngineAllocateMemoryForLinkedList"
    ["FUN_180049470"]="CoreEngineDestroyMutexAndConditionVariablesResetDataNodeTemplates"
    ["FUN_1800495d0"]="CoreEngineExecuteConditionVariableTimedWait"
    ["FUN_1800496b0"]="CoreEngineNotifyConditionVariableAndProcessSyncState"
    ["FUN_180049910"]="CoreEngineExecuteSafeMemoryCopyOperation"
    ["FUN_180049931"]="CoreEngineExecuteMemoryCopyOperation"
    ["FUN_180049956"]="CoreEngineInitializeDataBuffer"
    ["FUN_180049970"]="CoreEngineConfigureDataStructurePointer"
    ["FUN_1800499c0"]="CoreEngineProcessStringSearchAndCopy"
    ["FUN_180049b30"]="CoreEngineInitializeStringDataStructure"
    ["FUN_180049bb0"]="CoreEngineInitializeDataStructureAndFreeMemory"
    ["FUN_180049bf0"]="CoreEngineExecuteSafeStringCopyOperation"
    ["FUN_180049c70"]="CoreEngineSafeCopyStringData"
    ["FUN_180049c8f"]="ExecuteMemoryCopyOperation"
)

# 进行函数重命名
for old_name in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$old_name]}"
    
    # 替换函数声明
    sed -i "s|// 函数:.*${old_name}|// 函数: ${new_name}|g" "$FILE_PATH"
    
    # 替换函数调用
    sed -i "s|${old_name}(|${new_name}(|g" "$FILE_PATH"
    
    echo "已将 ${old_name} 重命名为 ${new_name}"
done

echo "函数重命名完成"