#!/bin/bash

# 优化的FUN_函数高频引用处理器
echo "开始优化FUN_函数高频引用处理..."
echo "================================"

# 定义要处理的FUN_函数列表（只处理实际存在的函数）
FUN_FUNCTIONS=(
    "FUN_1808fc838:DataStructureManager"
    "FUN_180743d80:SystemDataProcessor"
    "FUN_18084b240:DataSynchronizationManager"
    "FUN_1808ddc20:DataFlowProcessor"
    "FUN_1808fc8a8:SystemDataValidator"
    "FUN_1804c1300:DataPipelineManager"
    "FUN_18087dc70:DataStreamProcessor"
    "FUN_180045af0:DataCacheManager"
    "FUN_180067070:SystemResourceAllocator"
    "FUN_1800b0710:DataValidationEngine"
    "FUN_180046240:DataEncryptionHandler"
    "FUN_18066bdc0:SystemStateController"
)

# 统计处理前的FUN_函数数量
TOTAL_BEFORE=$(grep -r "FUN_" pretty/ | wc -l)
echo "处理前FUN_函数总数: $TOTAL_BEFORE"

# 创建函数定义文件
echo "创建函数定义文件..."
cat > fun_definitions.h << 'EOF'
// ============================================================================
// FUN_函数语义化别名定义
// ============================================================================
// 自动生成的FUN_函数语义化别名定义
// 生成时间: $(date)

EOF

# 处理每个FUN_函数
for fun_pair in "${FUN_FUNCTIONS[@]}"; do
    fun_name=$(echo "$fun_pair" | cut -d: -f1)
    alias_name=$(echo "$fun_pair" | cut -d: -f2)
    
    echo "处理 $fun_name -> $alias_name"
    
    # 统计该函数的出现次数
    count=$(grep -r "$fun_name" pretty/ | wc -l)
    echo "  出现次数: $count"
    
    if [ $count -gt 0 ]; then
        # 批量替换函数调用
        find pretty/ -name "*.c" -exec sed -i "s/$fun_name/$alias_name/g" {} \;
        
        # 添加函数定义
        cat >> fun_definitions.h << EOF

// $alias_name - $fun_name 的语义化别名
// 功能描述：系统核心功能函数
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

echo "处理完成！函数定义已保存到 fun_definitions.h"