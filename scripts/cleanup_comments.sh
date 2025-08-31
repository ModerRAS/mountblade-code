#!/bin/bash

# 脚本：删除00_data_definitions.h文件中的大量注释
# 目标：删除以"// - "开头的行，保留必要的常量定义

FILE="TaleWorlds.Native/src/00_data_definitions.h"

# 备份原文件
cp "$FILE" "$FILE.bak"

# 删除以"// - "开头的行
sed -i '/^\/\/ - /d' "$FILE"

# 删除空行（只保留一个空行）
sed -i '/^$/N;/^\n$/D' "$FILE"

echo "注释清理完成"