#!/bin/bash

# UI系统完整美化脚本
# 包含函数重命名、变量重命名和添加注释

echo "开始美化UI系统文件..."

# 1. 创建备份
echo "1. 创建备份文件..."
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c.original_backup

# 2. 执行函数重命名
echo "2. 执行函数重命名..."
chmod +x /dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/beautify_ui_system_actual.sh
/dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/beautify_ui_system_actual.sh

# 3. 执行变量重命名
echo "3. 执行变量重命名..."
chmod +x /dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/beautify_ui_system_variables.sh
/dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/beautify_ui_system_variables.sh

# 4. 添加函数注释
echo "4. 添加函数注释..."
python3 /dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/add_ui_system_comments.py

echo "UI系统美化完成！"
echo "备份文件: 04_ui_system.c.original_backup"
echo "美化后的文件: 04_ui_system.c"