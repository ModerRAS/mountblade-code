#!/bin/bash

# 网络系统变量名美化脚本
# 将临时变量名替换为语义化名称

# 定义替换规则
declare -A replacements=(
    ["network_stack_temp_config"]="network_stack_configuration_value"
    ["network_stack_temp_offset_value"]="network_stack_temporary_offset"
    ["network_stack_temp_index"]="network_stack_temporary_index"
    ["network_stack_temp_counter"]="network_stack_temporary_counter"
    ["network_stack_temp_pointer"]="network_stack_temporary_pointer"
    ["network_stack_temp_offset"]="network_stack_temporary_offset_value"
    ["network_stack_temp_zero"]="network_stack_temporary_zero_value"
    ["network_stack_temp_socket_config"]="network_stack_socket_configuration"
    ["network_stack_temp_status"]="network_stack_status_value"
    ["network_stack_temp_pointer_array"]="network_stack_temporary_pointer_array"
    ["network_stack_temp_packet_offset"]="network_stack_packet_offset_value"
    ["network_stack_temp_long_pointer_secondary"]="network_stack_temporary_long_pointer_secondary"
    ["network_stack_temp_config_pointer"]="network_stack_temporary_config_pointer"
    ["network_stack_temppointer_primary"]="network_stack_temporary_pointer_primary"
    ["network_stack_temp_primary_buffer"]="network_stack_primary_temporary_buffer"
    ["network_temp_bufferfer_data_offset"]="network_temporary_buffer_data_offset"
    ["network_active_conn_cnt"]="network_active_connection_count"
    ["network_connection_offset_config"]="network_connection_offset_configuration"
)

# 应用替换规则
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
done

echo "网络系统变量名美化完成"