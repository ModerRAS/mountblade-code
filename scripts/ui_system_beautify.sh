#!/bin/bash

# UI系统变量名美化脚本
# 用于将非语义化的变量名替换为语义化的变量名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
TEMP_FILE="/tmp/ui_system_temp.c"

# 创建备份
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 批量替换非语义化变量名为语义化变量名
sed -i 's/ui_system_stack_temp_2/ui_system_stack_temp_counter/g' "$INPUT_FILE"
sed -i 's/ui_system_stack_ret_2/ui_system_stack_return_value_secondary/g' "$INPUT_FILE"
sed -i 's/ui_system_stack_ret_1/ui_system_stack_return_value_primary/g' "$INPUT_FILE"
sed -i 's/ui_system_stack_buffer_size_1/ui_system_stack_buffer_size_primary/g' "$INPUT_FILE"
sed -i 's/ui_system_stack_ptr_1/ui_system_stack_pointer_primary/g' "$INPUT_FILE"
sed -i 's/ui_system_stack_capacity_8/ui_system_stack_capacity_max/g' "$INPUT_FILE"
sed -i 's/ui_system_stack_var_2/ui_system_stack_variable_secondary/g' "$INPUT_FILE"
sed -i 's/ui_system_stack_value_2/ui_system_stack_value_secondary/g' "$INPUT_FILE"
sed -i 's/ui_system_stack_ptr_2/ui_system_stack_pointer_secondary/g' "$INPUT_FILE"

# 替换其他常见的非语义化变量名
sed -i 's/ui_result_status/ui_operation_result_status/g' "$INPUT_FILE"
sed -i 's/ui_system_operation_status/ui_system_processing_status/g' "$INPUT_FILE"
sed -i 's/ui_error_status/ui_system_error_code/g' "$INPUT_FILE"
sed -i 's/ui_system_callback_ptr/ui_system_callback_pointer/g' "$INPUT_FILE"
sed -i 's/ui_system_event_index/ui_system_event_index_counter/g' "$INPUT_FILE"
sed -i 's/ui_system_event_id0/ui_system_event_identifier/g' "$INPUT_FILE"
sed -i 's/ui_event_validation_counter/ui_event_validation_loop_counter/g' "$INPUT_FILE"
sed -i 's/long_counter_two/ui_system_long_counter_secondary/g' "$INPUT_FILE"
sed -i 's/ui_resource_management_counter/ui_resource_management_loop_counter/g' "$INPUT_FILE"
sed -i 's/ui_widget_id/ui_widget_identifier/g' "$INPUT_FILE"
sed -i 's/ui_performance_monitoring_counter/ui_performance_monitoring_loop_counter/g' "$INPUT_FILE"
sed -i 's/ui_system_state_counter/ui_system_state_loop_counter/g' "$INPUT_FILE"
sed -i 's/ui_system_loop_index/ui_system_loop_index_counter/g' "$INPUT_FILE"
sed -i 's/ui_boolean_pointer/ui_system_boolean_data_pointer/g' "$INPUT_FILE"
sed -i 's/ui_func_return/ui_function_return_value/g' "$INPUT_FILE"

# 替换数组变量名
sed -i 's/aui_system_task_identifier/ui_system_task_identifier_array/g' "$INPUT_FILE"
sed -i 's/ui_xmm_buffer/ui_system_xmm_data_buffer/g' "$INPUT_FILE"
sed -i 's/ui_input_data_store/ui_system_input_data_storage/g' "$INPUT_FILE"
sed -i 's/ui_widget_buffer/ui_system_widget_data_buffer/g' "$INPUT_FILE"
sed -i 's/ui_stack_information_ptr_uint/ui_system_stack_info_pointer_unsigned/g' "$INPUT_FILE"

# 替换参数变量名
sed -i 's/ui_system_stack_param/ui_system_stack_parameter/g' "$INPUT_FILE"

echo "UI系统变量名美化完成"