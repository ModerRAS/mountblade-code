#!/bin/bash

# 统计所有仍然以 FUN_ 开头的函数定义
echo "=== 统计所有仍然以 FUN_ 开头的函数定义 ==="
echo ""

# 总体统计
TOTAL_FUN_FUNCTIONS=$(grep -r "^[a-zA-Z_][a-zA-Z0-9_]* FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/ --include="*.c" | wc -l)
echo "总计: $TOTAL_FUN_FUNCTIONS 个 FUN_ 函数定义"
echo ""

# 按文件统计
echo "=== 按文件统计 ==="
grep -r "^[a-zA-Z_][a-zA-Z0-9_]* FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/ --include="*.c" | cut -d: -f1 | sort | uniq -c | sort -nr

echo ""
echo "=== 各文件中的 FUN_ 函数示例 ==="
for file in $(grep -r "^[a-zA-Z_][a-zA-Z0-9_]* FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/ --include="*.c" | cut -d: -f1 | sort | uniq); do
    echo ""
    echo "文件: $file"
    echo "前5个函数定义:"
    grep -n "^[a-zA-Z_][a-zA-Z0-9_]* FUN_" "$file" | head -5
done