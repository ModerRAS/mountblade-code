#!/bin/bash

# 脚本：清理UI系统文件中的重复声明
# 用途：删除04_ui_system.c文件中的重复变量声明和函数指针声明

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
TEMP_FILE="/tmp/ui_system_cleaned.c"

echo "开始清理UI系统文件中的重复声明..."

# 使用awk删除连续重复的行（保留第一个出现）
awk '
{
    # 记录当前行
    current_line = $0
    
    # 如果当前行与上一行相同，则跳过
    if (current_line == last_line) {
        next
    }
    
    # 如果是空行且上一行也是空行，则跳过
    if (current_line ~ /^[[:space:]]*$/ && last_line ~ /^[[:space:]]*$/) {
        next
    }
    
    # 记录上一行
    last_line = current_line
    
    # 输出当前行
    print
}' "$INPUT_FILE" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "清理完成！"

# 统计文件行数
echo "文件行数：$(wc -l < "$INPUT_FILE")"