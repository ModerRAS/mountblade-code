#!/bin/bash

# UI系统最终函数名美化脚本（第三版）
# 用于处理最后剩余的硬编码函数名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 创建备份
cp "$FILE_PATH" "${FILE_PATH}.backup"

# 最终函数名替换映射（第三版）
declare -A FUNCTION_MAP=(
    ["FUN_18062b8b0"]="ui_system_create_callback_data_buffer_with_params"
    ["func_0x000180668820"]="ui_system_process_callback_data_with_params"
    ["func_0x0001806689f0"]="ui_system_process_long_counter_with_params"
    ["func_0x000180435370"]="ui_system_update_ui_display_with_params"
    ["func_0x000180074f10"]="ui_system_handle_ui_input_with_params"
    ["func_0x000180743c20"]="ui_system_create_debug_panel_with_params"
    ["func_0x000180435420"]="ui_system_get_widget_character_with_params"
    ["func_0x000180435400"]="ui_system_get_widget_state_with_params"
    ["func_0x000180084f70"]="ui_system_get_widget_scale_factor_with_params"
    ["func_0x00018022b430"]="ui_system_cleanup_widget_resources_with_params"
    ["func_0x00018022b3c0"]="ui_system_create_widget_buffer_with_params"
    ["func_0x00018022b490"]="ui_system_initialize_widget_buffer_with_params"
    ["func_0x0001803812e0"]="ui_system_validate_widget_buffer_with_params"
    ["func_0x0001806673d0"]="ui_system_get_widget_data_with_params"
    ["func_0x000180285c90"]="ui_system_calculate_widget_position_transform_with_params"
    ["func_0x000180085850"]="ui_system_process_widget_position_with_params"
    ["func_0x0001800f8f10"]="ui_system_create_widget_identifier_with_params"
)

# 执行替换
for old_name in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" "$FILE_PATH"
done

echo "UI系统最终函数名美化完成（第三版）"