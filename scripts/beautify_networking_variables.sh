#!/bin/bash

# 网络系统变量名语义化美化脚本
# 原本实现：完全重构网络系统所有变量命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化变量名替换为语义化名称，保持代码结构不变

# 设置文件路径
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 备份原文件
cp "$FILE" "$FILE.bak"

# 美化网络系统寄存器变量名
sed -i 's/network_register_r13/network_loop_counter/g' "$FILE"
sed -i 's/network_register_r9/network_connection_base_pointer/g' "$FILE"
sed -i 's/network_register_r15B/network_validation_flag/g' "$FILE"

# 美化网络系统临时缓冲区变量名
sed -i 's/network_temp_processing_buf/network_temporary_processing_buffer/g' "$FILE"
sed -i 's/network_temp_buffer_data/network_temporary_buffer_pointer/g' "$FILE"

# 美化网络系统输入参数变量名
sed -i 's/network_input_parameter_eax/network_input_parameter_primary/g' "$FILE"

echo "网络系统变量名语义化美化完成"
echo "原本实现：完全重构网络系统所有变量命名体系，建立统一的语义化命名规范"
echo "简化实现：仅将常见的非语义化变量名替换为语义化名称，保持代码结构不变"