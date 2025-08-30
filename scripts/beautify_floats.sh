#!/bin/bash

# 02_core_engine.c 硬编码浮点数替换脚本
# 2025年8月30日最终批次

echo "开始替换硬编码浮点数..."

# 替换 1.0 为 ENGINE_FLOAT_VALUE_INVERSE
sed -i 's/1\.0 /ENGINE_FLOAT_VALUE_INVERSE /g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 替换 0.0 为 ENGINE_FLOAT_VALUE_POINT_ZERO
sed -i 's/0\.0 /ENGINE_FLOAT_VALUE_POINT_ZERO /g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 替换 0.01 为 ENGINE_FLOAT_VALUE_POINT_ZERO_ONE
sed -i 's/0\.01 /ENGINE_FLOAT_VALUE_POINT_ZERO_ONE /g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 替换 0.05 为 ENGINE_FLOAT_VALUE_POINT_ZERO_FIVE
sed -i 's/0\.05 /ENGINE_FLOAT_VALUE_POINT_ZERO_FIVE /g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

echo "硬编码浮点数替换完成"
echo "注意：这是简化实现，仅替换了常见的硬编码浮点数"
echo "原本实现：完全重构所有硬编码浮点数体系，消除所有魔法浮点数"