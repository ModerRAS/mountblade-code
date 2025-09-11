#!/bin/bash

# 批量替换03_rendering.c中的undefined变量
cd "/dev/shm/mountblade-code/TaleWorlds.Native/src"

# 使用sed进行批量替换
sed -i 's/^undefined \([a-zA-Z_][a-zA-Z0-9_]*\);/void* \1;/g' 03_rendering.c

echo "批量替换完成"