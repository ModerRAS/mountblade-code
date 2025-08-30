#!/bin/bash

# UI系统长整型栈变量名语义化美化脚本
# 将十六进制地址的长整型栈变量名替换为语义化名称

# 定义替换规则
declare -A replacements=(
    ["ui_long_stack_28"]="ui_long_stack_callback_offset"
    ["ui_long_stack_30"]="ui_long_stack_register_index"
    ["ui_long_stack_38"]="ui_long_stack_event_flags"
    ["ui_long_stack_40"]="ui_long_stack_widget_offset"
    ["ui_long_stack_48"]="ui_long_stack_callback_function"
    ["ui_long_stack_50"]="ui_long_stack_register_offset"
    ["ui_long_stack_60"]="ui_long_stack_event_data_offset"
    ["ui_long_stack_68"]="ui_long_stack_callback_data_offset"
    ["ui_long_stack_70"]="ui_long_stack_system_register"
    ["ui_long_stack_78"]="ui_long_stack_system_register_secondary"
    ["ui_long_stack_80"]="ui_long_stack_event_data_secondary"
    ["ui_long_stack_88"]="ui_long_stack_callback_pointer"
    ["ui_long_stack_90"]="ui_long_stack_data_pointer"
    ["ui_long_stack_98"]="ui_long_stack_pointer_secondary"
    ["ui_long_stack_b0"]="ui_long_stack_event_processing"
    ["ui_long_stack_b8"]="ui_long_stack_event_counter"
    ["ui_long_stack_c8"]="ui_long_stack_loop_counter"
    ["ui_long_stack_f0"]="ui_long_stack_event_type_offset"
)

# 遍历所有替换规则
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    
    # 使用sed进行替换
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
    
    echo "替换完成: $old_name -> $new_name"
done

echo "所有长整型栈变量名语义化美化完成！"