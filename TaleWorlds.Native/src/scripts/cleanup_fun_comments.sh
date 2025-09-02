#!/bin/bash

# 批量替换01_initialization.c文件中的FUN_函数名注释
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建临时文件来处理替换
sed 's/\*FUN_180\([0-9a-f]\{4\}\)：/\* 原始函数名：FUN_180\1 /g' 01_initialization.c > temp_initialization.c

# 替换原文件
mv temp_initialization.c 01_initialization.c

echo "批量替换完成"