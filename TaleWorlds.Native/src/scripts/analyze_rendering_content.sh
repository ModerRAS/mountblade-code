#!/bin/bash

# 分析03_rendering.c文件中需要美化的函数和变量
echo "=== TaleWorlds.Native/src/03_rendering.c 美化分析 ==="
echo

# 统计各种类型的变量和函数
echo "📊 统计需要美化的内容："
echo

# FUN_ 函数统计（只计算实际调用的，不包括宏定义）
FUN_COUNT=$(grep -c "FUN_180[0-9a-f]" TaleWorlds.Native/src/03_rendering.c | grep -v "#define" | wc -l)
echo "FUN_ 函数调用总数: $FUN_COUNT"

# UNK_ 变量统计
UNK_COUNT=$(grep -c "UNK_180[0-9a-f]" TaleWorlds.Native/src/03_rendering.c)
echo "UNK_ 变量总数: $UNK_COUNT"

# DAT_ 变量统计
DAT_COUNT=$(grep -c "DAT_180[0-9a-f]" TaleWorlds.Native/src/03_rendering.c)
echo "DAT_ 变量总数: $DAT_COUNT"

echo
echo "🔍 高频出现的FUN_函数："
echo

# 查找高频FUN_函数
grep -o "FUN_180[0-9a-f]\{5,6\}" TaleWorlds.Native/src/03_rendering.c | sort | uniq -c | sort -nr | head -20

echo
echo "🔍 高频出现的UNK_变量："
echo

# 查找高频UNK_变量
grep -o "UNK_180[0-9a-f]\{5,6\}" TaleWorlds.Native/src/03_rendering.c | sort | uniq -c | sort -nr | head -20

echo
echo "🔍 高频出现的DAT_变量："
echo

# 查找高频DAT_变量
grep -o "DAT_180[0-9a-f]\{5,6\}" TaleWorlds.Native/src/03_rendering.c | sort | uniq -c | sort -nr | head -20