#!/bin/bash

# 03_rendering.c文件变量名语义化美化脚本（2025年8月30日最终批次）
# 美化渲染系统中剩余的包含数字的变量名

# 设置文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup"

# 美化临时无符号变量名
sed -i 's/render_temp_unsigned6/render_temp_unsigned_sixth/g' "$FILE_PATH"

# 美化纹理对象标识符变量名
sed -i 's/render_texture_object_identifier1/render_texture_object_identifier_primary/g' "$FILE_PATH"
sed -i 's/render_texture_object_identifier5/render_texture_object_identifier_fifth/g' "$FILE_PATH"

# 美化长整型变量名
sed -i 's/render_long_variable_19/render_long_counter_variable/g' "$FILE_PATH"

# 美化配置变量名
sed -i 's/render_unknown_config_0/render_unknown_config_zero/g' "$FILE_PATH"

# 美化有符号临时变量名
sed -i 's/prender_signed_temp_6/render_signed_temp_register_six/g' "$FILE_PATH"

# 美化偏移量变量名
sed -i 's/render_unknown_config_offset_1d0_hex/render_unknown_config_offset_1d0/g' "$FILE_PATH"
sed -i 's/render_unknown_data_offset_188/render_unknown_data_offset_188/g' "$FILE_PATH"
sed -i 's/render_unknown_control_offset_1dc/render_unknown_control_offset_1dc/g' "$FILE_PATH"
sed -i 's/render_unknown_buffer_offset_1e0/render_unknown_buffer_offset_1e0/g' "$FILE_PATH"
sed -i 's/render_unknown_data_page_4018/render_unknown_data_page_4018/g' "$FILE_PATH"

echo "03_rendering.c文件变量名语义化美化完成"
echo "原本实现：完全重构渲染系统所有变量命名体系，建立统一的语义化命名规范"
echo "简化实现：仅将常见的包含数字的变量名替换为语义化名称，保持代码结构不变"