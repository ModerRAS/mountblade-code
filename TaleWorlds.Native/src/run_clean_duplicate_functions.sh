#!/bin/bash
# 清理重复函数声明工具包 - 批处理脚本

echo "=== 清理重复函数声明工具包 ==="
echo

# 检查当前目录
if [ ! -f "06_utilities.c" ]; then
    echo "错误: 当前目录中没有找到 06_utilities.c 文件"
    echo "请确保在正确的目录中运行此脚本"
    exit 1
fi

echo "当前目录: $(pwd)"
echo "找到目标文件: 06_utilities.c"
echo

# 运行测试
echo "1. 运行功能测试..."
python3 clean_duplicate_functions_complete.py --test
echo

# 运行清理脚本
echo "2. 开始清理重复函数声明..."
python3 clean_duplicate_functions_complete.py
echo

# 检查结果
echo "3. 检查清理结果..."
if [ -f "06_utilities_cleaned.c" ]; then
    echo "✅ 清理完成，生成文件: 06_utilities_cleaned.c"
    
    # 比较文件大小
    original_size=$(wc -c < 06_utilities.c)
    cleaned_size=$(wc -c < 06_utilities_cleaned.c)
    
    echo "原始文件大小: $original_size 字节"
    echo "清理后文件大小: $cleaned_size 字节"
    
    if [ $cleaned_size -lt $original_size ]; then
        reduced=$((original_size - cleaned_size))
        echo "✅ 文件大小减少了 $reduced 字节"
    fi
    
    echo
    echo "备份文件: 06_utilities.c.backup"
    echo "清理后文件: 06_utilities_cleaned.c"
    
else
    echo "❌ 清理失败，未生成清理后的文件"
    exit 1
fi

echo
echo "=== 处理完成 ==="