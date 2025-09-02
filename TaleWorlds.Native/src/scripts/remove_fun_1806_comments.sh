#!/bin/bash

# 删除包含FUN_1806的注释行，保留函数调用和函数定义
# 脚本路径：/dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/remove_fun_1806_comments.sh

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
BACKUP_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c.backup"

# 创建备份
cp "$FILE_PATH" "$BACKUP_PATH"
echo "已创建备份文件: $BACKUP_PATH"

# 使用sed删除包含FUN_1806的注释行，但排除函数调用和函数定义
# 规则：
# 1. 删除以 *FUN_1806 开头的行（注释行）
# 2. 删除包含 *FUN_1806 的行（注释行）
# 3. 删除以 // 开头且包含 FUN_1806 的行（注释行）
# 4. 不删除包含 FUN_1806( 的行（函数调用）
# 5. 不删除以 void FUN_1806、int FUN_1806 等开头的行（函数定义）

sed -i '/^[[:space:]]*\*FUN_1806/d' "$FILE_PATH"
sed -i '/^[[:space:]]*\/\/.*FUN_1806.*$/d' "$FILE_PATH"

# 统计删除的行数
DELETED_LINES=$(grep -c "FUN_1806" "$BACKUP_PATH" 2>/dev/null || echo 0)
REMAINING_LINES=$(grep -c "FUN_1806" "$FILE_PATH" 2>/dev/null || echo 0)
REMOVED_COUNT=$((DELETED_LINES - REMAINING_LINES))

echo "删除完成!"
echo "原始文件中包含 FUN_1806 的行数: $DELETED_LINES"
echo "处理后文件中包含 FUN_1806 的行数: $REMAINING_LINES"
echo "删除的行数: $REMOVED_COUNT"

# 显示剩余的FUN_1806行（应该是函数调用）
echo ""
echo "剩余的FUN_1806行（应该是函数调用）:"
grep -n "FUN_1806" "$FILE_PATH" | head -5