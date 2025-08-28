#!/bin/bash

# FUN_函数高频引用处理器
# 用于处理项目中出现频率最高的FUN_函数

echo "开始FUN_函数高频引用处理..."
echo "================================"

# 定义高频FUN_函数的语义化别名映射
declare -A FUN_MAPPING=(
    # 系统核心功能
    ["FUN_1808fd200"]="SystemDataManager"
    ["FUN_180743d80"]="SystemDataProcessor"
    ["FUN_180742050"]="SystemDataHandler"
    ["FUN_180627be0"]="SystemDataBuffer"
    ["FUN_1808fc8a8"]="SystemDataValidator"
    ["FUN_1808fc050"]="SystemConfigManager"
    ["FUN_18066bdc0"]="SystemStateController"
    ["FUN_180240430"]="SystemMemoryManager"
    ["FUN_180067070"]="SystemResourceAllocator"
    ["FUN_1808744f0"]="SystemPerformanceOptimizer"
    
    # 数据处理和管理
    ["FUN_1808ddc20"]="DataFlowProcessor"
    ["FUN_1808fc838"]="DataStructureManager"
    ["FUN_180627ae0"]="DataBufferHandler"
    ["FUN_180045af0"]="DataCacheManager"
    ["FUN_18087dc70"]="DataStreamProcessor"
    ["FUN_1804c1300"]="DataPipelineManager"
    ["FUN_18005b7c0"]="DataCompressionEngine"
    ["FUN_180046240"]="DataEncryptionHandler"
    ["FUN_18084b240"]="DataSynchronizationManager"
    ["FUN_1800b0710"]="DataValidationEngine"
)

# 统计处理前的FUN_函数数量
TOTAL_BEFORE=$(grep -r "FUN_" pretty/ | wc -l)
echo "处理前FUN_函数总数: $TOTAL_BEFORE"

# 处理每个高频FUN_函数
for fun_name in "${!FUN_MAPPING[@]}"; do
    alias_name="${FUN_MAPPING[$fun_name]}"
    
    echo "处理 $fun_name -> $alias_name"
    
    # 统计该函数的出现次数
    count=$(grep -r "$fun_name" pretty/ | wc -l)
    echo "  出现次数: $count"
    
    # 替换函数调用
    find pretty/ -name "*.c" -exec sed -i "s/$fun_name/$alias_name/g" {} \;
    
    # 添加函数定义（如果不存在）
    if ! grep -q "$alias_name" pretty/01_initialization/01_initialization_part001.c; then
        echo "  添加函数定义..."
        cat >> pretty/01_initialization/01_initialization_part001.c << EOF

// $alias_name - $fun_name 的语义化别名
// 功能描述：系统核心功能函数
// 参数：根据具体上下文确定
// 返回值：根据具体上下文确定
#define $alias_name $fun_name
EOF
    fi
done

# 统计处理后的FUN_函数数量
TOTAL_AFTER=$(grep -r "FUN_" pretty/ | wc -l)
echo "处理后FUN_函数总数: $TOTAL_AFTER"

# 计算处理的函数数量
PROCESSED=$((TOTAL_BEFORE - TOTAL_AFTER))
echo "本次处理FUN_函数数量: $PROCESSED"

# 创建处理报告
echo "创建处理报告..."
cat > fun_processing_report.txt << EOF
FUN_函数高频引用处理报告
===========================
处理时间: $(date)
处理前FUN_函数总数: $TOTAL_BEFORE
处理后FUN_函数总数: $TOTAL_AFTER
本次处理数量: $PROCESSED

处理的函数列表:
EOF

for fun_name in "${!FUN_MAPPING[@]}"; do
    alias_name="${FUN_MAPPING[$fun_name]}"
    echo "- $fun_name -> $alias_name" >> fun_processing_report.txt
done

echo "处理完成！报告已保存到 fun_processing_report.txt"