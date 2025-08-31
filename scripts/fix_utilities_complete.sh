#!/bin/bash

# 修复06_utilities.c文件中的所有问题
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 删除重复的代码片段和 misplaced 函数名
# 删除1038-1052行的重复代码
sed -i '1038,1052d' "$FILE"

# 删除多余的空行
sed -i '/^$/N;/^\n$/D' "$FILE"

echo "修复完成！"