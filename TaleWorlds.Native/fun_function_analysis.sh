#!/bin/bash

# FUN_函数高频优化分析脚本
# 分析最高频的FUN_函数并创建语义化别名

echo "=== FUN_函数高频优化分析报告 ==="
echo "分析时间: $(date)"
echo "项目目录: $(pwd)"
echo

# 1. 基础统计
echo "1. 基础统计信息"
echo "-------------------"
total_files=$(find . -name "*.c" -type f | wc -l)
fun_files=$(find . -name "*.c" -exec grep -l "FUN_" {} \; | wc -l)
total_refs=$(find . -name "*.c" -exec grep -o "FUN_[0-9a-fA-F]*" {} \; | wc -l)

echo "总C文件数量: $total_files"
echo "包含FUN_函数的文件数量: $fun_files"
echo "FUN_函数总引用数量: $total_refs"
echo

# 2. 获取高频函数
echo "2. 最高频的FUN_函数 (前20个)"
echo "----------------------------"
find . -name "*.c" -exec grep -o "FUN_[0-9a-fA-F]*" {} \; | sort | uniq -c | sort -nr | head -20 | while read count func; do
    echo "$count: $func"
done
echo

# 3. 分析函数特征
echo "3. 函数特征分析"
echo "---------------"
echo "分析前5个高频函数..."

top_functions=$(find . -name "*.c" -exec grep -o "FUN_[0-9a-fA-F]*" {} \; | sort | uniq -c | sort -nr | head -5 | awk '{print $2}')

for func in $top_functions; do
    echo
    echo "函数: $func"
    echo "使用次数: $(find . -name "*.c" -exec grep -o "$func" {} \; | wc -l)"
    echo "分布文件数: $(find . -name "*.c" -exec grep -l "$func" {} \; | wc -l)"
    
    # 分析函数参数特征
    echo "参数特征:"
    find . -name "*.c" -exec grep -h "$func" {} \; | head -3 | sed 's/.*'$func'//' | head -3
done

echo
echo "=== 分析完成 ==="