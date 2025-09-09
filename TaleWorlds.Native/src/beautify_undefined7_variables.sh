#!/bin/bash

# 美化 undefined7 变量名的脚本
# 将 undefined7 替换为 SystemMiscData

echo "开始美化 undefined7 变量名..."

# 使用 sed 替换所有 undefined7 为 SystemMiscData
sed -i 's/undefined7/SystemMiscData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

echo "undefined7 变量名美化完成"