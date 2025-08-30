#!/bin/bash

# UI系统变量名美化脚本
# 将带有_var后缀的变量名替换为语义化的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 美化变量名 - 将_var后缀替换为更语义化的名称
sed -i 's/ui_animation_task_buffer_var/ui_animation_task_buffer/g' 04_ui_system.c
sed -i 's/ui_render_command_buffer_var/ui_render_command_buffer/g' 04_ui_system.c
sed -i 's/ui_input_event_buffer_var/ui_input_event_buffer/g' 04_ui_system.c
sed -i 's/ui_widget_state_buffer_var/ui_widget_state_buffer/g' 04_ui_system.c
sed -i 's/ui_window_properties_buffer_var/ui_window_properties_buffer/g' 04_ui_system.c
sed -i 's/ui_theme_color_buffer_var/ui_theme_color_buffer/g' 04_ui_system.c
sed -i 's/ui_font_metrics_buffer_var/ui_font_metrics_buffer/g' 04_ui_system.c
sed -i 's/ui_task_index_buffer_var/ui_task_index_buffer/g' 04_ui_system.c
sed -i 's/ui_shader_program_buffer_var/ui_shader_program_buffer/g' 04_ui_system.c
sed -i 's/ui_layout_constraints_buffer_var/ui_layout_constraints_buffer/g' 04_ui_system.c
sed -i 's/ui_temporary_buffer_var/ui_temporary_buffer/g' 04_ui_system.c
sed -i 's/ui_short_var/ui_short_value/g' 04_ui_system.c
sed -i 's/ui_uint_var/ui_uint_value/g' 04_ui_system.c
sed -i 's/ui_char_var/ui_char_value/g' 04_ui_system.c
sed -i 's/ui_bool_var/ui_bool_value/g' 04_ui_system.c
sed -i 's/ui_ptr_long_var/ui_pointer_long_value/g' 04_ui_system.c
sed -i 's/ui_ptr_bool_var/ui_pointer_bool_value/g' 04_ui_system.c

echo "变量名美化完成"