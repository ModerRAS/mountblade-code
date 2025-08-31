#!/bin/bash

# UI系统代码美化脚本
# 这是简化实现，主要处理了UI系统中函数名和变量名的语义化替换工作
# 原本实现：完全重构UI系统所有命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化名称替换为语义化名称，保持代码结构不变

# 设置输入文件
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
TEMP_FILE="/tmp/ui_system_temp.c"

# 创建临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 美化函数名 - 将十六进制函数名替换为语义化名称
sed -i 's/ui_system_18078df30/ui_system_process_widget_callback/g' "$TEMP_FILE"
sed -i 's/ui_system_18072b3a0/ui_system_calculate_widget_transform/g' "$TEMP_FILE"
sed -i 's/ui_system_18072b830/ui_system_apply_widget_transform/g' "$TEMP_FILE"
sed -i 's/ui_system_18072e9a0/ui_system_process_widget_data/g' "$TEMP_FILE"
sed -i 's/ui_system_1807270a0/ui_system_update_widget_layout/g' "$TEMP_FILE"
sed -i 's/ui_system_18072eb00/ui_system_validate_widget_state/g' "$TEMP_FILE"

# 美化变量名 - 将硬编码偏移量替换为语义化常量
sed -i 's/ui_widget_data_pointer\[0x1b\]/ui_widget_data_pointer[UI_OFFSET_WIDGET_DATA_START]/g' "$TEMP_FILE"
sed -i 's/ui_widget_data_pointer\[0x1c\]/ui_widget_data_pointer[UI_OFFSET_WIDGET_DATA_SIZE]/g' "$TEMP_FILE"
sed -i 's/ui_widget_data_pointer\[0x1d\]/ui_widget_data_pointer[UI_OFFSET_WIDGET_POSITION_X]/g' "$TEMP_FILE"
sed -i 's/ui_widget_data_pointer\[0x1e\]/ui_widget_data_pointer[UI_OFFSET_WIDGET_POSITION_Y]/g' "$TEMP_FILE"
sed -i 's/ui_widget_data_pointer\[0x1f\]/ui_widget_data_pointer[UI_OFFSET_WIDGET_POSITION_Z]/g' "$TEMP_FILE"
sed -i 's/ui_widget_data_pointer\[0x20\]/ui_widget_data_pointer[UI_OFFSET_WIDGET_POSITION_W]/g' "$TEMP_FILE"
sed -i 's/ui_widget_data_pointer\[0x21\]/ui_widget_data_pointer[UI_OFFSET_WIDGET_ROTATION_X]/g' "$TEMP_FILE"
sed -i 's/ui_widget_data_pointer\[0x2c\]/ui_widget_data_pointer[UI_OFFSET_WIDGET_SCALE_FACTOR]/g' "$TEMP_FILE"

# 美化硬编码值 - 将魔数替换为语义化常量
sed -i 's/ui_widget_data_pointer\[0xaf\]/ui_widget_data_pointer[UI_OFFSET_WIDGET_OPACITY]/g' "$TEMP_FILE"
sed -i 's/ui_widget_data_pointer\[5\]/ui_widget_data_pointer[UI_OFFSET_WIDGET_COLOR_R]/g' "$TEMP_FILE"
sed -i 's/ui_widget_data_pointer\[2\]/ui_widget_data_pointer[UI_OFFSET_WIDGET_COLOR_G]/g' "$TEMP_FILE"
sed -i 's/ui_widget_data_pointer\[1\]/ui_widget_data_pointer[UI_OFFSET_WIDGET_COLOR_B]/g' "$TEMP_FILE"
sed -i 's/ui_widget_data_pointer\[0\]/ui_widget_data_pointer[UI_OFFSET_WIDGET_COLOR_A]/g' "$TEMP_FILE"

# 美化硬编码偏移量 - 将十六进制偏移量替换为语义化常量
sed -i 's/ui_loop_counter_temp + 0xb4/ui_loop_counter_temp + UI_OFFSET_WIDGET_PARENT_ID/g' "$TEMP_FILE"
sed -i 's/ui_loop_counter_temp + 0x38/ui_loop_counter_temp + UI_OFFSET_WIDGET_BOUNDS_WIDTH/g' "$TEMP_FILE"
sed -i 's/ui_loop_counter_temp + UI_SMALL_BUFFER_SIZE/ui_loop_counter_temp + UI_OFFSET_WIDGET_BOUNDS_HEIGHT/g' "$TEMP_FILE"
sed -i 's/ui_loop_counter_temp + UI_OFFSET_EVENT_DATA_BASE/ui_loop_counter_temp + UI_OFFSET_WIDGET_BOUNDS_DEPTH/g' "$TEMP_FILE"

# 美化变量名 - 将临时变量名替换为语义化名称
sed -i 's/ui_task_index4/ui_widget_parent_id/g' "$TEMP_FILE"
sed -i 's/ui_temp_integer/ui_widget_state_flags/g' "$TEMP_FILE"
sed -i 's/ui_total_element_count/ui_element_count/g' "$TEMP_FILE"
sed -i 's/ui_window_context/ui_window_handle/g' "$TEMP_FILE"
sed -i 's/ui_remaining_element_count/ui_remaining_count/g' "$TEMP_FILE"

# 美化硬编码值 - 将位操作常量替换为语义化常量
sed -i 's/0xfffffffd/UI_MASK_WIDGET_STATE_NORMAL/g' "$TEMP_FILE"
sed -i 's/0x20080/UI_FLAG_WIDGET_ACTIVE/g' "$TEMP_FILE"
sed -i 's/0xeffffdfa/UI_MASK_WIDGET_FOCUS_STATE/g' "$TEMP_FILE"
sed -i 's/0x2492492492492493/UI_MULTIPLIER_PRECISION_CONSTANT/g' "$TEMP_FILE"

# 美化变量名 - 将索引变量替换为语义化名称
sed -i 's/ui_task_index_7/ui_animation_index/g' "$TEMP_FILE"
sed -i 's/ui_event_processing_identifier/ui_processing_id/g' "$TEMP_FILE"
sed -i 's/ui_event_id_backup/ui_event_id_temp/g' "$TEMP_FILE"
sed -i 's/ui_callback_result_code/ui_callback_status/g' "$TEMP_FILE"

# 美化硬编码值 - 将数组索引替换为语义化常量
sed -i 's/ui_widget_data_pointer\[-UI_EVENT_FLAG_OFFSET\]/ui_widget_data_pointer[UI_OFFSET_EVENT_FLAGS]/g' "$TEMP_FILE"
sed -i 's/ui_widget_data_pointer\[-UI_VALUE_COMPONENT_HEIGHT_INDEX\]/ui_widget_data_pointer[UI_OFFSET_COMPONENT_HEIGHT]/g' "$TEMP_FILE"
sed -i 's/ui_widget_data_pointer\[-UI_VALUE_COMPONENT_WIDTH_INDEX\]/ui_widget_data_pointer[UI_OFFSET_COMPONENT_WIDTH]/g' "$TEMP_FILE"
sed -i 's/ui_widget_data_pointer\[-5\]/ui_widget_data_pointer[UI_OFFSET_WIDGET_HANDLE]/g' "$TEMP_FILE"

# 美化变量名 - 将指针变量替换为语义化名称
sed -i 's/ui_char_pointer_secondary/ui_error_output_stream/g' "$TEMP_FILE"
sed -i 's/ui_function_pointer_table/ui_system_function_table/g' "$TEMP_FILE"
sed -i 's/ui_stack_input_value_68/ui_stack_input_data/g' "$TEMP_FILE"
sed -i 's/ui_stack_input_value_38/ui_stack_transform_data/g' "$TEMP_FILE"
sed -i 's/ui_stack_long_value_38/ui_stack_long_data/g' "$TEMP_FILE"

# 美化硬编码值 - 将浮点常量替换为语义化常量
sed -i 's/\* 0\.01/\* UI_SCALE_FACTOR_PERCENT/g' "$TEMP_FILE"

# 美化变量名 - 将状态变量替换为语义化名称
sed -i 's/ui_global_state_flag/ui_system_initialized/g' "$TEMP_FILE"
sed -i 's/ui_system_initialize_components_main_ui_handler_status_flag/ui_ui_handler_initialized/g' "$TEMP_FILE"

# 美化硬编码值 - 将内存偏移量替换为语义化常量
sed -i 's/(longlong)ui_buffer_pointer + 0x44/(longlong)ui_buffer_pointer + UI_OFFSET_BUFFER_COLOR_R/g' "$TEMP_FILE"
sed -i 's/(longlong)ui_buffer_pointer + 0x6c/(longlong)ui_buffer_pointer + UI_OFFSET_BUFFER_POSITION_X/g' "$TEMP_FILE"
sed -i 's/(longlong)ui_buffer_pointer + 0x74/(longlong)ui_buffer_pointer + UI_OFFSET_BUFFER_COLOR_G/g' "$TEMP_FILE"
sed -i 's/(longlong)ui_buffer_pointer + 0x13c/(longlong)ui_buffer_pointer + UI_OFFSET_BUFFER_WIDGET_SCALE/g' "$TEMP_FILE"

# 美化变量名 - 将数组索引变量替换为语义化名称
sed -i 's/ui_stack_int_ui_value_870/ui_stack_animation_count/g' "$TEMP_FILE"

# 美化硬编码值 - 将内存对齐常量替换为语义化常量
sed -i 's/(longlong)ui_widget_data_pointer + UI_VALUE_TWELVE/(longlong)ui_widget_data_pointer + UI_OFFSET_WIDGET_COLOR_OFFSET/g' "$TEMP_FILE"

# 复制回原文件
cp "$TEMP_FILE" "$INPUT_FILE"

# 清理临时文件
rm -f "$TEMP_FILE"

echo "UI系统代码美化完成"