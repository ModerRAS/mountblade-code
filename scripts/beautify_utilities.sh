#!/bin/bash
# 美化06_utilities.c文件中的变量名和函数名
# 简化实现：仅将常见的数字变量名替换为语义化名称
# 原本实现：完全重构所有变量命名体系，建立统一的变量命名规范

echo "开始美化06_utilities.c文件..."

# 定义美化规则
declare -A replacements=(
    # 变量名美化
    ["utility_temp_unsigned_value"]="utility_temp_unsigned_register"
    ["utility_stack_UTILITY_RESOURCE_DATA_BUFFER_dword_field"]="utility_stack_resource_data_dword_field"
    ["utility_stack_byte_data\[UTILITY_ARRAY_INDEX_ZERO_VALUE\]_byte_field"]="utility_stack_byte_data_field"
    ["resource_data_2"]="resource_data_short"
    ["utility_stack_UTILITY_RESOURCE_DATA_BUFFER.bit_field_high_two_bits"]="utility_stack_resource_data_high_bits"
    ["utility_stack_int_data\[UTILITY_ARRAY_INDEX_ZERO_VALUE\].bit_field_high_two_bits"]="utility_stack_int_data_high_bits"
    ["utility_stack_unsigned_data\[UTILITY_ARRAY_INDEX_ZERO_VALUE\].bit_field_high_two_bits"]="utility_stack_unsigned_data_high_bits"
    ["utility_cpu_register_accumulator_value"]="utility_cpu_register_accumulator"
    ["stack_char_array_8"]="stack_char_array_small"
    ["utility_stack_resource_data\[UTILITY_ARRAY_INDEX_ZERO_VALUE\]_high_low_byte_field"]="utility_stack_resource_data_byte_field"
    ["utility_temp_status_char"]="utility_temp_status_character"
    ["utility_operation_result_ptr"]="utility_operation_result_pointer"
    ["utility_render_system_operation_data_330"]="utility_render_system_operation_data_large"
    ["utility_render_system_loop_counter_primary"]="utility_render_system_loop_counter_main"
    ["event_system_handler_6070"]="event_system_handler_main"
    ["event_system_resource_init_60c0"]="event_system_resource_init_main"
    ["event_system_handler_init_61b0"]="event_system_handler_init_main"
    ["address_mutex_destroy_1"]="address_mutex_destroy_primary"
    ["address_mutex_destroy_2"]="address_mutex_destroy_secondary"
    ["address_mutex_destroy_3"]="address_mutex_destroy_tertiary"
    ["address_mutex_destroy_4"]="address_mutex_destroy_quaternary"
    ["address_mutex_destroy_5"]="address_mutex_destroy_quinary"
    ["address_mutex_destroy_6"]="address_mutex_destroy_senary"
    ["byte_offset"]="byte_offset_value"
    ["utility_local_data_ptr"]="utility_local_data_pointer"
    ["utility_cpu_register_context"]="utility_cpu_register_context_base"
)

# 执行替换
for key in "${!replacements[@]}"; do
    value="${replacements[$key]}"
    echo "替换: $key -> $value"
    sed -i "s/$key/$value/g" TaleWorlds.Native/src/06_utilities.c
done

echo "美化完成！"