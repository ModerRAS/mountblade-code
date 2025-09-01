#!/bin/bash

# 批量替换参数变量名的脚本
# 用于美化06_utilities.c文件中的参数名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 备份原文件
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 替换常见的参数变量名
sed -i 's/param_1/objectParam1/g' "$INPUT_FILE"
sed -i 's/param_2/contextParam2/g' "$INPUT_FILE"
sed -i 's/param_3/dataParam3/g' "$INPUT_FILE"
sed -i 's/param_4/flagParam4/g' "$INPUT_FILE"
sed -i 's/param_5/valueParam5/g' "$INPUT_FILE"
sed -i 's/param_6/indexParam6/g' "$INPUT_FILE"

echo "参数变量名替换完成"