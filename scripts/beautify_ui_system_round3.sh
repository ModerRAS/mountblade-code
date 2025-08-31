#!/bin/bash

# UI系统代码美化脚本（第三轮）
# 用于继续美化04_ui_system.c文件中的变量名和常量名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
TEMP_FILE="/tmp/ui_system_beautified_round3.c"

# 创建临时文件用于美化
cp "$INPUT_FILE" "$TEMP_FILE"

# 美化更多常量偏移量名称
sed -i 's/UI_WIDGET_ENABLED_FLAG/UI_WIDGET_STATE_ENABLED_FLAG/g' "$TEMP_FILE"
sed -i 's/UI_WIDGET_CREATE_CALLBACK_OFFSET/UI_WIDGET_CREATION_CALLBACK_OFFSET/g' "$TEMP_FILE"
sed -i 's/UI_RENDER_RESOURCE_TYPE0/UI_RENDER_RESOURCE_TYPE_PRIMARY/g' "$TEMP_FILE"
sed -i 's/UI_OFFSET_228/UI_RENDER_RESOURCE_OFFSET_LARGE/g' "$TEMP_FILE"
sed -i 's/UI_OFFSET_136/UI_CALLBACK_OFFSET_LARGE/g' "$TEMP_FILE"
sed -i 's/UI_OFFSET_104/UI_CALLBACK_OFFSET_MEDIUM/g' "$TEMP_FILE"
sed -i 's/UI_ALLOC_SIZE/UI_ALLOCATION_SIZE_VALUE/g' "$TEMP_FILE"
sed -i 's/UI_OFFSET_22/UI_WIDGET_ITEM_SIZE/g' "$TEMP_FILE"
sed -i 's/UI_WIDGET_ITEM_SIZE/UI_WIDGET_COMPONENT_SIZE/g' "$TEMP_FILE"
sed -i 's/UI_SNAPSHOT_CREATE_FLAGS/UI_SNAPSHOT_CREATION_FLAGS/g' "$TEMP_FILE"
sed -i 's/UI_WIDGET_RESOURCE_TYPE/UI_WIDGET_COMPONENT_RESOURCE_TYPE/g' "$TEMP_FILE"
sed -i 's/UI_MEMORY_RESOURCE_TYPE/UI_MEMORY_ALLOC_RESOURCE_TYPE/g' "$TEMP_FILE"
sed -i 's/UI_LAYOUT_RESOURCE_TYPE/UI_LAYOUT_SYSTEM_RESOURCE_TYPE/g' "$TEMP_FILE"
sed 's/UI_LOAD_RESOURCE_TYPE/UI_FILE_LOAD_RESOURCE_TYPE/g' "$TEMP_FILE"

# 美化更多变量名
sed -i 's/ui_callback_primary/ui_callback_function_primary/g' "$TEMP_FILE"
sed -i 's/ui_animation_control_parameters/ui_animation_control_struct/g' "$TEMP_FILE"
sed -i 's/ui_stack_temporary_buffer_data/ui_stack_temporary_data_buffer/g' "$TEMP_FILE"
sed -i 's/ui_stack_temporary_float_value/ui_stack_temporary_float_variable/g' "$TEMP_FILE"
sed -i 's/ui_stack_position_x_coord/ui_stack_position_x_coordinate/g' "$TEMP_FILE"
sed -i 's/ui_component_opacity/ui_widget_opacity_level/g' "$TEMP_FILE"
sed -i 's/ui_opacity_transition_value/ui_opacity_transition_parameter/g' "$TEMP_FILE"
sed -i 's/ui_vertical_dimension_size/ui_vertical_dimension_extent/g' "$TEMP_FILE"
sed -i 's/ui_horizontal_dimension_size/ui_horizontal_dimension_extent/g' "$TEMP_FILE"
sed -i 's/ui_rotation_angle_rad/ui_rotation_angle_radians/g' "$TEMP_FILE"
sed -i 's/ui_animation_parameters_data/ui_animation_parameter_struct/g' "$TEMP_FILE"
sed -i 's/ui_scale_factor/ui_scaling_factor/g' "$TEMP_FILE"
sed -i 's/ui_minimum_scale_value/ui_minimum_scaling_limit/g' "$TEMP_FILE"
sed -i 's/ui_maximum_scale_value/ui_maximum_scaling_limit/g' "$TEMP_FILE"
sed -i 's/ui_operation_state_flag/ui_operation_status_indicator/g' "$TEMP_FILE"
sed -i 's/ui_component_rotation_angle_offset/ui_component_rotation_offset/g' "$TEMP_FILE"
sed -i 's/ui_register_array_data/ui_register_data_array/g' "$TEMP_FILE"
sed -i 's/ui_stack_float_array_buffer/ui_stack_float_data_buffer/g' "$TEMP_FILE"
sed -i 's/ui_float_array_pointer/ui_float_data_pointer/g' "$TEMP_FILE"
sed -i 's/ui_animation_progress_current/ui_animation_progress_value/g' "$TEMP_FILE"
sed -i 's/ui_temporary_float_result/ui_temporary_float_calculation/g' "$TEMP_FILE"

# 美化数据结构成员
sed -i 's/\._data_size_value_/._data_size_/g' "$TEMP_FILE"

# 替换回原文件
cp "$TEMP_FILE" "$INPUT_FILE"
rm "$TEMP_FILE"

echo "UI系统代码第三轮美化完成"