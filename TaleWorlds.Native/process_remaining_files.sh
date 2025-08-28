#!/bin/bash

# 处理剩余的179个文件
echo "开始处理剩余的179个文件..."

# 使用rg来搜索和处理
for file in $(rg -l "longlong|ulonglong" --type c); do
    if [ -f "$file" ]; then
        echo "处理: $file"
        sed -i 's/\blonglong\b/int64_t/g' "$file"
        sed -i 's/\bulonglong\b/uint64_t/g' "$file"
    fi
done

echo "处理完成!"