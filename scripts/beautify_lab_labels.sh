#!/bin/bash

# 01_initialization.c文件LAB标签美化脚本
# 原本实现：完全重构所有LAB_标签命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的LAB_标签替换为语义化名称，保持代码结构不变

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 创建备份
cp "$FILE" "$FILE.backup_$(date +%Y%m%d_%H%M%S)"

# 定义LAB标签替换规则
declare -A lab_replacements=(
    # 基础标签替换
    ["LAB_180040"]="system_init_label_base_address"
    ["LAB_180044db8"]="system_init_label_stack_validation"
    ["LAB_180044ee0"]="system_init_label_loop_entry"
    ["LAB_180044f8f"]="system_init_label_loop_continue"
    ["LAB_180044faf"]="system_init_label_loop_exit"
    ["LAB_1800469fd"]="system_init_label_connection_retry"
    ["LAB_180046a90"]="system_init_label_connection_setup"
    ["LAB_180046c00"]="system_init_label_data_prepare"
    ["LAB_180046c5e"]="system_init_label_loop_condition"
    ["LAB_180046c90"]="system_init_label_loop_end"
    ["LAB_180047f2c"]="system_init_label_data_process"
    ["LAB_180047f90"]="system_init_label_array_check"
    ["LAB_180048db7"]="system_init_label_cleanup_start"
    ["LAB_180048dba"]="system_init_label_cleanup_continue"
    ["LAB_180048dd7"]="system_init_label_validation_complete"
    ["LAB_180048e00"]="system_init_label_cleanup_loop"
    ["LAB_180048e20"]="system_init_label_cleanup_exit"
    ["LAB_180048e74"]="system_init_label_final_check"
    ["LAB_180048f62"]="system_init_label_complete"
    ["LAB_18004a0"]="system_init_label_memory_address"
    ["LAB_18004a2b9"]="system_init_label_memory_retry"
    ["LAB_18004c7ef"]="system_init_label_resource_loop"
    ["LAB_18004d1a2"]="system_init_label_resource_process"
    ["LAB_18004d1b9"]="system_init_label_resource_skip"
    ["LAB_18004d1c1"]="system_init_label_resource_next"
    ["LAB_18004e721"]="system_init_label_resource_complete"
    ["LAB_180050"]="system_init_label_buffer_address"
    ["LAB_18005122d"]="system_init_label_file_check"
    ["LAB_180051f8b"]="system_init_label_file_process"
    ["LAB_180051fc9"]="system_init_label_file_validation"
    ["LAB_180052ce0"]="system_init_label_flag_check1"
    ["LAB_180052de5"]="system_init_label_flag_check2"
    ["LAB_1800540"]="system_init_label_stack_address"
    ["LAB_18005419d"]="system_init_label_buffer_retry"
    ["LAB_18005485e"]="system_init_label_stack_check1"
    ["LAB_180054912"]="system_init_label_stack_check2"
    ["LAB_180054d28"]="system_init_label_path_process"
    ["LAB_180054d57"]="system_init_label_path_validation"
    ["LAB_180054ec9"]="system_init_label_path_complete"
    ["LAB_180056220"]="system_init_label_condition_check"
    ["LAB_180056228"]="system_init_label_condition_process"
    ["LAB_18005726e"]="system_init_label_module_setup"
    ["LAB_180057b97"]="system_init_label_module_loop"
    ["LAB_180057ba2"]="system_init_label_module_continue"
    ["LAB_1800580f9"]="system_init_label_module_complete"
    ["LAB_18005810"]="system_init_label_module_validation"
    ["LAB_18005856a"]="system_init_label_module_exit"
    ["LAB_1800590e2"]="system_init_label_config_loop"
    ["LAB_1800591a6"]="system_init_label_config_check"
    ["LAB_180059885"]="system_init_label_config_complete"
)

# 应用替换规则
for old_label in "${!lab_replacements[@]}"; do
    new_label="${lab_replacements[$old_label]}"
    
    # 替换标签定义
    sed -i "s/#define $old_label/#define $old_label $new_label/g" "$FILE"
    
    # 替换标签引用（去除0x前缀）
    clean_label=$(echo "$old_label" | sed 's/0x//g')
    sed -i "s/$clean_label/$new_label/g" "$FILE"
done

echo "LAB标签美化完成"