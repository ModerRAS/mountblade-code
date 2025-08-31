#!/bin/bash

# 简化实现：06_utilities.c 文件第三轮语义化美化脚本
# 原本实现：完全重构工具系统所有命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化变量名替换为语义化名称，保持代码结构不变

# 设置文件路径
UTILITIES_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 创建备份
cp "$UTILITIES_FILE" "${UTILITIES_FILE}.backup.round3.$(date +%Y%m%d_%H%M%S)"
echo "已创建第三轮备份文件"

# 执行第三轮变量名替换
echo "开始执行第三轮变量名替换..."

# 第一组：状态变量
sed -i 's/utility_global_primary_status/utility_global_status_primary/g' "$UTILITIES_FILE"
sed -i 's/utility_global_secondary_status/utility_global_status_secondary/g' "$UTILITIES_FILE"

# 第二组：缓冲区变量
sed -i 's/utility_primary_buffer/utility_buffer_primary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_buffer_tertiary/utility_buffer_tertiary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_buffer_quaternary/utility_buffer_quaternary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_primary_buffer_extended/utility_buffer_primary_extended_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_buffer_tertiary_extended/utility_buffer_tertiary_extended_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_buffer_quaternary_extended/utility_buffer_quaternary_extended_ptr/g' "$UTILITIES_FILE"

# 第三组：其他变量
sed -i 's/utility_context_manager/utility_context_manager_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_network_primary_context/utility_network_context_primary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_network_secondary_context/utility_network_context_secondary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_global_main_pointer_secondary/utility_global_pointer_secondary_ptr/g' "$UTILITIES_FILE"
sed -i 's/utility_config_value/utility_config_data/g' "$UTILITIES_FILE"
sed -i 's/utility_state_data/utility_state_value/g' "$UTILITIES_FILE"

echo "第三轮变量名替换完成"

# 验证替换结果
echo "验证替换结果..."
REMAINING_COUNT=$(grep -c "utility_global_primary_status\|utility_global_secondary_status\|utility_primary_buffer\|utility_buffer_tertiary\|utility_buffer_quaternary" "$UTILITIES_FILE")
echo "剩余未替换的变量名出现次数: $REMAINING_COUNT"

echo "第三轮语义化美化脚本执行完成"