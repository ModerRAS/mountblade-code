#!/bin/bash

# 美化脚本：处理99_unmatched_functions.c中的FUN_1801b0a40函数

# 定义输入和输出文件
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
TEMP_FILE="/tmp/beautified_function.c"

# 使用sed替换函数名和变量名
sed -i 's/FUN_1801b0a40/ProcessCharacterEncodingAndBufferManagement/g' "$INPUT_FILE"
sed -i 's/FUN_1801c2360/InitializeHeapAllocationData/g' "$INPUT_FILE"
sed -i 's/FUN_1802f0890/ProcessCharacterData/g' "$INPUT_FILE"
sed -i 's/FUN_1802e8c60/EncodeCharacterData/g' "$INPUT_FILE"
sed -i 's/LAB_1801b0a90/CharacterEncodingLoop/g' "$INPUT_FILE"
sed -i 's/LAB_1801b0c03/CharacterMemoryAllocation/g' "$INPUT_FILE"

echo "函数名替换完成"