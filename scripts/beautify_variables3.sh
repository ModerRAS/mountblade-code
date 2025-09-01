#!/bin/bash

# 第三轮变量名美化脚本
# 处理函数内部变量名和系统管理器变量名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 01_initialization.c 01_initialization.c.bak

# 美化系统管理器变量名
sed -i 's/system_context_manager_ptr/system_context_manager_handle_ptr/g' 01_initialization.c
sed -i 's/system_thread_manager_ptr/system_thread_manager_handle_ptr/g' 01_initialization.c
sed -i 's/system_audio_manager_ptr/system_audio_manager_handle_ptr/g' 01_initialization.c
sed -i 's/system_network_manager_ptr/system_network_manager_handle_ptr/g' 01_initialization.c
sed -i 's/system_render_manager_ptr/system_render_manager_handle_ptr/g' 01_initialization.c
sed -i 's/system_script_engine_manager/system_script_engine_manager_ptr/g' 01_initialization.c
sed -i 's/system_module_loader_ptr/system_module_loader_handle_ptr/g' 01_initialization.c
sed -i 's/system_resource_loader_ptr/system_resource_loader_handle_ptr/g' 01_initialization.c
sed -i 's/system_audio_engine_ptr/system_audio_engine_handle_ptr/g' 01_initialization.c
sed -i 's/system_render_context_manager_ptr_ptr/system_render_context_manager_handle_ptr/g' 01_initialization.c
sed -i 's/system_render_buffer_manager_ptr/system_render_buffer_manager_handle_ptr/g' 01_initialization.c
sed -i 's/system_render_pipeline_manager_ptr/system_render_pipeline_manager_handle_ptr/g' 01_initialization.c
sed -i 's/system_subsystem_manager_ptr/system_subsystem_manager_handle_ptr/g' 01_initialization.c
sed -i 's/system_subsystem_config_manager_ptr/system_subsystem_config_manager_handle_ptr/g' 01_initialization.c
sed -i 's/system_subsystem_status_manager_ptr/system_subsystem_status_manager_handle_ptr/g' 01_initialization.c
sed -i 's/system_subsystem_cache_manager_ptr/system_subsystem_cache_manager_handle_ptr/g' 01_initialization.c
sed -i 's/system_subsystem_event_manager_ptr/system_subsystem_event_manager_handle_ptr/g' 01_initialization.c
sed -i 's/system_subsystem_registry_manager_ptr/system_subsystem_registry_manager_handle_ptr/g' 01_initialization.c
sed -i 's/system_subsystem_metadata_manager_ptr/system_subsystem_metadata_manager_handle_ptr/g' 01_initialization.c

# 美化系统数据变量名
sed -i 's/system_global_config_data/system_global_config_buffer/g' 01_initialization.c
sed -i 's/system_memory_pool_data/system_memory_pool_buffer/g' 01_initialization.c
sed -i 's/system_resource_cache_data/system_resource_cache_buffer/g' 01_initialization.c
sed -i 's/system_graphics_data_buffer/system_graphics_data_buffer/g' 01_initialization.c
sed -i 's/system_input_data_buffer/system_input_data_buffer/g' 01_initialization.c
sed -i 's/system_config_data/system_config_buffer/g' 01_initialization.c
sed -i 's/system_physics_data/system_physics_buffer/g' 01_initialization.c
sed -i 's/system_config_cache_data/system_config_cache_buffer/g' 01_initialization.c
sed -i 's/system_config_storage_data/system_config_storage_buffer/g' 01_initialization.c
sed -i 's/system_resource_metadata_data/system_resource_metadata_buffer/g' 01_initialization.c
sed -i 's/system_resource_pool_data/system_resource_pool_buffer/g' 01_initialization.c
sed -i 's/system_device_config_data/system_device_config_buffer/g' 01_initialization.c
sed -i 's/system_render_device_buffer/system_render_device_buffer/g' 01_initialization.c

# 美化函数变量名
sed -i 's/system_core_init_function/system_core_init_handler/g' 01_initialization.c
sed -i 's/system_memory_init_function/system_memory_init_handler/g' 01_initialization.c
sed -i 's/system_thread_init_function/system_thread_init_handler/g' 01_initialization.c
sed -i 's/system_config_init_function/system_config_init_handler/g' 01_initialization.c
sed -i 's/system_resource_init_function/system_resource_init_handler/g' 01_initialization.c
sed -i 's/system_audio_init_function/system_audio_init_handler/g' 01_initialization.c
sed -i 's/system_network_init_function/system_network_init_handler/g' 01_initialization.c
sed -i 's/system_render_init_function/system_render_init_handler/g' 01_initialization.c
sed -i 's/system_input_init_function/system_input_init_handler/g' 01_initialization.c
sed -i 's/system_subsystem_init_function/system_subsystem_init_handler/g' 01_initialization.c
sed -i 's/system_icall_guard_function/system_icall_guard_handler/g' 01_initialization.c

# 美化系统线程调度变量
sed -i 's/system_thread_scheduler_ptr/system_thread_scheduler_handle_ptr/g' 01_initialization.c

# 美化资源索引变量
sed -i 's/system_resource_index_value/system_resource_index_counter/g' 01_initialization.c

echo "第三轮变量名美化完成"