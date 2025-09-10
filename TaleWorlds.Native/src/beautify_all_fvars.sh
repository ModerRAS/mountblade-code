#!/bin/bash

# 全面美化fVar变量的脚本
# 处理所有文件中的fVar[0-9]+变量，使用语义化名称替换

# 设置基础路径
BASE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src"

# 需要处理的文件列表
FILES=(
    "03_rendering.c"
    "99_unmatched_functions.c"
    "00_data_definitions.h"
    "06_utilities.c"
    "04_ui_system.c"
)

# 为每个文件创建备份并进行美化
for FILE in "${FILES[@]}"; do
    FILE_PATH="$BASE_PATH/$FILE"
    
    if [ -f "$FILE_PATH" ]; then
        echo "正在处理文件: $FILE"
        
        # 创建备份
        cp "$FILE_PATH" "$FILE_PATH.backup.$(date +%Y%m%d_%H%M%S)"
        
        # 渲染相关fVar变量 (1-50)
        sed -i 's/fVar1/RenderCalculatedValue1/g' "$FILE_PATH"
        sed -i 's/fVar2/RenderCalculatedValue2/g' "$FILE_PATH"
        sed -i 's/fVar3/RenderCalculatedValue3/g' "$FILE_PATH"
        sed -i 's/fVar4/RenderCalculatedValue4/g' "$FILE_PATH"
        sed -i 's/fVar5/RenderCalculatedValue5/g' "$FILE_PATH"
        sed -i 's/fVar6/PositionOffsetZ/g' "$FILE_PATH"
        sed -i 's/fVar7/PositionOffsetX/g' "$FILE_PATH"
        sed -i 's/fVar8/PositionOffsetY/g' "$FILE_PATH"
        sed -i 's/fVar9/DistanceThreshold/g' "$FILE_PATH"
        sed -i 's/fVar10/MaterialPropertyValue10/g' "$FILE_PATH"
        sed -i 's/fVar11/MaterialPropertyValue11/g' "$FILE_PATH"
        sed -i 's/fVar12/MaterialPropertyValue12/g' "$FILE_PATH"
        sed -i 's/fVar13/MaterialPropertyValue13/g' "$FILE_PATH"
        sed -i 's/fVar14/CurveCalculatedValue14/g' "$FILE_PATH"
        sed -i 's/fVar15/CurveCalculatedValue15/g' "$FILE_PATH"
        sed -i 's/fVar16/CurveCalculatedValue16/g' "$FILE_PATH"
        sed -i 's/fVar17/CurveCalculatedValue17/g' "$FILE_PATH"
        sed -i 's/fVar18/CurveCalculatedValue18/g' "$FILE_PATH"
        sed -i 's/fVar19/CurveCalculatedValue19/g' "$FILE_PATH"
        sed -i 's/fVar20/CurveCalculatedValue20/g' "$FILE_PATH"
        sed -i 's/fVar21/CurveCalculatedValue21/g' "$FILE_PATH"
        sed -i 's/fVar22/CalculatedValue22/g' "$FILE_PATH"
        sed -i 's/fVar23/CalculatedValue23/g' "$FILE_PATH"
        
        # 矩阵相关变量 (24-41)
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
        sed -i 's/fVar40/MatrixResult1/g' "$FILE_PATH"
        sed -i 's/fVar41/MatrixResult2/g' "$FILE_PATH"
        
        # 高级渲染计算变量 (42-60)
        sed -i 's/fVar42/AdvancedRenderValue42/g' "$FILE_PATH"
        sed -i 's/fVar43/AdvancedRenderValue43/g' "$FILE_PATH"
        sed -i 's/fVar44/AdvancedRenderValue44/g' "$FILE_PATH"
        sed -i 's/fVar45/AdvancedRenderValue45/g' "$FILE_PATH"
        sed -i 's/fVar46/AdvancedRenderValue46/g' "$FILE_PATH"
        sed -i 's/fVar47/AdvancedRenderValue47/g' "$FILE_PATH"
        sed -i 's/fVar48/AdvancedRenderValue48/g' "$FILE_PATH"
        sed -i 's/fVar49/AdvancedRenderValue49/g' "$FILE_PATH"
        sed -i 's/fVar50/AdvancedRenderValue50/g' "$FILE_PATH"
        sed -i 's/fVar51/AdvancedRenderValue51/g' "$FILE_PATH"
        sed -i 's/fVar52/AdvancedRenderValue52/g' "$FILE_PATH"
        sed -i 's/fVar53/AdvancedRenderValue53/g' "$FILE_PATH"
        sed -i 's/fVar54/AdvancedRenderValue54/g' "$FILE_PATH"
        sed -i 's/fVar55/AdvancedRenderValue55/g' "$FILE_PATH"
        sed -i 's/fVar56/AdvancedRenderValue56/g' "$FILE_PATH"
        sed -i 's/fVar57/AdvancedRenderValue57/g' "$FILE_PATH"
        sed -i 's/fVar58/AdvancedRenderValue58/g' "$FILE_PATH"
        sed -i 's/fVar59/AdvancedRenderValue59/g' "$FILE_PATH"
        sed -i 's/fVar60/AdvancedRenderValue60/g' "$FILE_PATH"
        
        # 处理更高编号的fVar变量 (61-100)
        for i in {61..100}; do
            sed -i "s/fVar$i/FloatCalculatedValue$i/g" "$FILE_PATH"
        done
        
        echo "文件 $FILE 处理完成"
    else
        echo "文件 $FILE 不存在，跳过"
    fi
done

echo "所有fVar变量美化完成"