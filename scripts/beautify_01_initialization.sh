#!/bin/bash

# 变量名美化脚本 - 01_initialization.c
# 将非语义化的变量名替换为语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"
BACKUP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c.backup"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"

# 状态变量名替换
sed -i 's/system_status_flag_1e0/system_initialization_flag_1e0/g' "$INPUT_FILE"
sed -i 's/system_status_flag_1e8/system_initialization_flag_1e8/g' "$INPUT_FILE"
sed -i 's/system_status_flag_1f0/system_initialization_flag_1f0/g' "$INPUT_FILE"
sed -i 's/subsystem_status_flag/subsystem_initialization_status/g' "$INPUT_FILE"

# 栈指针变量名替换
sed -i 's/system_ptr_stack_a0/system_stack_context_pointer_a0/g' "$INPUT_FILE"
sed -i 's/system_ptr_stack_98/system_stack_context_pointer_98/g' "$INPUT_FILE"
sed -i 's/system_ptr_stack_228/system_stack_context_pointer_228/g' "$INPUT_FILE"
sed -i 's/system_ptr_stack_220/system_stack_context_pointer_220/g' "$INPUT_FILE"
sed -i 's/system_ptr_stack_218/system_stack_context_pointer_218/g' "$INPUT_FILE"
sed -i 's/system_ptr_stack_1f8/system_stack_context_pointer_1f8/g' "$INPUT_FILE"
sed -i 's/system_ptr_stack_1f0/system_stack_context_pointer_1f0/g' "$INPUT_FILE"
sed -i 's/system_ptr_stack_1d8/system_stack_context_pointer_1d8/g' "$INPUT_FILE"
sed -i 's/system_ptr_stack_1d0/system_stack_context_pointer_1d0/g' "$INPUT_FILE"
sed -i 's/system_ptr_stack_1b8/system_stack_context_pointer_1b8/g' "$INPUT_FILE"
sed -i 's/system_ptr_stack_188/system_stack_context_pointer_188/g' "$INPUT_FILE"
sed -i 's/system_ptr_stack_180/system_stack_context_pointer_180/g' "$INPUT_FILE"

# 通用变量名替换
sed -i 's/system_ptr_var_1/system_context_pointer_var_1/g' "$INPUT_FILE"
sed -i 's/system_ptr_var_10/system_context_pointer_var_10/g' "$INPUT_FILE"
sed -i 's/system_ptr_var_11/system_context_pointer_var_11/g' "$INPUT_FILE"
sed -i 's/system_ptr_var_13/system_context_pointer_var_13/g' "$INPUT_FILE"
sed -i 's/system_ptr_var_15/system_context_pointer_var_15/g' "$INPUT_FILE"

sed -i 's/system_ptr_long_var_6/system_context_long_pointer_var_6/g' "$INPUT_FILE"
sed -i 's/system_int_var_e/system_context_int_var_e/g' "$INPUT_FILE"
sed -i 's/psystem_int_var_1/system_context_int_pointer_var_1/g' "$INPUT_FILE"

sed -i 's/system_status_flag_b/system_status_flag_variable_b/g' "$INPUT_FILE"
sed -i 's/system_status_flag_d/system_status_flag_variable_d/g' "$INPUT_FILE"

# 多级指针变量名替换
sed -i 's/pppsystem_ptr_long_var_6/system_context_quad_pointer_var_6/g' "$INPUT_FILE"
sed -i 's/pppsystem_ptr_long_var_6/system_context_quad_pointer_var_6/g' "$INPUT_FILE"

echo "变量名美化完成"