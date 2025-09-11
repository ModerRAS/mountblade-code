#!/bin/bash

# 修复06_utilities.c中的错误宏定义
# 将 #define SemanticName FUN_xxxxxxxx 改为 #define FUN_xxxxxxxx SemanticName

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 使用sed进行批量替换
sed -i 's/#define \([A-Za-z][A-Za-z0-9_]*\) FUN_180\([0-9a-fA-F]*\)/#define FUN_180\2 \1/g' 06_utilities.c

echo "宏定义修复完成"