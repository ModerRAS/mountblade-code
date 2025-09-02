#!/bin/bash

# 删除04_ui_system.c文件中的FUN_1806注释行
# 简化版本：只删除包含 *FUN_1806： 的行

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 创建备份
cp "$FILE" "$FILE.backup2"
echo "已创建备份文件: $FILE.backup2"

# 使用sed删除包含 *FUN_1806： 的行
sed -i '/\*FUN_1806.*：/d' "$FILE"

echo "删除完成!"

# 统计删除的行数
DELETED_COUNT=$(grep -c "\*FUN_1806.*：" "$FILE.backup2" 2>/dev/null || echo 0)
REMAINING_COUNT=$(grep -c "\*FUN_1806.*：" "$FILE" 2>/dev/null || echo 0)

echo "原始文件中包含 *FUN_1806： 的行数: $DELETED_COUNT"
echo "处理后文件中包含 *FUN_1806： 的行数: $REMAINING_COUNT"
echo "删除的行数: $DELETED_COUNT"

# 显示剩余的FUN_1806行
echo ""
echo "剩余包含FUN_1806的行数:"
grep -c "FUN_1806" "$FILE"