#!/bin/bash

# 处理 pretty/99_part_04_part074.c 文件中的 unknown_var 标记
# 根据上下文分析，这些变量主要用作字符串指针和系统配置数据

INPUT_FILE="pretty/99_part_04_part074.c"
TEMP_FILE="${INPUT_FILE}.tmp"

# 创建替换映射
declare -A replacements=(
    # 系统配置相关变量
    ["unknown_var_288_ptr"]="system_config_data_ptr"
    ["unknown_var_672_ptr"]="system_string_buffer_ptr"
    ["unknown_var_832_ptr"]="system_parameter_data_ptr"
    ["unknown_var_3480_ptr"]="system_message_buffer_ptr"
    
    # 字符串常量指针
    ["unknown_var_2904_ptr"]="system_string_version_ptr"
    ["unknown_var_2928_ptr"]="system_string_config_ptr"
    ["unknown_var_3048_ptr"]="system_string_system_ptr"
    ["unknown_var_3080_ptr"]="system_string_error_ptr"
    
    # 系统数据指针
    ["unknown_var_6752_ptr"]="system_data_handler_ptr"
    ["unknown_var_6960_ptr"]="system_data_processor_ptr"
    ["unknown_var_7064_ptr"]="system_data_validator_ptr"
    ["unknown_var_8720_ptr"]="system_data_buffer_ptr"
    
    # 系统消息和状态指针
    ["unknown_var_8976_ptr"]="system_message_handler_ptr"
    ["unknown_var_8992_ptr"]="system_message_formatter_ptr"
    ["unknown_var_9024_ptr"]="system_message_processor_ptr"
    ["unknown_var_9080_ptr"]="system_message_config_ptr"
    ["unknown_var_9096_ptr"]="system_message_template_ptr"
    ["unknown_var_9128_ptr"]="system_message_control_ptr"
    ["unknown_var_9144_ptr"]="system_message_logger_ptr"
    ["unknown_var_9176_ptr"]="system_message_output_ptr"
    ["unknown_var_9208_ptr"]="system_message_input_ptr"
    ["unknown_var_9232_ptr"]="system_message_callback_ptr"
    ["unknown_var_9268_ptr"]="system_message_event_ptr"
    ["unknown_var_9296_ptr"]="system_message_queue_ptr"
    ["unknown_var_9328_ptr"]="system_message_state_ptr"
)

echo "开始处理文件: $INPUT_FILE"

# 复制原文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 执行替换
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    echo "替换: $old_name -> $new_name"
    
    # 使用 sed 进行替换
    sed -i "s/\\b${old_name}\\b/${new_name}/g" "$TEMP_FILE"
done

# 验证替换结果
echo "验证替换结果..."
remaining_unknown=$(grep -c "unknown_var" "$TEMP_FILE" 2>/dev/null || echo "0")
echo "剩余 unknown_var 标记数量: $remaining_unknown"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "文件处理完成: $INPUT_FILE"
echo "总共替换了 ${#replacements[@]} 个变量名"