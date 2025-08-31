#!/bin/bash

# 网络系统变量名美化脚本
# 用于美化 05_networking.c 文件中的非语义化变量名

echo "开始美化网络系统变量名..."

# 备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c.backup

# 定义变量名映射关系
declare -A VAR_MAPPINGS=(
    # 将数字后缀变量名替换为语义化名称
    ["network_stack_templong_40"]="network_stack_temporary_data_size"
    ["network_stack_templong_278"]="network_stack_temporary_packet_count"
    ["network_stack_templong_260"]="network_stack_temporary_timeout_value"
    ["network_stack_templong_258"]="network_stack_temporary_connection_offset"
    ["network_stack_tempuffer_pointer_temp"]="network_stack_temporary_buffer_pointer"
    ["network_stack_temporary_pointer_primary"]="network_stack_temporary_primary_pointer"
    ["network_stack_temporary_offset_value"]="network_stack_temporary_offset_data"
    ["network_stack_temporary_zero_value"]="network_stack_temporary_null_value"
    ["network_stack_temporary_long_pointer_secondary"]="network_stack_temporary_secondary_pointer"
    ["network_stack_temporary_config_pointer"]="network_stack_temporary_configuration_pointer"
    ["network_stack_temporary_pointer_array"]="network_stack_temporary_array_pointer"
    ["network_temporary_buffer_data_offset"]="network_temporary_buffer_data_position"
    ["network_connection_offset_configuration"]="network_connection_config_offset"
    ["network_active_connection_count"]="network_active_connections_total"
    ["network_primary_long_stack_pointer"]="network_primary_stack_long_pointer"
    ["network_connection_counter_value"]="network_connection_count_value"
    ["network_temp_long_stack_offset"]="network_temporary_stack_offset"
    ["network_stack_templong_buffer_data"]="network_stack_temporary_buffer_data"
    ["network_stack_templong_temp_config"]="network_stack_temporary_config_data"
)

# 遍历所有变量名映射并进行替换
for old_name in "${!VAR_MAPPINGS[@]}"; do
    new_name="${VAR_MAPPINGS[$old_name]}"
    echo "替换变量名: $old_name -> $new_name"
    
    # 使用sed进行替换，确保只替换完整的变量名
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
done

echo "变量名美化完成！"

# 验证替换结果
echo "验证替换结果..."
grep -n "network_stack_templong_" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c | head -5

echo "脚本执行完成！"