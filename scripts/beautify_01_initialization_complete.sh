#!/bin/bash

# 01_initialization.c 完整变量名美化脚本
# 将剩余的十六进制地址变量名替换为语义化名称

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 备份原始文件
cp "$FILE" "$FILE.backup2"

# 更多数据指针变量名替换
sed -i 's/system_data_bf90c8/system_data_script_manager_ptr/g' "$FILE"
sed -i 's/system_data_a16c50/system_data_string_constants_ptr/g' "$FILE"
sed -i 's/system_data_a16c38/system_data_debug_constants_ptr/g' "$FILE"
sed -i 's/system_data_bf91c8/system_data_animation_manager_ptr/g' "$FILE"
sed -i 's/system_data_bfa368/system_data_physics_engine_ptr/g' "$FILE"
sed -i 's/system_data_c92490/system_data_network_config_ptr/g' "$FILE"
sed -i 's/system_data_c92480/system_data_network_cache_ptr/g' "$FILE"
sed -i 's/system_data_a2c1d0/system_data_ui_theme_ptr/g' "$FILE"
sed -i 's/system_data_a2c338/system_data_ui_layout_ptr/g' "$FILE"
sed -i 's/system_data_a2c510/system_data_ui_controls_ptr/g' "$FILE"
sed -i 's/system_data_bf6060/system_data_ui_events_ptr/g' "$FILE"
sed -i 's/system_data_a2d660/system_data_render_target_ptr/g' "$FILE"
sed -i 's/system_data_a2d590/system_data_render_buffer_ptr/g' "$FILE"
sed -i 's/system_data_c96790/system_data_sound_manager_ptr/g' "$FILE"
sed -i 's/system_data_c967e0/system_data_music_manager_ptr/g' "$FILE"
sed -i 's/system_data_bf0102/system_data_input_config_flag/g' "$FILE"
sed -i 's/system_data_c82860/system_data_debug_mode_flag/g' "$FILE"
sed -i 's/system_data_bf0101/system_data_editor_mode_flag/g' "$FILE"
sed -i 's/system_data_c84870/system_data_global_buffer/g' "$FILE"
sed -i 's/system_data_a012e0/system_data_shader_program_ptr/g' "$FILE"
sed -i 's/system_data_a002e0/system_data_texture_ptr/g' "$FILE"
sed -i 's/system_data_a00410/system_data_material_ptr/g' "$FILE"
sed -i 's/system_data_a012f0/system_data_vertex_buffer_ptr/g' "$FILE"
sed -i 's/system_data_a00ef8/system_data_index_buffer_ptr/g' "$FILE"
sed -i 's/system_data_a01228/system_data_uniform_buffer_ptr/g' "$FILE"
sed -i 's/system_data_a00c90/system_data_frame_buffer_ptr/g' "$FILE"
sed -i 's/system_data_a009f0/system_data_render_state_ptr/g' "$FILE"
sed -i 's/system_data_a00c80/system_data_depth_buffer_ptr/g' "$FILE"
sed -i 's/system_data_c82851/system_data_developer_mode_flag/g' "$FILE"
sed -i 's/system_data_c82863/system_data_profiling_mode_flag/g' "$FILE"
sed -i 's/system_data_c82841/system_data_network_mode_flag/g' "$FILE"
sed -i 's/system_data_d49140/system_data_temp_buffer_1/g' "$FILE"
sed -i 's/system_data_d49148/system_data_temp_buffer_2/g' "$FILE"
sed -i 's/system_data_c82853/system_data_vsync_enabled_flag/g' "$FILE"
sed -i 's/system_data_c82842/system_data_fullscreen_mode_flag/g' "$FILE"
sed -i 's/system_data_c82844/system_data_windowed_mode_flag/g' "$FILE"
sed -i 's/system_data_c82843/system_data_borderless_mode_flag/g' "$FILE"
sed -i 's/system_data_c82850/system_data_multithreading_flag/g' "$FILE"
sed -i 's/system_data_ba28/system_data_stack_min_buffer/g' "$FILE"
sed -i 's/system_data_fc8c8/system_data_shader_constants_ptr/g' "$FILE"
sed -i 's/system_data_d49178/system_data_performance_counter_ptr/g' "$FILE"
sed -i 's/system_data_char_a/system_data_keyboard_state_flag/g' "$FILE"
sed -i 's/system_data_char_b/system_data_mouse_state_flag/g' "$FILE"
sed -i 's/system_data_char_c/system_data_gamepad_state_flag/g' "$FILE"

# 系统变量名替换
sed -i 's/_system_bf_system_data_/system_global_debug_flag_/g' "$FILE"
sed -i 's/_system_bf_system_data_f8/system_global_null_ptr_/g' "$FILE"

echo "完整变量名美化完成"