#!/bin/bash

# 美化02_core_engine.c中的栈变量
# 该脚本将自动识别并美化栈变量名

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 备份原文件
cp "$FILE" "$FILE.backup"

# 美化栈变量 - 将fStack_变量名替换为语义化名称
sed -i 's/fStack_88/MatrixTransformX/g' "$FILE"
sed -i 's/fStack_84/MatrixTransformY/g' "$FILE"
sed -i 's/fStack_80/MatrixTransformZ/g' "$FILE"
sed -i 's/fStack_7c/MatrixTransformW/g' "$FILE"
sed -i 's/fStack_78/RenderScaleX/g' "$FILE"
sed -i 's/fStack_74/RenderScaleY/g' "$FILE"
sed -i 's/fStack_70/RenderScaleZ/g' "$FILE"
sed -i 's/fStack_6c/RenderScaleW/g' "$FILE"
sed -i 's/fStack_68/ColorMultiplierR/g' "$FILE"
sed -i 's/fStack_64/ColorMultiplierG/g' "$FILE"
sed -i 's/fStack_60/ColorMultiplierB/g' "$FILE"
sed -i 's/fStack_5c/ColorMultiplierA/g' "$FILE"
sed -i 's/fStack_4c/VertexPositionX/g' "$FILE"
sed -i 's/fStack_e0/TextureCoordinateU/g' "$FILE"
sed -i 's/fStack_dc/TextureCoordinateV/g' "$FILE"
sed -i 's/fStack_cc/NormalVectorX/g' "$FILE"
sed -i 's/fStack_8f8/LightIntensityX/g' "$FILE"

# 美化其他栈变量
sed -i 's/fStackX_20/ShaderParameterX/g' "$FILE"
sed -i 's/fStackX_24/ShaderParameterY/g' "$FILE"
sed -i 's/fStackX_10/VertexShaderInputX/g' "$FILE"
sed -i 's/fStackX_14/VertexShaderInputY/g' "$FILE"

# 美化unsigned栈变量
sed -i 's/StackProcessingUnsignedValue68/TextureIndexValue/g' "$FILE"
sed -i 's/SystemUnsignedValue64/ShaderProgramId/g' "$FILE"
sed -i 's/StackProcessingUnsignedValue60/MaterialPropertyId/g' "$FILE"

echo "栈变量美化完成"