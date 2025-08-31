#!/bin/bash

# 网络系统函数名美化脚本
# 将十六进制函数名替换为语义化函数名

# 定义函数映射关系
declare -A function_mappings=(
    # 网络管理函数
    ["network_management_function_10320"]="network_management_initialize_connection"
    ["network_management_function_10330"]="network_management_validate_connection_state"
    ["network_management_function_10340"]="network_management_process_connection_data"
    ["network_management_function_10350"]="network_management_cleanup_connection_resources"
    ["network_management_function_10360"]="network_management_configure_connection_params"
    ["network_management_function_10370"]="network_management_get_connection_status"
    ["network_management_function_10380"]="network_management_reset_connection_state"
    ["network_management_function_10390"]="network_management_update_connection_metrics"
    ["network_management_function_10400"]="network_management_handle_connection_events"
    ["network_management_function_10410"]="network_management_process_connection_queue"
    ["network_management_function_10420"]="network_management_validate_connection_params"
    ["network_management_function_10430"]="network_management_establish_connection_link"
    ["network_management_function_10440"]="network_management_get_connection_info"
    ["network_management_function_10450"]="network_management_release_connection_resources"
    ["network_management_function_10460"]="network_management_monitor_connection_health"
    ["network_management_function_10470"]="network_management_optimize_connection_performance"
    ["network_management_function_10480"]="network_management_get_connection_handle"
    ["network_management_function_10490"]="network_management_free_connection_resources"
    ["network_management_function_10500"]="network_management_create_connection_context"
    ["network_management_function_10510"]="network_management_send_connection_data"
    ["network_management_function_10520"]="network_management_receive_connection_data"
    ["network_management_function_10530"]="network_management_process_connection_packet"
    ["network_management_function_10540"]="network_management_validate_connection_packet"
    ["network_management_function_10550"]="network_management_handle_connection_errors"
    ["network_management_function_10560"]="network_management_get_connection_stats"
    ["network_management_function_10570"]="network_management_update_connection_stats"
    ["network_management_function_10580"]="network_management_close_connection"
    ["network_management_function_10590"]="network_management_get_connection_timeout"
    ["network_management_function_10600"]="network_management_reset_connection_timeout"
    ["network_management_function_10610"]="network_management_initialize_connection_pool"
    ["network_management_function_10620"]="network_management_cleanup_connection_pool"
    ["network_management_function_10630"]="network_management_validate_connection_pool"
    ["network_management_function_10640"]="network_management_get_connection_from_pool"
    ["network_management_function_10650"]="network_management_return_connection_to_pool"
    ["network_management_function_10660"]="network_management_process_pool_operations"
    ["network_management_function_10670"]="network_management_monitor_pool_performance"
    ["network_management_function_10680"]="network_management_optimize_pool_usage"
    ["network_management_function_10690"]="network_management_handle_pool_events"
    ["network_management_function_10700"]="network_management_validate_pool_state"
    ["network_management_function_10710"]="network_management_get_pool_connection_handle"
    ["network_management_function_10720"]="network_management_release_pool_connection"
    ["network_management_function_10730"]="network_management_create_pool_connection"
    ["network_management_function_10740"]="network_management_destroy_pool_connection"
    ["network_management_function_10750"]="network_management_process_pool_connection"
    ["network_management_function_10760"]="network_management_get_pool_connection_info"
    ["network_management_function_10770"]="network_management_get_pool_connection_status"
    ["network_management_function_10780"]="network_management_validate_pool_connection"
    ["network_management_function_10790"]="network_management_establish_pool_connection"
    ["network_management_function_10800"]="network_management_configure_pool_connection"
    ["network_management_function_10810"]="network_management_get_pool_connection_config"
    ["network_management_function_10820"]="network_management_update_pool_connection_config"
    ["network_management_function_10830"]="network_management_process_pool_connection_data"
    
    # 网络套接字函数
    ["network_socket_function_3950"]="network_socket_establish_connection"
    ["network_socket_function_3960"]="network_socket_configure_connection"
    ["network_socket_function_3990"]="network_socket_validate_connection"
    ["network_socket_function_4000"]="network_socket_initialize_connection"
    ["network_socket_function_4020"]="network_socket_cleanup_connection"
    ["network_socket_function_4030"]="network_socket_release_connection"
    ["network_socket_function_4100"]="network_socket_send_data"
    ["network_socket_function_4110"]="network_socket_receive_data"
    ["network_socket_function_4140"]="network_socket_handle_error"
    ["network_socket_function_4150"]="network_socket_check_status"
    ["network_socket_function_4273"]="network_socket_process_connection_queue"
    ["network_socket_function_4390"]="network_socket_calculate_primary_hash"
    ["network_socket_function_4480"]="network_socket_calculate_secondary_hash"
    ["network_socket_function_4530"]="network_socket_get_current_offset"
    ["network_socket_function_get_workspace"]="network_socket_get_workspace_data"
)

# 遍历所有映射关系并执行替换
for old_name in "${!function_mappings[@]}"; do
    new_name="${function_mappings[$old_name]}"
    
    # 使用sed进行替换
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
    
    echo "替换: $old_name -> $new_name"
done

echo "函数名美化完成"