#!/bin/bash

# 美化变量名脚本
# 这个脚本用于批量替换01_initialization.c文件中的未美化变量名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"
TEMP_FILE="/tmp/initialization_temp.c"

# 创建备份
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 变量替换映射
# 注意：这里只替换一些明显的变量，避免误替换
sed -e 's/fVar1\([0-9]*\)/tempFloat\1/g' \
    -e 's/fVar\([0-9]\)/rotationFloat\1/g' \
    -e 's/lVar1\([0-9]*\)/longIndex\1/g' \
    -e 's/lVar\([0-9]\)/loopVar\1/g' \
    -e 's/uVar1\([0-9]*\)/unsignedOffset\1/g' \
    -e 's/uVar\([0-9]\)/unsignedVar\1/g' \
    -e 's/iVar1\([0-9]*\)/integerIndex\1/g' \
    -e 's/iVar\([0-9]\)/intVar\1/g' \
    -e 's/in_R\([0-9]*\)/contextRegister\1/g' \
    -e 's/unaff_\([A-Z0-9]*\)/unaffectedRegister\1/g' \
    -e 's/param_\([0-9]*\)/functionParam\1/g' \
    "$INPUT_FILE" > "$TEMP_FILE"

# 替换完成，移动回原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "变量名美化完成"