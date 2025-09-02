#!/bin/bash

# 美化网络模块中的函数注释
# 移除注释中的原始函数名映射

# 处理05_networking.c文件
input_file="05_networking.c"
temp_file="${input_file}.tmp"

# 移除注释中的原始函数名映射（如 *FUN_18085f163：ValidateConnectionContext）
sed 's/\*FUN_[0-9a-fA-F]*：//g' "$input_file" > "$temp_file"

# 替换原文件
mv "$temp_file" "$input_file"

echo "已美化05_networking.c文件中的函数注释"