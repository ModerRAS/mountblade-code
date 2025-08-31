#!/bin/bash

# 美化网络系统变量名的脚本
# 原本实现：完全重构网络系统所有命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化变量名替换为语义化名称，保持代码结构不变

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
TEMP_FILE="/tmp/network_pretty_temp.c"

# 备份原文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 美化网络系统变量名
sed -i 's/network_connection_data_buffer/network_buffer_data/g' "$TEMP_FILE"
sed -i 's/network_status_code/network_operation_status/g' "$TEMP_FILE"
sed -i 's/network_packet_counter/network_packet_count/g' "$TEMP_FILE"
sed -i 's/network_processing_buffer_offset/network_buffer_offset/g' "$TEMP_FILE"
sed -i 's/network_buffer_index/network_buffer_idx/g' "$TEMP_FILE"
sed -i 's/network_data_register_pointer/network_register_ptr/g' "$TEMP_FILE"
sed -i 's/network_connection_context_handle/network_context_handle/g' "$TEMP_FILE"
sed -i 's/network_connection_index_value/network_connection_idx/g' "$TEMP_FILE"
sed -i 's/network_connection_data_pointer/network_connection_ptr/g' "$TEMP_FILE"
sed -i 's/network_connection_validation_flag/network_validation_flag/g' "$TEMP_FILE"
sed -i 's/network_connection_table_pointer/network_table_ptr/g' "$TEMP_FILE"
sed -i 's/network_processing_buffer/network_process_buffer/g' "$TEMP_FILE"
sed -i 's/network_connection_validation_status_code/network_validation_code/g' "$TEMP_FILE"
sed -i 's/network_connection_operation_status/network_conn_status/g' "$TEMP_FILE"
sed -i 's/network_connection_validation_result/network_validation_result/g' "$TEMP_FILE"
sed -i 's/network_connection_data_pointer/network_conn_data_ptr/g' "$TEMP_FILE"
sed -i 's/network_connection_context_pointer/network_conn_context_ptr/g' "$TEMP_FILE"
sed -i 's/network_connection_info_data/network_conn_info_data/g' "$TEMP_FILE"
sed -i 's/network_active_connection_count/network_active_conn_count/g' "$TEMP_FILE"
sed -i 's/network_connection_validation_result/network_conn_validation_result/g' "$TEMP_FILE"
sed -i 's/network_socket_flags/network_socket_flags/g' "$TEMP_FILE"
sed -i 's/network_memory_pool_buffer/network_mem_pool_buffer/g' "$TEMP_FILE"
sed -i 's/network_status_code/network_error_code/g' "$TEMP_FILE"
sed -i 's/network_configuration_data/network_config_data/g' "$TEMP_FILE"
sed -i 's/network_global_data_table_pointer/network_global_table_ptr/g' "$TEMP_FILE"

# 应用修改
mv "$TEMP_FILE" "$INPUT_FILE"

echo "网络系统变量名美化完成"