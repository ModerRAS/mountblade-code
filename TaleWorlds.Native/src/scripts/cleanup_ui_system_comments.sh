#!/bin/bash

# 清理04_ui_system.c文件中的FUN_函数名注释
# 这个脚本会删除注释中保留的原始FUN_函数名，保持文件整洁

echo "正在清理04_ui_system.c文件中的FUN_函数名注释..."

# 创建临时文件
temp_file="/tmp/04_ui_system_clean.c"

# 使用sed删除包含"*FUN_1806"的行
sed '/\*FUN_1806/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c > "$temp_file"

# 备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c.backup

# 替换原文件
mv "$temp_file" /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "清理完成。已备份原文件为04_ui_system.c.backup"