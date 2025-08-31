#!/bin/bash

# 脚本：清理04_ui_system.c文件中的重复变量声明
# 这是简化实现，主要删除重复的变量声明以提高代码可读性
# 原本实现：完全重构整个UI系统的变量命名和声明体系，建立统一的语义化命名规范
# 简化实现：仅删除重复的变量声明，保持代码结构不变

FILE="TaleWorlds.Native/src/04_ui_system.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 使用awk处理文件，删除重复的连续行
awk '
# 记录上一行的内容
{
    if ($0 != last_line || $0 !~ /^\s*void\* ui_/) {
        print $0
    }
    last_line = $0
}
' "$FILE" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$FILE"

echo "已清理重复变量声明：$FILE"