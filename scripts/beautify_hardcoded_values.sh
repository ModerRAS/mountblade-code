#!/bin/bash

# 美化99_unmatched_functions.c文件中的内联硬编码值
# 将内联硬编码值替换为语义化常量

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 99_unmatched_functions.c 99_unmatched_functions.c.backup.$(date +%Y%m%d_%H%M%S)

# 在文件开头添加新的常量定义
sed -i '/^#define SYSTEM_MAGIC_STRING_PRINTS_XO 0x642d676973746f6f$/a\
\
// 内联硬编码值语义化常量\
#define SYSTEM_STACK_OFFSET_REGISTER_RBP_19 0x19\
#define SYSTEM_DATA_LENGTH_0X35 0x35\
#define SYSTEM_DATA_LENGTH_0X2E 0x2e\
#define SYSTEM_CONTEXT_OFFSET_5E 0x5e\
#define SYSTEM_BIT_MASK_1F 0x1f\
#define SYSTEM_RANGE_OFFSET_22 0x22\
#define SYSTEM_CHARACTER_EQUALS 0x3d\
#define SYSTEM_CHARACTER_DIGIT_2 0x32\
#define SYSTEM_STACK_OFFSET_TWELVE 0x0c\
#define SYSTEM_STACK_OFFSET_NINETEEN 0x19' 99_unmatched_functions.c

# 替换内联硬编码值
sed -i 's/(system_register_rbp + 0x19)/(system_register_rbp + SYSTEM_STACK_OFFSET_REGISTER_RBP_19)/g' 99_unmatched_functions.c
sed -i 's/system_local_var_uint32_t_data_length = 0x35/system_local_var_uint32_t_data_length = SYSTEM_DATA_LENGTH_0X35/g' 99_unmatched_functions.c
sed -i 's/system_local_var_uint32_t_184 = 0x2e/system_local_var_uint32_t_184 = SYSTEM_DATA_LENGTH_0X2E/g' 99_unmatched_functions.c
sed -i 's/+ 0x5e/+ SYSTEM_CONTEXT_OFFSET_5E/g' 99_unmatched_functions.c
sed -i 's/& 0x1f/& SYSTEM_BIT_MASK_1F/g' 99_unmatched_functions.c
sed -i 's/+ 0x22U/+ SYSTEM_RANGE_OFFSET_22U/g' 99_unmatched_functions.c
sed -i 's/= 0x3d/= SYSTEM_CHARACTER_EQUALS/g' 99_unmatched_functions.c
sed -i 's/= 0x32/= SYSTEM_CHARACTER_DIGIT_2/g' 99_unmatched_functions.c
sed -i 's/+ 0x35/+ SYSTEM_DATA_LENGTH_0X35/g' 99_unmatched_functions.c
sed -i 's/+ 0x19/+ SYSTEM_STACK_OFFSET_NINETEEN/g' 99_unmatched_functions.c

echo "内联硬编码值美化完成"