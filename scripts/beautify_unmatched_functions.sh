#!/bin/bash

# 美化99_unmatched_functions.c文件的脚本
# 将常见的非语义化变量名替换为语义化名称

# 定义变量替换规则
declare -A variable_replacements=(
    # 基本变量名替换
    ["local_var_uint32_t_temp"]="temp_counter"
    ["local_var_uint32_temp"]="temp_value"
    ["local_var_ptr_uint32_t_168"]="system_context_ptr"
    ["local_var_ptr_uint32_t_160"]="buffer_ptr"
    ["local_var_array_150"]="temp_buffer"
    ["local_var_id_158"]="handler_id"
    ["local_var_buffer_190"]="status_flag"
    ["local_var_data_198"]="data_flag"
    ["local_var_uint32_tempa0"]="config_value"
    ["local_var_offset_1a8"]="stack_offset"
    ["local_var_uint32_tempb0"]="memory_offset"
    ["local_var_uint32_tempb8"]="temp_counter_b"
    ["local_var_buffer_size"]="buffer_size"
    ["local_var_uint32_tempc8"]="config_offset"
    ["system_data_ptr"]="system_data_pointer"
    ["system_counter"]="system_count"
    ["system_local_var_temp"]="system_temp_ptr"
    ["stack_int32_t_ptr_178"]="stack_context_ptr"
    ["system_resource_index"]="resource_index"
    ["local_var_array_data_buffer"]="data_buffer"
    ["local_var_ptr_uint32_t_c8"]="context_ptr_c8"
    ["local_var_ptr_uint32_t_c0"]="context_ptr_c0"
    ["local_var_uint32_t_error_code"]="error_code"
    ["local_var_array_b0"]="buffer_b0"
    ["local_var_ptr_uint32_t_90"]="context_ptr_90"
    ["local_var_ptr_uint32_t_88"]="context_ptr_88"
    ["local_var_uint32_t_config_offset"]="config_offset_value"
    ["local_var_array_78"]="buffer_78"
    ["local_var_ptr_uint32_t_58"]="context_ptr_58"
    ["local_var_ptr_uint32_t_50"]="context_ptr_50"
    ["local_var_array_40"]="buffer_40"
)

# 执行替换
for old_name in "${!variable_replacements[@]}"; do
    new_name="${variable_replacements[$old_name]}"
    sed -i "s/\b$old_name\b/$new_name/g" TaleWorlds.Native/src/99_unmatched_functions.c
done

echo "变量名替换完成"