#!/bin/bash

# 06_utilities.c 更全面的变量名语义化美化脚本
# 针对剩余的十六进制数字后缀变量名进行语义化替换

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 美化 utility_word_mask_ff 等掩码变量
sed -i 's/utility_word_mask_ff/utility_word_mask_low_byte/g' "$INPUT_FILE"

# 美化 utility_stack_pointer_neg_E 等栈指针变量
sed -i 's/utility_stack_pointer_neg_E/utility_stack_pointer_neg_data/g' "$INPUT_FILE"
sed -i 's/utility_stack_pointer_neg_B/utility_stack_pointer_neg_result/g' "$INPUT_FILE"

# 美化 utility_memory_address_offset_fc 等内存地址变量
sed -i 's/utility_memory_address_offset_fc/utility_memory_address_offset_effectiveness/g' "$INPUT_FILE"

# 美化 utility_resource_op_offset_D 等资源操作变量
sed -i 's/utility_resource_op_offset_D/utility_resource_op_offset_limit/g' "$INPUT_FILE"

# 美化 utility_case_switch_B 等case switch变量
sed -i 's/utility_case_switch_B/utility_case_switch_buffer_operation/g' "$INPUT_FILE"
sed -i 's/utility_case_switch_D/utility_case_switch_data_operation/g' "$INPUT_FILE"
sed -i 's/utility_case_switch_E/utility_case_switch_extended_operation/g' "$INPUT_FILE"

# 美化 utility_size_threshold_7B8 等大小阈值变量
sed -i 's/utility_size_threshold_7B8/utility_size_threshold_buffer_cleanup/g' "$INPUT_FILE"

# 美化 utility_thread_storage_offset_8C0 等线程存储变量
sed -i 's/utility_thread_storage_offset_8C0/utility_thread_storage_offset_data_handler/g' "$INPUT_FILE"
sed -i 's/utility_thread_storage_offset_8D8/utility_thread_storage_offset_data_counter/g' "$INPUT_FILE"

# 美化 utility_thread_storage_cleanup_offset_988 等线程存储清理变量
sed -i 's/utility_thread_storage_cleanup_offset_988/utility_thread_storage_cleanup_offset_primary/g' "$INPUT_FILE"
sed -i 's/utility_thread_storage_status_offset_998/utility_thread_storage_status_offset_cleanup/g' "$INPUT_FILE"

# 美化 utility_thread_storage_state_offset_A68 等线程存储状态变量
sed -i 's/utility_thread_storage_state_offset_A68/utility_thread_storage_state_offset_primary/g' "$INPUT_FILE"
sed -i 's/utility_thread_storage_flag_offset_A78/utility_thread_storage_flag_offset_state/g' "$INPUT_FILE"
sed -i 's/utility_thread_storage_data_offset_A58/utility_thread_storage_data_offset_state/g' "$INPUT_FILE"

# 美化 utility_thread_storage_pointer_offset_A20 等线程存储指针变量
sed -i 's/utility_thread_storage_pointer_offset_A20/utility_thread_storage_pointer_offset_primary/g' "$INPUT_FILE"
sed -i 's/utility_thread_storage_handle_offset_A38/utility_thread_storage_handle_offset_primary/g' "$INPUT_FILE"
sed -i 's/utility_thread_storage_reference_offset_A00/utility_thread_storage_reference_offset_primary/g' "$INPUT_FILE"
sed -i 's/utility_thread_storage_index_offset_A18/utility_thread_storage_index_offset_primary/g' "$INPUT_FILE"
sed -i 's/utility_thread_storage_validation_offset_9E0/utility_thread_storage_validation_offset_primary/g' "$INPUT_FILE"

# 美化 utility_thread_storage_context_offset_ae0 等线程存储上下文变量
sed -i 's/utility_thread_storage_context_offset_ae0/utility_thread_storage_context_offset_extended/g' "$INPUT_FILE"
sed -i 's/utility_thread_storage_extra_offset_ae8/utility_thread_storage_extra_offset_extended/g' "$INPUT_FILE"
sed -i 's/utility_thread_storage_extra_flag_offset_af8/utility_thread_storage_extra_flag_offset_extended/g' "$INPUT_FILE"
sed -i 's/utility_thread_storage_extra_data_offset_ad8/utility_thread_storage_extra_data_offset_extended/g' "$INPUT_FILE"
sed -i 's/utility_thread_storage_extra_pointer_offset_aa0/utility_thread_storage_extra_pointer_offset_extended/g' "$INPUT_FILE"
sed -i 's/utility_thread_storage_extra_handle_offset_aa8/utility_thread_storage_extra_handle_offset_extended/g' "$INPUT_FILE"

# 美化 utility_boolean_flag_offset_E0 等布尔标志变量
sed -i 's/utility_boolean_flag_offset_E0/utility_boolean_flag_offset_extended/g' "$INPUT_FILE"

# 美化 utility_bool_offset 等布尔偏移变量
sed -i 's/utility_bool_offset/utility_bool_offset_standard/g' "$INPUT_FILE"

# 美化 utility_resource_op_offset_58 等资源操作变量
sed -i 's/utility_resource_op_offset_58/utility_resource_op_offset_cleanup/g' "$INPUT_FILE"

# 美化 utility_system_resource_access_size_C1C 等系统资源访问变量
sed -i 's/utility_system_resource_access_size_C1C/utility_system_resource_access_size_validation/g' "$INPUT_FILE"

echo "06_utilities.c 更全面的变量名语义化美化完成"
echo "已将剩余的十六进制数字后缀变量名替换为语义化名称"