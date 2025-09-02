#!/bin/bash

# 批量美化99_unmatched_functions.c文件中的undefined变量
# 将undefined变量改为void*类型

FILE="TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建备份
cp "$FILE" "$FILE.backup"

# 使用sed进行批量替换
sed -i 's/undefined \([a-zA-Z_][a-zA-Z0-9_]*\);/void* \1;/g' "$FILE"

echo "批量替换完成"