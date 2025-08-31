#!/bin/bash

# 渲染系统变量名语义化美化脚本（2025年8月31日批次）
# 原本实现：完全重构渲染系统所有变量命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的包含数字的变量名替换为语义化名称，保持代码结构不变

# 定义源文件
SOURCE_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 创建临时文件
TEMP_FILE="/tmp/rendering_temp.c"

# 变量名替换规则
# 主要将数字后缀变量名替换为语义化名称
sed -e 's/render_unsigned_sixth_value/render_texture_loop_counter/g' \
    -e 's/render_temp_unsigned_primary/render_texture_state_mask/g' \
    -e 's/render_temp_unsigned_secondary/render_texture_active_count/g' \
    -e 's/render_temp_unsigned_counter/render_texture_iteration_counter/g' \
    -e 's/render_chunk_item_counter/render_data_chunk_size/g' \
    -e 's/render_data_chunk/render_data_chunk_pointer/g' \
    -e 's/render_string_data_pointer/render_texture_name_pointer/g' \
    -e 's/render_temp_buffer/render_matrix_transform_buffer/g' \
    -e 's/render_memory_size_secondary/render_secondary_memory_size/g' \
    -e 's/render_memory_size_senary/render_senary_memory_size/g' \
    -e 's/prender_int_var_tertiary/render_texture_data_array_ptr/g' \
    -e 's/render_int_var_quinary/render_texture_format_value/g' \
    -e 's/render_signed_temp_primary/render_texture_signed_value/g' \
    -e 's/render_loop_counter_index_primary/render_texture_index_value/g' \
    -e 's/render_batch_object_count/render_texture_batch_count/g' \
    -e 's/render_context_stack_value/render_stack_depth_value/g' \
    -e 's/render_context_object_stack_ptr_extended/render_stack_object_ptr/g' \
    -e 's/render_context_stack_ptr_septenary/render_stack_data_ptr/g' \
    -e 's/render_context_stack_offset_primary/render_stack_offset_value/g' \
    -e 's/render_context_stack_data_secondary/render_stack_data_buffer/g' \
    -e 's/render_device_object_data_ptr_secondary/render_device_data_secondary_ptr/g' \
    -e 's/render_device_object_data_ptr_four/render_device_data_fourth_ptr/g' \
    -e 's/render_buffer_pointer_secondary/render_buffer_secondary_ptr/g' \
    -e 's/render_device_object_data_ptr_eight/render_device_data_eighth_ptr/g' \
    -e 's/render_device_object_data_ptr_seventh/render_device_data_seventh_ptr/g' \
    -e 's/render_texture_object_data_initial/render_texture_initial_data/g' \
    -e 's/render_memory_object_address_pointer/render_memory_address_ptr/g' \
    -e 's/render_buffer_pointer_tertiary/render_buffer_third_ptr/g' \
    -e 's/render_stack_long_value/render_stack_long_primary/g' \
    -e 's/render_stack_long_value_extended/render_stack_long_secondary/g' \
    -e 's/RENDER_LONG_VAR_PRIMARY_zero/render_long_primary_zero/g' \
    -e 's/render_temp_var_four/render_temp_value_four/g' \
    -e 's/render_temp_var_five/render_temp_value_five/g' \
    -e 's/render_temp_var_seven/render_temp_value_seven/g' \
    -e 's/render_temp_var_eight/render_temp_value_eight/g' \
    -e 's/render_temp_var_ten/render_temp_value_ten/g' \
    -e 's/render_temp_var_thirteen/render_temp_value_thirteen/g' \
    "$SOURCE_FILE" > "$TEMP_FILE"

# 替换原始文件
mv "$TEMP_FILE" "$SOURCE_FILE"

echo "渲染系统变量名语义化美化完成"