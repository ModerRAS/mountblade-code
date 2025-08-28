#!/bin/bash

# 核心引擎高级数据处理和内存管理模块FUN_函数处理脚本
# 处理 pretty/02_core_engine_part163.c 文件中的FUN_函数调用

FILE_PATH="pretty/02_core_engine_part163.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.bak"

echo "开始处理核心引擎高级数据处理和内存管理模块的FUN_函数..."

# FUN_函数语义化别名映射
declare -A FUN_MAPPINGS=(
    ["FUN_18014e7d0"]="CoreEngineAdvancedDataProcessor"
    ["FUN_18014e8b0"]="CoreEngineMemoryManager"
    ["FUN_18014e020"]="CoreEngineDataStructureCloner"
    ["FUN_18014c9e0"]="CoreEngineMemoryAllocator"
    ["FUN_18014c850"]="CoreEngineDataCleaner"
    ["FUN_18014c7d0"]="CoreEngineDataStructureSwapper"
    ["FUN_18014c570"]="CoreEngineSystemDataManager"
    ["FUN_18014c430"]="CoreEngineAdvancedDataValidator"
    ["FUN_18014c160"]="CoreEngineMemoryPoolManager"
    ["FUN_18014b7f0"]="CoreEngineDataStructureInitializer"
    ["FUN_18014a370"]="CoreEngineSystemCleanup"
)

# 批量替换FUN_函数调用
for fun_name in "${!FUN_MAPPINGS[@]}"; do
    alias_name="${FUN_MAPPINGS[$fun_name]}"
    echo "替换 $fun_name 为 $alias_name"
    
    # 替换函数调用
    sed -i "s/\b$fun_name\b/$alias_name/g" "$FILE_PATH"
done

echo "FUN_函数替换完成！"

# 验证替换结果
echo "验证替换结果..."
remaining_funs=$(grep -o "FUN_[0-9a-fx]*" "$FILE_PATH" | wc -l)
echo "剩余FUN_函数数量: $remaining_funs"

if [ "$remaining_funs" -eq 0 ]; then
    echo "所有FUN_函数已成功替换！"
else
    echo "警告: 仍有 $remaining_funs 个FUN_函数未处理"
    grep -o "FUN_[0-9a-fx]*" "$FILE_PATH" | sort | uniq
fi

echo "处理完成！"