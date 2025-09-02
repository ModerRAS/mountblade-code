#!/bin/bash
# 临时脚本用于批量删除原始函数名注释

sed -i 's/ \* 原始函数名：FUN_180[0-9a-f]\{5\}//g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i '/^ \*$/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c