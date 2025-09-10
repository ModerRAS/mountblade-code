#!/bin/bash
# 查找未定义的FUN_函数

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 提取所有FUN_函数调用
grep -o "FUN_180[0-9a-f]\{5,6\}" 99_unmatched_functions.c | sort | uniq > /tmp/fun_calls.txt

# 提取所有FUN_函数定义
grep -o "#define FUN_180[0-9a-f]\{5,6\}" 99_unmatched_functions.c | sed 's/#define //' | sort | uniq > /tmp/fun_defs.txt

# 找出未定义的函数调用
comm -23 /tmp/fun_calls.txt /tmp/fun_defs.txt | head -20