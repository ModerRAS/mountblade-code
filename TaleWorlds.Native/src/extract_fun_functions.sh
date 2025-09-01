#!/bin/bash

# 提取所有唯一的FUN_函数
grep -o "FUN_[0-9a-f]\{8\}" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c | sort | uniq > /tmp/all_fun_functions.txt

# 统计总数
total_count=$(wc -l < /tmp/all_fun_functions.txt)
echo "Total unique FUN_ functions: $total_count"

# 显示前50个函数
echo "First 50 FUN_ functions:"
head -50 /tmp/all_fun_functions.txt

# 显示后50个函数
echo "Last 50 FUN_ functions:"
tail -50 /tmp/all_fun_functions.txt