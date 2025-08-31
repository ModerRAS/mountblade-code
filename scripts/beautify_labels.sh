#!/bin/bash

# 进一步美化03_rendering.c文件中的标签名
# 将十六进制标签名替换为语义化标签名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
TEMP_FILE="/tmp/rendering_temp2.c"

# 标签名替换映射
declare -A LABEL_MAP=(
    ["rendering_label_27d492"]="render_label_path_separator_check"
    ["rendering_label_27d773"]="render_label_buffer_validation_complete"
    ["rendering_label_27de2e"]="render_label_device_data_validation"
    ["rendering_label_27e092"]="render_label_primary_zero_check"
    ["rendering_label_2895b3"]="render_label_shader_processing_start"
    ["rendering_label_2895c4"]="render_label_shader_config_update"
    ["rendering_label_2895ce"]="render_label_shader_data_process"
    ["rendering_label_2895f6"]="render_label_shader_validation_complete"
    ["rendering_label_2896e8"]="render_label_texture_init_start"
    ["rendering_label_28988d"]="render_label_texture_config_process"
    ["rendering_label_2898d6"]="render_label_texture_validation"
    ["rendering_label_28c839"]="render_label_memory_allocation_start"
    ["rendering_label_28d060"]="render_label_memory_process"
    ["rendering_label_28d788"]="render_label_memory_validation"
    ["rendering_label_28e1e4"]="render_label_memory_complete"
    ["rendering_label_28ffb2"]="render_label_vertex_processing_start"
    ["rendering_label_29020c"]="render_label_vertex_data_process"
    ["rendering_label_290cc2"]="render_label_vertex_validation"
    ["rendering_label_297b63"]="render_label_index_processing_start"
    ["rendering_label_29fefa"]="render_label_index_data_process"
    ["rendering_label_29ff32"]="render_label_index_validation"
    ["rendering_label_29ff52"]="render_label_index_complete"
    ["rendering_label_2a0071"]="render_label_final_cleanup"
    ["rendering_label_29ffc7"]="render_label_error_handling"
)

# 创建临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 执行标签名替换
for old_name in "${!LABEL_MAP[@]}"; do
    new_name="${LABEL_MAP[$old_name]}"
    echo "替换标签: $old_name -> $new_name"
    sed -i "s/\b$old_name\b/$new_name/g" "$TEMP_FILE"
done

# 替换文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "标签名美化完成"