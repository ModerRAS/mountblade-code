#!/bin/bash

# 最终删除脚本：删除所有剩余的FUN_1806注释行

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

echo "开始删除剩余的FUN_1806注释行..."

# 使用sed删除所有包含 *FUN_1806： 的行
sed -i '/\*FUN_1806.*：/d' "$FILE"

echo "删除完成!"

# 统计结果
REMAINING=$(grep -c "FUN_1806" "$FILE" 2>/dev/null || echo 0)
echo "剩余包含FUN_1806的行数: $REMAINING"

if [ $REMAINING -gt 0 ]; then
    echo ""
    echo "剩余的FUN_1806行（应该是函数调用）:"
    grep -n "FUN_1806" "$FILE" | head -5
fi