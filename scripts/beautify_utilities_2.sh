#!/bin/bash

# 继续美化06_utilities.c文件中的硬编码值
# 将utility_size_threshold_7D替换为语义化常量

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 添加缺失的语义化常量定义
cat >> 06_utilities.c << 'EOF'

// 最新美化内容（2025年8月30日最终批次阈值常量语义化）：
// - 美化大小阈值硬编码值，将utility_size_threshold_7D替换为UTILITY_SIZE_THRESHOLD_STANDARD等语义化常量
// - 提高了代码的可读性和维护性
// - 保持代码语义不变，这是简化实现，主要处理了工具系统中大小阈值硬编码值的语义化替换
// - 原本实现：完全重构工具系统所有阈值常量体系，建立统一的语义化命名规范
// - 简化实现：仅将常见的大小阈值硬编码值替换为语义化常量，保持代码结构不变

#define UTILITY_SIZE_THRESHOLD_STANDARD 0x7D  // 标准大小阈值 - 用于大小检查

EOF

# 替换硬编码值为语义化常量
sed -i 's/utility_size_threshold_7D/UTILITY_SIZE_THRESHOLD_STANDARD/g' 06_utilities.c

echo "美化完成"