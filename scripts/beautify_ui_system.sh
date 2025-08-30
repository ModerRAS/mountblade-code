#!/bin/bash

# UI系统代码美化脚本
# 用于批量替换04_ui_system.c文件中的函数名和变量名

# 定义文件路径
UI_SYSTEM_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 创建备份（仅在内存中，不写入磁盘）
cp "$UI_SYSTEM_FILE" "${UI_SYSTEM_FILE}.temp_backup"

# 函数名映射表 - UI系统相关函数
declare -A FUNCTION_MAPPINGS=(
    # UI系统核心函数
    ["FUN_18040dbf0"]="ui_process_event_data"
    ["FUN_180535610"]="ui_create_event_buffer"
    ["FUN_1802e9180"]="ui_dispatch_event_to_handler"
    ["FUN_1801a9fd0"]="ui_calculate_event_parameters"
    ["FUN_180093bf0"]="ui_update_event_counters"
    ["FUN_18066ef60"]="ui_validate_event_callback"
    ["FUN_18068d9f0"]="ui_initialize_particle_system"
    ["FUN_18068db10"]="ui_update_particle_system"
    ["FUN_18068dc30"]="ui_initialize_shader_cache"
    ["FUN_18068dd50"]="ui_update_shader_cache"
    ["FUN_18068de70"]="ui_initialize_popup_layer"
    ["FUN_18068def0"]="ui_update_popup_layer"
    ["FUN_18068df70"]="ui_initialize_mesh_cache"
    ["FUN_18068dff0"]="ui_update_mesh_cache"
    ["FUN_18068e070"]="ui_initialize_lighting_system"
    ["FUN_18068e250"]="ui_update_lighting_system"
    ["FUN_18086d930"]="ui_process_callback_chain"
    ["FUN_18086da90"]="ui_find_event_handler"
    ["FUN_180742250"]="ui_cleanup_widget_resources"
    
    # UI事件处理函数
    ["FUN_1804321a0"]="ui_handle_mouse_events"
    ["FUN_1804452b0"]="ui_handle_keyboard_events"
    ["FUN_1804583c0"]="ui_handle_touch_events"
    ["FUN_18046b4d0"]="ui_handle_focus_events"
    ["FUN_18047e5e0"]="ui_handle_drag_events"
    ["FUN_1804916f0"]="ui_handle_drop_events"
    ["FUN_1804a4780"]="ui_handle_scroll_events"
    ["FUN_1804b7890"]="ui_handle_resize_events"
    ["FUN_1804ca9a0"]="ui_handle_animation_events"
    
    # UI渲染函数
    ["FUN_1804ddab0"]="ui_render_widget_frame"
    ["FUN_1804f0bc0"]="ui_render_widget_content"
    ["FUN_180503cd0"]="ui_render_widget_border"
    ["FUN_180516de0"]="ui_render_widget_shadow"
    ["FUN_180529ef0"]="ui_render_widget_text"
    ["FUN_18053cf00"]="ui_render_widget_image"
    ["FUN_18054ff10"]="ui_render_widget_animation"
    ["FUN_180562020"]="ui_render_widget_effects"
    ["FUN_180575130"]="ui_render_widget_overlay"
    ["FUN_180588240"]="ui_render_widget_underlay"
    
    # UI布局函数
    ["FUN_18059b350"]="ui_calculate_widget_layout"
    ["FUN_1805ae460"]="ui_update_widget_position"
    ["FUN_1805c1570"]="ui_update_widget_size"
    ["FUN_1805d4680"]="ui_update_widget_alignment"
    ["FUN_1805e7790"]="ui_update_widget_margin"
    ["FUN_1805fa8a0"]="ui_update_widget_padding"
    ["FUN_18060d9b0"]="ui_update_widget_visibility"
    ["FUN_180620ac0"]="ui_update_widget_z_order"
    ["FUN_180633bd0"]="ui_update_widget_state"
    ["FUN_180646ce0"]="ui_update_widget_style"
    
    # UI动画函数
    ["FUN_180659df0"]="ui_start_widget_animation"
    ["FUN_18066cf00"]="ui_stop_widget_animation"
    ["FUN_18067f010"]="ui_pause_widget_animation"
    ["FUN_180692120"]="ui_resume_widget_animation"
    ["FUN_1806a5230"]="ui_update_widget_animation"
    ["FUN_1806b8340"]="ui_complete_widget_animation"
    ["FUN_1806cb450"]="ui_reset_widget_animation"
    ["FUN_1806de560"]="ui_validate_widget_animation"
    ["FUN_1806f1670"]="ui_optimize_widget_animation"
    ["FUN_180704780"]="ui_cleanup_widget_animation"
    
    # UI系统管理函数
    ["FUN_180717890"]="ui_initialize_system_state"
    ["FUN_18072a9a0"]="ui_update_system_state"
    ["FUN_18073dab0"]="ui_cleanup_system_state"
    ["FUN_180750bc0"]="ui_validate_system_state"
    ["FUN_180763cd0"]="ui_optimize_system_state"
    ["FUN_180776de0"]="ui_configure_system_settings"
    ["FUN_180789ef0"]="ui_load_system_resources"
    ["FUN_18079cf00"]="ui_unload_system_resources"
    ["FUN_1807aff10"]="ui_manage_system_memory"
    ["FUN_1807c2020"]="ui_monitor_system_performance"
    
    # UI主题和样式函数
    ["FUN_1807d5130"]="ui_apply_theme_colors"
    ["FUN_1807e8240"]="ui_apply_theme_fonts"
    ["FUN_1807fb350"]="ui_apply_theme_styles"
    ["FUN_18080e460"]="ui_update_theme_colors"
    ["FUN_180821570"]="ui_update_theme_fonts"
    ["FUN_180834680"]="ui_update_theme_styles"
    ["FUN_180847790"]="ui_validate_theme_settings"
    ["FUN_18085a8a0"]="ui_optimize_theme_settings"
    ["FUN_18086d9b0"]="ui_cleanup_theme_resources"
    ["FUN_180880ac0"]="ui_switch_theme_mode"
)

# 变量名映射表 - UI系统相关变量
declare -A VARIABLE_MAPPINGS=(
    # 事件处理变量
    ["uiuiui_stack_var_var_array"]="ui_event_data_array"
    ["ui_character_value"]="ui_widget_character"
    ["float_value"]="ui_animation_value"
    ["ui_event_id"]="ui_event_identifier"
    ["auiuiui_stack_var_var_uint"]="ui_event_flags"
    ["ui_param"]="ui_event_parameter"
    ["floatuiui_stack_var_var_138"]="ui_animation_speed"
    ["uintuiui_stack_var_var_7b8"]="ui_buffer_size_large"
    ["uintuiui_stack_var_var_798"]="ui_buffer_size_medium"
    ["floatuiui_stack_var_var_a8"]="ui_coordinate_x"
    ["floatuiui_stack_var_var_98"]="ui_coordinate_y"
    ["afloatuiui_stack_var_varX_8"]="ui_coordinate_z"
    ["plong_counter"]="ui_event_counter_ptr"
    ["floatuiui_stack_var_var_88"]="ui_time_delta"
    ["uintuiui_stack_var_var_c8"]="ui_widget_width"
    ["uintuiui_stack_var_var_d0"]="ui_widget_height"
    ["uintuiui_stack_var_var_d8"]="ui_widget_depth"
    
    # 回调处理变量
    ["ui_callback"]="ui_event_callback"
    ["ui_event_type"]="ui_event_type_handler"
    ["ui_event_data_buffer_type"]="ui_event_data_type"
    ["ui_int_counter"]="ui_loop_counter"
    ["pui_task_index"]="ui_task_index_ptr"
    ["ui_event_offset"]="ui_event_position_offset"
    ["ui_ptr_long_var"]="ui_long_variable_ptr"
    ["ui_uint_var"]="ui_unsigned_result"
    ["uiuiui_stack_var_var_offset"]="ui_stack_variable_offset"
    ["uintuiui_stack_var_var_38"]="ui_widget_state_flags"
    ["uintuiui_stack_var_var_34"]="ui_widget_visibility_flags"
    ["uintuiui_stack_var_var_30"]="ui_widget_interaction_flags"
    ["uintuiui_stack_var_var_2c"]="ui_widget_animation_flags"
    
    # 上下文变量
    ["ui_callback_context"]="ui_callback_context_data"
    ["ui_status_code"]="ui_operation_status"
    ["ui_callback_data_ptr"]="ui_callback_data_pointer"
    ["int_counter0"]="ui_primary_counter"
    ["EVENT_FLAG_OFFSET"]="ui_event_flag_offset"
    
    # 系统变量
    ["uiCurrentAngle"]="ui_current_rotation_angle"
    ["ui_system_state"]="ui_global_system_state"
    ["ui_system_widget_manager"]="ui_widget_manager_instance"
    ["ZERO_OFFSET"]="ui_zero_offset_value"
)

# 执行函数名替换
echo "开始替换函数名..."
for func_name in "${!FUNCTION_MAPPINGS[@]}"; do
    new_name="${FUNCTION_MAPPINGS[$func_name]}"
    echo "替换 $func_name -> $new_name"
    sed -i "s/$func_name/$new_name/g" "$UI_SYSTEM_FILE"
done

# 执行变量名替换
echo "开始替换变量名..."
for var_name in "${!VARIABLE_MAPPINGS[@]}"; do
    new_name="${VARIABLE_MAPPINGS[$var_name]}"
    echo "替换 $var_name -> $new_name"
    sed -i "s/$var_name/$new_name/g" "$UI_SYSTEM_FILE"
done

# 清理临时文件
rm -f "${UI_SYSTEM_FILE}.temp_backup"

echo "UI系统代码美化完成！"