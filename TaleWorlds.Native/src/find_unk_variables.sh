#!/bin/bash

# 搜索03_rendering.c文件中实际使用的未美化变量名
echo "=== 搜索03_rendering.c中的未美化变量名 ==="
echo

# 搜索所有未美化变量名的使用实例
echo "1. DAT_ 变量使用实例:"
grep -n "DAT_[0-9a-fA-F]" 03_rendering.c | grep -v "#define" | grep -v "//" | grep -v "原始变量名" | head -20

echo
echo "2. UNK_ 变量使用实例:"
grep -n "UNK_[0-9a-fA-F]" 03_rendering.c | grep -v "#define" | grep -v "//" | grep -v "原始变量名" | head -20

echo
echo "3. FUN_ 函数调用实例:"
grep -n "FUN_[0-9a-fA-F]" 03_rendering.c | grep -v "#define" | grep -v "//" | grep -v "原始函数名" | head -20

echo
echo "4. local_ 变量使用实例:"
grep -n "local_[0-9]" 03_rendering.c | grep -v "#define" | head -10

echo
echo "5. s_ 变量使用实例:"
grep -n "s_[0-9a-fA-F]" 03_rendering.c | grep -v "#define" | head -10

echo
echo "6. LABEL_ 标签使用实例:"
grep -n "LABEL_[0-9a-fA-F]" 03_rendering.c | grep -v "#define" | head -10