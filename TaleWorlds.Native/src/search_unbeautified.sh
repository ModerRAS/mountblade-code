#!/bin/bash

# 搜索所有需要美化的变量名
echo "=== 搜索需要美化的变量名 ==="

# 搜索DAT_变量
echo "DAT_变量:"
find /dev/shm/mountblade-code/TaleWorlds.Native/src -name "*.c" -exec grep -l "DAT_" {} \;

# 搜索local_变量
echo "local_变量:"
find /dev/shm/mountblade-code/TaleWorlds.Native/src -name "*.c" -exec grep -l "local_" {} \;

# 搜索s_变量
echo "s_变量:"
find /dev/shm/mountblade-code/TaleWorlds.Native/src -name "*.c" -exec grep -l "s_" {} \;

# 搜索UNK_变量
echo "UNK_变量:"
find /dev/shm/mountblade-code/TaleWorlds.Native/src -name "*.c" -exec grep -l "UNK_" {} \;

# 搜索FUN_函数
echo "FUN_函数:"
find /dev/shm/mountblade-code/TaleWorlds.Native/src -name "*.c" -exec grep -l "FUN_" {} \;

# 搜索LABEL_标签
echo "LABEL_标签:"
find /dev/shm/mountblade-code/TaleWorlds.Native/src -name "*.c" -exec grep -l "LABEL_" {} \;