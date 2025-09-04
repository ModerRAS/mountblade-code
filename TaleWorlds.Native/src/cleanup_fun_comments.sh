#!/bin/bash

# 清理FUN_函数原始注释的脚本
# 该脚本会删除所有包含"@note 原始函数名为FUN_"的行

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 使用sed命令删除包含特定注释的行
sed -i '/@note 原始函数名为FUN_/d' "$FILE_PATH"

echo "已清理所有FUN_函数的原始注释"