#!/bin/bash

# 渲染系统函数美化脚本
# 用于批量重命名03_rendering.c中的FUN_函数

# 材质处理函数
sed -i 's/FUN_180458ef0/ValidateRenderMaterialObjectStatePrimary/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180459360/ProcessRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804595c0/InitializeRenderMaterialCurveData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18045bdb0/ValidateRenderMaterialPropertyAccess/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18045c380/ProcessRenderMaterialExtraParameters/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18045c540/SetupRenderMaterialConfiguration/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18045ca80/ValidateRenderMaterialConfiguration/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18045dcc0/ProcessRenderMaterialValidation/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18045e710/InitializeRenderMaterialProperties/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18045ebe0/ValidateRenderMaterialProperties/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18045f0a0/ProcessRenderMaterialStateChanges/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180462890/HandleRenderMaterialMemoryOperations/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180462c10/ValidateRenderMaterialMemoryAccess/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180464ff0/ProcessRenderMaterialMemoryData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804695d0/HandleRenderMaterialComplexOperations/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_180469ec0/ValidateRenderMaterialComplexData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18046a090/ProcessRenderMaterialComplexOperations/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18046a8c0/HandleRenderMaterialTransformOperations/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804707c0/ValidateRenderMaterialTransformData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_1804724f0/ProcessRenderMaterialTransformOperations/g' TaleWorlds.Native/src/03_rendering.c

echo "渲染系统函数美化完成"