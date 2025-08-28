#!/bin/bash

# 继续处理longlong/ulonglong类型的脚本
# 处理接下来的50个文件

echo "继续批量处理longlong/ulonglong类型..."

# 获取需要处理的文件列表
files_to_process=$(find . -name "*.c" -exec grep -l "longlong\|ulonglong" {} \; | head -50)
file_count=$(echo "$files_to_process" | wc -l)

echo "本次处理文件数量: $file_count"

# 处理文件
echo "$files_to_process" | while read file; do
    if [ -n "$file" ]; then
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
    fi
done

echo "本次处理完成。"
echo "剩余需要处理的文件数量: $(find . -name "*.c" -exec grep -l "longlong\|ulonglong" {} \; | wc -l)"