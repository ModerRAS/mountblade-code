#!/bin/bash

# 美化99_unmatched_functions.c文件中的指针变量名

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 替换指针变量
sed -i 's/piVar5/system_file_position_ptr/g' "$FILE"
sed -i 's/piVar6/system_file_position_ptr_temp/g' "$FILE"

echo "指针变量名替换完成"