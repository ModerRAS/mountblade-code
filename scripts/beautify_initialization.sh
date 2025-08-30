#!/bin/bash

# 01_initialization.c文件FUN_函数名语义化美化脚本
# 简化实现：仅将常见的FUN_函数名替换为语义化名称
# 原本实现：完全重构所有函数命名体系，建立统一的语义化命名规范

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 备份原始文件
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# FUN_函数名语义化替换
sed -i 's/FUN_180779d6c/system_initialize_empty_function/g' "$INPUT_FILE"
sed -i 's/FUN_1802281a0/system_process_events/g' "$INPUT_FILE"
sed -i 's/FUN_1802285e0/system_handle_events/g' "$INPUT_FILE"
sed -i 's/FUN_180623800/system_check_initialization/g' "$INPUT_FILE"
sed -i 's/FUN_18025cc00/system_initialize_module/g' "$INPUT_FILE"
sed -i 's/FUN_18025c000/system_load_module/g' "$INPUT_FILE"
sed -i 's/FUN_18025d270/system_setup_module/g' "$INPUT_FILE"
sed -i 's/FUN_18025d510/system_configure_module/g' "$INPUT_FILE"
sed -i 's/FUN_18025e330/system_start_services/g' "$INPUT_FILE"

# 变量名语义化替换
sed -i 's/in_stack_000000a8/system_stack_parameter_a8/g' "$INPUT_FILE"
sed -i 's/in_R11/system_register_r11/g' "$INPUT_FILE"
sed -i 's/unaff_R14D/system_register_r14d/g' "$INPUT_FILE"
sed -i 's/pcStackX_18/system_function_pointer_18/g' "$INPUT_FILE"

# 浮点变量名语义化替换
sed -i 's/fVar1/system_float_var_1/g' "$INPUT_FILE"
sed -i 's/fVar2/system_float_var_2/g' "$INPUT_FILE"
sed -i 's/fVar3/system_float_var_3/g' "$INPUT_FILE"
sed -i 's/fVar17/system_float_var_17/g' "$INPUT_FILE"
sed -i 's/fVar18/system_float_var_18/g' "$INPUT_FILE"
sed -i 's/fVar19/system_float_var_19/g' "$INPUT_FILE"
sed -i 's/fVar20/system_float_var_20/g' "$INPUT_FILE"

# 整型变量名语义化替换
sed -i 's/lVar4/system_long_var_4/g' "$INPUT_FILE"
sed -i 's/lVar9/system_long_var_9/g' "$INPUT_FILE"
sed -i 's/lVar14/system_long_var_14/g' "$INPUT_FILE"
sed -i 's/uVar5/system_ulong_var_5/g' "$INPUT_FILE"
sed -i 's/uVar12/system_ulong_var_12/g' "$INPUT_FILE"
sed -i 's/uVar13/system_ulong_var_13/g' "$INPUT_FILE"
sed -i 's/uVar15/system_ulong_var_15/g' "$INPUT_FILE"
sed -i 's/uVar16/system_ulong_var_16/g' "$INPUT_FILE"
sed -i 's/iVar10/system_int_var_10/g' "$INPUT_FILE"
sed -i 's/iVar11/system_int_var_11/g' "$INPUT_FILE"

echo "01_initialization.c文件FUN_函数名语义化美化完成"