#!/bin/bash

# 美化99_unmatched_functions.c文件中的变量名
# 该脚本将改进一些仍然使用数字后缀的变量名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 使用sed进行变量名替换
sed -i 's/SecondCharacterCode0/CharacterCodeMaximum/g' "$INPUT_FILE"
sed -i 's/DataValue11/TempDataValue/g' "$INPUT_FILE"
sed -i 's/uStack_58/StackVariable58/g' "$INPUT_FILE"
sed -i 's/uStack_50/StackVariable50/g' "$INPUT_FILE"
sed -i 's/uStack_48/StackVariable48/g' "$INPUT_FILE"
sed -i 's/uStack_248/StackVariable248/g' "$INPUT_FILE"
sed -i 's/auStack_2f8/StackArray2f8/g' "$INPUT_FILE"

echo "变量名美化完成"