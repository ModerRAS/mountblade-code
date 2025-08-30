#!/bin/bash

# 美化01_initialization.c文件中的栈变量名
# 这是简化实现，主要处理栈变量名的语义化替换

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 备份原始文件
cp "$FILE" "$FILE.bak"

# 栈变量名美化
sed -i 's/uintStack_200/init_stack_uint_param_200/g' "$FILE"
sed -i 's/uintStack_1e8/init_stack_uint_param_1e8/g' "$FILE"
sed -i 's/uintStack_1e0/init_stack_ulong_param_1e0/g' "$FILE"
sed -i 's/uintStack_1c8/init_stack_uint_param_1c8/g' "$FILE"
sed -i 's/uintStack_1c0/init_stack_ulong_param_1c0/g' "$FILE"
sed -i 's/longStack_1b0/init_stack_long_param_1b0/g' "$FILE"
sed -i 's/uintStack_1a0/init_stack_uint_param_1a0/g' "$FILE"
sed -i 's/uintStack_198/init_stack_ulong_param_198/g' "$FILE"
sed -i 's/uintStack_178/init_stack_uint_param_178/g' "$FILE"
sed -i 's/uintStack_a0/init_stack_uint_param_a0/g' "$FILE"
sed -i 's/longStack_90/init_stack_long_param_90/g' "$FILE"
sed -i 's/uintStack_88/init_stack_uint_param_88/g' "$FILE"
sed -i 's/uintStack_60/init_stack_uint_param_60/g' "$FILE"
sed -i 's/uintStack_58/init_stack_ulong_param_58/g' "$FILE"
sed -i 's/uintStack_50/init_stack_ulong_param_50/g' "$FILE"
sed -i 's/uintStack_478/init_stack_ulong_param_478/g' "$FILE"
sed -i 's/uintStack_458/init_stack_uint_param_458/g' "$FILE"
sed -i 's/uintStack_70/init_stack_uint_param_70/g' "$FILE"
sed -i 's/uintStack_128/init_stack_uint_param_128/g' "$FILE"
sed -i 's/uintStack_120/init_stack_ulong_param_120/g' "$FILE"
sed -i 's/uintStack_118/init_stack_ulong_param_118/g' "$FILE"
sed -i 's/uintStack_110/init_stack_ulong_param_110/g' "$FILE"
sed -i 's/uintStack_28/init_stack_ulong_param_28/g' "$FILE"

# 系统变量名美化
sed -i 's/g_system_flag_1/g_system_initialization_flag_1/g' "$FILE"
sed -i 's/g_system_flag_2/g_system_initialization_flag_2/g' "$FILE"
sed -i 's/g_system_flag_3/g_system_initialization_flag_3/g' "$FILE"

echo "变量名美化完成"