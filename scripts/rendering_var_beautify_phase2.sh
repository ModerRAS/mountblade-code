#!/bin/bash

# 渲染系统变量名美化脚本 - 第二阶段
# 用于处理03_rendering.c文件中剩余的变量名进行语义化替换

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
TEMP_FILE="/tmp/rendering_beautified_phase2.c"

# 创建备份
cp "$INPUT_FILE" "$INPUT_FILE.backup2"

# 定义第二阶段变量名替换映射
declare -A variable_replacements=(
    # 渲染寄存器存储变量美化
    ["render_register_storage_14"]="render_register_storage_fourteen"
    ["render_register_storage_fifteen"]="render_register_storage_fifteen_value"
    ["render_register_source_index"]="render_register_source_index_value"
    ["render_register_rax"]="render_register_accumulator"
    
    # 渲染栈偏移变量美化
    ["render_context_stack_offset_2"]="render_context_stack_offset_secondary"
    ["render_context_stack_offset_3"]="render_context_stack_offset_tertiary"
    
    # 渲染向量寄存器变量美化
    ["render_vector_register_6_low"]="render_vector_register_6_low_part"
    ["render_vector_register_6_mid"]="render_vector_register_6_mid_part"
    ["render_vector_register_6_high"]="render_vector_register_6_high_part"
    ["render_vector_register_base_7"]="render_vector_register_7_base"
    ["render_vector_register_7_low"]="render_vector_register_7_low_part"
    ["render_vector_register_7_mid"]="render_vector_register_7_mid_part"
    ["render_vector_register_7_high"]="render_vector_register_7_high_part"
    ["render_vector_register_8_base"]="render_vector_register_8_base"
    ["render_vector_register_8_low"]="render_vector_register_8_low_part"
    ["render_vector_register_8_mid"]="render_vector_register_8_mid_part"
    ["render_vector_register_8_high"]="render_vector_register_8_high_part"
    ["render_vector_register_9_base"]="render_vector_register_9_base"
    ["render_vector_register_9_low"]="render_vector_register_9_low_part"
    ["render_vector_register_9_mid"]="render_vector_register_9_mid_part"
    ["render_vector_register_9_high"]="render_vector_register_9_high_part"
    ["render_vector_register_10_low"]="render_vector_register_10_low_part"
    ["render_vector_register_10_mid"]="render_vector_register_10_mid_part"
    ["render_vector_register_10_high"]="render_vector_register_10_high_part"
    
    # 渲染纹理相关变量美化
    ["render_texture_id_primary"]="render_texture_identifier_primary"
    ["render_texture_data_array_legacy"]="render_texture_data_legacy_array"
    ["render_texture_handle_value"]="render_texture_handle_main_value"
    ["render_texture_id_initial"]="render_texture_identifier_initial"
    
    # 渲染主变量美化
    ["render_unsigned_primary_7"]="render_unsigned_primary_seven"
    ["render_unsigned_primary_8"]="render_unsigned_primary_eight"
    ["render_unsigned_primary_2"]="render_unsigned_primary_two"
    ["render_unsigned_primary_secondary"]="render_unsigned_primary_secondary_value"
    
    # 渲染嵌套变量美化
    ["render_nested_stack_ptr"]="render_nested_stack_pointer"
    ["render_nested_device_data_ptr_senary_secondary"]="render_nested_device_data_senary_secondary"
    ["render_nested_buffer_ptr_senary_secondary"]="render_nested_buffer_senary_secondary"
    ["render_nested_context_ptr_senary_sixth"]="render_nested_context_senary_sixth"
    ["render_nested_context_ptr_senary_sixth_extended"]="render_nested_context_senary_sixth_extended"
    ["render_nested_buffer_ptr_nonary_ninth"]="render_nested_buffer_nonary_ninth"
    ["render_nested_device_data_ptr_senary_secondary"]="render_nested_device_data_senary_secondary"
    ["render_nested_buffer_ptr_quinary3"]="render_nested_buffer_quinary_three"
    
    # 渲染临时整数变量美化
    ["render_int_tertiary_primary_5"]="render_int_tertiary_primary_five"
    ["render_int_tertiary_primary_6"]="render_int_tertiary_primary_six"
    
    # 渲染缓冲区对象美化
    ["render_buffer_object_ptr4"]="render_buffer_object_pointer_four"
    
    # 渲染栈变量美化
    ["render_float_stack_primary"]="render_float_stack_primary_value"
    ["render_byte_buffer_quinary"]="render_byte_buffer_quinary_value"
    ["render_config_data_value"]="render_configuration_data_value"
    ["render_temp_vertex_count"]="render_temporary_vertex_count"
    ["render_status_code_extended"]="render_status_code_extended_value"
    
    # 渲染上下文变量美化
    ["render_context_stack_handle_tertiary"]="render_context_stack_handle_tertiary_value"
    ["render_context_stack_buffer"]="render_context_stack_buffer_main"
    
    # 渲染设备上下文变量美化
    ["render_device_context_main"]="render_device_context_primary"
    ["render_texture_offset_extended"]="render_texture_offset_extended_value"
    
    # 渲染内存变量美化
    ["render_global_xor_mask"]="render_global_xor_mask_value"
    
    # 渲染其他变量美化
    ["render_byte_mask_ptr"]="render_byte_mask_pointer"
    ["iStackX_18"]="render_stack_index_18"
    ["renderIntPtrArray218"]="render_int_pointer_array_218"
    ["prender_nested_buffer_ptr_quinary3"]="render_pointer_nested_buffer_quinary_three"
    ["rendering_alpha_value_pointer_1"]="rendering_alpha_value_pointer_one"
    ["render_float_pointer"]="render_float_data_pointer"
)

# 创建临时文件进行替换
cp "$INPUT_FILE" "$TEMP_FILE"

# 应用所有变量替换
for old_var in "${!variable_replacements[@]}"; do
    new_var="${variable_replacements[$old_var]}"
    echo "替换: $old_var -> $new_var"
    
    # 使用sed进行精确匹配替换
    sed -i "s/\b$old_var\b/$new_var/g" "$TEMP_FILE"
done

# 检查文件大小
original_size=$(wc -c < "$INPUT_FILE")
new_size=$(wc -c < "$TEMP_FILE")
echo "原始文件大小: $original_size 字节"
echo "新文件大小: $new_size 字节"

# 如果新文件大小合理，替换原文件
if [ $new_size -gt 0 ] && [ $new_size -lt 104857600 ]; then  # 小于100MB
    mv "$TEMP_FILE" "$INPUT_FILE"
    echo "变量名美化第二阶段完成"
else
    echo "文件大小异常，恢复原文件"
    rm "$TEMP_FILE"
fi