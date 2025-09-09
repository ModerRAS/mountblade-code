#!/bin/bash

# 批量替换03_rendering.c中的FUN_函数调用
# 将已经定义的FUN_函数替换为对应的宏名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换已经定义的函数调用
sed -i 's/FUN_1802fc960(/ProcessRenderMaterialPropertyUpdate(/g' 03_rendering.c
sed -i 's/FUN_1802fdb10(/CleanupRenderMaterialPropertyResources(/g' 03_rendering.c
sed -i 's/FUN_18032bba0(/ProcessRenderMaterialPropertyCalculation(/g' 03_rendering.c
sed -i 's/FUN_1803248c0(/CalculateRenderMaterialRequiredProperties(/g' 03_rendering.c
sed -i 's/FUN_180320fd0(/ProcessRenderMaterialShaderState(/g' 03_rendering.c
sed -i 's/FUN_1803276a0(/ProcessRenderMaterialPropertyData(/g' 03_rendering.c

echo "批量替换完成"