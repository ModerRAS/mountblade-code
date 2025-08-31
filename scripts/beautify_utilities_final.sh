#!/bin/bash

# 简化实现：06_utilities.c 文件最终轮语义化美化脚本
# 原本实现：完全重构工具系统所有命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化变量名替换为语义化名称，保持代码结构不变

# 设置文件路径
UTILITIES_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 创建备份
cp "$UTILITIES_FILE" "${UTILITIES_FILE}.backup.final.$(date +%Y%m%d_%H%M%S)"
echo "已创建最终轮备份文件"

# 执行最终轮变量名替换
echo "开始执行最终轮变量名替换..."

# 第一组：全局变量
sed -i 's/utility_global_primary_context/utility_global_context_primary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_global_secondary_data/utility_global_data_secondary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_global_tertiary_data/utility_global_data_tertiary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_global_quaternary_data/utility_global_data_quaternary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_global_context_data/utility_global_context_data_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_global_flag_data/utility_global_flag_data_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_global_auxiliary_data/utility_global_auxiliary_data_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_global_backup_data/utility_global_backup_data_ptr/g' "$UTILITIES_FILE"

# 第二组：缓冲区变量
sed -i 's/utility_buffer_secondary/utility_buffer_secondary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_buffer_secondary_extended/utility_buffer_secondary_extended_ptr/g' "$UTILITIES_FILE"

# 第三组：网络相关变量
sed -i 's/utility_network_tertiary_context/utility_network_context_tertiary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_network_quaternary_context/utility_network_context_quaternary_ptr/g' "$UTILITIES_FILE"

# 第四组：其他变量
sed -i 's/utility_system_context/utility_system_context_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_resource_main/utility_resource_main_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_resource_config_data/utility_resource_config_data_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_resource_tertiary/utility_resource_tertiary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_resource_quaternary/utility_resource_quaternary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_resource_manager/utility_resource_manager_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_memory_primary/utility_memory_primary_ptr/g' "$UTILITIES_FILE"

# 第五组：上下文变量
sed -i 's/utility_context_primary/utility_context_primary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_context_secondary/utility_context_secondary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_context_tertiary/utility_context_tertiary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_context_quaternary/utility_context_quaternary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_context_auxiliary/utility_context_auxiliary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_context_backup/utility_context_backup_ptr/g' "$UTILITIES_FILE"

echo "最终轮变量名替换完成"

# 验证替换结果
echo "验证替换结果..."
REMAINING_COUNT=$(grep -c "utility_global_primary_context\|utility_global_secondary_data\|utility_buffer_secondary\|utility_network_tertiary_context\|utility_network_quaternary_context" "$UTILITIES_FILE")
echo "剩余未替换的变量名出现次数: $REMAINING_COUNT"

echo "最终轮语义化美化脚本执行完成"