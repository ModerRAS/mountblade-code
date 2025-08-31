#!/bin/bash

# 美化01_initialization.c文件中的变量名
# 简化实现：仅替换常见的非语义化变量名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"
TEMP_FILE="/tmp/initialization_beautified.c"

# 备份原始文件
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 使用sed进行变量名替换
sed -e 's/\bpuVar1\b/system_byte_pointer_a/g' \
    -e 's/\bpuVar2\b/system_byte_pointer_b/g' \
    -e 's/\bpuVar3\b/system_byte_pointer_c/g' \
    -e 's/\bpuVar4\b/system_byte_pointer_d/g' \
    -e 's/\bpuVar5\b/system_byte_pointer_e/g' \
    -e 's/\bpuVar6\b/system_byte_pointer_f/g' \
    -e 's/\bpuVar7\b/system_byte_pointer_g/g' \
    -e 's/\bpuVar8\b/system_byte_pointer_h/g' \
    -e 's/\bpuVar9\b/system_byte_pointer_i/g' \
    -e 's/\bpuVar10\b/system_byte_pointer_j/g' \
    -e 's/\bpuVar11\b/system_byte_pointer_k/g' \
    -e 's/\bpuVar12\b/system_byte_pointer_l/g' \
    -e 's/\bpuVar13\b/system_byte_pointer_m/g' \
    -e 's/\bpuVar14\b/system_byte_pointer_n/g' \
    -e 's/\bpuVar15\b/system_byte_pointer_o/g' \
    -e 's/\blVar1\b/system_long_var_a/g' \
    -e 's/\blVar2\b/system_long_var_b/g' \
    -e 's/\blVar3\b/system_long_var_c/g' \
    -e 's/\blVar4\b/system_long_var_d/g' \
    -e 's/\blVar5\b/system_long_var_e/g' \
    -e 's/\blVar6\b/system_long_var_f/g' \
    -e 's/\blVar7\b/system_long_var_g/g' \
    -e 's/\buVar1\b/system_uint_var_a/g' \
    -e 's/\buVar2\b/system_uint_var_b/g' \
    -e 's/\buVar3\b/system_uint_var_c/g' \
    -e 's/\buVar4\b/system_uint_var_d/g' \
    -e 's/\buVar5\b/system_uint_var_e/g' \
    -e 's/\buVar6\b/system_uint_var_f/g' \
    -e 's/\biVar1\b/system_int_var_a/g' \
    -e 's/\biVar2\b/system_int_var_b/g' \
    -e 's/\biVar3\b/system_int_var_c/g' \
    -e 's/\biVar4\b/system_int_var_d/g' \
    -e 's/\biVar5\b/system_int_var_e/g' \
    -e 's/\bpcVar1\b/system_code_pointer_a/g' \
    -e 's/\bpcVar2\b/system_code_pointer_b/g' \
    -e 's/\bplVar1\b/system_long_pointer_a/g' \
    -e 's/\bplVar2\b/system_long_pointer_b/g' \
    -e 's/\bplVar3\b/system_long_pointer_c/g' \
    -e 's/\bplVar4\b/system_long_pointer_d/g' \
    -e 's/\bplVar5\b/system_long_pointer_e/g' \
    -e 's/\bplVar6\b/system_long_pointer_f/g' \
    -e 's/\bcVar1\b/system_char_var_a/g' \
    -e 's/\bcVar2\b/system_char_var_b/g' \
    -e 's/\bcVar3\b/system_char_var_c/g' \
    -e 's/\bcVar4\b/system_char_var_d/g' \
    -e 's/\bcVar5\b/system_char_var_e/g' \
    -e 's/\bbVar1\b/system_bool_var_a/g' \
    -e 's/\bbVar2\b/system_bool_var_b/g' \
    -e 's/\bdVar1\b/system_double_var_a/g' \
    -e 's/\bdVar2\b/system_double_var_b/g' \
    -e 's/\bdVar3\b/system_double_var_c/g' \
    -e 's/\bfVar1\b/system_float_var_a/g' \
    -e 's/\bfVar2\b/system_float_var_b/g' \
    -e 's/\bfVar3\b/system_float_var_c/g' \
    -e 's/\bfVar4\b/system_float_var_d/g' \
    -e 's/\bfVar5\b/system_float_var_e/g' \
    -e 's/\bfVar6\b/system_float_var_f/g' \
    -e 's/\bfVar7\b/system_float_var_g/g' \
    -e 's/\bfVar8\b/system_float_var_h/g' \
    -e 's/\bfVar9\b/system_float_var_i/g' \
    -e 's/\bfVar10\b/system_float_var_j/g' \
    -e 's/\bfVar11\b/system_float_var_k/g' \
    -e 's/\bfVar12\b/system_float_var_l/g' \
    -e 's/\bpstatus_flag1\b/system_status_flag_a/g' \
    -e 's/\bpstatus_flag2\b/system_status_flag_b/g' \
    -e 's/\bpstatus_flag3\b/system_status_flag_c/g' \
    -e 's/\bpstatus_flag4\b/system_status_flag_d/g' \
    -e 's/\bpstatus_flag5\b/system_status_flag_e/g' \
    -e 's/\bpstatus_flag6\b/system_status_flag_f/g' \
    -e 's/\bpbVar1\b/system_byte_pointer_a/g' \
    -e 's/\bpbVar2\b/system_byte_pointer_b/g' \
    -e 's/\bpbVar3\b/system_byte_pointer_c/g' \
    -e 's/\bpbVar4\b/system_byte_pointer_d/g' \
    -e 's/\bpbVar5\b/system_byte_pointer_e/g' \
    -e 's/\bpbVar6\b/system_byte_pointer_f/g' \
    -e 's/\bpuStack_[0-9a-fA-F]\+\b/system_stack_byte_ptr/g' \
    -e 's/\buStack_[0-9a-fA-F]\+\b/system_stack_uint_var/g' \
    -e 's/\biStack_[0-9a-fA-F]\+\b/system_stack_int_var/g' \
    -e 's/\blStack_[0-9a-fA-F]\+\b/system_stack_long_var/g' \
    -e 's/\bplStack_[0-9a-fA-F]\+\b/system_stack_long_ptr/g' \
    -e 's/\bapplStack_[0-9a-fA-F]\+\b/system_stack_app_ptr/g' \
    -e 's/\bppsystem_ptr_long_var_[0-9]\+\b/system_pptr_long_var/g' \
    -e 's/\bppsystem_ptr_var_[0-9]\+\b/system_pptr_var/g' \
    -e 's/\bsystem_long_var_[0-9]\+\b/system_long_var/g' \
    -e 's/\bsystem_int_var_[0-9]\+\b/system_int_var/g' \
    -e 's/\bsystem_uint_var_[0-9]\+\b/system_uint_var/g' \
    -e 's/\bpuStackX_[0-9a-fA-F]\+\b/system_stack_byte_ptr_x/g' \
    -e 's/\buStackX_[0-9a-fA-F]\+\b/system_stack_uint_var_x/g' \
    -e 's/\blStackX_[0-9a-fA-F]\+\b/system_stack_long_var_x/g' \
    -e 's/\bplStackX_[0-9a-fA-F]\+\b/system_stack_long_ptr_x/g' \
    -e 's/\bppplVar[0-9]\+\b/system_ppp_long_var/g' \
    -e 's/\bpppplVar[0-9]\+\b/system_pppp_long_var/g' \
    -e 's/\bppppuVar[0-9]\+\b/system_pppp_byte_var/g' \
    -e 's/\bpppuVar[0-9]\+\b/system_ppp_byte_var/g' \
    -e 's/\bpppuStackX_[0-9a-fA-F]\+\b/system_ppp_stack_ptr_x/g' \
    -e 's/\bpppplStackX_[0-9a-fA-F]\+\b/system_pppp_stack_ptr_x/g' \
    -e 's/\bLAB_[0-9a-fA-F]\+\b/system_label/g' \
    -e 's/\bfunc_0x[0-9a-fA-F]\+\b/system_function/g' \
    -e 's/\bsystem_unknown_[0-9a-fA-F]\+\b/system_data_ptr/g' \
    -e 's/\bsystem_unknown_ptr_[0-9a-fA-F]\+\b/system_data_ptr/g' \
    -e 's/\b_system_data_[0-9a-fA-F]\+\b/system_global_data/g' \
    "$INPUT_FILE" > "$TEMP_FILE"

# 替换原始文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "变量名美化完成"