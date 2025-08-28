#!/bin/bash

# FUN_函数语义化映射分析脚本
# 分析高频FUN_函数的使用模式并建议语义化名称

echo "=== FUN_函数语义化映射分析 ==="
echo "分析时间: $(date)"
echo

# 获取前20个高频函数
top_functions=$(find . -name "*.c" -exec grep -o "FUN_[0-9a-fA-F]*" {} \; | sort | uniq -c | sort -nr | head -20 | awk '{print $2}')

echo "高频FUN_函数映射建议："
echo "======================"

for func in $top_functions; do
    count=$(find . -name "*.c" -exec grep -o "$func" {} \; | wc -l)
    file_count=$(find . -name "*.c" -exec grep -l "$func" {} \; | wc -l)
    
    echo
    echo "函数: $func"
    echo "使用次数: $count"
    echo "分布文件: $file_count"
    
    # 分析函数参数特征
    echo "参数模式:"
    find . -name "*.c" -exec grep -h "$func" {} \; | head -3 | sed 's/.*'$func'//' | head -3 | sed 's/^/  /'
    
    # 分析上下文
    echo "使用上下文:"
    find . -name "*.c" -exec grep -B1 -A1 "$func" {} \; | head -6 | grep -v "$func" | sed 's/^/  /'
    
    # 基于模式建议语义化名称
    echo "建议的语义化名称:"
    
    # 分析返回值使用模式
    return_usage=$(find . -name "*.c" -exec grep -B1 -A1 "$func" {} \; | grep -E "(if.*==|if.*!=|=.*$func)" | head -3)
    param_count=$(find . -name "*.c" -exec grep -h "$func" {} \; | head -1 | tr -cd ',' | wc -c)
    
    if [[ $return_usage == *"=="* ]] || [[ $return_usage == *"!="* ]]; then
        echo "  - 函数返回布尔值，可能是验证/检查函数"
        if [[ $param_count -eq 2 ]]; then
            echo "  - 建议: DataValidator 或 MemoryChecker"
        elif [[ $param_count -eq 1 ]]; then
            echo "  - 建议: SystemValidator 或 StateChecker"
        fi
    fi
    
    if [[ $func == *"1806"* ]]; then
        echo "  - 前缀1806，可能是核心引擎函数"
        echo "  - 建议: CoreEngine_Operation 或 SystemManager"
    elif [[ $func == *"1808"* ]]; then
        echo "  - 前缀1808，可能是渲染或UI系统函数"
        echo "  - 建议: Rendering_Operation 或 UIHandler"
    elif [[ $func == *"1800"* ]]; then
        echo "  - 前缀1800，可能是系统底层函数"
        echo "  - 建议: System_LowLevel 或 KernelOperation"
    fi
    
    echo "----------------------------------------"
done

echo
echo "=== 分析完成 ==="