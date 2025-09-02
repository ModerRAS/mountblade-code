#!/bin/bash

# 删除04_ui_system.c文件中的FUN_1806注释行
# 只删除注释行，保留函数调用和函数定义

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 获取所有需要删除的行号（包含FUN_1806的注释行）
LINES_TO_DELETE=$(grep -n "FUN_1806" "$FILE" | \
    grep -v "FUN_1806(" | \
    grep -v "^.*FUN_1806[0-9a-fA-F]*(" | \
    grep -v "^.*void FUN_1806" | \
    grep -v "^.*int FUN_1806" | \
    grep -v "^.*longlong FUN_1806" | \
    grep -v "^.*ulonglong FUN_1806" | \
    grep -v "^.*uint FUN_1806" | \
    cut -d: -f1 | sort -nr)

echo "找到以下行需要删除:"
echo "$LINES_TO_DELETE"
echo ""

# 删除这些行
for line_num in $LINES_TO_DELETE; do
    sed -i "${line_num}d" "$FILE"
    echo "已删除第 $line_num 行"
done

echo ""
echo "删除完成!"

# 统计剩余的FUN_1806行（应该是函数调用）
REMAINING=$(grep -c "FUN_1806" "$FILE" 2>/dev/null || echo 0)
echo "剩余包含FUN_1806的行数: $REMAINING"

if [ $REMAINING -gt 0 ]; then
    echo ""
    echo "剩余的FUN_1806行（应该是函数调用）:"
    grep -n "FUN_1806" "$FILE" | head -10
fi