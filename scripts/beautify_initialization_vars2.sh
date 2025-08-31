#!/bin/bash

# 继续美化01_initialization.c文件中的变量名
# 将剩余的非语义化变量名替换为语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"
TEMP_FILE="/tmp/initialization_temp2.c"

# 替换剩余的变量名
sed -e 's/UNK_1809ff978/system_unknown_ptr_ff978/g' \
    -e 's/UNK_1809ff990/system_unknown_ptr_ff990/g' \
    -e 's/FUN_18002d520/system_initialize_function_d520/g' \
    -e 's/param_1/system_param_1/g' \
    -e 's/param_2/system_param_2/g' \
    -e 's/param_3/system_param_3/g' \
    -e 's/param_4/system_param_4/g' \
    -e 's/FUN_1809417c0/system_function_9417c0/g' \
    -e 's/UNK_1809fcc28/system_unknown_ptr_fcc28/g' \
    -e 's/UNK_1809ffa30/system_unknown_ptr_ffa30/g' \
    -e 's/_DAT_180c9190c/system_static_data_9190c/g' \
    -e 's/FUN_180623800/system_function_623800/g' \
    -e 's/FUN_18025cc00/system_function_25cc00/g' \
    -e 's/DAT_180a010a0/system_global_data_ptr_010a0/g' \
    -e 's/puVar7/system_ptr_var_7/g' \
    -e 's/puVar6/system_ptr_var_6/g' \
    -e 's/iVar3/system_int_var_3/g' \
    -e 's/lVar1/system_long_var_1/g' \
    -e 's/puStack_a0/system_ptr_stack_a0/g' \
    -e 's/auStack_88/system_array_stack_88/g' \
    -e 's/in_R9/system_register_r9/g' \
    -e 's/pcStackX_18/system_ptr_stack_x18/g' \
    "$INPUT_FILE" > "$TEMP_FILE"

# 移动临时文件到原文件位置
mv "$TEMP_FILE" "$INPUT_FILE"

echo "01_initialization.c文件第二轮变量名美化完成"