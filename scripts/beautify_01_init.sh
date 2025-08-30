#!/bin/bash

# 01_initialization.c 美化脚本 - 最终批次补充
# 将剩余的非语义化变量名替换为语义化名称

# 定义源文件路径
SOURCE_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 执行变量名替换
sed -i 's/\bpbVar1\b/system_byte_pointer_1/g' "$SOURCE_FILE"
sed -i 's/\bpbVar4\b/system_byte_pointer_4/g' "$SOURCE_FILE"
sed -i 's/\buStack0000000000000030\b/system_stack_param_30/g' "$SOURCE_FILE"
sed -i 's/\buStack0000000000000028\b/system_stack_param_28/g' "$SOURCE_FILE"
sed -i 's/\buStack000000000000003c\b/system_stack_param_3c/g' "$SOURCE_FILE"
sed -i 's/\buStack000000000000004c\b/system_stack_param_4c/g' "$SOURCE_FILE"
sed -i 's/\buStack000000000000005c\b/system_stack_param_5c/g' "$SOURCE_FILE"
sed -i 's/\buStack000000000000006c\b/system_stack_param_6c/g' "$SOURCE_FILE"

# 替换更多的数字编号变量名
sed -i 's/\bsystem_local_uint_ptr_primary\b/system_primary_data_pointer/g' "$SOURCE_FILE"
sed -i 's/\bsystem_local_uint_ptr_secondary\b/system_secondary_data_pointer/g' "$SOURCE_FILE"
sed -i 's/\bsystem_local_uint_ptr_third\b/system_third_data_pointer/g' "$SOURCE_FILE"
sed -i 's/\bsystem_local_uint_ptr_fourth\b/system_fourth_data_pointer/g' "$SOURCE_FILE"
sed -i 's/\bsystem_local_uint_ptr_fifth\b/system_fifth_data_pointer/g' "$SOURCE_FILE"
sed -i 's/\bsystem_local_uint_ptr_sixth\b/system_sixth_data_pointer/g' "$SOURCE_FILE"
sed -i 's/\bsystem_local_uint_ptr_seventh\b/system_seventh_data_pointer/g' "$SOURCE_FILE"

# 替换系统栈变量名
sed -i 's/\buStackX_/system_stack_uint_/g' "$SOURCE_FILE"

# 替换更多的寄存器变量名
sed -i 's/\blVar1\b/system_register_1/g' "$SOURCE_FILE"
sed -i 's/\blVar2\b/system_register_2/g' "$SOURCE_FILE"
sed -i 's/\blVar3\b/system_register_3/g' "$SOURCE_FILE"
sed -i 's/\blVar4\b/system_register_4/g' "$SOURCE_FILE"
sed -i 's/\blVar5\b/system_register_5/g' "$SOURCE_FILE"

echo "变量名美化完成"