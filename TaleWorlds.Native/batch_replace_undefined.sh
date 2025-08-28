#!/bin/bash

# 批量替换 undefined 类型的脚本
# 用于完成代码美化任务

echo "开始批量替换 undefined 类型..."

# 统计需要处理的文件数量
total_files=$(find pretty/ -name "*.c" -exec grep -l "undefined" {} \; | wc -l)
echo "发现 $total_files 个文件需要处理"

# 处理每个文件
count=0
for file in $(find pretty/ -name "*.c" -exec grep -l "undefined" {} \;); do
    count=$((count + 1))
    echo "处理文件 $count/$total_files: $file"
    
    # 创建临时文件
    temp_file="${file}.tmp"
    
    # 替换 undefined 类型 - 使用更精确的替换规则
    sed -e 's/\bundefined1\b/int8_t/g' \
        -e 's/\bundefined2\b/int16_t/g' \
        -e 's/\bundefined4\b/int32_t/g' \
        -e 's/\bundefined8\b/uint64_t/g' \
        -e 's/\bundefined\s*\*\b/void*/g' \
        -e 's/\bundefined\b\s*\*/void*/g' \
        -e 's/\bundefined\b$/void/g' \
        -e 's/\bundefined\b(?=\s*[);,])/void/g' \
        "$file" > "$temp_file"
    
    # 替换文件
    mv "$temp_file" "$file"
    
    echo "✓ 已处理: $file"
done

echo "批量替换完成！"
echo "总共处理了 $count 个文件"

# 验证替换结果
remaining=$(find pretty/ -name "*.c" -exec grep -c "undefined" {} \; | awk '{sum += $1} END {print sum}')
echo "剩余 undefined 类型数量: $remaining"

# 显示剩余的undefined类型（如果有）
if [ "$remaining" -gt 0 ]; then
    echo "剩余的undefined类型分布："
    find pretty/ -name "*.c" -exec grep -n "undefined" {} \; | head -20
fi