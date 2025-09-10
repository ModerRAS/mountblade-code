#!/bin/bash

# 03_rendering.c文件FUN_函数美化脚本
# 批量替换高频出现的FUN_函数调用为语义化名称

# 常见渲染材质处理函数
sed -i 's/FUN_1803490e0/ProcessRenderMaterialProperty/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1800b4e00/CalculateRenderPropertyValue/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18014acf0/InitializeRenderMaterialContext/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180347740/ProcessRenderMaterialData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1802ed050/ValidateRenderMaterialProperties/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1802ecfb0/CheckRenderMaterialConsistency/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1802e8910/ResetRenderMaterialState/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180351190/CleanupSingleRenderMaterial/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180350540/InitializeRenderMemoryManager/g' TaleWorlds.Native/src/03_rendering.c

# 内存管理相关函数
sed -i 's/FUN_18038d0a0/ValidateRenderMemoryAddress/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18038d6a0/CalculateRenderMemoryOffset/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180395830/GetRenderMemoryStatus/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1802fc790/FindRenderMemoryBlock/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804044a0/GetRenderMaterialFirstChar/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180406800/GetRenderMaterialSecondChar/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18088dec0/ValidateRenderMaterialHandle/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18040db80/GetRenderMaterialCurveData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18041f7a0/ValidateRenderMaterialAnimation/g' TaleWorlds.Native/src/03_rendering.c

# 渲染管线相关函数
sed -i 's/FUN_1805401f0/UpdateRenderPipelineState/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180649ed0/InitializeRenderPipeline/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18064eb10/GetRenderPipelineProperties/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18005d190/ProcessRenderMaterialTerminator/g' TaleWorlds.Native/src/03_rendering.c

echo "03_rendering.c文件FUN_函数美化完成"