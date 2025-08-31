#!/bin/bash

# 01_initialization.c 文件变量名语义化美化脚本
# 简化实现：仅将常见的非语义化变量名替换为语义化名称
# 原本实现：完全重构所有变量命名体系，建立统一的语义化命名规范

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 栈变量美化
sed -i 's/uStackX_\([0-9]\+\)/system_stack_uint_\1/g' "$INPUT_FILE"
sed -i 's/iStack_\([0-9]\+\)/system_stack_int_\1/g' "$INPUT_FILE"
sed -i 's/lStack_\([0-9]\+\)/system_stack_long_\1/g' "$INPUT_FILE"
sed -i 's/cStack_\([0-9]\+\)/system_stack_char_\1/g' "$INPUT_FILE"
sed -i 's/pcStack_\([0-9]\+\)/system_stack_ptr_\1/g' "$INPUT_FILE"
sed -i 's/plStackX_\([0-9]\+\)/system_stack_long_ptr_\1/g' "$INPUT_FILE"
sed -i 's/ppsystem_stack_ptr/ppsystem_stack_pointer/g' "$INPUT_FILE"
sed -i 's/system_stack_ptr/system_stack_pointer/g' "$INPUT_FILE"

# 局部变量美化
sed -i 's/puVar1/system_unsigned_ptr_1/g' "$INPUT_FILE"
sed -i 's/piVar1/system_int_ptr_1/g' "$INPUT_FILE"
sed -i 's/plVar1/system_long_ptr_1/g' "$INPUT_FILE"
sed -i 's/pcVar1/system_char_ptr_1/g' "$INPUT_FILE"
sed -i 's/ppiVar1/system_int_ptr_ptr_1/g' "$INPUT_FILE"
sed -i 's/pplVar1/system_long_ptr_ptr_1/g' "$INPUT_FILE"
sed -i 's/ppsystem_long_ptr_ptr/ppsystem_long_pointer_ptr/g' "$INPUT_FILE"

# 寄存器变量美化
sed -i 's/in_R\[0-9]\+/system_register_param/g' "$INPUT_FILE"
sed -i 's/in_RSI/system_register_source_index/g' "$INPUT_FILE"
sed -i 's/in_RDI/system_register_destination_index/g' "$INPUT_FILE"
sed -i 's/in_RAX/system_register_accumulator/g' "$INPUT_FILE"
sed -i 's/in_RBX/system_register_base/g' "$INPUT_FILE"
sed -i 's/in_RCX/system_register_counter/g' "$INPUT_FILE"
sed -i 's/in_RDX/system_register_data/g' "$INPUT_FILE"

# 临时变量美化
sed -i 's/local_[0-9]\+/system_local_var/g' "$INPUT_FILE"
sed -i 's/param_[0-9]\+/system_param/g' "$INPUT_FILE"
sed -i 's/system_temp_[a-zA-Z_]*/system_temp_variable/g' "$INPUT_FILE"

# 数据引用美化
sed -i 's/DAT_180[a-f0-9]\+/system_data_reference/g' "$INPUT_FILE"
sed -i 's/UNK_180[a-f0-9]\+/system_unknown_data/g' "$INPUT_FILE"

# 缓冲区变量美化
sed -i 's/system_buffer_ptr/system_buffer_pointer/g' "$INPUT_FILE"
sed -i 's/system_data_ptr/system_data_pointer/g' "$INPUT_FILE"
sed -i 's/system_node_ptr/system_node_pointer/g' "$INPUT_FILE"
sed -i 's/system_parent_ptr/system_parent_pointer/g' "$INPUT_FILE"
sed -i 's/system_child_ptr/system_child_pointer/g' "$INPUT_FILE"
sed -i 's/system_temp_ptr/system_temp_pointer/g' "$INPUT_FILE"

# 状态变量美化
sed -i 's/system_status_flag/system_initialization_flag/g' "$INPUT_FILE"
sed -i 's/system_comparison_result/system_init_comparison_result/g' "$INPUT_FILE"
sed -i 's/system_resource_handle/system_init_resource_handle/g' "$INPUT_FILE"
sed -i 's/system_context_ptr/system_context_pointer/g' "$INPUT_FILE"

# 其他变量美化
sed -i 's/system_uint_config/system_initialization_uint_config/g' "$INPUT_FILE"
sed -i 's/system_long_context/system_initialization_long_context/g' "$INPUT_FILE"
sed -i 's/system_char_context/system_initialization_char_context/g' "$INPUT_FILE"
sed -i 's/system_handle_ptr/system_initialization_handle_ptr/g' "$INPUT_FILE"
sed -i 's/system_uint_context/system_initialization_uint_context/g' "$INPUT_FILE"
sed -i 's/system_uint_value/system_initialization_uint_value/g' "$INPUT_FILE"
sed -i 's/system_long_value/system_initialization_long_value/g' "$INPUT_FILE"
sed -i 's/system_long_status/system_initialization_long_status/g' "$INPUT_FILE"
sed -i 's/system_long_handle/system_initialization_long_handle/g' "$INPUT_FILE"
sed -i 's/system_char_handle/system_initialization_char_handle/g' "$INPUT_FILE"
sed -i 's/system_int_buffer/system_initialization_int_buffer/g' "$INPUT_FILE"
sed -i 's/system_int_config/system_initialization_int_config/g' "$INPUT_FILE"
sed -i 's/system_int_status/system_initialization_int_status/g' "$INPUT_FILE"
sed -i 's/system_byte_status/system_initialization_byte_status/g' "$INPUT_FILE"
sed -i 's/system_uint_status/system_initialization_uint_status/g' "$INPUT_FILE"
sed -i 's/system_uint_handle/system_initialization_uint_handle/g' "$INPUT_FILE"

echo "01_initialization.c 文件变量名语义化美化完成"