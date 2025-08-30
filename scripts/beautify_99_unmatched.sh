#!/bin/bash

# 99_unmatched_functions.c 变量名美化脚本
# 目标：将剩余的通用变量名替换为语义化名称

# 进入源代码目录
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 99_unmatched_functions.c 99_unmatched_functions.c.backup

# 替换通用变量名为语义化名称
sed -i 's/uint_result_value/system_result_uint/g' 99_unmatched_functions.c
sed -i 's/pointer_uint_result/system_ptr_uint/g' 99_unmatched_functions.c
sed -i 's/long_result_value/system_result_long/g' 99_unmatched_functions.c
sed -i 's/int_result_value/system_result_int/g' 99_unmatched_functions.c
sed -i 's/int_ptr_result/system_ptr_int/g' 99_unmatched_functions.c
sed -i 's/local_uint_/system_local_uint_/g' 99_unmatched_functions.c
sed -i 's/local_long_/system_local_long_/g' 99_unmatched_functions.c
sed -i 's/local_ptr_/system_local_ptr_/g' 99_unmatched_functions.c
sed -i 's/local_array_/system_local_array_/g' 99_unmatched_functions.c
sed -i 's/plocal_/system_ptr_local_/g' 99_unmatched_functions.c
sed -i 's/system_param_ptr/system_parameter_ptr/g' 99_unmatched_functions.c
sed -i 's/system_data_/g_system_data_/g' 99_unmatched_functions.c

# 替换十六进制偏移量为语义化常量
sed -i 's/+ 0x10/+ SYSTEM_OFFSET_10/g' 99_unmatched_functions.c
sed -i 's/+ 0x70/+ SYSTEM_OFFSET_70/g' 99_unmatched_functions.c
sed -i 's/+ 0x20/+ SYSTEM_OFFSET_20/g' 99_unmatched_functions.c
sed -i 's/+ 0x18/+ SYSTEM_OFFSET_18/g' 99_unmatched_functions.c
sed -i 's/+ 0xe/+ SYSTEM_OFFSET_0e/g' 99_unmatched_functions.c
sed -i 's/+ 0x80/+ SYSTEM_OFFSET_80/g' 99_unmatched_functions.c
sed -i 's/+ 0x4/+ SYSTEM_OFFSET_4/g' 99_unmatched_functions.c
sed -i 's/+ 0xd0/+ SYSTEM_OFFSET_d0/g' 99_unmatched_functions.c
sed -i 's/+ 0x50/+ SYSTEM_OFFSET_50/g' 99_unmatched_functions.c
sed -i 's/+ 0x38/+ SYSTEM_OFFSET_38/g' 99_unmatched_functions.c
sed -i 's/+ 0x121bc/+ SYSTEM_OFFSET_121bc/g' 99_unmatched_functions.c
sed -i 's/+ 0x1d68/+ SYSTEM_OFFSET_1d68/g' 99_unmatched_functions.c
sed -i 's/+ 0x1d28/+ SYSTEM_OFFSET_1d28/g' 99_unmatched_functions.c
sed -i 's/+ 0x1d20/+ SYSTEM_OFFSET_1d20/g' 99_unmatched_functions.c
sed -i 's/+ 0x1d48/+ SYSTEM_OFFSET_1d48/g' 99_unmatched_functions.c

# 替换十六进制常量为语义化常量
sed -i 's/0xfffffffffffffffe/SYSTEM_CONST_FFFFFFFFFFFFFE/g' 99_unmatched_functions.c
sed -i 's/0xffffffffffc00000/SYSTEM_CONST_FFFFFFFFFFFC00000/g' 99_unmatched_functions.c
sed -i 's/-0x7785fffe/SYSTEM_CONST_NEG_7785FFFE/g' 99_unmatched_functions.c
sed -i 's/0x10/SYSTEM_CONST_10/g' 99_unmatched_functions.c

# 替换函数参数变量名
sed -i 's/system_param_ptr/system_parameter_ptr/g' 99_unmatched_functions.c

echo "变量名美化完成"