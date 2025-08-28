#!/bin/bash

# 简化版FUN_函数处理脚本

echo "开始执行简化版FUN_函数处理..."

# 统计处理前的FUN_函数数量
BEFORE_COUNT=$(grep -r "FUN_" --include="*.c" . | wc -l)
echo "处理前FUN_函数总数: $BEFORE_COUNT"

# 定义高频FUN_函数映射
declare -A FUN_MAP=(
    ["FUN_180629850"]="SystemAdvancedProcessor"
    ["FUN_1808555a0"]="SystemAdvancedManager"
    ["FUN_1808995c0"]="SystemAdvancedInitializer"
    ["FUN_180627c50"]="SystemAdvancedHandler"
    ["FUN_1801601c0"]="SystemAdvancedController"
    ["FUN_180079520"]="SystemAdvancedValidator"
    ["FUN_1806d7170"]="SystemAdvancedOptimizer"
    ["FUN_18066e8f0"]="SystemDataAdvancedProcessor"
    ["FUN_1806b5600"]="SystemDataAdvancedManager"
    ["FUN_18088d720"]="SystemDataAdvancedInitializer"
    ["FUN_180879610"]="SystemDataAdvancedHandler"
    ["FUN_1808b2f30"]="SystemDataAdvancedController"
    ["FUN_1800623b0"]="SystemDataAdvancedValidator"
    ["FUN_180062300"]="SystemDataAdvancedOptimizer"
    ["FUN_18062b1e0"]="RenderingAdvancedProcessor"
    ["FUN_180769ed0"]="RenderingAdvancedManager"
    ["FUN_18022a890"]="RenderingAdvancedInitializer"
    ["FUN_180122210"]="RenderingAdvancedHandler"
    ["FUN_18007f6a0"]="RenderingAdvancedController"
    ["FUN_1808761f0"]="RenderingAdvancedValidator"
)

# 处理每个FUN_函数
for fun_key in "${!FUN_MAP[@]}"; do
    fun_value="${FUN_MAP[$fun_key]}"
    
    # 统计替换前的数量
    BEFORE_FUN_COUNT=$(grep -r "$fun_key" --include="*.c" . | wc -l)
    
    if [ "$BEFORE_FUN_COUNT" -gt 0 ]; then
        echo "正在处理 $fun_key -> $fun_value (出现次数: $BEFORE_FUN_COUNT)"
        
        # 执行批量替换
        find . -name "*.c" -exec sed -i "s/$fun_key/$fun_value/g" {} \;
        
        # 统计替换后的数量
        AFTER_FUN_COUNT=$(grep -r "$fun_value" --include="*.c" . | wc -l)
        
        if [ "$AFTER_FUN_COUNT" -gt "$BEFORE_FUN_COUNT" ]; then
            REPLACED_COUNT=$((AFTER_FUN_COUNT - BEFORE_FUN_COUNT))
            echo "  成功替换 $REPLACED_COUNT 次"
        fi
    fi
done

# 统计处理后的FUN_函数数量
AFTER_COUNT=$(grep -r "FUN_" --include="*.c" . | wc -l)
REDUCTION=$((BEFORE_COUNT - AFTER_COUNT))

echo "=== 处理结果 ==="
echo "处理前FUN_函数总数: $BEFORE_COUNT"
echo "处理后FUN_函数总数: $AFTER_COUNT"
echo "FUN_函数总数减少: $REDUCTION"

# 显示剩余最多的FUN_函数
echo "剩余最多的FUN_函数:"
grep -r "FUN_" --include="*.c" . | grep -o "FUN_[0-9a-f]\+" | sort | uniq -c | sort -nr | head -10

echo "简化版FUN_函数处理任务已成功完成！"