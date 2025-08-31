#!/bin/bash

# 网络系统深度美化脚本
# 用于美化05_networking.c文件中的所有变量名和函数名

INPUT_FILE="TaleWorlds.Native/src/05_networking.c"

# 创建备份
cp "$INPUT_FILE" "${INPUT_FILE}.backup_deep"

# 变量名美化 - 更全面的替换
sed -i 's/network_third_data_ptr/network_buffer_data_ptr/g' "$INPUT_FILE"
sed -i 's/network_current_memory_offset/network_memory_offset/g' "$INPUT_FILE"
sed -i 's/network_pointer_connection_index/network_connection_index_ptr/g' "$INPUT_FILE"
sed -i 's/network_socket_information/network_socket_info/g' "$INPUT_FILE"
sed -i 's/network_connection_id/network_connection_identifier/g' "$INPUT_FILE"
sed -i 's/network_packet_id/network_packet_identifier/g' "$INPUT_FILE"
sed -i 's/network_checksum_temputed/network_checksum_computed/g' "$INPUT_FILE"
sed -i 's/network_connection_info_ptr/network_connection_info_pointer/g' "$INPUT_FILE"
sed -i 's/network_main_packet_index/network_primary_packet_index/g' "$INPUT_FILE"

# 标签名美化
sed -i 's/LAB_NETWORK_SOCKET_VALIDATION_SECONDARY/LABEL_NETWORK_SOCKET_VALIDATION_SECONDARY/g' "$INPUT_FILE"

# 常量名美化
sed -i 's/NETWORK_NULL_POINTER/NETWORK_INVALID_POINTER/g' "$INPUT_FILE"

echo "网络系统深度美化完成"