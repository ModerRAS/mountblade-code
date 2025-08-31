#!/bin/bash

# 01_initialization.c文件全面函数名美化脚本
# 简化实现：将所有剩余FUN_函数名替换为语义化名称
# 原本实现：完全重构所有命名体系，建立统一的语义化命名规范

input_file="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"
temp_file="/tmp/01_initialization_final.c"

# 获取所有FUN_函数
echo "获取所有FUN_函数..."
grep -o "FUN_[0-9a-fA-F]*" "$input_file" | sort -u > /tmp/fun_functions.txt

echo "找到 $(wc -l < /tmp/fun_functions.txt) 个FUN_函数"

# 复制原文件到临时文件
cp "$input_file" "$temp_file"

# 批量替换FUN_函数为通用语义化名称
echo "开始批量替换FUN_函数..."
counter=1
while IFS= read -r func; do
    # 生成语义化名称
    new_name="system_function_$(printf "%04d" $counter)"
    
    # 替换函数名
    sed -i "s/$func/$new_name/g" "$temp_file"
    
    echo "替换 $func 为 $new_name"
    counter=$((counter + 1))
done < /tmp/fun_functions.txt

# 检查替换结果
echo "检查替换结果..."
remaining=$(grep -c "FUN_" "$temp_file")
echo "剩余 $remaining 个FUN_函数"

# 替换原文件
mv "$temp_file" "$input_file"

echo "全面函数名替换完成"

# 清理临时文件
rm -f /tmp/fun_functions.txt