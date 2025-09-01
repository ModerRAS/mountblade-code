#!/bin/bash

# 脚本：继续美化99_unmatched_functions.c中的剩余标签
# 功能：处理所有剩余的LAB标签和其他十六进制标识符

# 设置文件路径
FILE_PATH="TaleWorlds.Native/src/99_unmatched_functions.c"

# 1. 处理剩余的1800开头的标签
sed -i 's/LAB_1800/system_label_/g' "$FILE_PATH"

# 2. 处理SYSTEM_LABEL_CONDITION_1
sed -i 's/SYSTEM_LABEL_CONDITION_1 LAB_1800/SYSTEM_LABEL_CONDITION_1 system_label_base/g' "$FILE_PATH"

# 3. 处理所有剩余的LAB_标签（不带前缀的）
sed -i 's/LAB_condition_check_1/system_label_condition_handler_1/g' "$FILE_PATH"
sed -i 's/LAB_condition_branch_1/system_label_condition_handler_2/g' "$FILE_PATH"
sed -i 's/LAB_condition_branch_2/system_label_condition_handler_3/g' "$FILE_PATH"
sed -i 's/LAB_condition_branch_3/system_label_condition_handler_4/g' "$FILE_PATH"
sed -i 's/LAB_condition_branch_4/system_label_condition_handler_5/g' "$FILE_PATH"
sed -i 's/LAB_resource_loop_start/system_label_resource_handler_start/g' "$FILE_PATH"
sed -i 's/LAB_resource_loop_continue/system_label_resource_handler_continue/g' "$FILE_PATH"
sed -i 's/LAB_memory_loop_start/system_label_memory_handler_start/g' "$FILE_PATH"
sed -i 's/LAB_memory_loop_continue/system_label_memory_handler_continue/g' "$FILE_PATH"
sed -i 's/LAB_memory_loop_branch_1/system_label_memory_handler_branch_1/g' "$FILE_PATH"
sed -i 's/LAB_memory_loop_branch_2/system_label_memory_handler_branch_2/g' "$FILE_PATH"
sed -i 's/LAB_memory_flow_target_1/system_label_memory_flow_target/g' "$FILE_PATH"
sed -i 's/LAB_infinite_loop_1/system_label_infinite_loop_handler/g' "$FILE_PATH"
sed -i 's/LAB_validation_1/system_label_validation_handler_1/g' "$FILE_PATH"
sed -i 's/LAB_exception_handler_1/system_label_exception_handler_1/g' "$FILE_PATH"
sed -i 's/LAB_exception_handler_2/system_label_exception_handler_2/g' "$FILE_PATH"
sed -i 's/LAB_memory_operation_1/system_label_memory_operation_1/g' "$FILE_PATH"
sed -i 's/LAB_system_call_1/system_label_system_call_1/g' "$FILE_PATH"

# 4. 处理goto语句中的标签
sed -i 's/goto system_label_/goto label_/g' "$FILE_PATH"

# 5. 处理特殊字符和格式
sed -i 's/SYSTEM_CHAR_PTR_TEMP_/system_char_ptr_temp/g' "$FILE_PATH"
sed -i 's/SYSTEM_MEMORY_OFFSET_18/SYSTEM_MEMORY_STACK_OFFSET/g' "$FILE_PATH"
sed -i 's/SYSTEM_COMPARISON_ZEROxe/SYSTEM_COMPARISON_EXTENDED/g' "$FILE_PATH"
sed -i 's/SYSTEM_COMPARISON_ONEe-08/SYSTEM_COMPARISON_FLOAT_PRECISION/g' "$FILE_PATH"
sed -i 's/SYSTEM_COMPARISON_TWO/SYSTEM_VALUE_TWO/g' "$FILE_PATH"
sed -i 's/SYSTEM_COMPARISON_ONE/SYSTEM_VALUE_ONE/g' "$FILE_PATH"
sed -i 's/SYSTEM_COMPARISON_ZERO/SYSTEM_VALUE_ZERO/g' "$FILE_PATH"
sed -i 's/SYSTEM_OFFSET_10/SYSTEM_STANDARD_OFFSET/g' "$FILE_PATH"
sed -i 's/SYSTEM_MEMORY_OFFSET_30/SYSTEM_MEMORY_POINTER_OFFSET/g' "$FILE_PATH"
sed -i 's/SYSTEM_OPCODE_MEMORY_ALLOCATE_BASIC/SYSTEM_OPCODE_ALLOCATE_BASIC/g' "$FILE_PATH"
sed -i 's/SYSTEM_HARD_CODED_VALUE_DOLLAR_SIGN/SYSTEM_DOLLAR_SIGN_VALUE/g' "$FILE_PATH"

echo "完成99_unmatched_functions.c文件的深度美化工作"