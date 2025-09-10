#!/bin/bash

# 美化UNK_变量的脚本
# 将 UNK_180957858 转换为 (void*)0x180957858

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 使用sed进行替换
sed -i 's/UNK_18095\([0-9a-f]\{4\}\)/(void*)0x18095\1/g' "$INPUT_FILE"

echo "UNK_变量美化完成"