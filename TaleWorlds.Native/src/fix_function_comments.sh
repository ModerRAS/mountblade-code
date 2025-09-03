#!/bin/bash

# 批量替换函数名注释格式的脚本
# 将 *FUN_18005xxxx：FunctionName 格式替换为 * 原始函数名：FUN_18005xxxx

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 使用sed进行批量替换
sed -i 's/\*FUN_18005\([0-9a-fA-F]\+\)：/\* 原始函数名：FUN_18005\1/g' 01_initialization.c

echo "函数名注释格式替换完成"