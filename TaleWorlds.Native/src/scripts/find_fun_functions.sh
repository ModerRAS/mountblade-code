#!/bin/bash

# 查找所有FUN_函数的脚本
# 这个脚本用于帮助识别需要美化的函数名

echo "查找所有FUN_函数..."

# 查找所有FUN_函数调用
grep -n "FUN_18005[0-9a-f]" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c | head -20

# 提取唯一的函数名
echo ""
echo "唯一的函数名："
grep -o "FUN_18005[0-9a-f]*" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c | sort | uniq