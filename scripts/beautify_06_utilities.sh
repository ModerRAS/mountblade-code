#!/bin/bash

# 06_utilities.c 变量名美化脚本
# 美化工具系统中的变量名，提高代码可读性

echo "开始美化 06_utilities.c 文件..."

# 备份原始文件
cp "TaleWorlds.Native/src/06_utilities.c" "TaleWorlds.Native/src/06_utilities.c.backup"

# 美化变量名 - 将通用变量名替换为语义化名称
sed -i 's/\bmemory_block_handle\b/utility_memory_block_handle/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\ballocation_status\b/utility_allocation_status/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\bprocessed_block_count\b/utility_processed_block_count/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\bmemory_block_count\b/utility_memory_block_count/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_temp_unsigned_value\b/utility_temp_unsigned_integer/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_cleanup_memory_handle\b/utility_cleanup_memory_block_handle/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_cleanup_status_code\b/utility_cleanup_operation_status/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_loop_iteration_count\b/utility_loop_counter/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_stack_buffer_capacity\b/utility_stack_buffer_size/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_stack_buffer_mask\b/utility_stack_buffer_bitmask/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_data_buffer_index\b/utility_buffer_data_index/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\bsystem_status_code\b/utility_system_operation_status/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\bresource_count\b/utility_resource_item_count/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_capacity\b/utility_buffer_capacity/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\bUTILITY_ITERATION_COUNTER_PRIMARY_primary\b/utility_primary_iteration_counter/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_operation_status_code\b/utility_operation_result_status/g' "TaleWorlds.Native/src/06_utilities.c"

# 美化更多变量名
sed -i 's/\butility_allocated_memory_pointer\b/utility_allocated_memory_block_ptr/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\bsecurity_validation_token\b/utility_security_auth_token/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\bresource_info_array\b/utility_resource_information_array/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\bsecurity_buffer\b/utility_security_data_buffer/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\bworking_buffer\b/utility_working_data_buffer/g' "TaleWorlds.Native/src/06_utilities.c"

# 美化函数指针变量名
sed -i 's/\bInitializeThreadLocalStorage\b/utility_initialize_thread_storage_func/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\bCleanupThreadResources\b/utility_cleanup_thread_resources_func/g' "TaleWorlds.Native/src/06_utilities.c"

# 美化系统状态变量名
sed -i 's/\bmemoryAllocatorStatusFlag\b/utility_memory_allocator_status/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\bsystemCPUStatus\b/utility_system_cpu_status/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\bsystemMemoryStatus\b/utility_system_memory_status/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\bsystemIOStatus\b/utility_system_io_status/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\bsystemNetworkStatus\b/utility_system_network_status/g' "TaleWorlds.Native/src/06_utilities.c"

# 美化错误处理变量名
sed -i 's/\berrorHandlerSeverityLevel\b/utility_error_severity_level/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\berrorHandlerCategory\b/utility_error_category/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\berrorHandlerRecoveryMode\b/utility_error_recovery_mode/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\berrorHandlerLoggingEnabled\b/utility_error_logging_enabled/g' "TaleWorlds.Native/src/06_utilities.c"

# 美化线程相关变量名
sed -i 's/\btlsPointer\b/utility_thread_local_storage_ptr/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\bsecurity_stack_base\b/utility_security_stack_base_ptr/g' "TaleWorlds.Native/src/06_utilities.c"

# 美化事件系统变量名
sed -i 's/\butility_event_priority_data\b/utility_event_system_priority/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_memory_debug_info\b/utility_memory_debug_data/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_event_system_timeout_data\b/utility_event_system_timeout/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_memory_block_leak_detector\b/utility_memory_leak_detector/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_system_call_buffer\b/utility_system_call_data_buffer/g' "TaleWorlds.Native/src/06_utilities.c"

# 美化更多系统变量名
sed -i 's/\butility_event_system_filter_data\b/utility_event_filter_data/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_event_system_handler_data\b/utility_event_handler_data/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_event_system_manager_data\b/utility_event_manager_data/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_event_system_cleanup_data\b/utility_event_cleanup_data/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_event_system_initialization_data\b/utility_event_init_data/g' "TaleWorlds.Native/src/06_utilities.c"

# 美化缓冲区管理变量名
sed -i 's/\butility_buffer_system_manager\b/utility_buffer_manager/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_buffer_system_pool\b/utility_buffer_pool/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_buffer_manager_state\b/utility_buffer_management_state/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_buffer_pool_address\b/utility_buffer_pool_base_address/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_buffer_pool_size\b/utility_buffer_pool_capacity/g' "TaleWorlds.Native/src/06_utilities.c"

# 美化系统管理变量名
sed -i 's/\butility_system_area_data\b/utility_system_region_data/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_system_manager_buffer\b/utility_system_management_buffer/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_system_error_data\b/utility_system_error_info/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_system_status_data\b/utility_system_operation_data/g' "TaleWorlds.Native/src/06_utilities.c"
sed -i 's/\butility_system_config_data\b/utility_system_configuration_data/g' "TaleWorlds.Native/src/06_utilities.c"

echo "美化完成！"
echo "美化内容："
echo "- 美化了内存分配相关变量名，将memory_block_handle替换为utility_memory_block_handle等"
echo "- 美化了状态码变量名，将allocation_status替换为utility_allocation_status等"
echo "- 美化了计数器变量名，将processed_block_count替换为utility_processed_block_count等"
echo "- 美化了缓冲区相关变量名，将utility_stack_buffer_capacity替换为utility_stack_buffer_size等"
echo "- 美化了系统状态变量名，将systemCPUStatus替换为utility_system_cpu_status等"
echo "- 美化了错误处理变量名，将errorHandlerSeverityLevel替换为utility_error_severity_level等"
echo "- 美化了线程相关变量名，将tlsPointer替换为utility_thread_local_storage_ptr等"
echo "- 美化了事件系统变量名，将utility_event_priority_data替换为utility_event_system_priority等"
echo "- 美化了缓冲区管理变量名，将utility_buffer_system_manager替换为utility_buffer_manager等"
echo "- 美化了系统管理变量名，将utility_system_area_data替换为utility_system_region_data等"
echo "提高了代码的可读性和维护性"
echo "保持代码语义不变，这是简化实现，主要处理了工具系统中变量名的语义化替换"
echo "原本实现：完全重构变量命名体系"
echo "简化实现：仅将常见的通用变量名替换为语义化名称"