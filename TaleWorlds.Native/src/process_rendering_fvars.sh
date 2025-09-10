#!/bin/bash

# 处理03_rendering.c中的fVar变量
echo "正在处理03_rendering.c中的fVar变量..."

FILE_PATH="03_rendering.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.fvar_backup.$(date +%Y%m%d_%H%M%S)"

# 使用批量处理方式替换fVar变量
# 渲染计算值变量
sed -i 's/fVar1/RenderCalculatedValue1/g' "$FILE_PATH"
sed -i 's/fVar2/RenderCalculatedValue2/g' "$FILE_PATH"
sed -i 's/fVar3/RenderCalculatedValue3/g' "$FILE_PATH"
sed -i 's/fVar4/RenderCalculatedValue4/g' "$FILE_PATH"
sed -i 's/fVar5/RenderCalculatedValue5/g' "$FILE_PATH"

# 位置和偏移变量
sed -i 's/fVar6/PositionOffsetZ/g' "$FILE_PATH"
sed -i 's/fVar7/PositionOffsetX/g' "$FILE_PATH"
sed -i 's/fVar8/PositionOffsetY/g' "$FILE_PATH"
sed -i 's/fVar9/DistanceThreshold/g' "$FILE_PATH"

# 材质属性变量
sed -i 's/fVar10/MaterialPropertyValue10/g' "$FILE_PATH"
sed -i 's/fVar11/MaterialPropertyValue11/g' "$FILE_PATH"
sed -i 's/fVar12/MaterialPropertyValue12/g' "$FILE_PATH"
sed -i 's/fVar13/MaterialPropertyValue13/g' "$FILE_PATH"

# 曲线计算变量
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

# 矩阵相关变量
sed -i 's/fVar24/MatrixRow1XComponent/g' "$FILE_PATH"
sed -i 's/fVar25/MatrixRow1YComponent/g' "$FILE_PATH"
sed -i 's/fVar26/MatrixRow1ZComponent/g' "$FILE_PATH"
sed -i 's/fVar27/MatrixRow1WComponent/g' "$FILE_PATH"
sed -i 's/fVar28/MatrixRow2XComponent/g' "$FILE_PATH"
sed -i 's/fVar29/MatrixRow2YComponent/g' "$FILE_PATH"
sed -i 's/fVar30/MatrixRow2ZComponent/g' "$FILE_PATH"
sed -i 's/fVar31/MatrixRow2WComponent/g' "$FILE_PATH"
sed -i 's/fVar32/MatrixRow3XComponent/g' "$FILE_PATH"
sed -i 's/fVar33/MatrixRow3YComponent/g' "$FILE_PATH"
sed -i 's/fVar34/MatrixRow3ZComponent/g' "$FILE_PATH"
sed -i 's/fVar35/MatrixRow3WComponent/g' "$FILE_PATH"
sed -i 's/fVar36/MatrixRow4XComponent/g' "$FILE_PATH"
sed -i 's/fVar37/MatrixRow4YComponent/g' "$FILE_PATH"
sed -i 's/fVar38/MatrixRow4ZComponent/g' "$FILE_PATH"
sed -i 's/fVar39/MatrixRow4WComponent/g' "$FILE_PATH"

# 矩阵结果变量
sed -i 's/fVar40/MatrixResult1/g' "$FILE_PATH"
sed -i 's/fVar41/MatrixResult2/g' "$FILE_PATH"
sed -i 's/fVar42/MatrixResult3/g' "$FILE_PATH"
sed -i 's/fVar43/MatrixResult4/g' "$FILE_PATH"
sed -i 's/fVar44/MatrixResult5/g' "$FILE_PATH"
sed -i 's/fVar45/MatrixResult6/g' "$FILE_PATH"

# 高级渲染变量 (46-60)
for i in {46..60}; do
    sed -i "s/fVar$i/AdvancedRenderValue$i/g" "$FILE_PATH"
done

# 通用浮点变量 (61-100)
for i in {61..100}; do
    sed -i "s/fVar$i/FloatCalculatedValue$i/g" "$FILE_PATH"
done

echo "03_rendering.c的fVar变量处理完成"