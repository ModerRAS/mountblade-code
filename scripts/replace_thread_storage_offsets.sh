#!/bin/bash
# 替换06_utilities.c文件中的硬编码十六进制偏移量为语义化常量名

# 文件路径
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 替换硬编码十六进制偏移量为语义化常量名
# 线程本地存储偏移量替换
sed -i "s/utility_thread_storage_offset_380/utility_thread_storage_offset_local_data_primary/g" "$FILE"
sed -i "s/utility_thread_storage_offset_398/utility_thread_storage_offset_local_data_secondary/g" "$FILE"
sed -i "s/utility_thread_storage_offset_348/utility_thread_storage_offset_control_primary/g" "$FILE"
sed -i "s/utility_thread_storage_offset_358/utility_thread_storage_offset_control_secondary/g" "$FILE"
sed -i "s/utility_thread_storage_offset_508/utility_thread_storage_offset_operation_primary/g" "$FILE"
sed -i "s/utility_thread_storage_offset_518/utility_thread_storage_offset_operation_secondary/g" "$FILE"
sed -i "s/utility_thread_storage_offset_538/utility_thread_storage_offset_operation_tertiary/g" "$FILE"
sed -i "s/utility_thread_storage_offset_5E8/utility_thread_storage_offset_status_primary/g" "$FILE"

echo "已完成硬编码十六进制偏移量的语义化替换"