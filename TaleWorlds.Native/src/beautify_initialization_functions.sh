#!/bin/bash

# 美化初始化文件中的函数注释
# 这个脚本将删除旧的注释格式并为函数添加适当的文档注释

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"
TEMP_FILE="/tmp/initialization_temp.c"

# 删除旧的注释行
sed '/^\/\/ 函数: void FUN_.*$/d' "$INPUT_FILE" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "函数注释美化完成"