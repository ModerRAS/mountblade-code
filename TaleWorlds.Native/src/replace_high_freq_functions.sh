#!/bin/bash

# 批量替换03_rendering.c中的FUN_函数调用
echo "开始批量替换FUN_函数调用..."

# 定义一些高频函数的替换
sed -i 's/FUN_180629850(/ManageRenderMaterialPropertyState(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 替换其他高频函数
sed -i 's/FUN_18041ee20(/ProcessRenderMaterialDataBatch(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18053a410(/ValidateRenderMaterialData(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180067070(/InitializeRenderMaterialState(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18055f260(/ProcessRenderMaterialTexture(/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "批量替换完成"