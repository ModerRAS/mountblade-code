#!/bin/bash
# 美化04_ui_system.c文件中的变量名
# 注意：这是简化实现，仅处理特定的变量名替换

# 定义文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 备份原始文件（仅用于调试，完成后会被删除）
cp "$FILE_PATH" "${FILE_PATH}.debug_backup"

# 变量名替换映射
declare -A variable_replacements=(
    # 栈缓冲区变量名美化
    ["ui_event_stack_buffer_00"]="ui_event_stack_buffer_base"
    ["ui_event_stack_buffer_30"]="ui_event_stack_buffer_temp"
    ["ui_stack_buffer_size_1f0"]="ui_stack_buffer_capacity"
    ["ui_stack_buffer_size_1a8"]="ui_stack_buffer_size_primary"
    ["ui_stack_buffer_size_19c"]="ui_stack_buffer_size_secondary"
    
    # 系统寄存器变量名美化
    ["ui_system_register"]="ui_system_register_ptr"
    
    # 渲染参数变量名美化
    ["ui_render_input_param"]="ui_render_input_parameter"
    
    # 事件处理变量名美化
    ["ui_event_data_param"]="ui_event_data_parameter"
    ["ui_event_flags_param"]="ui_event_flags_parameter"
    ["ui_event_stack_uint"]="ui_event_stack_uint_value"
    
    # 组件管理器变量名美化
    ["ui_system_widget_manager"]="ui_widget_manager_string"
    
    # 文本缓冲区变量名美化
    ["ui_text_buffer"]="ui_text_processing_buffer"
    
    # 事件数据偏移变量名美化
    ["ui_event_data_offset"]="ui_event_data_offset_ptr"
)

# 遍历所有替换映射
for old_var in "${!variable_replacements[@]}"; do
    new_var="${variable_replacements[$old_var]}"
    echo "替换: $old_var -> $new_var"
    
    # 使用sed进行替换（处理单词边界，避免误替换）
    sed -i "s/\b$old_var\b/$new_var/g" "$FILE_PATH"
done

echo "变量名替换完成"

# 验证替换结果
echo "验证替换结果..."
for old_var in "${!variable_replacements[@]}"; do
    count=$(grep -c "\<$old_var\>" "$FILE_PATH" 2>/dev/null || echo 0)
    if [ "$count" -gt 0 ]; then
        echo "警告: $old_var 仍有 $count 处未替换"
    fi
done

echo "美化完成"