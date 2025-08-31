#!/bin/bash

# 网络系统变量名美化脚本（第二批次）
# 原本实现：完全重构网络系统所有命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化变量名替换为语义化名称，保持代码结构不变

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 替换变量名
sed -i 's/abStack_/network_stack_ab_/g' "$INPUT_FILE"
sed -i 's/bStack_/network_stack_b_/g' "$INPUT_FILE"
sed -i 's/network_integer_value_primary/network_integer_primary/g' "$INPUT_FILE"
sed -i 's/network_integer_value_secondary/network_integer_secondary/g' "$INPUT_FILE"
sed -i 's/network_stack_array_/network_stack_array_data_/g' "$INPUT_FILE"
sed -i 's/network_stack_pointer_/network_stack_ptr_/g' "$INPUT_FILE"
sed -i 's/network_buffer_index_value/network_buffer_index/g' "$INPUT_FILE"
sed -i 's/network_data_register_address/network_data_register_ptr/g' "$INPUT_FILE"
sed -i 's/network_connection_handle_value/network_connection_handle/g' "$INPUT_FILE"

echo "第二批次变量名美化完成"