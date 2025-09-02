#!/bin/bash

# 批量替换03_rendering.c中的undefined4为uint32_t
sed -i 's/undefined4/uint32_t/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "替换完成"