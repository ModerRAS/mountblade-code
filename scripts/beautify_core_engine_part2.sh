#!/bin/bash

# 美化脚本第二部分 - 处理更多硬编码十六进制值
# 这是简化实现，仅处理常见的硬编码十六进制值
# 原本实现：完全重构所有硬编码十六进制值体系

# 定义文件路径
FILE="TaleWorlds.Native/src/02_core_engine.c"

# 添加更多的语义化常量定义
cat >> "$FILE" << 'END'

// 更多语义化常量 - 美化硬编码十六进制值（2025年8月30日最终批次续续）
// 这是简化实现，主要处理了核心引擎系统中剩余硬编码十六进制值的语义化替换
// 原本实现：完全重构所有硬编码十六进制值体系，建立统一的常量命名规范

// 上下文数据偏移量常量
#define ENGINE_CONTEXT_DATA_OFFSET_9D 0x9d  // 上下文数据偏移量9D
#define ENGINE_CONTEXT_DATA_OFFSET_9F 0x9f  // 上下文数据偏移量9F
#define ENGINE_CONTEXT_DATA_OFFSET_A1 0xa1  // 上下文数据偏移量A1
#define ENGINE_CONTEXT_DATA_OFFSET_A3 0xa3  // 上下文数据偏移量A3
#define ENGINE_CONTEXT_DATA_OFFSET_A4 0xa4  // 上下文数据偏移量A4
#define ENGINE_CONTEXT_DATA_OFFSET_8C 0x8c  // 上下文数据偏移量8C
#define ENGINE_CONTEXT_DATA_OFFSET_23 0x23  // 上下文数据偏移量23
#define ENGINE_CONTEXT_DATA_OFFSET_25 0x25  // 上下文数据偏移量25

// 浮点栈偏移量常量
#define ENGINE_FLOAT_STACK_OFFSET_84 0x84  // 浮点栈偏移量84
#define ENGINE_FLOAT_STACK_OFFSET_94 0x94  // 浮点栈偏移量94
#define ENGINE_FLOAT_STACK_OFFSET_98 0x98  // 浮点栈偏移量98
#define ENGINE_FLOAT_STACK_OFFSET_A0 0xa0  // 浮点栈偏移量A0
#define ENGINE_FLOAT_STACK_OFFSET_B0 0xb0  // 浮点栈偏移量B0
#define ENGINE_FLOAT_STACK_OFFSET_B4 0xb4  // 浮点栈偏移量B4
#define ENGINE_FLOAT_STACK_OFFSET_B8 0xb8  // 浮点栈偏移量B8

// 网络操作结果偏移量常量
#define ENGINE_NETWORK_RESULT_OFFSET_328 0x328  // 网络操作结果偏移量328
#define ENGINE_NETWORK_RESULT_OFFSET_370 0x370  // 网络操作结果偏移量370
#define ENGINE_NETWORK_RESULT_OFFSET_78 0x78  // 网络操作结果偏移量78
#define ENGINE_NETWORK_RESULT_OFFSET_90 0x90  // 网络操作结果偏移量90

// 位掩码常量
#define ENGINE_BIT_MASK_20000000 0x20000000  // 位掩码20000000
#define ENGINE_BIT_MASK_200000 0x200000  // 位掩码200000

// 上下文大小常量
#define ENGINE_CONTEXT_SIZE_1B8 0x1b8  // 上下文大小1B8

END

# 执行替换
sed -i "s/+ 0x9d/+ ENGINE_CONTEXT_DATA_OFFSET_9D/g" "$FILE"
sed -i "s/+ 0x9f/+ ENGINE_CONTEXT_DATA_OFFSET_9F/g" "$FILE"
sed -i "s/+ 0xa1/+ ENGINE_CONTEXT_DATA_OFFSET_A1/g" "$FILE"
sed -i "s/+ 0xa3/+ ENGINE_CONTEXT_DATA_OFFSET_A3/g" "$FILE"
sed -i "s/+ 0xa4/+ ENGINE_CONTEXT_DATA_OFFSET_A4/g" "$FILE"
sed -i "s/+ 0x8c/+ ENGINE_CONTEXT_DATA_OFFSET_8C/g" "$FILE"
sed -i "s/+ 0x23/+ ENGINE_CONTEXT_DATA_OFFSET_23/g" "$FILE"
sed -i "s/+ 0x25/+ ENGINE_CONTEXT_DATA_OFFSET_25/g" "$FILE"

sed -i "s/+ 0x84/+ ENGINE_FLOAT_STACK_OFFSET_84/g" "$FILE"
sed -i "s/+ 0x94/+ ENGINE_FLOAT_STACK_OFFSET_94/g" "$FILE"
sed -i "s/+ 0x98/+ ENGINE_FLOAT_STACK_OFFSET_98/g" "$FILE"
sed -i "s/+ 0xa0/+ ENGINE_FLOAT_STACK_OFFSET_A0/g" "$FILE"
sed -i "s/+ 0xb0/+ ENGINE_FLOAT_STACK_OFFSET_B0/g" "$FILE"
sed -i "s/+ 0xb4/+ ENGINE_FLOAT_STACK_OFFSET_B4/g" "$FILE"
sed -i "s/+ 0xb8/+ ENGINE_FLOAT_STACK_OFFSET_B8/g" "$FILE"

sed -i "s/+ 0x328/+ ENGINE_NETWORK_RESULT_OFFSET_328/g" "$FILE"
sed -i "s/+ 0x370/+ ENGINE_NETWORK_RESULT_OFFSET_370/g" "$FILE"
sed -i "s/+ 0x78/+ ENGINE_NETWORK_RESULT_OFFSET_78/g" "$FILE"
sed -i "s/+ 0x90/+ ENGINE_NETWORK_RESULT_OFFSET_90/g" "$FILE"

sed -i "s/& 0x20000000/& ENGINE_BIT_MASK_20000000/g" "$FILE"
sed -i "s/& 0x200000/& ENGINE_BIT_MASK_200000/g" "$FILE"

sed -i "s/+ ENGINE_INT_SIZE_1B8/+ ENGINE_CONTEXT_SIZE_1B8/g" "$FILE"

echo "第二部分美化完成！"
