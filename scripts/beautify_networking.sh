#!/bin/bash

# 网络系统代码美化脚本
# 用于将05_networking.c文件中的非语义化函数名和变量名替换为语义化名称

# 注意：这是简化实现，仅处理常见的非语义化函数名和变量名
# 原本实现：完全重构网络系统所有命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化函数名替换为语义化名称，保持代码结构不变

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup.$(date +%s)"

# 函数名替换
sed -i 's/network_packet_data_buffer_68b70/network_buffer_validate_size/g' "$FILE_PATH"
sed -i 's/network_packet_data_buffer_num_68910/network_buffer_check_capacity/g' "$FILE_PATH"

# 变量名替换
sed -i 's/aiStackX_num_8/network_buffer_context/g' "$FILE_PATH"
sed -i 's/aiStackX_num_18/network_security_context/g' "$FILE_PATH"
sed -i 's/network_security_context_num_40/network_security_buffer_size/g' "$FILE_PATH"

# 标签替换
sed -i 's/NETWORK_num_180866197/NETWORK_HANDSHAKE_COMPLETE/g' "$FILE_PATH"

echo "网络系统代码美化完成"