#!/bin/bash

# UI系统in_stack变量名语义化美化脚本
# 将十六进制地址的in_stack变量名替换为语义化名称

# 定义替换规则
declare -A replacements=(
    ["in_stack_00000028"]="ui_in_stack_return_value"
    ["in_stack_00000058"]="ui_in_stack_event_flags"
    ["in_stack_00000078"]="ui_in_stack_task_index"
    ["in_stack_00000080"]="ui_in_stack_event_data"
    ["in_stack_00000088"]="ui_in_stack_data_pointer"
    ["in_stack_00000090"]="ui_in_stack_callback_pointer"
    ["in_stack_00000098"]="ui_in_stack_system_register"
    ["in_stack_000000a8"]="ui_in_stack_validation_data"
    ["in_stack_000000b0"]="ui_in_stack_processing_data"
    ["in_stack_000000b8"]="ui_in_stack_transform_array_a"
    ["in_stack_000000c0"]="ui_in_stack_transform_array_b"
    ["in_stack_000000c8"]="ui_in_stack_loop_counter"
    ["in_stack_000000d0"]="ui_in_stack_data_offset"
    ["in_stack_000000d8"]="ui_in_stack_short_data"
    ["in_stack_000000e0"]="ui_in_stack_ushort_data"
    ["in_stack_000000f8"]="ui_in_stack_register_offset"
    ["in_stack_00000128"]="ui_in_stack_float_data"
    ["in_stack_00000130"]="ui_in_stack_bitmask_data"
    ["in_stack_000001a0"]="ui_in_stack_transform_primary"
    ["in_stack_000001a8"]="ui_in_stack_transform_secondary"
    ["in_stack_000001b0"]="ui_in_stack_render_command"
    ["in_stack_000001c0"]="ui_in_stack_render_pointer"
    ["in_stack_000001c8"]="ui_in_stack_float_pointer"
    ["in_stack_000001d0"]="ui_in_stack_float_value"
    ["in_stack_000001d8"]="ui_in_stack_long_data"
    ["in_stack_000001e0"]="ui_in_stack_int_counter"
    ["in_stack_000001e8"]="ui_in_stack_long_counter"
    ["in_stack_000001f0"]="ui_in_stack_int_stack"
    ["in_stack_ffffffffffffff88"]="ui_in_stack_negative_event"
    ["in_stack_ffffffffffffffa8"]="ui_in_stack_negative_data"
    ["in_stack_ffffffffffffffc8"]="ui_in_stack_negative_task"
    ["in_stack_ffffffffffffffd0"]="ui_in_stack_negative_callback"
    ["in_stack_fffffffffffffdb8"]="ui_in_stack_negative_identifier"
)

# 遍历所有替换规则
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    
    # 使用sed进行替换
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
    
    echo "替换完成: $old_name -> $new_name"
done

echo "所有in_stack变量名语义化美化完成！"