#!/bin/bash

# 批量替换03_rendering.c中的函数名
sed -i 's/FUN_18062b420/AllocateRenderMemory/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18064e900/ReleaseRenderResource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180631850/ProcessRenderQueue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18064d630/ValidateRenderState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180639bf0/SerializeRenderData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180639ec0/DeserializeRenderData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180639de0/ProcessRenderProperty/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "函数名替换完成"