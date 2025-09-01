#!/bin/bash

# UI系统变量名美化脚本
# 用于批量替换04_ui_system.c文件中的十六进制变量名为语义化名称

# 创建临时脚本文件
cat > /tmp/ui_variable_rename.sh << 'EOF'
#!/bin/bash

# 定义文件路径
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 变量名映射表
declare -A variable_map=(
    ["ui_stack_float_array_6260"]="ui_stack_vertex_buffer_array"
    ["ui_stack_float_value_144"]="ui_stack_transform_x"
    ["ui_stack_float_value_140"]="ui_stack_transform_y"
    ["ui_stack_float_value_138"]="ui_stack_transform_z"
    ["ui_stack_float_value_134"]="ui_stack_transform_w"
    ["ui_stack_float_value_130"]="ui_stack_rotation_x"
    ["ui_stack_float_value_124"]="ui_stack_rotation_y"
    ["ui_stack_float_value_120"]="ui_stack_rotation_z"
    ["ui_stack_temp_data_offset_1528"]="ui_stack_color_offset_primary"
    ["ui_stack_temp_data_offset_1520"]="ui_stack_color_offset_secondary"
    ["ui_stack_temp_data_offset_1208"]="ui_stack_texture_offset_primary"
    ["ui_stack_temp_data_offset_1200"]="ui_stack_texture_offset_secondary"
    ["ui_stack_data_320"]="ui_stack_processing_mask"
    ["ui_stack_extended_data_buffer_data_primary"]="ui_stack_primary_buffer"
    ["ui_stack_extended_data_buffer_size_128"]="ui_stack_buffer_size"
)

# 执行替换操作
for old_name in "${!variable_map[@]}"; do
    new_name="${variable_map[$old_name]}"
    echo "替换: $old_name -> $new_name"
    
    # 使用sed进行替换
    sed -i "s/\b${old_name}\b/${new_name}/g" "$FILE"
done

echo "变量名替换完成"
EOF

# 执行脚本
chmod +x /tmp/ui_variable_rename.sh
/tmp/ui_variable_rename.sh

# 清理临时文件
rm -f /tmp/ui_variable_rename.sh