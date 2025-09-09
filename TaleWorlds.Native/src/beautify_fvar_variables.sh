#!/bin/bash

# 美化03_rendering.c文件中的fVar变量
# 使用更语义化的变量名替换fVar[0-9]+模式

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup"

# 定义fVar变量的语义化替换
# 基于上下文和常见渲染变量用途

# 基础计算值变量
sed -i 's/fVar1/RenderCalculatedValue1/g' "$FILE_PATH"
sed -i 's/fVar2/RenderCalculatedValue2/g' "$FILE_PATH"
sed -i 's/fVar3/RenderCalculatedValue3/g' "$FILE_PATH"
sed -i 's/fVar4/RenderCalculatedValue4/g' "$FILE_PATH"
sed -i 's/fVar5/RenderCalculatedValue5/g' "$FILE_PATH"

# 位置和变换相关变量
sed -i 's/fVar6/PositionOffsetZ/g' "$FILE_PATH"
sed -i 's/fVar7/PositionOffsetX/g' "$FILE_PATH"
sed -i 's/fVar8/PositionOffsetY/g' "$FILE_PATH"
sed -i 's/fVar9/DistanceThreshold/g' "$FILE_PATH"

# 材质属性相关变量
sed -i 's/fVar10/MaterialPropertyValue10/g' "$FILE_PATH"
sed -i 's/fVar11/MaterialPropertyValue11/g' "$FILE_PATH"
sed -i 's/fVar12/MaterialPropertyValue12/g' "$FILE_PATH"
sed -i 's/fVar13/MaterialPropertyValue13/g' "$FILE_PATH"

# 曲线计算相关变量
sed -i 's/fVar14/CurveCalculatedValue14/g' "$FILE_PATH"
sed -i 's/fVar15/CurveCalculatedValue15/g' "$FILE_PATH"
sed -i 's/fVar16/CurveCalculatedValue16/g' "$FILE_PATH"
sed -i 's/fVar17/CurveCalculatedValue17/g' "$FILE_PATH"
sed -i 's/fVar18/CurveCalculatedValue18/g' "$FILE_PATH"
sed -i 's/fVar19/CurveCalculatedValue19/g' "$FILE_PATH"
sed -i 's/fVar20/CurveCalculatedValue20/g' "$FILE_PATH"
sed -i 's/fVar21/CurveCalculatedValue21/g' "$FILE_PATH"

# 通用计算变量
sed -i 's/fVar22/CalculatedValue22/g' "$FILE_PATH"
sed -i 's/fVar23/CalculatedValue23/g' "$FILE_PATH"

# 处理更高编号的fVar变量
for i in {24..50}; do
    sed -i "s/fVar$i/RenderFloatValue$i/g" "$FILE_PATH"
done

echo "fVar变量美化完成"