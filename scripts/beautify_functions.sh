#!/bin/bash

# 美化99_unmatched_functions.c中的函数名
# 将十六进制地址命名的函数替换为语义化名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup"

# 定义函数名映射
# 格式: 原函数名->新函数名

# 网络相关函数
sed -i 's/system_execute_operation_unknown_bff50/system_network_cleanup_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_bffe0/system_network_memory_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_c0070/system_network_resource_allocator/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_c0750/system_network_connection_initializer/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_c07e0/system_network_context_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_c298c/system_network_data_processor/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_c2ab0/system_network_packet_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_c48e0/system_network_socket_manager/g' "$FILE_PATH"

# 内存管理相关函数
sed -i 's/system_execute_operation_unknown_fa5d0/system_memory_pool_allocator/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_fbe20/system_memory_block_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_fbf40/system_memory_page_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_fbf80/system_memory_segment_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_fcd90/system_memory_buffer_allocator/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_ff090/system_memory_region_handler/g' "$FILE_PATH"

# 系统初始化相关函数
sed -i 's/system_execute_operation_unknown_1a4e70/system_system_context_initializer/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1b7270/system_system_config_loader/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1b7d80/system_system_state_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1b8340/system_system_resource_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1b8e40/system_system_service_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1bd320/system_system_parameter_validator/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1bd980/system_system_thread_initializer/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1be7f0/system_system_process_manager/g' "$FILE_PATH"

# 数据处理相关函数
sed -i 's/system_execute_operation_unknown_1c08f0/system_data_structure_processor/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1c1aa0/system_data_array_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1c1c40/system_data_buffer_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1c26f0/system_data_stream_processor/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1c2830/system_data_file_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1c7390/system_data_conversion_handler/g' "$FILE_PATH"

# 资源管理相关函数
sed -i 's/system_execute_operation_unknown_1def40/system_resource_cache_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1e8210/system_resource_allocation_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1ea410/system_resource_reference_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1ea860/system_resource_tracking_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1eac40/system_resource_lifecycle_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1eae40/system_resource_cleanup_handler/g' "$FILE_PATH"

# 系统服务相关函数
sed -i 's/system_execute_operation_unknown_1f0780/system_service_registry_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1f1250/system_service_request_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1f2390/system_service_response_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1f3600/system_service_initialization_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1f3650/system_service_configuration_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1f9d3c/system_service_monitor/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1fd160/system_service_health_checker/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_1ff120/system_service_scheduler/g' "$FILE_PATH"

# 系统通信相关函数
sed -i 's/system_execute_operation_unknown_23a260/system_ipc_message_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_23c2e0/system_ipc_channel_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_23ec00/system_ipc_signal_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_241e30/system_ipc_event_processor/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2426e0/system_ipc_queue_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_242a00/system_ipc_buffer_allocator/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_242a50/system_ipc_semaphore_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_244080/system_ipc_mutex_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_244110/system_ipc_shared_memory_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_244540/system_ipc_connection_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_244d90/system_ipc_protocol_handler/g' "$FILE_PATH"

# 系统工具相关函数
sed -i 's/system_execute_operation_unknown_24d120/system_utility_string_processor/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_254770/system_utility_math_library/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2547f0/system_utility_crypto_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_254e90/system_utility_compression_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_255800/system_utility_encoding_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2567b0/system_utility_checksum_calculator/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_257820/system_utility_hash_generator/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2578c0/system_utility_random_generator/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_257ae0/system_utility_time_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_257cb0/system_utility_date_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_258000/system_utility_timezone_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_25ac70/system_utility_locale_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_25ba50/system_utility_format_processor/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_25f390/system_utility_validation_engine/g' "$FILE_PATH"

# 系统监控相关函数
sed -i 's/system_execute_operation_unknown_262940/system_monitoring_metrics_collector/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_26d890/system_monitoring_performance_tracker/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_26db60/system_monitoring_resource_watcher/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_26ead0/system_monitoring_event_logger/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_26eba0/system_monitoring_alert_handler/g' "$FILE_PATH"

# 系统安全相关函数
sed -i 's/system_execute_operation_unknown_2a0730/system_security_authentication_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2aa800/system_security_authorization_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2ac160/system_security_encryption_engine/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2ac310/system_security_key_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2b67a0/system_security_certificate_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2bf680/system_security_audit_logger/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2c02d0/system_security_policy_enforcer/g' "$FILE_PATH"

# 文件系统相关函数
sed -i 's/system_execute_operation_unknown_2c5aa0/system_filesystem_directory_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2c6e20/system_filesystem_file_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2db150/system_filesystem_path_resolver/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2db1a0/system_filesystem_permission_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2e6a20/system_filesystem_metadata_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2e6a80/system_filesystem_cache_handler/g' "$FILE_PATH"

# 系统调试相关函数
sed -i 's/system_execute_operation_unknown_2f23a0/system_debug_symbol_resolver/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2f43bc/system_debug_stack_tracer/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2f4f50/system_debug_memory_analyzer/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2f5ef0/system_debug_breakpoint_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2f6040/system_debug_profiler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2f6320/system_debug_log_manager/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2f8990/system_debug_exception_handler/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2fa010/system_debug_crash_reporter/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2fb490/system_debug_state_dumper/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_2fb620/system_debug_inspector/g' "$FILE_PATH"

# 系统UI相关函数
sed -i 's/system_execute_operation_unknown_3a0f80/system_ui_event_dispatcher/g' "$FILE_PATH"
sed -i 's/system_execute_operation_unknown_3a7870/system_ui_render_manager/g' "$FILE_PATH"

echo "函数名美化完成"