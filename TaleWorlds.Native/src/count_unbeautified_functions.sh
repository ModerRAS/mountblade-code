#!/bin/bash

# 统计03_rendering.c中未美化的FUN_函数
echo "=== 统计03_rendering.c中未美化的FUN_函数 ==="

# 统计所有FUN_函数定义
total_functions=$(grep -c "^#define FUN_180" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c)
echo "总FUN_函数数量: $total_functions"

# 统计已经美化的函数（有语义化名称的）
beautified_functions=$(grep -c "^#define FUN_180[0-9a-fA-F]* [A-Z]" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c)
echo "已美化函数数量: $beautified_functions"

# 统计未美化的函数（仍然是FUN_开头的）
unbeautified_functions=$(grep -c "^#define FUN_180[0-9a-fA-F]* FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c)
echo "未美化函数数量: $unbeautified_functions"

echo "=========================================="

# 显示前20个未美化的函数
echo "前20个未美化的函数："
grep "^#define FUN_180[0-9a-fA-F]* FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c | head -20

echo "=========================================="

# 显示所有未美化的函数地址
echo "所有未美化的函数地址："
grep "^#define FUN_180[0-9a-fA-F]* FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c | sed 's/.*FUN_180\([0-9a-fA-F]*\).*/\1/' | sort