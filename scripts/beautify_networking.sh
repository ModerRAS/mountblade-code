#!/bin/bash

# 网络系统变量名美化脚本
# 用于替换05_networking.c文件中的变量名为语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
TEMP_FILE="/tmp/networking_beautified.c"

# 复制原文件到临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 替换网络栈缓冲区变量名
sed -i 's/network_stack_connection_context_buffer_188/network_stack_connection_context_buffer_primary/g' "$TEMP_FILE"
sed -i 's/network_stack_operation_context_buffer_310/network_stack_operation_context_buffer_primary/g' "$TEMP_FILE"
sed -i 's/network_stack_data_pointer_context_2b0/network_stack_data_pointer_context_primary/g' "$TEMP_FILE"
sed -i 's/network_stack_resource_data_buffer_288/network_stack_resource_data_buffer_primary/g' "$TEMP_FILE"
sed -i 's/network_stack_index_buffer_98/network_stack_index_buffer_primary/g' "$TEMP_FILE"
sed -i 's/network_stack_control_buffer_90/network_stack_control_buffer_primary/g' "$TEMP_FILE"
sed -i 's/network_stack_integer_array_8/network_stack_integer_array_primary/g' "$TEMP_FILE"
sed -i 's/network_stack_packet_transmission_buffer_58/network_stack_packet_transmission_buffer_primary/g' "$TEMP_FILE"

# 替换网络栈字符数据变量名
sed -i 's/network_stack_character_data_58/network_stack_character_data_primary_a/g' "$TEMP_FILE"
sed -i 's/network_stack_character_data_54/network_stack_character_data_primary_b/g' "$TEMP_FILE"
sed -i 's/network_stack_character_data_50/network_stack_character_data_primary_c/g' "$TEMP_FILE"
sed -i 's/network_stack_character_data_4c/network_stack_character_data_primary_d/g' "$TEMP_FILE"

# 替换网络连接状态变量名
sed -i 's/network_stack_connection_state_78/network_stack_connection_state_primary/g' "$TEMP_FILE"

# 替换网络会话上下文变量名
sed -i 's/network_session_context_ptr_318/network_session_context_ptr_primary/g' "$TEMP_FILE"

# 替换网络配置指针变量名
sed -i 's/network_configuration_ptr_168/network_configuration_ptr_primary/g' "$TEMP_FILE"

# 替换回原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "网络系统变量名美化完成"