#!/bin/bash

# UI系统代码美化脚本（第二轮）
# 用于继续美化04_ui_system.c文件中的变量名和常量名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
TEMP_FILE="/tmp/ui_system_beautified_round2.c"

# 创建临时文件用于美化
cp "$INPUT_FILE" "$TEMP_FILE"

# 美化常量偏移量名称 - 将数字偏移量替换为语义化名称
sed -i 's/UI_OFFSET_VALUE_4A/UI_ANIMATION_PROGRESS_OFFSET/g' "$TEMP_FILE"
sed -i 's/UI_OFFSET_VALUE_54/UI_ANIMATION_PROGRESS_SECONDARY_OFFSET/g' "$TEMP_FILE"
sed -i 's/UI_OFFSET_VALUE_55/UI_FLOAT_POINTER_OFFSET/g' "$TEMP_FILE"
sed -i 's/UI_SHIFT_VALUE_20/UI_SCALE_SHIFT_VALUE/g' "$TEMP_FILE"
sed -i 's/UI_LOAD_RESOURCE_TYPE/UI_LOAD_RESOURCE_TYPE_OFFSET/g' "$TEMP_FILE"
sed -i 's/UI_EVENT_ID_OFFSET_4/UI_EVENT_ID_NEGATIVE_OFFSET/g' "$TEMP_FILE"
sed -i 's/UI_OFFSET_VALUE_120/UI_OFFSET_VALUE_LARGE/g' "$TEMP_FILE"
sed -i 's/UI_SIGNATURE_PART_4/UI_SIGNATURE_COMPONENT_OFFSET/g' "$TEMP_FILE"

# 美化特殊常量值
sed -i 's/UI_ANIMATION_HANDLER_11/UI_ANIMATION_HANDLER_TYPE_11/g' "$TEMP_FILE"
sed -i 's/UI_NULL_CHAR/UI_NULL_CHARACTER/g' "$TEMP_FILE"

# 美化变量名 - 将简化的变量名替换为更具描述性的名称
sed -i 's/ui_register_array/ui_register_array_data/g' "$TEMP_FILE"
sed -i 's/ui_stack_float_array_data/ui_stack_float_array_buffer/g' "$TEMP_FILE"
sed -i 's/ui_float_pointer/ui_float_array_pointer/g' "$TEMP_FILE"

# 美化函数参数名 - 将简化的参数名替换为更具描述性的名称
sed -i 's/ui_component_angle_offset_value/ui_component_rotation_angle_offset/g' "$TEMP_FILE"

# 美化数据结构成员名
sed -i 's/\._data_size_/._data_size_value/g' "$TEMP_FILE"

# 美化动画相关的变量名
sed -i 's/ui_animation_progress_value/ui_animation_progress_current/g' "$TEMP_FILE"
sed -i 's/ui_animation_parameter_data/ui_animation_parameters_data/g' "$TEMP_FILE"

# 美化计算相关的变量名
sed -i 's/ui_temporary_float_value/ui_temporary_float_result/g' "$TEMP_FILE"
sed -i 's/ui_stack_temporary_float/ui_stack_temporary_float_value/g' "$TEMP_FILE"
sed -i 's/ui_stack_temporary_data/ui_stack_temporary_buffer_data/g' "$TEMP_FILE"
sed -i 's/ui_stack_position_x_coordinate/ui_stack_position_x_coord/g' "$TEMP_FILE"

# 美化UI组件相关的变量名
sed -i 's/ui_opacity_value/ui_component_opacity/g' "$TEMP_FILE"
sed -i 's/ui_transition_opacity/ui_opacity_transition_value/g' "$TEMP_FILE"

# 美化几何相关的变量名
sed -i 's/ui_vertical_dimension_value/ui_vertical_dimension_size/g' "$TEMP_FILE"
sed -i 's/ui_horizontal_dimension_value/ui_horizontal_dimension_size/g' "$TEMP_FILE"
sed -i 's/ui_rotation_angle_radians/ui_rotation_angle_rad/g' "$TEMP_FILE"
sed -i 's/ui_depth_z_coordinate/ui_depth_z_position/g' "$TEMP_FILE"

# 美化状态相关的变量名
sed -i 's/ui_operation_status_flag/ui_operation_state_flag/g' "$TEMP_FILE"

# 替换回原文件
cp "$TEMP_FILE" "$INPUT_FILE"
rm "$TEMP_FILE"

echo "UI系统代码第二轮美化完成"