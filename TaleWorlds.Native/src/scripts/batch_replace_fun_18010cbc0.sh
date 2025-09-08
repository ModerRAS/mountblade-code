#!/bin/bash

# 批量替换FUN_18010cbc0为CopyStringToBuffer的脚本
# 用于美化99_unmatched_functions.c文件中的函数调用

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 使用sed命令批量替换所有FUN_18010cbc0调用
sed -i 's/FUN_18010cbc0(/CopyStringToBuffer(/g' "$FILE_PATH"

echo "批量替换完成：FUN_18010cbc0 -> CopyStringToBuffer"