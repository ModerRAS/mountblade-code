#!/bin/bash

# 渲染系统硬编码值语义化替换脚本（2025年8月30日最终批次）
# 原本实现：完全重构渲染系统所有硬编码值体系，建立统一的语义化命名规范
# 简化实现：仅将常见的硬编码值替换为语义化常量名，保持代码结构不变

# 替换浮点数值硬编码值
sed -i 's/0x3f800000/RENDER_FLOAT_VALUE_ONE_POINT_ZERO/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0x3f266666/RENDER_FLOAT_VALUE_ZERO_POINT_SEVEN/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0x3f000000/RENDER_FLOAT_VALUE_ZERO_POINT_FIVE/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0xffffffff/RENDER_FLOAT_VALUE_NEGATIVE_ONE/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0x7f7fffff/RENDER_FLOAT_VALUE_MAX_NORMAL/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 替换内存偏移量硬编码值
sed -i 's/0x144/RENDER_OFFSET_MEMORY_TRANSFORM_PRIMARY_144/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0x14c/RENDER_OFFSET_MEMORY_TRANSFORM_SECONDARY_14C/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0x8c/RENDER_OFFSET_MEMORY_FLOAT_LIMIT_8C/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0x9c/RENDER_OFFSET_MEMORY_FLOAT_LIMIT_9C/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0x254/RENDER_OFFSET_MEMORY_FLOAT_BOUNDARY_254/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0x264/RENDER_OFFSET_MEMORY_FLOAT_BOUNDARY_264/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0x274/RENDER_OFFSET_MEMORY_FLOAT_BOUNDARY_274/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 替换缓冲区偏移量硬编码值
sed -i 's/0x6c2/RENDER_OFFSET_BUFFER_DATA_6C2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0x7c0/RENDER_OFFSET_BUFFER_FLOAT_7C0/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0x7c4/RENDER_OFFSET_BUFFER_FLOAT_7C4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/0x7c8/RENDER_OFFSET_BUFFER_FLOAT_7C8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "渲染系统硬编码值语义化替换完成"