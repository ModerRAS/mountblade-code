#!/bin/bash

# 美化99_unmatched_functions.c文件中的变量名
# 这个脚本将fVarxx变量名替换为语义化的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 99_unmatched_functions.c 99_unmatched_functions.c.backup

# XML解析和3D变换相关的变量名替换
sed -i 's/fVar22/XmlAttributeValue/g' 99_unmatched_functions.c
sed -i 's/fVar23/XmlBaseValue/g' 99_unmatched_functions.c
sed -i 's/fVar24/TransformX/g' 99_unmatched_functions.c
sed -i 's/fVar25/TransformY/g' 99_unmatched_functions.c
sed -i 's/fVar26/TransformZ/g' 99_unmatched_functions.c
sed -i 's/fVar27/RotationAngle/g' 99_unmatched_functions.c
sed -i 's/fVar28/ScaleFactor/g' 99_unmatched_functions.c
sed -i 's/fVar29/MatrixElement/g' 99_unmatched_functions.c
sed -i 's/fVar31/AnimationTime/g' 99_unmatched_functions.c
sed -i 's/fVar32/FrameDelta/g' 99_unmatched_functions.c
sed -i 's/fVar33/VertexPositionX/g' 99_unmatched_functions.c
sed -i 's/fVar34/VertexPositionY/g' 99_unmatched_functions.c
sed -i 's/fVar35/VertexPositionZ/g' 99_unmatched_functions.c
sed -i 's/fVar36/NormalVectorX/g' 99_unmatched_functions.c
sed -i 's/fVar37/NormalVectorY/g' 99_unmatched_functions.c
sed -i 's/fVar38/NormalVectorZ/g' 99_unmatched_functions.c
sed -i 's/fVar39/TangentVectorX/g' 99_unmatched_functions.c
sed -i 's/fVar40/TangentVectorY/g' 99_unmatched_functions.c
sed -i 's/fVar41/TangentVectorZ/g' 99_unmatched_functions.c
sed -i 's/fVar42/BitangentVectorX/g' 99_unmatched_functions.c
sed -i 's/fVar44/LightingIntensity/g' 99_unmatched_functions.c
sed -i 's/fVar45/ShadowFactor/g' 99_unmatched_functions.c
sed -i 's/fVar46/FogDensity/g' 99_unmatched_functions.c

echo "变量名替换完成"