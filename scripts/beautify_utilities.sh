#!/bin/bash

# 06_utilities.c 美化脚本
# 2025年8月31日最新批次完成

# 统一变量命名规范
sed -i 's/UTILITY_STACK_PROCESSING_BUFFER/utility_stack_processing_buffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_STACK_BUFFER_ARRAY/utility_stack_buffer_array/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_STACK_DATA/utility_stack_data/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_FLOAT_PRIMARY_VALUE/utility_primary_float_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_STATUS_VALUE/utility_status_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_COUNTER/utility_counter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_STATE/utility_state/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_PTR_BUFFER/utility_pointer_buffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_TEMPORARY_LONG_STORAGE/utility_temporary_long_storage/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_GENERIC_DATA_POINTER/utility_generic_data_pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_RESULT_POINTER/utility_result_pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_CPU_REGISTER_RAX/utility_cpu_register_rax/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_DATA_POINTER_PRIMARY_EXTENDED/utility_primary_data_pointer_extended/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_SYSTEM_MEMORY_HANDLE/utility_system_memory_handle/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_RESOURCE_BUFFER/utility_resource_buffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_BOUNDARY_TWO/utility_boundary_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_RESOURCE_CONFIG_OFFSET/utility_resource_config_offset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_RESOURCE_TABLE_OFFSET/utility_resource_table_offset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_FRAME_PTR/utility_frame_pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_FILE_DATA_OFFSET/utility_file_data_offset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_FILE_HANDLE_OFFSET/utility_file_handle_offset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_FILE_POSITION_OFFSET/utility_file_position_offset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_RESOURCE_DATA_BUFFER_POSITION/utility_resource_data_buffer_position/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_DATA_BUFFER_PRIMARY/utility_primary_data_buffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_LOCAL_INTEGER_VALUE/utility_local_integer_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_BUFFER_POSITION/utility_buffer_position/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_RESULT/utility_result_value/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_THREAD_OFFSET/utility_thread_offset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_FILE_SIZE_PARAM/utility_file_size_parameter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_EXTENDED_DATA_PTR/utility_extended_data_pointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 统一全局变量命名（去掉g_前缀）
sed -i 's/g_utility_resource_size_limit/utility_resource_size_limit/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "06_utilities.c 文件美化完成"