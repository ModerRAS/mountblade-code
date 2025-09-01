#!/bin/bash

# 分析01_initialization.c文件中的FUN_函数
# 为每个函数创建语义化名称

echo "分析01_initialization.c中的FUN_函数..."

# 创建脚本目录
mkdir -p /dev/shm/mountblade-code/TaleWorlds.Native/src/scripts

# 提取所有FUN_函数
grep -n "FUN_180[0-9a-f]\{4,5\}" /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c | head -20 > /dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/fun_functions_analysis.txt

# 显示前20个函数用于分析
echo "前20个FUN_函数:"
head -20 /dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/fun_functions_analysis.txt