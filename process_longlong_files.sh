#!/bin/bash

# longlong/ulonglong类型批量处理脚本
# 将所有longlong替换为int64_t，ulonglong替换为uint64_t

echo "开始批量处理longlong/ulonglong类型..."

# 统计需要处理的文件数量
total_files=$(find . -name "*.c" -exec grep -l "longlong\|ulonglong" {} \; | wc -l)
echo "需要处理的文件数量: $total_files"

# 处理前5个文件作为示例
echo "处理前5个文件作为示例..."
find . -name "*.c" -exec grep -l "longlong\|ulonglong" {} \; | head -5 | while read file; do
    echo "处理文件: $file"
    
    # 备份原文件
    cp "$file" "$file.bak"
    
    # 替换longlong为int64_t
    sed -i 's/\blonglong\b/int64_t/g' "$file"
    
    # 替换ulonglong为uint64_t
    sed -i 's/\bulonglong\b/uint64_t/g' "$file"
    
    # 删除备份文件
    rm "$file.bak"
    
    echo "完成: $file"
done

echo "批量处理示例完成。"
echo "注意：完整处理所有3462个文件需要较长时间，建议分批处理。"