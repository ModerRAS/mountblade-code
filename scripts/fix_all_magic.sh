#!/bin/bash

# 全面修复01_initialization.c文件中的魔法值格式问题
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 使用perl进行更强大的正则表达式替换
perl -i -pe 's/0x0x/0x/g' "$INPUT_FILE"
perl -i -pe 's/([0-9a-fA-F])0x([0-9a-fA-F])/$1$2/g' "$INPUT_FILE"
perl -i -pe 's/^([0-9a-fA-F]+) 0x([0-9a-fA-F]+)/#define SYSTEM_MAGIC_$1 0x$2/g' "$INPUT_FILE"

echo "魔法值格式全面修复完成"