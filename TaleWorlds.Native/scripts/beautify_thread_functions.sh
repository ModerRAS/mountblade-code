#!/bin/bash

# 美化线程池函数名的脚本
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换线程池函数名
sed -i 's/initialize_thread_pool_6/initialize_worker_thread_pool/g' 00_data_definitions.h
sed -i 's/initialize_thread_pool_7/initialize_io_thread_pool/g' 00_data_definitions.h
sed -i 's/initialize_thread_pool_8/initialize_background_thread_pool/g' 00_data_definitions.h
sed -i 's/initialize_thread_pool_9/initialize_priority_thread_pool/g' 00_data_definitions.h

# 替换一些系统初始化函数
sed -i 's/system_initialize_001/initialize_core_system/g' 00_data_definitions.h
sed -i 's/system_initialize_002/initialize_subsystem_modules/g' 00_data_definitions.h
sed -i 's/system_initialize_003/initialize_service_layer/g' 00_data_definitions.h

# 替换一些系统处理函数
sed -i 's/system_thread_manager_002/create_thread_context/g' 00_data_definitions.h
sed -i 's/system_thread_manager_009/allocate_thread_stack/g' 00_data_definitions.h
sed -i 's/system_thread_manager_010/setup_thread_parameters/g' 00_data_definitions.h
sed -i 's/system_event_handler_011/create_event_handle/g' 00_data_definitions.h
sed -i 's/system_event_handler_012/initialize_event_system/g' 00_data_definitions.h
sed -i 's/system_event_handler_014/register_event_callback/g' 00_data_definitions.h

# 替换一些系统清理函数
sed -i 's/system_cleanup_006/cleanup_thread_resources/g' 00_data_definitions.h
sed -i 's/system_helper_001/handle_system_error/g' 00_data_definitions.h
sed -i 's/system_helper_002/allocate_helper_buffer/g' 00_data_definitions.h

echo "线程池和系统函数名替换完成"