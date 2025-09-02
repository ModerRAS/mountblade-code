#!/bin/bash
# 简单的函数名替换脚本

# 替换FUN_1802b6e50为UpdateObjectStateProperty
sed -i 's/FUN_1802b6e50/UpdateObjectStateProperty/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 替换其他FUN_函数
sed -i 's/FUN_180627be0/CopyObjectStateData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18023fa30/ProcessObjectStateData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18062b1e0/CreateRenderResource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18023fe10/GetResourceManager/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1802416d0/InitializeObjectState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18025a7b0/ProcessRenderNode/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180271cf0/UpdateRenderContext/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1808fc050/CalculateRenderHash/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180639bf0/WriteContextData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180272d60/InitializeRenderContext/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180639ec0/ReadContextData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18025a940/FinalizeRenderNode/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180049910/ProcessRenderQueue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180272e40/SetContextOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1808fc838/RegisterRenderCallback/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180241f10/CleanupRenderResources/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180049cd0/RenderQueueProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180044a30/RenderQueueValidator/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "函数名替换完成"