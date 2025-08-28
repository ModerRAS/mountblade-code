#!/bin/bash

# pretty-code类型优化脚本
# 功能：批量替换longlong和ulonglong类型为标准类型

echo "开始执行pretty-code类型优化..."

# 查找所有包含longlong类型的文件
find . -name "*.c" -type f -exec grep -l "longlong\|ulonglong" {} \; > /tmp/longlong_files.txt

# 统计需要处理的文件数量
file_count=$(wc -l < /tmp/longlong_files.txt)
echo "发现 $file_count 个文件需要处理"

# 处理每个文件
while IFS= read -r file; do
    echo "正在处理文件: $file"
    
    # 备份原文件
    cp "$file" "$file.bak"
    
    # 执行类型替换
    sed -i 's/longlong/int64_t/g' "$file"
    sed -i 's/ulonglong/uint64_t/g' "$file"
    
    echo "已处理: $file"
done < /tmp/longlong_files.txt

echo "类型优化完成！"
echo "处理的文件总数: $file_count"

# 清理临时文件
rm -f /tmp/longlong_files.txt