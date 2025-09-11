#!/bin/bash
# 美化03_rendering.c中的undefined类型变量

sed -i 's/undefined \([a-zA-Z_][a-zA-Z0-9_]*\);/void* \1;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "美化完成"