#!/bin/bash

# 分析03_rendering.c中未匹配的FUN_函数
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

echo "=== 03_rendering.c 中未定义的FUN_函数分析 ==="
echo "文件路径: $FILE"
echo "分析时间: $(date)"
echo ""

# 提取所有FUN_函数调用
echo "1. 提取所有FUN_函数调用..."
grep -n "FUN_180.*(" "$FILE" | grep -v "// 原始函数名：" | grep -v "#define" | head -20

echo ""
echo "2. 统计不同FUN_函数的出现次数..."
grep -o "FUN_180[0-9a-f]*" "$FILE" | grep -v "// 原始函数名：" | grep -v "#define" | sort | uniq -c | sort -nr | head -20

echo ""
echo "3. 查找已定义的FUN_函数..."
grep -n "#define FUN_180" "$FILE" | head -10

echo ""
echo "4. 查找函数定义（void FUN_180...）..."
grep -n "void FUN_180" "$FILE" | head -10

echo ""
echo "5. 查找其他类型的FUN_函数定义..."
grep -n ".* FUN_180.*(" "$FILE" | grep -v "#define" | grep -v "// 原始函数名：" | grep -v "FUN_180.*(" | head -10