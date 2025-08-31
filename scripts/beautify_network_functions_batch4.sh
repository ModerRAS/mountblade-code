#!/bin/bash

# 网络系统函数名美化脚本 - 第四批（最终批）
# 用于将逆向工程中的函数名替换为语义化的名称

# 定义函数映射关系
declare -A FUNCTION_MAP=(
    # 第四批 network_data_function 系列函数
    ["network_data_function_817a"]="network_initialize_authentication_context"
    ["network_data_function_8184"]="network_validate_authentication_credentials"
    ["network_data_function_8190"]="network_process_authentication_data"
    ["network_data_function_8200"]="network_handle_authentication_response"
    ["network_data_function_8217"]="network_complete_authentication_process"
    ["network_data_function_8226"]="network_cleanup_authentication_resources"
    ["network_data_function_8230"]="network_verify_authentication_token"
    ["network_data_function_8244"]="network_complete_authentication_validation"
    ["network_data_function_8258"]="network_reset_authentication_state"
    ["network_data_function_8262"]="network_initialize_session_context"
    ["network_data_function_8279"]="network_setup_session_handlers"
    ["network_data_function_8282"]="network_process_session_data"
    ["network_data_function_8290"]="network_handle_session_events"
    ["network_data_function_8300"]="network_manage_session_connections"
    ["network_data_function_8311"]="network_validate_session_integrity"
    ["network_data_function_8324"]="network_complete_session_setup"
    ["network_data_function_8333"]="network_finalize_session_process"
    ["network_data_function_834e"]="network_cleanup_session_resources"
    ["network_data_function_8350"]="network_handle_session_operations"
    ["network_data_function_8360"]="network_process_session_buffer"
    ["network_data_function_8377"]="network_verify_session_checksum"
    ["network_data_function_838e"]="network_complete_session_transfer"
    ["network_data_function_8398"]="network_reset_session_state"
    ["network_data_function_8407"]="network_initialize_protocol_handlers"
    ["network_data_function_8410"]="network_handle_protocol_data"
    ["network_data_function_8428"]="network_validate_protocol_integrity"
    ["network_data_function_8434"]="network_complete_protocol_processing"
    ["network_data_function_8441"]="network_cleanup_protocol_resources"
    ["network_data_function_8451"]="network_reset_protocol_state"
    ["network_data_function_8460"]="network_process_protocol_operations"
    
    # 处理其他可能的函数模式
    ["network_initialize_systemr_function"]="network_initialize_system_secondary_function"
    ["network_initialize_socket_context"]="network_setup_socket_context_handlers"
    ["network_connection_manager_process"]="network_process_connection_manager_events"
    ["network_connection_validate_parameters"]="network_validate_connection_parameter_integrity"
    ["network_connection_verify_context"]="network_verify_connection_context_validity"
    ["network_connection_get_handle"]="network_retrieve_connection_handle"
    ["network_connection_send_packet"]="network_transmit_connection_packet"
    ["network_buffer_copy_data"]="network_duplicate_buffer_data"
    ["network_receive_encrypted_data"]="network_handle_encrypted_data_reception"
    ["network_send_encrypted_data"]="network_transmit_encrypted_data"
    ["network_buffer_process_data"]="network_process_buffer_data_content"
    ["network_connection_cleanup_extended"]="network_perform_extended_connection_cleanup"
    ["network_crypto_encrypt_decrypt"]="network_perform_crypto_encryption_decryption"
    ["network_memory_allocate_buffer"]="network_allocate_memory_buffer"
    ["network_check_extended_status"]="network_verify_extended_connection_status"
    ["network_send_data_packet"]="network_transmit_data_packet"
    ["network_validate_encryption_params"]="network_validate_encryption_parameters"
    ["network_connection_init"]="network_initialize_connection_context"
    ["network_header_validate"]="network_validate_packet_header"
    ["network_data_transfer"]="network_transfer_data_between_buffers"
    ["network_transfer_finalize"]="network_complete_data_transfer_process"
    ["network_encryption_validate"]="network_validate_encryption_integrity"
    ["network_encryption_process"]="network_process_encryption_operations"
    ["network_session_cleanup"]="network_cleanup_session_resources"
    ["network_payload_process"]="network_process_packet_payload"
)

# 遍历函数映射并执行替换
for old_name in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$old_name]}"
    echo "替换: $old_name -> $new_name"
    
    # 使用sed进行替换，处理函数定义和调用
    sed -i "s/\b$old_name\b/$new_name/g" "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
done

echo "第四批函数名美化完成"