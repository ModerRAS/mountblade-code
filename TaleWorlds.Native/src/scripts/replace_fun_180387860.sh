#!/bin/bash

# 批量替换FUN_180387860函数调用为语义化名称
sed -i 's/FUN_180387860(/SearchAndAllocateRenderMaterialProperty(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "批量替换完成"