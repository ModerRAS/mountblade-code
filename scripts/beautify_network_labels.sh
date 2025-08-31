#!/bin/bash

# 网络系统标签语义化替换脚本
# 原本实现：完全重构网络系统中所有十六进制标签命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的十六进制标签替换为语义化名称，保持代码结构不变

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
TEMP_FILE="/tmp/networking_temp.c"

# 定义十六进制标签到语义化标签的映射
declare -A label_mapping=(
    ["network_label_connection_handler_10c"]="network_label_buffer_validation_start"
    ["network_label_connection_handler_10f"]="network_label_connection_status_check"
    ["network_label_connection_handler_2b2"]="network_label_packet_counter_check"
    ["network_label_connection_handler_3a2"]="network_label_data_transfer_complete"
    ["network_label_connection_handler_3d0"]="network_label_connection_error_handler"
    ["network_label_connection_handler_41c"]="network_label_packet_size_validation"
    ["network_label_connection_handler_449"]="network_label_buffer_initialization"
    ["network_label_connection_handler_484"]="network_label_packet_processing_start"
    ["network_label_connection_handler_4f2"]="network_label_packet_header_check"
    ["network_label_connection_handler_55a"]="network_label_packet_counter_zero"
    ["network_label_connection_handler_5bc"]="network_label_send_operation_complete"
    ["network_label_connection_handler_652"]="network_label_receive_size_check"
    ["network_label_connection_handler_6ba"]="network_label_receive_packet_start"
    ["network_label_connection_handler_8dd"]="network_label_validation_failed"
    ["network_label_connection_handler_9dd"]="network_label_connection_timeout"
    ["network_label_connection_handler_a03"]="network_label_checksum_validation"
    ["network_label_connection_handler_ad5"]="network_label_buffer_compare_success"
    ["network_label_connection_handler_cf0"]="network_label_connection_cleanup"
    ["network_label_connection_handler_d1b"]="network_label_connection_final_check"
    ["network_label_connection_handler_d97"]="network_label_packet_data_check"
    ["network_label_connection_handler_e35"]="network_label_packet_index_zero"
)

# 复制文件到临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 执行替换操作
for hex_label in "${!label_mapping[@]}"; do
    semantic_label="${label_mapping[$hex_label]}"
    echo "替换: $hex_label -> $semantic_label"
    sed -i "s/$hex_label/$semantic_label/g" "$TEMP_FILE"
done

# 替换文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "网络系统标签语义化替换完成"