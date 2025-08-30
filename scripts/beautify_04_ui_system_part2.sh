#!/bin/bash

# UI系统函数名语义化美化脚本（2025年8月30日最终批次 - 第二部分）
# 本脚本用于继续批量替换04_ui_system.c中的函数名

echo "开始第二阶段UI系统函数名美化..."

# 定义函数名替换映射
declare -A FUNCTION_MAP=(
    # 渲染相关函数
    ["ui_system_generic_function_01110"]="ui_system_render_widget_content"
    ["ui_system_generic_function_01120"]="ui_system_process_widget_event"
    ["ui_system_generic_function_01130"]="ui_system_handle_widget_interaction"
    ["ui_system_generic_function_01140"]="ui_system_update_widget_position"
    ["ui_system_generic_function_01150"]="ui_system_validate_widget_state"
    ["ui_system_generic_function_01160"]="ui_system_apply_widget_transform"
    ["ui_system_generic_function_01170"]="ui_system_finalize_widget_render"
    ["ui_system_generic_function_01180"]="ui_system_execute_widget_callback"
    ["ui_system_generic_function_01280"]="ui_system_refresh_display"
    ["ui_system_generic_function_01290"]="ui_system_process_display_update"
    
    # 事件处理函数
    ["ui_system_generic_function_01340"]="ui_system_handle_display_events"
    ["ui_system_generic_function_01370"]="ui_system_process_display_tasks"
    ["ui_system_generic_function_01380"]="ui_system_handle_generic_event_01380"
    
    # 数据处理函数
    ["ui_system_generic_function_01400"]="ui_system_process_widget_data_01400"
    ["ui_system_generic_function_01410"]="ui_system_handle_widget_data_01410"
    ["ui_system_generic_function_01420"]="ui_system_update_widget_data_01420"
    ["ui_system_generic_function_01430"]="ui_system_validate_widget_data_01430"
    ["ui_system_generic_function_01440"]="ui_system_clear_widget_data_01440"
    ["ui_system_generic_function_01450"]="ui_system_reset_widget_data_01450"
    
    # 状态管理函数
    ["ui_system_generic_function_01460"]="ui_system_process_widget_state_01460"
    ["ui_system_generic_function_01470"]="ui_system_handle_widget_state_01470"
    ["ui_system_generic_function_01480"]="ui_system_update_widget_state_01480"
    ["ui_system_generic_function_01490"]="ui_system_validate_widget_state_01490"
    ["ui_system_generic_function_01500"]="ui_system_clear_widget_state_01500"
    ["ui_system_generic_function_01510"]="ui_system_reset_widget_state_01510"
    
    # 事件管理函数
    ["ui_system_generic_function_01520"]="ui_system_process_widget_events_01520"
    ["ui_system_generic_function_01530"]="ui_system_handle_widget_events_01530"
    ["ui_system_generic_function_01540"]="ui_system_update_widget_events_01540"
    ["ui_system_generic_function_01550"]="ui_system_validate_widget_events_01550"
    ["ui_system_generic_function_01560"]="ui_system_clear_widget_events_01560"
    ["ui_system_generic_function_01570"]="ui_system_reset_widget_events_01570"
    
    # 回调处理函数
    ["ui_system_generic_function_01580"]="ui_system_process_widget_callbacks_01580"
    ["ui_system_generic_function_01590"]="ui_system_handle_widget_callbacks_01590"
    ["ui_system_generic_function_01600"]="ui_system_update_widget_callbacks_01600"
    ["ui_system_generic_function_01610"]="ui_system_validate_widget_callbacks_01610"
    ["ui_system_generic_function_01620"]="ui_system_clear_widget_callbacks_01620"
    ["ui_system_generic_function_01630"]="ui_system_reset_widget_callbacks_01630"
    
    # 渲染函数
    ["ui_system_generic_function_01640"]="ui_system_process_widget_render_01640"
    ["ui_system_generic_function_01650"]="ui_system_handle_widget_render_01650"
    ["ui_system_generic_function_01660"]="ui_system_update_widget_render_01660"
    ["ui_system_generic_function_01670"]="ui_system_validate_widget_render_01670"
    ["ui_system_generic_function_01680"]="ui_system_clear_widget_render_01680"
    ["ui_system_generic_function_01690"]="ui_system_reset_widget_render_01690"
    
    # 系统函数
    ["ui_system_generic_function_01700"]="ui_system_process_system_tasks_01700"
    ["ui_system_generic_function_01710"]="ui_system_handle_system_tasks_01710"
    ["ui_system_generic_function_01720"]="ui_system_update_system_tasks_01720"
    ["ui_system_generic_function_01730"]="ui_system_validate_system_tasks_01730"
    ["ui_system_generic_function_01740"]="ui_system_clear_system_tasks_01740"
    ["ui_system_generic_function_01750"]="ui_system_reset_system_tasks_01750"
)

# 执行替换
for old_name in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$old_name]}"
    echo "替换: $old_name -> $new_name"
    
    # 使用sed进行替换
    sed -i "s/$old_name/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
done

echo "第二阶段UI系统函数名美化完成！"

# 添加常量定义到文件头部
cat >> /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c << 'EOF'

// UI系统函数名语义化常量定义（2025年8月30日最终批次第二部分补充）：
#define UI_SYSTEM_RENDER_WIDGET_CONTENT ui_system_render_widget_content                 // UI系统渲染组件内容
#define UI_SYSTEM_PROCESS_WIDGET_EVENT ui_system_process_widget_event                 // UI系统处理组件事件
#define UI_SYSTEM_HANDLE_WIDGET_INTERACTION ui_system_handle_widget_interaction       // UI系统处理组件交互
#define UI_SYSTEM_UPDATE_WIDGET_POSITION ui_system_update_widget_position             // UI系统更新组件位置
#define UI_SYSTEM_VALIDATE_WIDGET_STATE ui_system_validate_widget_state               // UI系统验证组件状态
#define UI_SYSTEM_APPLY_WIDGET_TRANSFORM ui_system_apply_widget_transform             // UI系统应用组件变换
#define UI_SYSTEM_FINALIZE_WIDGET_RENDER ui_system_finalize_widget_render             // UI系统完成组件渲染
#define UI_SYSTEM_EXECUTE_WIDGET_CALLBACK ui_system_execute_widget_callback           // UI系统执行组件回调
#define UI_SYSTEM_REFRESH_DISPLAY ui_system_refresh_display                           // UI系统刷新显示
#define UI_SYSTEM_PROCESS_DISPLAY_UPDATE ui_system_process_display_update             // UI系统处理显示更新

#define UI_SYSTEM_HANDLE_DISPLAY_EVENTS ui_system_handle_display_events               // UI系统处理显示事件
#define UI_SYSTEM_PROCESS_DISPLAY_TASKS ui_system_process_display_tasks               // UI系统处理显示任务
#define UI_SYSTEM_HANDLE_GENERIC_EVENT_01380 ui_system_handle_generic_event_01380     // UI系统处理通用事件01380

#define UI_SYSTEM_PROCESS_WIDGET_DATA_01400 ui_system_process_widget_data_01400       // UI系统处理组件数据01400
#define UI_SYSTEM_HANDLE_WIDGET_DATA_01410 ui_system_handle_widget_data_01410         // UI系统处理组件数据01410
#define UI_SYSTEM_UPDATE_WIDGET_DATA_01420 ui_system_update_widget_data_01420         // UI系统更新组件数据01420
#define UI_SYSTEM_VALIDATE_WIDGET_DATA_01430 ui_system_validate_widget_data_01430     // UI系统验证组件数据01430
#define UI_SYSTEM_CLEAR_WIDGET_DATA_01440 ui_system_clear_widget_data_01440           // UI系统清空组件数据01440
#define UI_SYSTEM_RESET_WIDGET_DATA_01450 ui_system_reset_widget_data_01450           // UI系统重置组件数据01450

#define UI_SYSTEM_PROCESS_WIDGET_STATE_01460 ui_system_process_widget_state_01460     // UI系统处理组件状态01460
#define UI_SYSTEM_HANDLE_WIDGET_STATE_01470 ui_system_handle_widget_state_01470       // UI系统处理组件状态01470
#define UI_SYSTEM_UPDATE_WIDGET_STATE_01480 ui_system_update_widget_state_01480       // UI系统更新组件状态01480
#define UI_SYSTEM_VALIDATE_WIDGET_STATE_01490 ui_system_validate_widget_state_01490   // UI系统验证组件状态01490
#define UI_SYSTEM_CLEAR_WIDGET_STATE_01500 ui_system_clear_widget_state_01500         // UI系统清空组件状态01500
#define UI_SYSTEM_RESET_WIDGET_STATE_01510 ui_system_reset_widget_state_01510         // UI系统重置组件状态01510

#define UI_SYSTEM_PROCESS_WIDGET_EVENTS_01520 ui_system_process_widget_events_01520   // UI系统处理组件事件01520
#define UI_SYSTEM_HANDLE_WIDGET_EVENTS_01530 ui_system_handle_widget_events_01530     // UI系统处理组件事件01530
#define UI_SYSTEM_UPDATE_WIDGET_EVENTS_01540 ui_system_update_widget_events_01540     // UI系统更新组件事件01540
#define UI_SYSTEM_VALIDATE_WIDGET_EVENTS_01550 ui_system_validate_widget_events_01550 // UI系统验证组件事件01550
#define UI_SYSTEM_CLEAR_WIDGET_EVENTS_01560 ui_system_clear_widget_events_01560       // UI系统清空组件事件01560
#define UI_SYSTEM_RESET_WIDGET_EVENTS_01570 ui_system_reset_widget_events_01570       // UI系统重置组件事件01570

#define UI_SYSTEM_PROCESS_WIDGET_CALLBACKS_01580 ui_system_process_widget_callbacks_01580 // UI系统处理组件回调01580
#define UI_SYSTEM_HANDLE_WIDGET_CALLBACKS_01590 ui_system_handle_widget_callbacks_01590 // UI系统处理组件回调01590
#define UI_SYSTEM_UPDATE_WIDGET_CALLBACKS_01600 ui_system_update_widget_callbacks_01600 // UI系统更新组件回调01600
#define UI_SYSTEM_VALIDATE_WIDGET_CALLBACKS_01610 ui_system_validate_widget_callbacks_01610 // UI系统验证组件回调01610
#define UI_SYSTEM_CLEAR_WIDGET_CALLBACKS_01620 ui_system_clear_widget_callbacks_01620   // UI系统清空组件回调01620
#define UI_SYSTEM_RESET_WIDGET_CALLBACKS_01630 ui_system_reset_widget_callbacks_01630   // UI系统重置组件回调01630

#define UI_SYSTEM_PROCESS_WIDGET_RENDER_01640 ui_system_process_widget_render_01640     // UI系统处理组件渲染01640
#define UI_SYSTEM_HANDLE_WIDGET_RENDER_01650 ui_system_handle_widget_render_01650     // UI系统处理组件渲染01650
#define UI_SYSTEM_UPDATE_WIDGET_RENDER_01660 ui_system_update_widget_render_01660     // UI系统更新组件渲染01660
#define UI_SYSTEM_VALIDATE_WIDGET_RENDER_01670 ui_system_validate_widget_render_01670 // UI系统验证组件渲染01670
#define UI_SYSTEM_CLEAR_WIDGET_RENDER_01680 ui_system_clear_widget_render_01680       // UI系统清空组件渲染01680
#define UI_SYSTEM_RESET_WIDGET_RENDER_01690 ui_system_reset_widget_render_01690       // UI系统重置组件渲染01690

#define UI_SYSTEM_PROCESS_SYSTEM_TASKS_01700 ui_system_process_system_tasks_01700     // UI系统处理系统任务01700
#define UI_SYSTEM_HANDLE_SYSTEM_TASKS_01710 ui_system_handle_system_tasks_01710       // UI系统处理系统任务01710
#define UI_SYSTEM_UPDATE_SYSTEM_TASKS_01720 ui_system_update_system_tasks_01720       // UI系统更新系统任务01720
#define UI_SYSTEM_VALIDATE_SYSTEM_TASKS_01730 ui_system_validate_system_tasks_01730   // UI系统验证系统任务01730
#define UI_SYSTEM_CLEAR_SYSTEM_TASKS_01740 ui_system_clear_system_tasks_01740         // UI系统清空系统任务01740
#define UI_SYSTEM_RESET_SYSTEM_TASKS_01750 ui_system_reset_system_tasks_01750         // UI系统重置系统任务01750

EOF

echo "常量定义添加完成！"