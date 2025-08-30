#!/bin/bash

# 06_utilities.c 代码美化脚本
# 2025年8月30日最终批次

# 创建scripts目录
mkdir -p scripts

# 美化工具系统常量定义中的硬编码值
sed -i 's/UTILITY_SIZE_MULTIPLIER_STANDARD/1.5f/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 美化资源句柄valueta偏移量变量名
sed -i 's/utility_resource_handle_offset_valueta_12/utility_resource_handle_offset_valueta_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/utility_resource_handle_offset_valueta_13/utility_resource_handle_offset_valueta_secondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 美化栈缓冲区相关常量
sed -i 's/utility_stack_buffer_local_address/utility_stack_buffer_address_initial/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 美化资源操作相关常量
sed -i 's/utility_resource_offset_130/utility_resource_offset_standard/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 美化字符操作相关常量
sed -i 's/utility_char_offset_24/utility_char_offset_standard/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 美化栈偏移量相关常量
sed -i 's/utility_stack_offset_neg_19/utility_stack_offset_neg_large/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/utility_stack_offset_neg_15/utility_stack_offset_neg_medium/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/utility_stack_offset_neg_13/utility_stack_offset_neg_small/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 美化栈写入大小相关常量
sed -i 's/utility_stack_write_size_4/utility_stack_write_size_standard/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/utility_stack_write_size_2/utility_stack_write_size_half/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 美化资源状态偏移量相关常量
sed -i 's/utility_resource_status_offset_alt8/utility_resource_status_offset_secondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 美化栈数据偏移量相关常量
sed -i 's/utility_stack_data_offset_13/utility_stack_data_offset_standard/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 美化内存地址偏移量相关常量
sed -i 's/utility_memory_address_offset_access_data_1140/utility_memory_address_offset_access_data_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/utility_memory_address_offset_access_data_1130/utility_memory_address_offset_access_data_secondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/utility_memory_address_offset_operation_data_1110/utility_memory_address_offset_operation_data_primary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/utility_memory_address_offset_operation_data_1120/utility_memory_address_offset_operation_data_secondary/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "代码美化完成"