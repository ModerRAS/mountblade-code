#!/bin/bash

# FUN_函数批量处理脚本
# 用于检查和优化包含FUN_函数的文件

echo "=== FUN_函数批量处理脚本 ==="
echo "开始时间: $(date)"
echo

# 统计包含FUN_函数的文件
echo "1. 统计包含FUN_函数的文件..."
fun_files=$(find pretty -name "*.c" -exec grep -l "FUN_" {} \;)
fun_count=$(echo "$fun_files" | wc -l)
echo "包含FUN_函数的文件数量: $fun_count"

# 检查FUN_函数的使用情况
echo
echo "2. 检查FUN_函数的使用情况..."
echo "前10个包含FUN_函数的文件:"
echo "$fun_files" | head -10

# 检查是否有未定义的FUN_函数调用
echo
echo "3. 检查未定义的FUN_函数调用..."
echo "查找未定义的FUN_函数调用（不包括#define定义）..."
undefined_funs=$(find pretty -name "*.c" -exec grep -h "FUN_[0-9a-f]\{8\}" {} \; | grep -v "#define" | sort | uniq)
if [ -n "$undefined_funs" ]; then
    echo "发现未定义的FUN_函数调用:"
    echo "$undefined_funs" | head -20
    undefined_count=$(echo "$undefined_funs" | wc -l)
    echo "未定义的FUN_函数数量: $undefined_count"
else
    echo "未发现未定义的FUN_函数调用"
fi

# 检查FUN_函数定义的情况
echo
echo "4. 检查FUN_函数定义的情况..."
defined_funs=$(find pretty -name "*.c" -exec grep -h "#define.*FUN_[0-9a-f]\{8\}" {} \; | sort | uniq)
defined_count=$(echo "$defined_funs" | wc -l)
echo "已定义的FUN_函数数量: $defined_count"

# 显示前10个已定义的FUN_函数
echo "前10个已定义的FUN_函数:"
echo "$defined_funs" | head -10

# 检查文件中的FUN_函数调用模式
echo
echo "5. 检查FUN_函数调用模式..."
echo "查找直接调用FUN_函数的情况（不使用别名）..."
direct_calls=$(find pretty -name "*.c" -exec grep -n "FUN_[0-9a-f]\{8\}(" {} \; | head -20)
if [ -n "$direct_calls" ]; then
    echo "发现直接调用FUN_函数的情况:"
    echo "$direct_calls"
else
    echo "未发现直接调用FUN_函数的情况"
fi

# 检查是否有注释中的FUN_函数
echo
echo "6. 检查注释中的FUN_函数..."
comment_funs=$(find pretty -name "*.c" -exec grep -h "FUN_[0-9a-f]\{8\}" {} \; | grep "//" | head -10)
if [ -n "$comment_funs" ]; then
    echo "注释中的FUN_函数示例:"
    echo "$comment_funs"
else
    echo "未发现注释中的FUN_函数"
fi

echo
echo "=== 处理完成 ==="
echo "结束时间: $(date)"