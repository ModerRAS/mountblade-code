#!/bin/bash

# 批量重命名02_core_engine.c中的FUN_函数
# 这个脚本将系统性地重命名剩余的FUN_函数为更有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 定义函数名映射
declare -A function_mappings=(
    ["FUN_18009c860"]="CoreEngineDataStructureManager"
    ["FUN_18009cb10"]="CoreEngineDataBufferProcessor"
    ["FUN_18009cde0"]="CoreEngineMemoryAllocator"
    ["FUN_18009cee0"]="CoreEngineSystemInitializer"
    ["FUN_18009cfc0"]="CoreEngineResourceHandler"
    ["FUN_18009d0a0"]="CoreEngineParameterManager"
    ["FUN_18009d2b4"]="CoreEngineDataValidator"
    ["FUN_18009d394"]="CoreEngineSystemFinalizer"
    ["FUN_18009d39c"]="CoreEngineMemoryCleaner"
    ["FUN_18009d3a0"]="CoreEngineDataProcessor"
    ["FUN_18009d3ad"]="CoreEngineBufferManager"
    ["FUN_18009d3d1"]="CoreEngineSystemSynchronizer"
    ["FUN_18009d4c7"]="CoreEngineResourceAllocator"
    ["FUN_18009d4d1"]="CoreEngineMemoryDeallocator"
    ["FUN_18009d4f0"]="CoreEngineDataCopier"
    ["FUN_18009d4fd"]="CoreEngineBufferCopier"
    ["FUN_18009d51f"]="CoreEngineSystemVerifier"
    ["FUN_18009d608"]="CoreEngineStatusChecker"
    ["FUN_18009d612"]="CoreEngineStateValidator"
    ["FUN_18009d630"]="CoreEngineDataManager"
    ["FUN_18009d63d"]="CoreEngineSystemDataManager"
    ["FUN_18009d662"]="CoreEngineTargetHandler"
    ["FUN_18009d75a"]="CoreEngineSystemCleaner"
    ["FUN_18009d764"]="CoreEngineMemoryCleaner"
    ["FUN_18009d790"]="CoreEngineFloatProcessor"
    ["FUN_18009d799"]="CoreEngineFloatManager"
    ["FUN_18009d7b5"]="CoreEngineFloatHandler"
    ["FUN_18009d87b"]="CoreEngineDataValidator"
    ["FUN_18009d885"]="CoreEngineSystemValidator"
    ["FUN_18009d8f0"]="CoreEngineDataTransfer"
    ["FUN_18009daf0"]="CoreEngineIntegerProcessor"
    ["FUN_18009dcd0"]="CoreEngineMemoryTransfer"
    ["FUN_18009dcde"]="CoreEngineSystemTransfer"
    ["FUN_18009de00"]="CoreEngineFinalizer"
    ["FUN_18009dec3"]="CoreEngineTerminator"
    ["FUN_18009df90"]="CoreEngineFloatCalculator"
    ["FUN_18009e500"]="CoreEngineDataProcessor"
    ["FUN_18009e700"]="CoreEngineMemoryProcessor"
    ["FUN_18009e960"]="CoreEngineSystemHandler"
    ["FUN_18009e9e0"]="CoreEngineTargetProcessor"
    ["FUN_18009eb80"]="CoreEngineResourceManager"
)

# 遍历所有映射并执行替换
for old_name in "${!function_mappings[@]}"; do
    new_name="${function_mappings[$old_name]}"
    
    # 替换函数定义
    sed -i "s/void $old_name(/void $new_name(/g" 02_core_engine.c
    sed -i "s/char $old_name(/char $new_name(/g" 02_core_engine.c
    sed -i "s/int $old_name(/int $new_name(/g" 02_core_engine.c
    sed -i "s/uint32_t $old_name(/uint32_t $new_name(/g" 02_core_engine.c
    sed -i "s/uint64_t $old_name(/uint64_t $new_name(/g" 02_core_engine.c
    sed -i "s/float $old_name(/float $new_name(/g" 02_core_engine.c
    sed -i "s/long long $old_name(/long long $new_name(/g" 02_core_engine.c
    
    # 替换函数调用
    sed -i "s/$old_name(/$new_name(/g" 02_core_engine.c
    
    echo "重命名函数: $old_name -> $new_name"
done

echo "批量重命名完成"