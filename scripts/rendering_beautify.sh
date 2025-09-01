#!/bin/bash

# 渲染系统变量名美化脚本
# 将语义不清的变量名替换为具有明确含义的变量名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
TEMP_FILE="/tmp/rendering_temp.c"

# 变量名映射
declare -A VAR_MAPPING=(
    ["render_legacy_variable_initial"]="render_texture_object_arrays_initializer"
    ["render_legacy_variable_zero"]="render_texture_object_arrays_initializer_start"
    ["render_legacy_variable_tertiary"]="render_texture_object_data_initializer"
    ["render_legacy_variable_reserved"]="render_setup_buffer_object_configuration"
    ["render_vertex_array_legacy"]="render_configure_buffer_object_pointers"
    ["render_texture_array_legacy"]="render_texture_object_data_arrays"
)

# 执行替换
for old_var in "${!VAR_MAPPING[@]}"; do
    new_var="${VAR_MAPPING[$old_var]}"
    echo "替换: $old_var -> $new_var"
    
    # 使用sed进行替换
    sed "s/\b$old_var\b/$new_var/g" "$INPUT_FILE" > "$TEMP_FILE"
    mv "$TEMP_FILE" "$INPUT_FILE"
done

echo "变量名美化完成"