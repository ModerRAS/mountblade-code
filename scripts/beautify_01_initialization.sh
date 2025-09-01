#!/bin/bash

# 美化01_initialization.c文件中的变量名
# 这是一个简化实现，主要处理栈变量名的语义化替换

INPUT_FILE="TaleWorlds.Native/src/01_initialization.c"
BACKUP_FILE="TaleWorlds.Native/src/01_initialization.c.backup_$(date +%s)"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"

# 栈变量名美化规则
declare -A RENAME_RULES=(
    # 栈指针变量
    ["piStack_190"]="system_stack_ptr_190"
    ["piStack_1b0"]="system_stack_ptr_1b0"
    ["piStack_1f0"]="system_stack_ptr_1f0"
    ["piStack_1f8"]="system_stack_ptr_1f8"
    ["piStack_208"]="system_stack_ptr_208"
    ["piStack_210"]="system_stack_ptr_210"
    ["piStack_218"]="system_stack_ptr_218"
    
    # 系统上下文变量
    ["system_context_int_system_pointer_var_10"]="system_context_ptr_10"
    ["system_context_int_system_pointer_var_13"]="system_context_ptr_13"
    ["system_context_int_system_pointer_var_14"]="system_context_ptr_14"
    ["system_context_int_system_pointer_var_15"]="system_context_ptr_15"
    ["system_context_int_system_pointer_var_16"]="system_context_ptr_16"
    
    # 临时变量
    ["system_ptr_int_var_20"]="system_temp_int_ptr_20"
    ["system_ptr_int_var_25"]="system_temp_int_ptr_25"
    ["system_ptr_int_var_26"]="system_temp_int_ptr_26"
    ["system_system_temp_byte_44"]="system_temp_byte_44"
    ["system_temp_unsigned_value"]="system_temp_uint_value"
    ["system_context_data_handle"]="system_data_handle"
    ["system_boolean_result"]="system_bool_result"
    
    # 系统栈变量
    ["psystem_operation_result_code_34"]="system_operation_result_ptr_34"
    ["psystem_long_var_39"]="system_long_ptr_39"
    ["psystem_system_stack_buffer_1e0"]="system_stack_buffer_ptr_1e0"
    ["system_system_stack_storage"]="system_stack_storage"
    ["system_system_stack_alt_ptr"]="system_stack_alt_ptr"
    
    # 相机遍历变量
    ["camera_traverse_node_current"]="camera_node_current"
    ["camera_traverse_node_next"]="camera_node_next"
    
    # 其他变量
    ["system_offset_value"]="system_calculated_offset"
    ["system_operation_result_code"]="system_result_code"
    ["system_temp_bool_secondary"]="system_temp_bool_secondary"
    ["system_iteration_counter_value"]="system_iteration_count"
    ["system_initialization_status"]="system_init_status"
    ["system_initialization_null_pointer"]="system_null_ptr"
)

# 应用替换规则
for old_name in "${!RENAME_RULES[@]}"; do
    new_name="${RENAME_RULES[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/\b$old_name\b/$new_name/g" "$INPUT_FILE"
done

echo "变量名美化完成"
echo "备份文件: $BACKUP_FILE"