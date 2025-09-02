#!/bin/bash

# 清理05_networking.c文件中的FUN_180函数名注释

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 使用sed删除所有包含FUN_180的行
sed -i '/^\*FUN_180/d' 05_networking.c

echo "已清理05_networking.c文件中的FUN_180函数名注释"