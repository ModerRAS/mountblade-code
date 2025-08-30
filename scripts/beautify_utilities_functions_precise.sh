#!/bin/bash

# 06_utilities.c 函数名美化脚本（精确版本）
# 用于将非语义化函数名替换为语义化函数名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup"

# 函数名映射（只替换完整的函数名）
declare -A function_mapping=(
    ["utilitysetthreadpriority"]="utility_set_thread_priority"
    ["cleanupsystemresources"]="utility_cleanup_system_resources"
    ["exceptionhandlefunction"]="utility_handle_exception"
    ["utilitygetresourcecapability"]="utility_get_resource_capability"
    ["get_file_permissions"]="utility_get_file_permissions"
    ["set_file_permissions"]="utility_set_file_permissions"
    ["release_memory_resources"]="utility_release_memory_resources"
)

# 执行精确替换
for old_name in "${!function_mapping[@]}"; do
    new_name="${function_mapping[$old_name]}"
    echo "替换: $old_name -> $new_name"
    
    # 使用更精确的替换模式，只替换完整的函数名
    sed -i "s/\<$old_name\>($new_name(/g" "$FILE_PATH"
    sed -i "s/\<$old_name\>/$new_name/g" "$FILE_PATH"
done

echo "函数名美化完成"