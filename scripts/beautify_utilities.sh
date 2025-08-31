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

# 统一常量命名规范
sed -i 's/UTILITY_THREAD_STORAGE_ARRAY_INDEX_DATA/UTILITY_THREAD_STORAGE_INDEX_DATA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_THREAD_STORAGE_ARRAY_INDEX_EXTRA/UTILITY_THREAD_STORAGE_INDEX_EXTRA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_THREAD_STORAGE_ARRAY_INDEX_CLEANUP/UTILITY_THREAD_STORAGE_INDEX_CLEANUP/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_RESOURCE_HANDLE_PARAM_OFFSET_QUATERNARY/UTILITY_RESOURCE_HANDLE_OFFSET_QUATERNARY/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_RESOURCE_HANDLE_PARAM_OFFSET_SENARY/UTILITY_RESOURCE_HANDLE_OFFSET_SENARY/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_RESOURCE_HANDLE_PARAM_OFFSET_TERTIARY/UTILITY_RESOURCE_HANDLE_OFFSET_TERTIARY/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_RESOURCE_HANDLE_PARAM_OFFSET_QUINARY/UTILITY_RESOURCE_HANDLE_OFFSET_QUINARY/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_RESOURCE_CLEANUP_OFFSET_EXTENDED_C60/UTILITY_RESOURCE_CLEANUP_OFFSET_C60/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_RESOURCE_CLEANUP_OFFSET_EXTENDED_1CF0/UTILITY_RESOURCE_CLEANUP_OFFSET_1CF0/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_TLS_OFFSET_EXTENDED_23A0/UTILITY_TLS_OFFSET_23A0/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_DATA_OFFSET_EXTENDED_1B00/UTILITY_DATA_OFFSET_1B00/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_DATA_OFFSET_EXTENDED_1B40/UTILITY_DATA_OFFSET_1B40/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_DATA_OFFSET_EXTENDED_1B48/UTILITY_DATA_OFFSET_1B48/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_DATA_OFFSET_EXTENDED_1B80/UTILITY_DATA_OFFSET_1B80/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 统一函数参数命名
sed -i 's/utility_resource_primary_handle/resource_primary_handle/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/utility_result/operation_result/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 统一错误代码命名
sed -i 's/UTILITY_ERROR_FLAG/UTILITY_ERROR_CODE_INVALID/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 统一内存操作常量
sed -i 's/UTILITY_MEMORY_NEGATIVE_OFFSET/UTILITY_MEMORY_NEGATIVE_OFFSET/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_MEMORY_FLAG/UTILITY_MEMORY_OPERATION_FLAG/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 统一数据偏移量常量
sed -i 's/UTILITY_DATA_OFFSET/UTILITY_PRIMARY_DATA_OFFSET/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_OFFSET_RESOURCE_PTR/UTILITY_RESOURCE_POINTER_OFFSET/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 统一索引常量
sed -i 's/UTILITY_INDEX_ONE/UTILITY_INDEX_PRIMARY/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 统一字节掩码常量
sed -i 's/UTILITY_BYTE_MASK_EF/UTILITY_BYTE_MASK_239/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_BYTE_MASK_DF/UTILITY_BYTE_MASK_223/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_BYTE_MASK_BF/UTILITY_BYTE_MASK_191/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_BYTE_MASK_EXTENDED_PRIMARY/UTILITY_BYTE_MASK_FULL/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_WORD_MASK_FEFF/UTILITY_WORD_MASK_65279/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 统一其他常量
sed -i 's/UTILITY_CHAR_NULL/UTILITY_NULL_CHAR/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_STACK_PRIMARY/UTILITY_PRIMARY_STACK/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_OFFSET_STRUCTURE/UTILITY_STRUCTURE_OFFSET/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 统一偏移量常量
sed -i 's/UTILITY_OFFSET_LIST_HANDLE/UTILITY_LIST_HANDLE_OFFSET/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_OFFSET_STRUCT_ONE/UTILITY_STRUCT_PRIMARY_OFFSET/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_OFFSET_PTR_CHECKSUM/UTILITY_CHECKSUM_POINTER_OFFSET/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_OFFSET_SECONDARY_BYTE/UTILITY_BYTE_SECONDARY_OFFSET/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_OFFSET_DATA/UTILITY_GENERAL_OFFSET/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_SECONDARY_BYTE_OFFSET/UTILITY_BYTE_OFFSET_SECONDARY/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 统一大小相关常量
sed -i 's/UTILITY_SIZE_OFFSET_EXTENDED_BYTE/UTILITY_BYTE_SIZE_OFFSET/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_SIZE_STANDARD/UTILITY_STANDARD_SIZE/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_SIZE_LIMIT_STANDARD/UTILITY_STANDARD_SIZE_LIMIT/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 统一检查标志常量（使用十进制值）
sed -i 's/UTILITY_CHECK_FLAG_10/UTILITY_CHECK_FLAG_16/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_CHECK_FLAG_28/UTILITY_CHECK_FLAG_40/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_CHECK_FLAG_30/UTILITY_CHECK_FLAG_48/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_CHECK_FLAG_50/UTILITY_CHECK_FLAG_80/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_CHECK_FLAG_60/UTILITY_CHECK_FLAG_96/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_CHECK_FLAG_70/UTILITY_CHECK_FLAG_112/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_CHECK_FLAG_98/UTILITY_CHECK_FLAG_152/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_CHECK_FLAG_B0/UTILITY_CHECK_FLAG_176/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_CHECK_FLAG_B8/UTILITY_CHECK_FLAG_184/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_CHECK_FLAG_D0/UTILITY_CHECK_FLAG_208/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_CHECK_FLAG_E0/UTILITY_CHECK_FLAG_224/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/UTILITY_CHECK_FLAG_F0/UTILITY_CHECK_FLAG_240/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "06_utilities.c 文件美化完成"