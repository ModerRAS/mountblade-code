#!/bin/bash

# 美化99_unmatched_functions.c文件的完整脚本
# 替换所有变量名和函数名为语义化名称

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

echo "开始美化99_unmatched_functions.c文件..."

# 函数名替换 - 将所有FUN_函数替换为语义化名称
sed -i 's/FUN_1800495d0/system_function_execute_operation_0ad820/g' "$FILE"
sed -i 's/FUN_1800507a0/system_function_execute_operation_0b07a0/g' "$FILE"
sed -i 's/FUN_180053060/system_function_execute_operation_0b3060/g' "$FILE"
sed -i 's/FUN_1800532c0/system_function_execute_operation_0b32c0/g' "$FILE"
sed -i 's/FUN_180053510/system_function_execute_operation_0b3510/g' "$FILE"
sed -i 's/FUN_180057830/system_function_execute_operation_0b7830/g' "$FILE"
sed -i 's/FUN_1800590a0/system_function_execute_operation_0b90a0/g' "$FILE"

# 通用变量名替换 - 更精确的模式
sed -i 's/\blocal_[0-9a-fA-F]\+\b/system_stack_variable_/g' "$FILE"
sed -i 's/\bparam_[0-9]\+\b/system_parameter_/g' "$FILE"

# 替换特殊变量名
sed -i 's/\biVar\b/system_local_int_/g' "$FILE"
sed -i 's/\blVar\b/system_local_long_/g' "$FILE"
sed -i 's/\buVar\b/system_local_uint_/g' "$FILE"
sed -i 's/\bbVar\b/system_local_byte_/g' "$FILE"
sed -i 's/\bpuVar\b/system_local_ptr_/g' "$FILE"

# 替换栈变量
sed -i 's/\bpuStack_\([0-9a-fA-F]\+\)\b/system_stack_ptr_\1/g' "$FILE"
sed -i 's/\bauStack_\([0-9a-fA-F]\+\)\b/system_stack_buffer_\1/g' "$FILE"
sed -i 's/\blocal_\([0-9a-fA-F]\+\)\b/system_stack_variable_\1/g' "$FILE"

# 替换更多变量名
sed -i 's/\bparam_\([0-9a-fA-F]\+\)\b/system_parameter_\1/g' "$FILE"

echo "99_unmatched_functions.c文件美化完成"