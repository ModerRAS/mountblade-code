#!/bin/bash

# 美化脚本：替换数组变量名为语义化名称
# 2025年8月30日最终批次

FILE="TaleWorlds.Native/src/01_initialization.c"

# 使用sed替换数组变量名
sed -i 's/asystem_stack_uint_size_field/system_stack_array_size_field/g' "$FILE"
sed -i 's/asystem_stack_uint_118/system_stack_array_config_118/g' "$FILE"
sed -i 's/asystem_stack_uint_d0/system_stack_array_data_d0/g' "$FILE"
sed -i 's/asystem_stack_uint_d8/system_stack_array_data_d8/g' "$FILE"

echo "美化完成：数组变量名已替换为语义化名称"