#!/bin/bash

# 批量替换03_rendering.c中的FUN_函数调用
# 这是为了简化实现，原始实现是手动逐个替换每个函数调用

echo "开始批量替换FUN_函数调用..."

# 替换FUN_18033aa70为ProcessRenderMaterialPropertyIndex
sed -i 's/FUN_18033aa70/ProcessRenderMaterialPropertyIndex/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 替换FUN_180339080为InitializeRenderMaterialProperty
sed -i 's/FUN_180339080/InitializeRenderMaterialProperty/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 替换FUN_180320600为AllocateRenderMaterialProperty
sed -i 's/FUN_180320600/AllocateRenderMaterialProperty/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 替换FUN_1803206e0为ConfigureRenderMaterialProperty
sed -i 's/FUN_1803206e0/ConfigureRenderMaterialProperty/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "批量替换完成"