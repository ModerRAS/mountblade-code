#!/bin/bash

# 美化渲染系统函数脚本
# 用于替换03_rendering.c文件中的函数名

echo "开始美化渲染系统函数..."

# 替换函数名为语义化名称
sed -i 's/FUN_18030a08b/CopyRenderMaterialPropertyData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18030a0da/ProcessRenderMaterialCurveData/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18030a460/ValidateRenderMaterialObject/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18030a720/UpdateRenderMaterialShader/g' TaleWorlds.Native/src/03_rendering.c
sed -i 's/FUN_18030aab0/ProcessRenderMaterialAnimation/g' TaleWorlds.Native/src/03_rendering.c

echo "函数美化完成！"