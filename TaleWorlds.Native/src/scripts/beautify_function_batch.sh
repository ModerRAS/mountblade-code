#!/bin/bash

# 批量替换变量名脚本
# 用于美化ProcessBoundingBoxTransformAndMatrixCalculation函数

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 备份原始文件
cp "$FILE" "$FILE.backup_$(date +%Y%m%d_%H%M%S)"

# 替换变量名
sed -i 's/pfVar21\[/TransformMatrix[/g' "$FILE"
sed -i 's/SystemBufferRegister/OutputMatrixBuffer/g' "$FILE"
sed -i 's/fVar2/MatrixResultY/g' "$FILE"
sed -i 's/fVar3/MatrixResultZ/g' "$FILE"
sed -i 's/fVar5/BoundMinX/g' "$FILE"
sed -i 's/fVar6/BoundMinY/g' "$FILE"
sed -i 's/fVar7/BoundMinZ/g' "$FILE"
sed -i 's/fVar8/BoundMaxX/g' "$FILE"
sed -i 's/fVar9/BoundMaxY/g' "$FILE"
sed -i 's/MaxBoundX0/BoundMaxZ/g' "$FILE"
sed -i 's/ScaleFactor/TransformScaleX/g' "$FILE"
sed -i 's/MaxBoundZ/TransformScaleY/g' "$FILE"
sed -i 's/MaxBoundX3/TransformScaleZ/g' "$FILE"
sed -i 's/MinBoundY/TransformOffsetX/g' "$FILE"
sed -i 's/MaxBoundX5/TransformOffsetY/g' "$FILE"
sed -i 's/MaxBoundX6/TransformOffsetZ/g' "$FILE"
sed -i 's/MaxBoundX7/TransformOffsetX/g' "$FILE"
sed -i 's/MaxBoundX8/TransformOffsetY/g' "$FILE"
sed -i 's/MaxBoundX9/TransformOffsetZ/g' "$FILE"
sed -i 's/fVar20/FinalOffsetZ/g' "$FILE"
sed -i 's/in_stack_00000090/StackParameter/g' "$FILE"

echo "变量名替换完成"