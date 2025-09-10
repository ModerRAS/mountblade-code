#!/bin/bash

# 美化03_rendering.c中的FUN_函数调用
# 将FUN_函数调用替换为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换FUN_180333a00为ManageRenderMaterialReferenceCount
sed -i 's/FUN_180333a00(/ManageRenderMaterialReferenceCount(/g' 03_rendering.c

# 替换FUN_18032b1c0为ProcessMaterialTransformMatrix
sed -i 's/FUN_18032b1c0(/ProcessMaterialTransformMatrix(/g' 03_rendering.c

# 替换FUN_18033bf30为CleanupMaterialRenderBuffer
sed -i 's/FUN_18033bf30(/CleanupMaterialRenderBuffer(/g' 03_rendering.c

# 替换FUN_18032afa0为ProcessMaterialPropertyPointerArray
sed -i 's/FUN_18032afa0(/ProcessMaterialPropertyPointerArray(/g' 03_rendering.c

# 替换FUN_18033ad80为ProcessMaterialRenderBuffer
sed -i 's/FUN_18033ad80(/ProcessMaterialRenderBuffer(/g' 03_rendering.c

# 替换FUN_18066ba00为ProcessMaterialPropertyNode
sed -i 's/FUN_18066ba00(/ProcessMaterialPropertyNode(/g' 03_rendering.c

# 替换FUN_180334430为GetMaterialCurrentDataStreamOffset
sed -i 's/FUN_180334430(/GetMaterialCurrentDataStreamOffset(/g' 03_rendering.c

# 替换FUN_18033ca70为ProcessRenderMaterialCurveKey
sed -i 's/FUN_18033ca70(/ProcessRenderMaterialCurveKey(/g' 03_rendering.c

# 替换FUN_180179aa0为AllocateRenderMaterialPropertyData
sed -i 's/FUN_180179aa0(/AllocateRenderMaterialPropertyData(/g' 03_rendering.c

# 替换FUN_18020d730为ProcessRenderMaterialScaleData
sed -i 's/FUN_18020d730(/ProcessRenderMaterialScaleData(/g' 03_rendering.c

# 替换FUN_18033a3f0为ProcessRenderMaterialPropertyDataEx
sed -i 's/FUN_18033a3f0(/ProcessRenderMaterialPropertyDataEx(/g' 03_rendering.c

# 替换FUN_180057340为ValidateRenderMaterialProperty
sed -i 's/FUN_180057340(/ValidateRenderMaterialProperty(/g' 03_rendering.c

echo "FUN_函数调用替换完成"