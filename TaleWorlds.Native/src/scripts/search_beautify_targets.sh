#!/bin/bash

# 搜索需要美化的函数和变量
echo "=== 搜索 FUN_ 函数 ==="
grep -n "FUN_" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c | head -20

echo -e "\n=== 搜索 uVar 变量 ==="
grep -n "uVar[0-9]" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c | head -20

echo -e "\n=== 搜索 lVar 变量 ==="
grep -n "lVar[0-9]" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c | head -20

echo -e "\n=== 搜索 puVar 变量 ==="
grep -n "puVar[0-9]" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c | head -20

echo -e "\n=== 搜索 param_ 变量 ==="
grep -n "param_[0-9]" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c | head -20