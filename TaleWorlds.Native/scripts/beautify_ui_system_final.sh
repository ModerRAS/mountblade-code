#!/bin/bash

# 最终美化04_ui_system.c中的函数名
# 这个脚本将处理剩余的FUN_函数名

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# UI系统事件处理函数
sed -i 's/FUN_1806780c0/ui_widget_set_enabled/g' "$FILE"
sed -i 's/FUN_1806782c0/ui_widget_set_disabled/g' "$FILE"
sed -i 's/FUN_180678430/ui_widget_set_text/g' "$FILE"
sed -i 's/FUN_180678540/ui_widget_get_text/g' "$FILE"
sed -i 's/FUN_180674700/ui_render_begin_frame/g' "$FILE"
sed -i 's/FUN_180674930/ui_layout_update_widgets/g' "$FILE"
sed -i 's/FUN_180674aa0/ui_widget_draw_content/g' "$FILE"
sed -i 's/FUN_180674d10/ui_widget_on_click/g' "$FILE"
sed -i 's/FUN_180674f40/ui_widget_on_hover/g' "$FILE"
sed -i 's/FUN_1806750b0/ui_widget_on_scroll/g' "$FILE"

# UI系统对话框函数
sed -i 's/FUN_1806760f0/ui_dialog_show_message/g' "$FILE"
sed -i 's/FUN_180676320/ui_dialog_hide_message/g' "$FILE"
sed -i 's/FUN_180676490/ui_button_create_new/g' "$FILE"
sed -i 's/FUN_180676700/ui_textbox_create_new/g' "$FILE"
sed -i 's/FUN_180676930/ui_label_create_new/g' "$FILE"
sed -i 's/FUN_180676aa0/ui_panel_create_new/g' "$FILE"
sed -i 's/FUN_180677100/ui_widget_set_focus/g' "$FILE"
sed -i 's/FUN_180677190/ui_widget_get_focus/g' "$FILE"
sed -i 's/FUN_180677300/ui_widget_set_visible/g' "$FILE"
sed -i 's/FUN_180677530/ui_widget_get_visible/g' "$FILE"

# UI系统输入处理函数
sed -i 's/FUN_1806500f0/ui_input_process_event/g' "$FILE"
sed -i 's/FUN_1806500b0/ui_event_handle_message/g' "$FILE"
sed -i 's/FUN_180651d20/ui_window_create_main/g' "$FILE"
sed -i 's/FUN_180662260/ui_window_destroy_main/g' "$FILE"

# UI系统内部函数
sed -i 's/FUN_1808fcdc8/ui_task_notify_complete/g' "$FILE"
sed -i 's/SUB_18063e940/ui_system_check_initialized/g' "$FILE"

echo "UI系统函数名最终美化完成"