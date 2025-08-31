#!/bin/bash

# 美化系统变量名的脚本
# 将未命名的系统变量替换为更具语义化的名称

# 定义文件路径
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 备份文件
cp "$FILE" "$FILE.bak"

# 更多系统指针变量
sed -i 's/system_unk_system_ptr_varfe050/system_internal_context_ptr_array/g' "$FILE"
sed -i 's/system_unk_system_ptr_varfe058/system_internal_format_buffer_ptr/g' "$FILE"
sed -i 's/system_unk_system_ptr_varfe188/system_internal_string_buffer_1/g' "$FILE"
sed -i 's/system_unk_system_ptr_varfe190/system_internal_string_buffer_2/g' "$FILE"
sed -i 's/system_unk_system_ptr_varfe290/system_internal_output_buffer_ptr/g' "$FILE"
sed -i 's/system_unk_system_ptr_varfe198/system_internal_string_buffer_3/g' "$FILE"
sed -i 's/system_unk_system_ptr_varfe1a0/system_internal_string_buffer_4/g' "$FILE"
sed -i 's/system_unk_system_ptr_varfe258/system_internal_stream_buffer_ptr/g' "$FILE"

echo "变量名替换完成"