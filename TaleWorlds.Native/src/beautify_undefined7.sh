#!/bin/bash

# 美化 undefined7 变量名的脚本
# 将 undefined7 替换为 SystemMiscData

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup"

# 替换 undefined7 为 SystemMiscData
sed -i 's/undefined7/SystemMiscData/g' "$FILE_PATH"

echo "undefined7 变量名美化完成"