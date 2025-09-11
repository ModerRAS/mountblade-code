#!/bin/bash

# 查找未被美化的函数
echo "搜索未被美化的函数..."

# 在03_rendering.c中查找未被宏定义的FUN_函数调用
grep -n "FUN_180[0-9a-f]*(" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c | \
    grep -v "#define" | \
    grep -v "// 原始函数名" | \
    head -20

echo ""
echo "搜索未被美化的DAT_变量..."
grep -n "DAT_180[0-9a-f]*" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c | \
    grep -v "#define" | \
    grep -v "// 原始变量名" | \
    head -20

echo ""
echo "搜索未被美化的UNK_变量..."
grep -n "UNK_180[0-9a-f]*" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c | \
    grep -v "#define" | \
    grep -v "// 原始变量名" | \
    head -20