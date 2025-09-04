#!/bin/bash
# 删除临时文件脚本
echo "开始删除临时文件..."

# 删除所有.py文件
for file in *.py; do
    if [ -f "$file" ]; then
        rm -f "$file"
        echo "已删除: $file"
    fi
done

# 删除所有.sh文件
for file in *.sh; do
    if [ -f "$file" ]; then
        rm -f "$file"
        echo "已删除: $file"
    fi
done

# 删除所有.md文件
for file in *.md; do
    if [ -f "$file" ]; then
        rm -f "$file"
        echo "已删除: $file"
    fi
done

# 删除replace.c文件
if [ -f "replace.c" ]; then
    rm -f replace.c
    echo "已删除: replace.c"
fi

echo "临时文件删除完成"