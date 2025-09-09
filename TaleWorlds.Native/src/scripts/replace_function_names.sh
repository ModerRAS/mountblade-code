#!/bin/bash

# 替换函数名为语义化名称
sed -i 's/func_0x00018028b140/ProcessRenderMaterialPropertyDataValue/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
sed -i 's/func_0x00018028afe0/GetRenderMaterialPropertyFlag/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
sed -i 's/func_0x00018024c420/GetRenderMaterialPropertyStatus/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
sed -i 's/func_0x0001800e2bf0/GetRenderMaterialGlobalData/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
sed -i 's/func_0x00018066bd70/ConvertRenderMaterialObjectPointer/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
sed -i 's/func_0x00018028c210/GetRenderMaterialIndex/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
sed -i 's/func_0x000180120ce0/ProcessRenderMaterialIteration/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
sed -i 's/func_0x00018028d1e0/ResetRenderMaterialSystem/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
sed -i 's/func_0x00018028d360/CleanupRenderMaterialData/g' "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

echo "函数名替换完成"