#!/bin/bash

# 美化06_utilities.c文件中的函数名
# 将func_0x000180851460等替换为更有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换一些函数名为更有意义的名称
sed -i 's/func_0x000180851460/process_system_data/g' 06_utilities.c
sed -i 's/func_0x000180861a30/validate_system_integrity/g' 06_utilities.c
sed -i 's/func_0x00018085eef0/cleanup_system_resources/g' 06_utilities.c
sed -i 's/func_0x00018084dcc0/calculate_resource_size/g' 06_utilities.c
sed -i 's/func_0x0001808757f0/allocate_memory_resource/g' 06_utilities.c
sed -i 's/func_0x0001808d2620/initialize_resource_table/g' 06_utilities.c
sed -i 's/func_0x0001808d2660/setup_resource_mapping/g' 06_utilities.c
sed -i 's/func_0x0001808d2830/activate_resource_handlers/g' 06_utilities.c
sed -i 's/func_0x0001808c2130/register_resource_callbacks/g' 06_utilities.c
sed -i 's/func_0x00018088aed0/release_memory_resources/g' 06_utilities.c
sed -i 's/func_0x00018088c500/validate_resource_handle/g' 06_utilities.c
sed -i 's/func_0x0001808c8710/query_resource_status/g' 06_utilities.c
sed -i 's/func_0x0001808c8700/check_resource_availability/g' 06_utilities.c

echo "美化完成"