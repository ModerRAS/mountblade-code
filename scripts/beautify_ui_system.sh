#!/bin/bash

# UI系统变量名美化脚本
# 用于将04_ui_system.c中的非语义化变量名替换为语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
BACKUP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c.backup"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"

echo "开始美化UI系统变量名..."

# 替换ui_callback相关变量名
sed -i 's/ui_callback/ui_callback_handle/g' "$INPUT_FILE"
sed -i 's/ui_error_code/ui_error_status_code/g' "$INPUT_FILE"
sed -i 's/ui_widget_id/ui_widget_identifier/g' "$INPUT_FILE"
sed -i 's/ui_xmm_register_primary/ui_xmm_register_primary_buffer/g' "$INPUT_FILE"
sed -i 's/ui_xmm_register_secondary/ui_xmm_register_secondary_buffer/g' "$INPUT_FILE"
sed -i 's/ui_event_buffer_variable/ui_event_buffer_workspace/g' "$INPUT_FILE"
sed -i 's/ui_temp_working_buffer/ui_temporary_working_buffer/g' "$INPUT_FILE"
sed -i 's/ui_task_processor_data/ui_task_processing_data/g' "$INPUT_FILE"
sed -i 's/ui_event_data_buffer/ui_event_data_storage/g' "$INPUT_FILE"
sed -i 's/ui_input_data_buffer/ui_input_data_storage/g' "$INPUT_FILE"
sed -i 's/ui_data_buffer_mask/ui_data_buffer_bitmask/g' "$INPUT_FILE"
sed -i 's/ui_component_value_x/ui_component_x_value/g' "$INPUT_FILE"
sed -i 's/ui_component_value_y/ui_component_y_value/g' "$INPUT_FILE"
sed -i 's/ui_component_value_z/ui_component_z_value/g' "$INPUT_FILE"
sed -i 's/ui_component_value_w/ui_component_w_value/g' "$INPUT_FILE"
sed -i 's/ui_widget_offset_x/ui_widget_x_offset/g' "$INPUT_FILE"
sed -i 's/ui_widget_offset_y/ui_widget_y_offset/g' "$INPUT_FILE"
sed -i 's/ui_offset_z/ui_z_offset/g' "$INPUT_FILE"
sed -i 's/ui_offset_w/ui_w_offset/g' "$INPUT_FILE"
sed -i 's/ui_render_buffer_data/ui_render_buffer_storage/g' "$INPUT_FILE"

# 替换更多变量名
sed -i 's/ui_event_category/ui_event_type_category/g' "$INPUT_FILE"
sed -i 's/ui_window_context_handle/ui_window_context_pointer/g' "$INPUT_FILE"
sed -i 's/ui_system_event_data/ui_system_event_data_pointer/g' "$INPUT_FILE"
sed -i 's/ui_system_event_buffer_pool/ui_system_event_buffer_pool_pointer/g' "$INPUT_FILE"
sed -i 's/ui_system_error_threshold_value/ui_system_error_threshold_limit/g' "$INPUT_FILE"
sed -i 's/ui_operation_result/ui_operation_result_code/g' "$INPUT_FILE"
sed -i 's/ui_event_id_alternative/ui_event_id_alternative_value/g' "$INPUT_FILE"
sed -i 's/ui_component_value/ui_component_generic_value/g' "$INPUT_FILE"
sed -i 's/ui_component_value_angle_offset/ui_component_value_angle_index/g' "$INPUT_FILE"

echo "变量名美化完成！"
echo "原始文件已备份到: $BACKUP_FILE"