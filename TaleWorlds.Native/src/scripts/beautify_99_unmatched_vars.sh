#!/bin/bash

# 美化99_unmatched_functions.c文件中的undefined变量
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 使用sed批量替换undefined变量为void*类型
sed -i 's/^undefined \([a-zA-Z_][a-zA-Z0-9_]*\);/void* \1;/g' "$FILE"

echo "变量美化完成"