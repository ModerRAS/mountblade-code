#!/bin/bash

# UI系统函数名美化脚本
# 用于将04_ui_system.c中的十六进制函数名替换为语义化函数名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 创建临时脚本文件
cat > /tmp/ui_beautify.sh << 'EOF'
#!/bin/bash

# UI系统函数名映射表
declare -A FUNCTION_MAPPING=(
    ["func_0x00018001cb80"]="ui_system_handle_callback_event"
    ["func_0x00018001ed22"]="ui_system_validate_event_parameters"
    ["func_0x00018001ec61"]="ui_system_process_event_data"
    ["func_0x00018001ebb8"]="ui_system_dispatch_event_to_handler"
    ["func_0x00018001d8f1"]="ui_system_update_event_state"
    ["func_0x00018001d6f1"]="ui_system_handle_widget_interaction"
    ["func_0x00018001d54c"]="ui_system_process_widget_callback"
    ["func_0x00018001ef6a"]="ui_system_execute_event_handler"
    ["func_0x00018001eead"]="ui_system_validate_event_handler"
    ["func_0x00018001ee08"]="ui_system_dispatch_widget_event"
    ["func_0x00018001df9c"]="ui_system_process_ui_event"
    ["func_0x00018001dd8d"]="ui_system_handle_event_dispatch"
    ["func_0x00018001dbd9"]="ui_system_manage_event_queue"
    ["func_0x00018001eada"]="ui_system_process_event_sequence"
    ["func_0x00018001ea21"]="ui_system_validate_event_sequence"
    ["func_0x00018001e980"]="ui_system_handle_event_sequence"
    ["func_0x00018001d275"]="ui_system_update_event_offset"
    ["func_0x00018001d07d"]="ui_system_process_offset_event"
    ["func_0x00018001cee0"]="ui_system_handle_callback_event"
)

# 遍历映射表并替换函数名
for old_name in "${!FUNCTION_MAPPING[@]}"; do
    new_name="${FUNCTION_MAPPING[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" "$1"
done

echo "UI系统函数名美化完成"
EOF

# 执行美化脚本
chmod +x /tmp/ui_beautify.sh
/tmp/ui_beautify.sh "$FILE_PATH"

# 清理临时文件
rm -f /tmp/ui_beautify.sh