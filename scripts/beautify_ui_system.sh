#!/bin/bash

# UI系统代码美化脚本
# 这是简化实现，主要处理了UI系统中变量名和函数名的语义化替换工作
# 原本实现：完全重构UI系统所有命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化名称替换为语义化名称，保持代码结构不变

# 定义输入文件
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 复制原文件到临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 美化变量名 - 将非语义化变量名替换为语义化名称
sed -i 's/ui_char_pointer_secondary/ui_string_buffer/g' "$TEMP_FILE"
sed -i 's/ui_char_pointer_secondary/ui_string_buffer/g' "$TEMP_FILE"
sed -i 's/ui_function_pointer_table/ui_callback_function_table/g' "$TEMP_FILE"
sed -i 's/ui_default_event_id/ui_system_default_event_id/g' "$TEMP_FILE"
sed -i 's/ui_widget_data_pointer_ptr/ui_widget_data_pointer/g' "$TEMP_FILE"
sed -i 's/ui_widget_data_pointer_value/ui_widget_data_value/g' "$TEMP_FILE"
sed -i 's/ui_callback_func_ptr/ui_callback_function_pointer/g' "$TEMP_FILE"
sed -i 's/ui_event_dest_pointer/ui_event_destination_pointer/g' "$TEMP_FILE"
sed -i 's/ui_output_buffer_addr/ui_output_buffer_address/g' "$TEMP_FILE"
sed -i 's/ui_event_callback_ptr/ui_event_callback_pointer/g' "$TEMP_FILE"
sed -i 's/ui_cleanup_function_ptr/ui_cleanup_function_pointer/g' "$TEMP_FILE"
sed -i 's/ui_char_ptr/ui_character_pointer/g' "$TEMP_FILE"

# 美化函数名 - 将非语义化函数名替换为语义化名称
sed -i 's/ui_system_initialize_components_main_ui_handler_task/ui_initialize_ui_system_task_handler/g' "$TEMP_FILE"
sed -i 's/ui_system_execute_task_handler/ui_execute_task_handler/g' "$TEMP_FILE"
sed -i 's/ui_system_cleanup_task_handler/ui_cleanup_task_handler/g' "$TEMP_FILE"
sed -i 's/ui_process_ui_event_handler_function/ui_process_event_handler/g' "$TEMP_FILE"
sed -i 's/ui_system_handle_input_events/ui_handle_input_events/g' "$TEMP_FILE"
sed -i 's/ui_system_execute_function_callback_handler/ui_execute_callback_handler/g' "$TEMP_FILE"

# 美化系统调用函数名
sed -i 's/_cputs()/ui_console_output_string()/g' "$TEMP_FILE"
sed -i 's/LOCK()/ui_acquire_system_lock()/g' "$TEMP_FILE"
sed -i 's/UNLOCK()/ui_release_system_lock()/g' "$TEMP_FILE"
sed -i 's/swi(3)/ui_system_call_3()/g' "$TEMP_FILE"
sed -i 's/ui_task_notify_complete()/ui_notify_task_complete()/g' "$TEMP_FILE"

# 美化变量名 - 将重复的变量名统一
sed -i 's/ui_event_id/ui_event_identifier/g' "$TEMP_FILE"
sed -i 's/ui_loop_counter/ui_event_loop_counter/g' "$TEMP_FILE"
sed -i 's/ui_event_length/ui_event_data_length/g' "$TEMP_FILE"
sed -i 's/ui_handler/ui_event_handler/g' "$TEMP_FILE"
sed -i 's/ui_context/ui_event_context/g' "$TEMP_FILE"
sed -i 's/ui_data/ui_event_data/g' "$TEMP_FILE"
sed -i 's/ui_flags/ui_event_flags/g' "$TEMP_FILE"

# 美化系统相关的变量名
sed -i 's/ui_global_state_flag/ui_system_global_state_flag/g' "$TEMP_FILE"
sed -i 's/ui_task_counter/ui_system_task_counter/g' "$TEMP_FILE"
sed -i 's/ui_system_initialize_components_main_ui_handler_status_flag/ui_system_handler_status_flag/g' "$TEMP_FILE"

# 美化线程相关的变量名
sed -i 's/ThreadLocalStoragePointer/ui_thread_local_storage_pointer/g' "$TEMP_FILE"
sed -i 's/__tls_index/ui_tls_index/g' "$TEMP_FILE"

# 美化常量引用
sed -i 's/UI_CHARACTER_NULL_TERMINATOR/UI_NULL_CHARACTER/g' "$TEMP_FILE"
sed -i 's/UI_OFFSET_ZERO/UI_ZERO_OFFSET/g' "$TEMP_FILE"
sed -i 's/UI_TASK_QUEUE_BASE/UI_TASK_QUEUE_BASE_ADDRESS/g' "$TEMP_FILE"
sed -i 's/UI_TASK_ID_THRESHOLD_VALUE/UI_TASK_ID_THRESHOLD/g' "$TEMP_FILE"
sed -i 's/UI_EVENT_MAX_OFFSET/UI_EVENT_QUEUE_MAX_SIZE/g' "$TEMP_FILE"
sed -i 's/UI_VALUE_ONE/UI_INTEGER_VALUE_ONE/g' "$TEMP_FILE"
sed -i 's/UI_FUNCTION_BASE_ADDRESS/UI_SYSTEM_FUNCTION_BASE_ADDRESS/g' "$TEMP_FILE"

# 替换回原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "UI系统代码美化完成"
echo "这是简化实现，主要处理了UI系统中变量名和函数名的语义化替换工作"
echo "原本实现：完全重构UI系统所有命名体系，建立统一的语义化命名规范"
echo "简化实现：仅将常见的非语义化名称替换为语义化名称，保持代码结构不变"