#!/bin/bash

# 清理注释中剩余的undefined类型
# 专门处理注释文档中的undefined返回值描述

echo "开始清理注释中的undefined类型..."

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
    
    # 专门处理注释中的undefined返回值描述
    sed -e 's/@return undefined 验证结果状态/@return int32_t 验证结果状态/g' \
        -e 's/@return undefined 分配结果状态/@return int32_t 分配结果状态/g' \
        -e 's/@return undefined 释放结果状态/@return int32_t 释放结果状态/g' \
        -e 's/@return undefined 更新结果状态/@return int32_t 更新结果状态/g' \
        -e 's/@return undefined 记录结果状态/@return int32_t 记录结果状态/g' \
        -e 's/@return undefined 状态监控结果状态/@return int32_t 状态监控结果状态/g' \
        -e 's/@return undefined 错误处理结果状态/@return int32_t 错误处理结果状态/g' \
        -e 's/@return undefined 初始化结果状态/@return int32_t 初始化结果状态/g' \
        -e 's/@return undefined 清理结果状态/@return int32_t 清理结果状态/g' \
        -e 's/@return undefined 处理结果状态/@return int32_t 处理结果状态/g' \
        -e 's/@return undefined$/@return int32_t/g' \
        -e 's/@return undefined /@return int32_t /g' \
        "$file" > "$temp_file"
    
    # 替换文件
    mv "$temp_file" "$file"
    
    echo "✓ 已处理: $file"
done

echo "注释清理完成！"
echo "总共处理了 $count 个文件"

# 验证清理结果
remaining=$(find pretty/ -name "*.c" -exec grep -c "undefined" {} \; | awk '{sum += $1} END {print sum}')
echo "剩余 undefined 类型数量: $remaining"

# 显示剩余的undefined类型（如果有）
if [ "$remaining" -gt 0 ]; then
    echo "剩余的undefined类型分布："
    find pretty/ -name "*.c" -exec grep -n "undefined" {} \; | head -20
fi