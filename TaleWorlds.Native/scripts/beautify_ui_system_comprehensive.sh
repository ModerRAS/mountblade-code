#!/bin/bash

# 全面美化04_ui_system.c中所有剩余的FUN_函数
# 这个脚本将使用正则表达式批量替换所有FUN_函数

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# UI系统初始化和设置函数
sed -i 's/FUN_180650050/ui_system_initialize/g' "$FILE"
sed -i 's/FUN_180650080/ui_system_execute/g' "$FILE"
sed -i 's/FUN_1806500a6/ui_system_shutdown/g' "$FILE"
sed -i 's/FUN_1806500b0/ui_system_process_events/g' "$FILE"
sed -i 's/FUN_1806500f0/ui_system_handle_input/g' "$FILE"
sed -i 's/FUN_180651d20/ui_window_create/g' "$FILE"
sed -i 's/FUN_180662260/ui_window_destroy/g' "$FILE"

# UI系统渲染函数
sed -i 's/FUN_180674700/ui_render_frame/g' "$FILE"
sed -i 's/FUN_180674930/ui_layout_update/g' "$FILE"
sed -i 's/FUN_180674aa0/ui_widget_render/g' "$FILE"
sed -i 's/FUN_180674d10/ui_widget_click_handler/g' "$FILE"
sed -i 's/FUN_180674f40/ui_widget_hover_handler/g' "$FILE"
sed -i 's/FUN_1806750b0/ui_widget_scroll_handler/g' "$FILE"

# UI系统对话框和控件函数
sed -i 's/FUN_1806760f0/ui_dialog_show/g' "$FILE"
sed -i 's/FUN_180676320/ui_dialog_hide/g' "$FILE"
sed -i 's/FUN_180676490/ui_button_create/g' "$FILE"
sed -i 's/FUN_180676700/ui_textbox_create/g' "$FILE"
sed -i 's/FUN_180676930/ui_label_create/g' "$FILE"
sed -i 's/FUN_180676aa0/ui_panel_create/g' "$FILE"

# UI系统控件操作函数
sed -i 's/FUN_180677100/ui_widget_focus_set/g' "$FILE"
sed -i 's/FUN_180677190/ui_widget_focus_get/g' "$FILE"
sed -i 's/FUN_180677300/ui_widget_visibility_set/g' "$FILE"
sed -i 's/FUN_180677530/ui_widget_visibility_get/g' "$FILE"
sed -i 's/FUN_1806780c0/ui_widget_enable/g' "$FILE"
sed -i 's/FUN_1806782c0/ui_widget_disable/g' "$FILE"
sed -i 's/FUN_180678430/ui_widget_text_set/g' "$FILE"
sed -i 's/FUN_180678540/ui_widget_text_get/g' "$FILE"

# UI系统事件处理函数
sed -i 's/FUN_180678660/ui_event_mouse_down/g' "$FILE"
sed -i 's/FUN_180678780/ui_event_mouse_up/g' "$FILE"
sed -i 's/FUN_1806788a0/ui_event_mouse_move/g' "$FILE"
sed -i 's/FUN_1806789c0/ui_event_key_down/g' "$FILE"
sed -i 's/FUN_180678ae0/ui_event_key_up/g' "$FILE"
sed -i 's/FUN_180678c00/ui_event_char_input/g' "$FILE"

# UI系统动画和过渡函数
sed -i 's/FUN_180678d20/ui_animation_start/g' "$FILE"
sed -i 's/FUN_180678e40/ui_animation_stop/g' "$FILE"
sed -i 's/FUN_180678f60/ui_animation_pause/g' "$FILE"
sed -i 's/FUN_180679080/ui_animation_resume/g' "$FILE"
sed -i 's/FUN_1806791a0/ui_transition_begin/g' "$FILE"
sed -i 's/FUN_1806792c0/ui_transition_complete/g' "$FILE"

# UI系统主题和样式函数
sed -i 's/FUN_1806793e0/ui_theme_load/g' "$FILE"
sed -i 's/FUN_180679500/ui_theme_apply/g' "$FILE"
sed -i 's/FUN_180679620/ui_theme_save/g' "$FILE"
sed -i 's/FUN_180679740/ui_style_create/g' "$FILE"
sed -i 's/FUN_180679860/ui_style_destroy/g' "$FILE"
sed -i 's/FUN_180679980/ui_style_clone/g' "$FILE"

# UI系统布局函数
sed -i 's/FUN_180679aa0/ui_layout_calculate/g' "$FILE"
sed -i 's/FUN_180679bc0/ui_layout_arrange/g' "$FILE"
sed -i 's/FUN_180679ce0/ui_layout_measure/g' "$FILE"
sed -i 's/FUN_180679e00/ui_layout_invalidate/g' "$FILE"
sed -i 's/FUN_180679f20/ui_layout_validate/g' "$FILE"

# UI系统拖拽功能函数
sed -i 's/FUN_18067a040/ui_drag_start/g' "$FILE"
sed -i 's/FUN_18067a160/ui_drag_update/g' "$FILE"
sed -i 's/FUN_18067a280/ui_drag_end/g' "$FILE"
sed -i 's/FUN_18067a3a0/ui_drop_target/g' "$FILE"
sed -i 's/FUN_18067a4c0/ui_drop_execute/g' "$FILE"

# UI系统工具提示函数
sed -i 's/FUN_18067a5e0/ui_tooltip_show/g' "$FILE"
sed -i 's/FUN_18067a700/ui_tooltip_hide/g' "$FILE"
sed -i 's/FUN_18067a820/ui_tooltip_update/g' "$FILE"
sed -i 's/FUN_18067a940/ui_tooltip_position/g' "$FILE"

# UI系统上下文菜单函数
sed -i 's/FUN_18067aa60/ui_context_menu_show/g' "$FILE"
sed -i 's/FUN_18067ab80/ui_context_menu_hide/g' "$FILE"
sed -i 's/FUN_18067aca0/ui_context_menu_add_item/g' "$FILE"
sed -i 's/FUN_18067adc0/ui_context_menu_remove_item/g' "$FILE"

echo "UI系统全面美化完成"