#!/bin/bash

# 美化脚本：替换_g_system_initialized变量名为语义化名称
# 2025年8月30日最终批次

FILE="TaleWorlds.Native/src/01_initialization.c"

# 首先备份原文件
cp "$FILE" "$FILE.backup_$(date +%Y%m%d_%H%M%S)"

# 使用sed替换变量名
# 注意：需要处理各种上下文中的使用情况
sed -i 's/_g_system_initialized/system_global_initialized_flag/g' "$FILE"

echo "美化完成：_g_system_initialized变量名已替换为system_global_initialized_flag"