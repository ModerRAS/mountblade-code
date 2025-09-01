#!/bin/bash

# 批量美化02_core_engine.c中的FUN_函数调用
# 将简单的FUN_函数调用重命名为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 定义函数替换映射
declare -A function_mapping=(
    ["FUN_18064d630()"]="CoreEngineCleanupResourcePool()"
    ["FUN_180047fc0()"]="CoreEngineInitializeMemoryManager()"
    ["FUN_180623ce0()"]="CoreEngineAllocateMemoryBlock()"
    ["FUN_180627ae0()"]="CoreEngineSetupThreadContext()"
    ["FUN_180049470()"]="CoreEngineValidateSystemState()"
    ["FUN_180049110()"]="CoreEngineGetSystemConfiguration()"
    ["FUN_180050b30()"]="CoreEngineProcessNetworkEvent()"
    ["FUN_180091020()"]="CoreEngineGetNetworkStatus()"
    ["FUN_180628ca0()"]="CoreEngineHandleAsyncOperation()"
    ["FUN_180061db0()"]="CoreEngineLockResource()"
    ["FUN_180061be0()"]="CoreEngineUnlockResource()"
    ["FUN_18012cfe0()"]="CoreEngineFlushBuffer()"
    ["FUN_18006eb30()"]="CoreEngineProcessDataQueue()"
    ["FUN_1800b4ec0()"]="CoreEngineFinalizeOperation()"
)

# 遍历映射并进行替换
for func_name in "${!function_mapping[@]}"; do
    new_name="${function_mapping[$func_name]}"
    echo "替换: $func_name -> $new_name"
    sed -i "s/$func_name/$new_name/g" 02_core_engine.c
done

echo "批量替换完成"