#!/bin/bash

# 渲染系统矩阵变量名美化脚本
# 将数字编号的矩阵变量名替换为语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
TEMP_FILE="/tmp/rendering_temp2.c"

# 矩阵变量名映射
declare -A MATRIX_MAPPING=(
    ["render_matrix7"]="render_extended_matrix_data"
    ["render_current_texture_id2"]="render_texture_id_secondary"
)

# 执行替换
for old_var in "${!MATRIX_MAPPING[@]}"; do
    new_var="${MATRIX_MAPPING[$old_var]}"
    echo "替换矩阵变量: $old_var -> $new_var"
    
    # 使用sed进行替换
    sed "s/\b$old_var\b/$new_var/g" "$INPUT_FILE" > "$TEMP_FILE"
    mv "$TEMP_FILE" "$INPUT_FILE"
done

echo "矩阵变量名美化完成"