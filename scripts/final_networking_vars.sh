#!/bin/bash

# 网络系统变量名最终替换脚本
# 原本实现：完全重构网络系统所有命名体系，建立统一的语义化命名规范
# 简化实现：仅将具体的非语义化变量名替换为语义化名称，保持代码结构不变

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 使用sed进行最终的变量名替换
sed -i 's/network_context_ptr_var/network_context_pointer/g' "$INPUT_FILE"
sed -i 's/network_status_var/network_status/g' "$INPUT_FILE"
sed -i 's/network_result_code_var/network_result_code/g' "$INPUT_FILE"
sed -i 's/network_socket_id_var/network_socket_id/g' "$INPUT_FILE"
sed -i 's/network_connection_id_dup_var/network_connection_id_duplicate/g' "$INPUT_FILE"
sed -i 's/network_buffer_unsigned_data/network_buffer_unsigned_data/g' "$INPUT_FILE"
sed -i 's/network_primary_connection_context_context/network_primary_connection_context_ptr/g' "$INPUT_FILE"

echo "网络系统变量名最终替换完成"