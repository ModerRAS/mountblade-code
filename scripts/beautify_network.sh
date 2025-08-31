#!/bin/bash

# 网络代码美化脚本 - 05_networking.c
# 专门用于变量名语义化替换

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
TEMP_FILE="/tmp/network_beautify_temp.c"

# 创建临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 变量名替换规则 - 使用更语义化的名称
sed -i 's/network_pointer_connection_status_flag/network_connection_status_flag_pointer/g' "$TEMP_FILE"
sed -i 's/network_stack_templong_primary_buffer/network_stack_temporary_primary_buffer/g' "$TEMP_FILE"
sed -i 's/network_base_ptr/network_base_register_pointer/g' "$TEMP_FILE"
sed -i 's/network_data_pointer/network_data_register_pointer/g' "$TEMP_FILE"
sed -i 's/network_buffer_pointer/network_buffer_memory_pointer/g' "$TEMP_FILE"
sed -i 's/network_packet_count/network_packet_counter/g' "$TEMP_FILE"
sed -i 's/network_system_base_register/network_system_base_register_value/g' "$TEMP_FILE"
sed -i 's/network_buffer_offset_register/network_buffer_offset_register_value/g' "$TEMP_FILE"
sed -i 's/network_primary_register_temporary/network_primary_temporary_register/g' "$TEMP_FILE"
sed -i 's/network_source_data_register/network_source_data_register_value/g' "$TEMP_FILE"
sed -i 's/network_connection_handle/network_connection_handle_value/g' "$TEMP_FILE"
sed -i 's/network_connection_error_code/network_connection_error_status/g' "$TEMP_FILE"
sed -i 's/network_validation_result/network_validation_status_code/g' "$TEMP_FILE"
sed -i 's/network_encryption_control/network_encryption_control_flag/g' "$TEMP_FILE"
sed -i 's/connection_status/network_connection_status/g' "$TEMP_FILE"
sed -i 's/packet_count/network_packet_total_count/g' "$TEMP_FILE"
sed -i 's/connection_params/network_connection_parameters/g' "$TEMP_FILE"
sed -i 's/buffer_ptr_primary/network_primary_buffer_pointer/g' "$TEMP_FILE"

# 替换完成，覆盖原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "网络代码美化完成"