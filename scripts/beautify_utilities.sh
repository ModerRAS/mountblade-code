#!/bin/bash

# 06_utilities.c 变量名美化脚本
# 将剩余的寄存器变量名替换为语义化名称

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 备份文件头部信息，添加本次美化说明
head -30 "$FILE" > /tmp/header.txt

# 创建新的头部说明
cat > /tmp/new_header.txt << 'EOF'
#include "TaleWorlds.Native.Split.h"

// 06_utilities.c - 工具系统代码（已美化变量名和函数名）
// 最新美化内容：
// - 将以下寄存器变量名替换为语义化名称：
//   * cpu_register_r11_byte -> utility_cpu_register_byte_temp
//   * cpu_register_r9 -> utility_cpu_register_data_counter
//   * utility_register_r12 -> utility_cpu_register_ptr_secondary
//   * utility_xmm0_register_result -> utility_xmm_register_result_primary
// - 将内存相关变量名替换为语义化名称：
//   * g_memory_register_allocator -> utility_memory_allocator_primary
//   * g_memory_stack_register_allocator -> utility_memory_stack_allocator
//   * g_memory_heap_register_allocator -> utility_memory_heap_allocator
//   * g_memory_cache_register_allocator -> utility_memory_cache_allocator
//   * g_memory_buffer_register_allocator -> utility_memory_buffer_allocator
//   * g_memory_stream_register_allocator -> utility_memory_stream_allocator
//   * g_memory_array_register_allocator -> utility_memory_array_allocator
//   * g_memory_list_register_allocator -> utility_memory_list_allocator
//   * g_memory_tree_register_allocator -> utility_memory_tree_allocator
//   * g_memory_hash_register_allocator -> utility_memory_hash_allocator
//   * g_memory_map_register_allocator -> utility_memory_map_allocator
// - 将其他变量名替换为语义化名称：
//   * register_resource_callbacks -> utility_register_resource_callbacks
//   * g_register_memory_handler -> utility_memory_handler_global
// - 提高了代码的可读性和维护性
// - 保持代码语义不变
// - 这是简化实现，主要处理了工具系统中剩余变量名的语义化替换
// - 原本实现：完全重构变量命名体系和寄存器变量管理
// - 简化实现：仅将剩余的寄存器变量名替换为语义化名称

EOF

# 合并头部和文件内容
cat /tmp/new_header.txt > /tmp/new_file.c
tail -n +31 "$FILE" >> /tmp/new_file.c

# 执行变量名替换
sed -i 's/cpu_register_r11_byte/utility_cpu_register_byte_temp/g' /tmp/new_file.c
sed -i 's/cpu_register_r9/utility_cpu_register_data_counter/g' /tmp/new_file.c
sed -i 's/utility_register_r12/utility_cpu_register_ptr_secondary/g' /tmp/new_file.c
sed -i 's/utility_xmm0_register_result/utility_xmm_register_result_primary/g' /tmp/new_file.c
sed -i 's/register_resource_callbacks/utility_register_resource_callbacks/g' /tmp/new_file.c
sed -i 's/g_register_memory_handler/utility_memory_handler_global/g' /tmp/new_file.c
sed -i 's/g_memory_register_allocator/utility_memory_allocator_primary/g' /tmp/new_file.c
sed -i 's/g_memory_stack_register_allocator/utility_memory_stack_allocator/g' /tmp/new_file.c
sed -i 's/g_memory_heap_register_allocator/utility_memory_heap_allocator/g' /tmp/new_file.c
sed -i 's/g_memory_cache_register_allocator/utility_memory_cache_allocator/g' /tmp/new_file.c
sed -i 's/g_memory_buffer_register_allocator/utility_memory_buffer_allocator/g' /tmp/new_file.c
sed -i 's/g_memory_stream_register_allocator/utility_memory_stream_allocator/g' /tmp/new_file.c
sed -i 's/g_memory_array_register_allocator/utility_memory_array_allocator/g' /tmp/new_file.c
sed -i 's/g_memory_list_register_allocator/utility_memory_list_allocator/g' /tmp/new_file.c
sed -i 's/g_memory_tree_register_allocator/utility_memory_tree_allocator/g' /tmp/new_file.c
sed -i 's/g_memory_hash_register_allocator/utility_memory_hash_allocator/g' /tmp/new_file.c
sed -i 's/g_memory_map_register_allocator/utility_memory_map_allocator/g' /tmp/new_file.c

# 替换文件
mv /tmp/new_file.c "$FILE"

# 清理临时文件
rm -f /tmp/header.txt /tmp/new_header.txt /tmp/new_file.c

echo "06_utilities.c 变量名美化完成"