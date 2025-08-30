#!/bin/bash

# 美化01_initialization.c文件中的void类型变量声明
# 将void变量声明改为void*指针类型

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"
TEMP_FILE="/tmp/initialization_temp.c"

# 使用sed将void变量声明改为void*类型
# 匹配模式：^void\s+[a-zA-Z_][a-zA-Z0-9_]*\s*;
sed -E 's/^void\s+([a-zA-Z_][a-zA-Z0-9_]*)\s*;/void* \1;/g' "$INPUT_FILE" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "01_initialization.c文件void类型变量声明美化完成"