#!/bin/bash

# 脚本：美化UI系统中的硬编码寄存器索引
# 用于将ui_system_register[数字]替换为语义化常量

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 04_ui_system.c 04_ui_system.c.backup

# 替换硬编码的数字索引
sed -i 's/ui_system_register\[1\]/ui_system_register[UI_REGISTER_INDEX_STATUS]/g' 04_ui_system.c
sed -i 's/ui_system_register\[4\]/ui_system_register[UI_REGISTER_INDEX_PRIMARY]/g' 04_ui_system.c
sed -i 's/ui_system_register\[5\]/ui_system_register[UI_REGISTER_INDEX_SECONDARY]/g' 04_ui_system.c
sed -i 's/ui_system_register\[6\]/ui_system_register[UI_REGISTER_INDEX_TERTIARY]/g' 04_ui_system.c
sed -i 's/ui_system_register\[7\]/ui_system_register[UI_REGISTER_INDEX_QUATERNARY]/g' 04_ui_system.c
sed -i 's/ui_system_register\[8\]/ui_system_register[UI_REGISTER_INDEX_RENDER]/g' 04_ui_system.c

echo "UI系统寄存器索引美化完成"