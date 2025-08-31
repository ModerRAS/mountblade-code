#!/bin/bash

# 网络系统函数名美化脚本 - 第二批
# 用于将逆向工程中的函数名替换为语义化的名称

# 定义函数映射关系
declare -A FUNCTION_MAP=(
    # 第二批 network_data_function 系列函数
    ["network_data_function_767c"]="network_initialize_connection_pool"
    ["network_data_function_7687"]="network_validate_connection_pool"
    ["network_data_function_768e"]="network_cleanup_connection_pool"
    ["network_data_function_7690"]="network_process_connection_pool"
    ["network_data_function_770f"]="network_setup_connection_pool"
    ["network_data_function_7717"]="network_configure_connection_pool"
    ["network_data_function_7720"]="network_handle_pool_connections"
    ["network_data_function_7733"]="network_validate_pool_integrity"
    ["network_data_function_774d"]="network_complete_pool_setup"
    ["network_data_function_7756"]="network_finalize_pool_configuration"
    ["network_data_function_7888"]="network_process_socket_data"
    ["network_data_function_7896"]="network_cleanup_socket_resources"
    ["network_data_function_7906"]="network_reset_socket_state"
    ["network_data_function_790e"]="network_initialize_socket_handlers"
    ["network_data_function_7910"]="network_handle_socket_operations"
    ["network_data_function_792d"]="network_validate_socket_connection"
    ["network_data_function_793d"]="network_process_socket_events"
    ["network_data_function_7942"]="network_complete_socket_processing"
    ["network_data_function_795a"]="network_handle_socket_timeout"
    ["network_data_function_7969"]="network_finalize_socket_operations"
    
    # 其他可能的函数模式
    ["network_buffer_handler_9020"]="network_process_buffer_handlers"
    ["network_data_handler_8770"]="network_process_data_handlers"
    ["network_data_handler"]="network_handle_data_processing"
)

# 遍历函数映射并执行替换
for old_name in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$old_name]}"
    echo "替换: $old_name -> $new_name"
    
    # 使用sed进行替换，处理函数定义和调用
    sed -i "s/\b$old_name\b/$new_name/g" "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
done

echo "第二批函数名美化完成"