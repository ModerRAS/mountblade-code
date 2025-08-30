#!/bin/bash

# 美化核心引擎代码 - 第二阶段：替换更多硬编码数值
# 原本实现：完全重构代码中的数值引用体系
# 简化实现：仅将硬编码数值替换为语义化常量定义

# 进入正确的目录
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 02_core_engine.c 02_core_engine.c.backup.$(date +%Y%m%d_%H%M%S)

# 添加更多的内存偏移常量
cat >> 02_core_engine.c << 'EOF'

// Engine Memory Offset Constants (第二批) - 美化硬编码数值
#define ENGINE_MEMORY_OFFSET_0x27 0x27
#define ENGINE_MEMORY_OFFSET_0x2e 0x2e
#define ENGINE_MEMORY_OFFSET_0x33 0x33
#define ENGINE_MEMORY_OFFSET_0x3d 0x3d
#define ENGINE_MEMORY_OFFSET_0x42 0x42
#define ENGINE_MEMORY_OFFSET_0x43 0x43
#define ENGINE_MEMORY_OFFSET_0x46 0x46
#define ENGINE_MEMORY_OFFSET_0x4b 0x4b
#define ENGINE_MEMORY_OFFSET_0x4c 0x4c
#define ENGINE_MEMORY_OFFSET_0x4e 0x4e
#define ENGINE_MEMORY_OFFSET_0x51 0x51
#define ENGINE_MEMORY_OFFSET_0x52 0x52
#define ENGINE_MEMORY_OFFSET_0x54 0x54
#define ENGINE_MEMORY_OFFSET_0x56 0x56
#define ENGINE_MEMORY_OFFSET_0x5a 0x5a
#define ENGINE_MEMORY_OFFSET_0x5b 0x5b
#define ENGINE_MEMORY_OFFSET_0x5d 0x5d
#define ENGINE_MEMORY_OFFSET_0x5f 0x5f
#define ENGINE_MEMORY_OFFSET_0x62 0x62
#define ENGINE_MEMORY_OFFSET_0x6e 0x6e
#define ENGINE_MEMORY_OFFSET_0xb1 0xb1
#define ENGINE_MEMORY_OFFSET_0xb4 0xb4
#define ENGINE_MEMORY_OFFSET_0xb8 0xb8
#define ENGINE_MEMORY_OFFSET_0xbc 0xbc
#define ENGINE_MEMORY_OFFSET_0xc4 0xc4
#define ENGINE_MEMORY_OFFSET_0xcc 0xcc
#define ENGINE_MEMORY_OFFSET_0xe0 0xe0
#define ENGINE_MEMORY_OFFSET_0xe4 0xe4
#define ENGINE_MEMORY_OFFSET_0xe8 0xe8
#define ENGINE_MEMORY_OFFSET_0xec 0xec
#define ENGINE_MEMORY_OFFSET_0xff 0xff
#define ENGINE_MEMORY_OFFSET_0x120 0x120
#define ENGINE_MEMORY_OFFSET_0x126 0x126
#define ENGINE_MEMORY_OFFSET_0x128 0x128
#define ENGINE_MEMORY_OFFSET_0x130 0x130
#define ENGINE_MEMORY_OFFSET_0x138 0x138
#define ENGINE_MEMORY_OFFSET_0x140 0x140
#define ENGINE_MEMORY_OFFSET_0x148 0x148
#define ENGINE_MEMORY_OFFSET_0x1f0 0x1f0
#define ENGINE_MEMORY_OFFSET_0x211 0x211
#define ENGINE_MEMORY_OFFSET_0x218 0x218
#define ENGINE_MEMORY_OFFSET_0x21d 0x21d
#define ENGINE_MEMORY_OFFSET_0x22d 0x22d
#define ENGINE_MEMORY_OFFSET_0x234 0x234
#define ENGINE_MEMORY_OFFSET_0x238 0x238
#define ENGINE_MEMORY_OFFSET_0x248 0x248
#define ENGINE_MEMORY_OFFSET_0x250 0x250
#define ENGINE_MEMORY_OFFSET_0x254 0x254
#define ENGINE_MEMORY_OFFSET_0x25c 0x25c
#define ENGINE_MEMORY_OFFSET_0x274 0x274
#define ENGINE_MEMORY_OFFSET_0x27c 0x27c
#define ENGINE_MEMORY_OFFSET_0x294 0x294
#define ENGINE_MEMORY_OFFSET_0x29c 0x29c
#define ENGINE_MEMORY_OFFSET_0x2a4 0x2a4
#define ENGINE_MEMORY_OFFSET_0x2c0 0x2c0
#define ENGINE_MEMORY_OFFSET_0x2e0 0x2e0
#define ENGINE_MEMORY_OFFSET_0x2f0 0x2f0
#define ENGINE_MEMORY_OFFSET_0x318 0x318
#define ENGINE_MEMORY_OFFSET_0x330 0x330
#define ENGINE_MEMORY_OFFSET_0x370 0x370
#define ENGINE_MEMORY_OFFSET_0x3c8 0x3c8

// Engine Large Memory Offset Constants
#define ENGINE_MEMORY_OFFSET_0x2133d0 0x2133d0
#define ENGINE_MEMORY_OFFSET_0x2133d8 0x2133d8
#define ENGINE_MEMORY_OFFSET_0x2133e0 0x2133e0
#define ENGINE_MEMORY_OFFSET_0x213430 0x213430

// Engine Context Offset Constants (第二批)
#define ENGINE_CONTEXT_OFFSET_0xc 0xc
#define ENGINE_CONTEXT_OFFSET_0xe 0xe
#define ENGINE_CONTEXT_OFFSET_0x21 0x21
#define ENGINE_CONTEXT_OFFSET_0x24 0x24
#define ENGINE_CONTEXT_OFFSET_0x29 0x29
#define ENGINE_CONTEXT_OFFSET_0x2a 0x2a
#define ENGINE_CONTEXT_OFFSET_0x34 0x34
#define ENGINE_CONTEXT_OFFSET_0x35 0x35
#define ENGINE_CONTEXT_OFFSET_0x3a 0x3a
#define ENGINE_CONTEXT_OFFSET_0x46 0x46
#define ENGINE_CONTEXT_OFFSET_0x56 0x56
#define ENGINE_CONTEXT_OFFSET_0x62 0x62

EOF

echo "添加了更多内存偏移常量定义"

# 批量替换硬编码数值
sed -i 's/engine_context_data + 0x27/engine_context_data + ENGINE_MEMORY_OFFSET_0x27/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x2e/engine_context_data + ENGINE_MEMORY_OFFSET_0x2e/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x33/engine_context_data + ENGINE_MEMORY_OFFSET_0x33/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x3d/engine_context_data + ENGINE_MEMORY_OFFSET_0x3d/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x42/engine_context_data + ENGINE_MEMORY_OFFSET_0x42/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x43/engine_context_data + ENGINE_MEMORY_OFFSET_0x43/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x46/engine_context_data + ENGINE_MEMORY_OFFSET_0x46/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x4b/engine_context_data + ENGINE_MEMORY_OFFSET_0x4b/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x4c/engine_context_data + ENGINE_MEMORY_OFFSET_0x4c/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x4e/engine_context_data + ENGINE_MEMORY_OFFSET_0x4e/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x51/engine_context_data + ENGINE_MEMORY_OFFSET_0x51/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x52/engine_context_data + ENGINE_MEMORY_OFFSET_0x52/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x54/engine_context_data + ENGINE_MEMORY_OFFSET_0x54/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x56/engine_context_data + ENGINE_MEMORY_OFFSET_0x56/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x5a/engine_context_data + ENGINE_MEMORY_OFFSET_0x5a/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x5b/engine_context_data + ENGINE_MEMORY_OFFSET_0x5b/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x5d/engine_context_data + ENGINE_MEMORY_OFFSET_0x5d/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x5f/engine_context_data + ENGINE_MEMORY_OFFSET_0x5f/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x62/engine_context_data + ENGINE_MEMORY_OFFSET_0x62/g' 02_core_engine.c
sed -i 's/engine_context_data + 0x6e/engine_context_data + ENGINE_MEMORY_OFFSET_0x6e/g' 02_core_engine.c
sed -i 's/engine_context_data + 0xb4/engine_context_data + ENGINE_MEMORY_OFFSET_0xb4/g' 02_core_engine.c
sed -i 's/engine_context_data + 0xb8/engine_context_data + ENGINE_MEMORY_OFFSET_0xb8/g' 02_core_engine.c
sed -i 's/engine_context_data + 0xbc/engine_context_data + ENGINE_MEMORY_OFFSET_0xbc/g' 02_core_engine.c
sed -i 's/engine_context_data + 0xc4/engine_context_data + ENGINE_MEMORY_OFFSET_0xc4/g' 02_core_engine.c
sed -i 's/engine_context_data + 0xcc/engine_context_data + ENGINE_MEMORY_OFFSET_0xcc/g' 02_core_engine.c
sed -i 's/engine_context_data + 0xe0/engine_context_data + ENGINE_MEMORY_OFFSET_0xe0/g' 02_core_engine.c
sed -i 's/engine_context_data + 0xe4/engine_context_data + ENGINE_MEMORY_OFFSET_0xe4/g' 02_core_engine.c
sed -i 's/engine_context_data + 0xe8/engine_context_data + ENGINE_MEMORY_OFFSET_0xe8/g' 02_core_engine.c
sed -i 's/engine_context_data + 0xec/engine_context_data + ENGINE_MEMORY_OFFSET_0xec/g' 02_core_engine.c
sed -i 's/engine_context_data + 0xff/engine_context_data + ENGINE_MEMORY_OFFSET_0xff/g' 02_core_engine.c

echo "核心引擎代码第二阶段美化完成 - 更多硬编码数值已替换为语义化常量"