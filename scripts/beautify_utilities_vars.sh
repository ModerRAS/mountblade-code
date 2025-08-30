#!/bin/bash

# 美化06_utilities.c文件中的变量名
# 将utility_temp_cache_var等变量名替换为更具语义化的名称

INPUT_FILE="./TaleWorlds.Native/src/06_utilities.c"
BACKUP_FILE="./TaleWorlds.Native/src/06_utilities.c.backup_beautify"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"

# 美化变量名
sed -i 's/utility_temp_cache_var/utility_temp_storage_value/g' "$INPUT_FILE"
sed -i 's/utility_temp_stack_data/utility_temp_stack_buffer/g' "$INPUT_FILE"
sed -i 's/utility_temp_long_register/utility_temp_long_storage/g' "$INPUT_FILE"
sed -i 's/utility_temp_signed_int/utility_temp_signed_integer/g' "$INPUT_FILE"
sed -i 's/utility_temp_long_pointer/utility_temp_long_ptr/g' "$INPUT_FILE"
sed -i 's/utility_temp_stack_data_size_value/utility_temp_stack_buffer_size/g' "$INPUT_FILE"
sed -i 's/utility_temp_resource_index/utility_temp_resource_counter/g' "$INPUT_FILE"
sed -i 's/utility_size_temp_storage/utility_temp_storage_size/g' "$INPUT_FILE"
sed -i 's/utility_temp_loop_counter/utility_temp_iteration_counter/g' "$INPUT_FILE"
sed -i 's/utility_temp_float_cache_secondary/utility_temp_float_storage/g' "$INPUT_FILE"

echo "变量名美化完成"