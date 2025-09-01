#!/bin/bash

# 美化99_unmatched_functions.c文件的脚本
# 替换函数名和变量名为语义化名称

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 备份原文件
cp "$FILE" "$FILE.backup_$(date +%Y%m%d_%H%M%S)"

# 函数名替换 - 将十六进制地址函数名替换为语义化名称
sed -i 's/FUN_1800495d0/system_function_execute_operation_0ad820/g' "$FILE"
sed -i 's/FUN_1800507a0/system_function_execute_operation_0b07a0/g' "$FILE"
sed -i 's/FUN_180053060/system_function_execute_operation_0b3060/g' "$FILE"
sed -i 's/FUN_1800532c0/system_function_execute_operation_0b32c0/g' "$FILE"
sed -i 's/FUN_180053510/system_function_execute_operation_0b3510/g' "$FILE"

# 变量名替换 - 通用变量名
sed -i 's/\biVar1\b/system_local_int_1/g' "$FILE"
sed -i 's/\biVar2\b/system_local_int_2/g' "$FILE"
sed -i 's/\biVar3\b/system_local_int_3/g' "$FILE"
sed -i 's/\biVar4\b/system_local_int_4/g' "$FILE"
sed -i 's/\biVar5\b/system_local_int_5/g' "$FILE"
sed -i 's/\biVar6\b/system_local_int_6/g' "$FILE"
sed -i 's/\biVar7\b/system_local_int_7/g' "$FILE"
sed -i 's/\biVar8\b/system_local_int_8/g' "$FILE"

sed -i 's/\blVar1\b/system_local_long_1/g' "$FILE"
sed -i 's/\blVar2\b/system_local_long_2/g' "$FILE"
sed -i 's/\blVar3\b/system_local_long_3/g' "$FILE"
sed -i 's/\blVar4\b/system_local_long_4/g' "$FILE"
sed -i 's/\blVar5\b/system_local_long_5/g' "$FILE"

sed -i 's/\buVar1\b/system_local_uint_1/g' "$FILE"
sed -i 's/\buVar2\b/system_local_uint_2/g' "$FILE"
sed -i 's/\buVar3\b/system_local_uint_3/g' "$FILE"
sed -i 's/\buVar4\b/system_local_uint_4/g' "$FILE"

sed -i 's/\bbVar1\b/system_local_byte_1/g' "$FILE"
sed -i 's/\bbVar2\b/system_local_byte_2/g' "$FILE"
sed -i 's/\bbVar3\b/system_local_byte_3/g' "$FILE"

sed -i 's/\bpuVar1\b/system_local_ptr_1/g' "$FILE"
sed -i 's/\bpuVar2\b/system_local_ptr_2/g' "$FILE"
sed -i 's/\bpuVar3\b/system_local_ptr_3/g' "$FILE"
sed -i 's/\bpuVar4\b/system_local_ptr_4/g' "$FILE"

# 参数变量名替换
sed -i 's/\bparam_1\b/system_param_1/g' "$FILE"
sed -i 's/\bparam_2\b/system_param_2/g' "$FILE"
sed -i 's/\bparam_3\b/system_param_3/g' "$FILE"
sed -i 's/\bparam_4\b/system_param_4/g' "$FILE"

# 栈变量名替换
sed -i 's/\blocal_10\b/system_stack_10/g' "$FILE"
sed -i 's/\blocal_18\b/system_stack_18/g' "$FILE"
sed -i 's/\blocal_20\b/system_stack_20/g' "$FILE"
sed -i 's/\blocal_28\b/system_stack_28/g' "$FILE"
sed -i 's/\blocal_30\b/system_stack_30/g' "$FILE"
sed -i 's/\blocal_38\b/system_stack_38/g' "$FILE"
sed -i 's/\blocal_40\b/system_stack_40/g' "$FILE"
sed -i 's/\blocal_48\b/system_stack_48/g' "$FILE"
sed -i 's/\blocal_50\b/system_stack_50/g' "$FILE"
sed -i 's/\blocal_58\b/system_stack_58/g' "$FILE"
sed -i 's/\blocal_60\b/system_stack_60/g' "$FILE"
sed -i 's/\blocal_68\b/system_stack_68/g' "$FILE"
sed -i 's/\blocal_70\b/system_stack_70/g' "$FILE"
sed -i 's/\blocal_78\b/system_stack_78/g' "$FILE"
sed -i 's/\blocal_80\b/system_stack_80/g' "$FILE"
sed -i 's/\blocal_88\b/system_stack_88/g' "$FILE"
sed -i 's/\blocal_90\b/system_stack_90/g' "$FILE"
sed -i 's/\blocal_98\b/system_stack_98/g' "$FILE"
sed -i 's/\blocal_a0\b/system_stack_a0/g' "$FILE"
sed -i 's/\blocal_a8\b/system_stack_a8/g' "$FILE"
sed -i 's/\blocal_b0\b/system_stack_b0/g' "$FILE"
sed -i 's/\blocal_b8\b/system_stack_b8/g' "$FILE"
sed -i 's/\blocal_c0\b/system_stack_c0/g' "$FILE"
sed -i 's/\blocal_c8\b/system_stack_c8/g' "$FILE"
sed -i 's/\blocal_d0\b/system_stack_d0/g' "$FILE"
sed -i 's/\blocal_d8\b/system_stack_d8/g' "$FILE"
sed -i 's/\blocal_e0\b/system_stack_e0/g' "$FILE"
sed -i 's/\blocal_e8\b/system_stack_e8/g' "$FILE"
sed -i 's/\blocal_f0\b/system_stack_f0/g' "$FILE"
sed -i 's/\blocal_f8\b/system_stack_f8/g' "$FILE"

# 特殊变量名替换
sed -i 's/\bpuStack_\([0-9a-fA-F]*\)\b/system_stack_ptr_\1/g' "$FILE"
sed -i 's/\bauStack_\([0-9a-fA-F]*\)\b/system_stack_buffer_\1/g' "$FILE"
sed -i 's/\blocal_res\([0-9a-fA-F]*\)\b/system_local_resource_\1/g' "$FILE"

echo "99_unmatched_functions.c文件变量名和函数名美化完成"