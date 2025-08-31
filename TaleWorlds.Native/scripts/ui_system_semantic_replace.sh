#!/bin/bash

# UI系统函数名语义化替换脚本
# 简化实现：仅替换常见的FUN_函数名为语义化名称

# 定义文件路径
UI_SYSTEM_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 备份原始文件
cp "$UI_SYSTEM_FILE" "${UI_SYSTEM_FILE}.backup"

# 函数名语义化替换
sed -i 's/FUN_18071ffb4/ui_system_process_math_operations/g' "$UI_SYSTEM_FILE"
sed -i 's/FUN_18071ffc5/ui_system_calculate_vector_transform/g' "$UI_SYSTEM_FILE"
sed -i 's/FUN_1807201ce/ui_system_initialize_render_context/g' "$UI_SYSTEM_FILE"
sed -i 's/FUN_1807201f0/ui_system_setup_shader_program/g' "$UI_SYSTEM_FILE"
sed -i 's/FUN_18072081d/ui_system_create_vertex_buffer/g' "$UI_SYSTEM_FILE"
sed -i 's/FUN_180720b35/ui_system_bind_texture_sampler/g' "$UI_SYSTEM_FILE"
sed -i 's/FUN_180720b60/ui_system_register_event_callback/g' "$UI_SYSTEM_FILE"
sed -i 's/FUN_180720e10/ui_system_dispatch_ui_event/g' "$UI_SYSTEM_FILE"
sed -i 's/FUN_180721650/ui_system_handle_widget_interaction/g' "$UI_SYSTEM_FILE"
sed -i 's/FUN_180721698/ui_system_update_focus_state/g' "$UI_SYSTEM_FILE"

# 变量名语义化替换
sed -i 's/ui_temp_uint_value/ui_temp_unsigned_value/g' "$UI_SYSTEM_FILE"
sed -i 's/ui_event_id_fifth/ui_event_id_secondary/g' "$UI_SYSTEM_FILE"
sed -i 's/ui_event_id7/ui_event_id_masked/g' "$UI_SYSTEM_FILE"
sed -i 's/ui_event_id8/ui_event_id_raw/g' "$UI_SYSTEM_FILE"
sed -i 's/ui_callback_ptr/ui_event_callback_ptr/g' "$UI_SYSTEM_FILE"
sed -i 's/long_counter6/loop_counter_primary/g' "$UI_SYSTEM_FILE"
sed -i 's/uiDistanceDelta/ui_distance_delta/g' "$UI_SYSTEM_FILE"
sed -i 's/uiTimeDelta/ui_time_delta/g' "$UI_SYSTEM_FILE"
sed -i 's/uiMinValue/ui_min_value/g' "$UI_SYSTEM_FILE"
sed -i 's/uiMaxValue/ui_max_value/g' "$UI_SYSTEM_FILE"

echo "UI系统函数名语义化替换完成"