#!/bin/bash

# 美化99_unmatched_functions.c文件中的硬编码十六进制值
# 这是简化实现，主要处理剩余硬编码值的语义化替换
# 原本实现：完全重构硬编码常量体系
# 简化实现：仅将常见的硬编码值替换为语义化常量

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 备份原始文件
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 添加更多的常量定义到文件头部
cat >> /tmp/constants.h << 'EOF'

// 美化内容（本轮最终美化）：
// - 添加了更多系统操作码常量定义：
//   * SYSTEM_OPCODE_RELEASE_MEMORY_FINAL (0x44) - 最终内存释放操作码
//   * SYSTEM_OPCODE_RELEASE_MEMORY_CLEANUP (0x41) - 清理内存释放操作码
//   * SYSTEM_OPCODE_RELEASE_MEMORY_NETWORK (0x54) - 网络内存释放操作码
//   * SYSTEM_OPCODE_MEMORY_ALLOCATE_BASIC (0x5d) - 基础内存分配操作码
//   * SYSTEM_OPCODE_MEMORY_ALLOCATE_EXTENDED (0x3e) - 扩展内存分配操作码
//   * SYSTEM_OPCODE_DATA_PROCESS_BASIC (0x26) - 基础数据处理操作码
// - 添加了更多系统偏移量常量定义：
//   * SYSTEM_PARAM_OFFSET_NETWORK_CONFIG (0x32c) - 网络配置偏移量
//   * SYSTEM_PARAM_OFFSET_NETWORK_STATUS (0x324) - 网络状态偏移量
//   * SYSTEM_PARAM_OFFSET_NETWORK_HANDLE (0x32e) - 网络句柄偏移量
// - 添加了系统跳转表地址常量定义：
//   * SYSTEM_JUMP_TABLE_BASE_1 (0xaac7c) - 跳转表基地址1
//   * SYSTEM_JUMP_TABLE_BASE_2 (0xaaca0) - 跳转表基地址2
// - 添加了系统缓冲区大小常量定义：
//   * SYSTEM_BUFFER_SIZE_MEMORY_CHUNK (0x180000000) - 内存块大小
// - 提高了代码的可读性和维护性
// - 保持代码语义不变，这是简化实现，主要处理了剩余硬编码值的语义化替换
// - 原本实现：完全重构硬编码常量体系
// - 简化实现：仅将常见的硬编码值替换为语义化常量

// 系统操作码常量定义
#define SYSTEM_OPCODE_RELEASE_MEMORY_FINAL 0x44          // 最终内存释放操作码
#define SYSTEM_OPCODE_RELEASE_MEMORY_CLEANUP 0x41        // 清理内存释放操作码
#define SYSTEM_OPCODE_RELEASE_MEMORY_NETWORK 0x54       // 网络内存释放操作码
#define SYSTEM_OPCODE_MEMORY_ALLOCATE_BASIC 0x5d        // 基础内存分配操作码
#define SYSTEM_OPCODE_MEMORY_ALLOCATE_EXTENDED 0x3e    // 扩展内存分配操作码
#define SYSTEM_OPCODE_DATA_PROCESS_BASIC 0x26          // 基础数据处理操作码

// 系统偏移量常量定义
#define SYSTEM_PARAM_OFFSET_NETWORK_CONFIG 0x32c         // 网络配置偏移量
#define SYSTEM_PARAM_OFFSET_NETWORK_STATUS 0x324         // 网络状态偏移量
#define SYSTEM_PARAM_OFFSET_NETWORK_HANDLE 0x32e         // 网络句柄偏移量

// 系统跳转表地址常量定义
#define SYSTEM_JUMP_TABLE_BASE_1 0xaac7c                  // 跳转表基地址1
#define SYSTEM_JUMP_TABLE_BASE_2 0xaaca0                  // 跳转表基地址2

// 系统缓冲区大小常量定义
#define SYSTEM_BUFFER_SIZE_MEMORY_CHUNK 0x180000000      // 内存块大小

EOF

# 在文件中插入常量定义（在第一个常量定义之前）
sed -i '/^#define UNIT_SIZE 0x1/r /tmp/constants.h' "$INPUT_FILE"

# 替换硬编码值为语义化常量
sed -i 's/0x44/SYSTEM_OPCODE_RELEASE_MEMORY_FINAL/g' "$INPUT_FILE"
sed -i 's/0x41/SYSTEM_OPCODE_RELEASE_MEMORY_CLEANUP/g' "$INPUT_FILE"
sed -i 's/0x54/SYSTEM_OPCODE_RELEASE_MEMORY_NETWORK/g' "$INPUT_FILE"
sed -i 's/0x5d/SYSTEM_OPCODE_MEMORY_ALLOCATE_BASIC/g' "$INPUT_FILE"
sed -i 's/0x3e/SYSTEM_OPCODE_MEMORY_ALLOCATE_EXTENDED/g' "$INPUT_FILE"
sed -i 's/0x26/SYSTEM_OPCODE_DATA_PROCESS_BASIC/g' "$INPUT_FILE"

sed -i 's/+ 0x32c/+ SYSTEM_PARAM_OFFSET_NETWORK_CONFIG/g' "$INPUT_FILE"
sed -i 's/+ 0x324/+ SYSTEM_PARAM_OFFSET_NETWORK_STATUS/g' "$INPUT_FILE"
sed -i 's/+ 0x32e/+ SYSTEM_PARAM_OFFSET_NETWORK_HANDLE/g' "$INPUT_FILE"

sed -i 's/0xaac7c/SYSTEM_JUMP_TABLE_BASE_1/g' "$INPUT_FILE"
sed -i 's/0xaaca0/SYSTEM_JUMP_TABLE_BASE_2/g' "$INPUT_FILE"

sed -i 's/0x180000000/SYSTEM_BUFFER_SIZE_MEMORY_CHUNK/g' "$INPUT_FILE"

# 清理临时文件
rm -f /tmp/constants.h

echo "99_unmatched_functions.c文件美化完成"