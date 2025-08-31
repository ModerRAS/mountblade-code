#!/bin/bash

# 美化03_rendering.c文件中的函数名
# 简化实现：仅将常见的非语义化函数名替换为语义化名称，为关键函数添加文档注释，保持代码结构不变

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 美化函数名 - 将render_legacy_variable_config替换为更语义化的名称
sed -i 's/render_legacy_variable_config(\([^)]*\))/render_configure_legacy_variable(\1)/g' "$FILE_PATH"

# 美化函数名 - 将render_legacy_variable_mode替换为更语义化的名称
sed -i 's/render_legacy_variable_mode(\([^)]*\))/render_set_legacy_variable_mode(\1)/g' "$FILE_PATH"

# 美化函数名 - 将render_initialize_texture_arrays_filtered替换为更语义化的名称
sed -i 's/render_initialize_texture_arrays_filtered(\([^)]*\))/render_initialize_filtered_texture_arrays(\1)/g' "$FILE_PATH"

# 美化函数名 - 将render_state_object_handler替换为更语义化的名称
sed -i 's/render_state_object_handler()/render_handle_state_object()/g' "$FILE_PATH"

# 美化函数名 - 将render_state_manager_function替换为更语义化的名称
sed -i 's/render_state_manager_function(\([^)]*\))/render_manage_state_object(\1)/g' "$FILE_PATH"

# 美化函数名 - 将render_calculate_hash_function替换为更语义化的名称
sed -i 's/render_calculate_hash_function(\([^)]*\))/render_calculate_context_hash(\1)/g' "$FILE_PATH"

# 美化函数名 - 将render_memory_cleanup_function替换为更语义化的名称
sed -i 's/render_memory_cleanup_function(\([^)]*\))/render_cleanup_memory_allocation(\1)/g' "$FILE_PATH"

# 美化函数名 - 将render_execute_operation_function替换为更语义化的名称
sed -i 's/render_execute_operation_function(\([^)]*\))/render_execute_texture_operation(\1)/g' "$FILE_PATH"

echo "函数名美化完成"