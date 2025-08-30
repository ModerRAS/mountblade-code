#!/bin/bash

# 美化99_unmatched_functions.c文件中的变量名
# 将dVar3替换为system_sort_current_value
# 将dVar12替换为system_sort_comparison_value

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 备份原始文件
cp "$FILE" "$FILE.backup"

# 替换变量声明
sed -i 's/double dVar3;/double system_sort_current_value;/g' "$FILE"
sed -i 's/double dVar12;/double system_sort_comparison_value;/g' "$FILE"

# 替换变量使用
sed -i 's/\bdVar3\b/system_sort_current_value/g' "$FILE"
sed -i 's/\bdVar12\b/system_sort_comparison_value/g' "$FILE"

echo "变量名替换完成"