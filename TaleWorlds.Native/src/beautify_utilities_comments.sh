#!/bin/bash

# 美化06_utilities.c文件中的注释
# 清理原始函数名注释，保留语义化描述

echo "正在美化06_utilities.c文件..."

# 备份原始文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup

# 使用sed清理原始函数名注释，保留功能描述
sed -i 's|// 原始函数名：FUN_180[0-9a-fA-F]* - \([^/]*\)|// \1|g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's|// 原始函数名：FUN_180[0-9a-fA-F]*$||g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's|// 原始函数名：FUN_180[0-9a-fA-F]* - ||g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 清理空行
sed -i '/^$/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "注释美化完成"