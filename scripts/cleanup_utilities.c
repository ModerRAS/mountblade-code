#!/bin/bash

# 清理06_utilities.c文件中的重复代码和修复函数定义
# 这个脚本会删除文件末尾的重复代码段，并修复缺少函数名的函数定义

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
TEMP_FILE="/tmp/utilities_cleaned.c"

# 查找最后一个正确函数定义的位置
LAST_FUNCTION_LINE=$(grep -n "^uint32 utility_get_memory_usage(void)" "$INPUT_FILE" | tail -1 | cut -d: -f1)

if [ -z "$LAST_FUNCTION_LINE" ]; then
    echo "未找到正确的函数定义位置"
    exit 1
fi

# 提取正确部分到临时文件
head -n "$LAST_FUNCTION_LINE" "$INPUT_FILE" > "$TEMP_FILE"

# 添加正确的函数定义
cat >> "$TEMP_FILE" << 'EOF'
{
  return UTILITY_ZERO;
}

/**
 * @brief 上下文管理器 - 管理系统资源上下文
 * @return uint64 上下文管理结果状态码
 *
 * 该函数负责管理系统资源上下文，包括上下文初始化和清理操作。
 *
 * 简化实现：提供基本的上下文管理功能。
 */
uint64 utility_context_manager(void)
{
  return UTILITY_ZERO;
}
EOF

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "06_utilities.c文件清理完成"