#!/bin/bash

# 批量重命名02_core_engine.c中的FUN_函数

# 定义函数映射
declare -A function_mapping=(
    ["FUN_180049eb0"]="CoreEngineResetThreadLocalStorageArray"
    ["FUN_180050b30"]="CoreEngineHandleThreadStatusCheck"
    ["FUN_18004be90"]="CoreEngineClearDataBuffer"
    ["FUN_180626f80"]="CoreEngineResetThreadLocalStorage"
    ["FUN_18020f150"]="CoreEngineProcessDataPointer"
    ["FUN_1801edeb0"]="CoreEngineValidateDataStructure"
    ["FUN_18004e5f0"]="CoreEngineReleaseDataResources"
    ["FUN_1800572d0"]="CoreEngineCleanupMemoryBlocks"
)

# 遍历所有函数映射并执行替换
for func_name in "${!function_mapping[@]}"; do
    new_name="${function_mapping[$func_name]}"
    echo "替换 $func_name 为 $new_name"
    
    # 使用sed进行替换
    sed -i "s/$func_name/$new_name/g" TaleWorlds.Native/src/02_core_engine.c
done

echo "函数重命名完成"