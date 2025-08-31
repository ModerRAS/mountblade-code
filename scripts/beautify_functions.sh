#!/bin/bash

# 00_data_definitions.h 函数名美化脚本
# 将数字后缀的函数名替换为语义化名称

# 处理文件
input_file="/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"
temp_file="/tmp/00_data_definitions_h_temp"

# 复制文件到临时位置
cp "$input_file" "$temp_file"

# 函数名映射
declare -A function_map=(
    ["system_ui_002"]="system_ui_initialize_renderer"
    ["system_thread_manager_003"]="system_thread_manager_create_thread"
    ["system_graphics_001"]="system_graphics_initialize_d3d"
    ["system_graphics_002"]="system_graphics_create_swap_chain"
    ["system_initializer_001"]="system_initializer_main_entry"
    ["system_initializer_003"]="system_initializer_setup_module"
    ["system_config_001"]="system_config_load_settings"
    ["system_config_002"]="system_config_apply_settings"
    ["system_initializer_004"]="system_initializer_finalize_module"
    ["system_finalizer_001"]="system_finalizer_cleanup_resources"
    ["system_finalizer_002"]="system_finalizer_shutdown_system"
    ["system_thread_manager_008"]="system_thread_manager_cleanup_threads"
)

# 应用替换规则
for old_name in "${!function_map[@]}"; do
    new_name="${function_map[$old_name]}"
    sed -i "s/\b$old_name\b/$new_name/g" "$temp_file"
done

# 替换回原文件
mv "$temp_file" "$input_file"

echo "函数名美化完成"