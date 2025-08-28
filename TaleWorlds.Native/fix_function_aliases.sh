#!/bin/bash

# 批量修复函数别名定义错误的脚本
# 修复 CoreEngineMemoryPoolAllocator, CoreEngineMemoryPoolCleaner 等函数别名

echo "开始修复函数别名定义错误..."

# 定义要修复的函数别名映射
declare -A function_aliases=(
    ["CoreEngineMemoryPoolAllocator"]="FUN_18062b420"
    ["CoreEngineMemoryPoolCleaner"]="FUN_18064e900"
    ["CoreEngineMemoryPoolInitializer"]="FUN_18064d630"
    ["CoreEngineDataBufferProcessor"]="FUN_180057340"
    ["CoreEngineDataStructureManager"]="FUN_18005736b"
    ["CoreEngineDataBufferCleaner"]="FUN_180057446"
    ["CoreEngineDataOffsetCalculator"]="FUN_180057479"
    ["CoreEngineDataStructureOptimizer"]="FUN_1800574b0"
    ["CoreEngineComponentProcessor"]="FUN_1800574b0"
    ["CoreEngineResourceManager"]="FUN_1800582b0"
    ["CoreEngineStateManager"]="FUN_180058370"
    ["CoreEngineErrorHandler"]="FUN_180058420"
    ["CoreEngineSystemInitializer"]="FUN_180058210"
)

# 遍历所有函数别名，修复定义
for alias in "${!function_aliases[@]}"; do
    fun_name="${function_aliases[$alias]}"
    
    echo "修复函数别名: $alias -> $fun_name"
    
    # 查找并修复错误的定义
    sed -i "s/#define $alias $alias/#define $alias $fun_name/g" pretty/02_core_engine_part016.c
done

echo "函数别名修复完成！"