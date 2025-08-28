#!/bin/bash

# ============================================================================
# FUN_函数批量处理脚本 - 优化最常见的FUN_函数
# ============================================================================

# 最常见的FUN_函数映射（基于统计分析）
declare -A FUN_MAPPING=(
    # 系统核心功能
    ["FUN_18084782"]="SystemCoreProcessor"
    ["FUN_1808fd20"]="SystemCoreInitializer"
    ["FUN_1808fc05"]="SystemCoreManager"
    ["FUN_18084b24"]="SystemCoreHandler"
    ["FUN_180743d6"]="SystemDataProcessor"
    ["FUN_1808aed0"]="SystemMemoryManager"
    ["FUN_180744cc"]="SystemResourceHandler"
    ["FUN_180743d8"]="SystemStateManager"
    ["FUN_18066bdc"]="SystemEventProcessor"
    ["FUN_180645c1"]="SystemConfigHandler"
    ["FUN_18089752"]="SystemNetworkProcessor"
    ["FUN_18088c74"]="SystemSecurityManager"
    ["FUN_18076b39"]="SystemPerformanceOptimizer"
    ["FUN_18066d37"]="SystemErrorHandler"
    ["FUN_180626f8"]="SystemLogger"
    ["FUN_180630b2"]="SystemValidator"
    ["FUN_1800b830"]="SystemInitializer"
    ["FUN_180899ef"]="SystemCleanupHandler"
    ["FUN_18084903"]="SystemMonitor"
    ["FUN_18055f26"]="SystemController"
)

# 处理文件列表
TARGET_FILES=(
    "pretty/03_rendering_part287_sub001_sub001.c"
    "pretty/03_rendering_part082_sub002_sub002.c"
    "pretty/99_part_04_part015_sub002_sub002.c"
    "pretty/03_rendering_part547_sub002_sub002.c"
    "pretty/99_part_10_part053_sub002_sub002.c"
)

echo "开始FUN_函数批量处理..."
echo "处理文件数量: ${#TARGET_FILES[@]}"
echo "FUN_函数映射数量: ${#FUN_MAPPING[@]}"

# 统计处理结果
TOTAL_REPLACED=0
TOTAL_FILES_PROCESSED=0

for file in "${TARGET_FILES[@]}"; do
    if [[ -f "$file" ]]; then
        echo "处理文件: $file"
        
        # 统计文件中的FUN_函数数量
        file_fun_count=$(grep -c "FUN_" "$file" 2>/dev/null || echo "0")
        echo "  原始FUN_函数数量: $file_fun_count"
        
        # 执行替换
        file_replaced=0
        for fun_name in "${!FUN_MAPPING[@]}"; do
            alias_name="${FUN_MAPPING[$fun_name]}"
            
            # 统计当前FUN_函数在文件中的出现次数
            count=$(grep -c "$fun_name" "$file" 2>/dev/null || echo "0")
            if [[ $count -gt 0 ]]; then
                echo "  替换 $fun_name -> $alias_name (出现次数: $count)"
                
                # 执行替换
                sed -i "s/$fun_name/$alias_name/g" "$file"
                file_replaced=$((file_replaced + count))
            fi
        done
        
        echo "  文件替换完成，共替换 $file_replaced 个FUN_函数"
        TOTAL_REPLACED=$((TOTAL_REPLACED + file_replaced))
        TOTAL_FILES_PROCESSED=$((TOTAL_FILES_PROCESSED + 1))
    else
        echo "警告: 文件不存在 $file"
    fi
done

echo "=========================================="
echo "批量处理完成！"
echo "处理文件数: $TOTAL_FILES_PROCESSED"
echo "总替换数量: $TOTAL_REPLACED"
echo "=========================================="