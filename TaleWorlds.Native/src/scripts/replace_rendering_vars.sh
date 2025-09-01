#!/bin/bash

# 批量替换03_rendering.c中的未命名变量
# 这是一个临时脚本，用于美化代码

# 第一批变量替换
sed -i 's/undefined UNK_1804473a0;/undefined PixelShaderCreationData;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/undefined UNK_1804475b0;/undefined GeometryShaderSetupData;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/undefined UNK_180447c80;/undefined ComputeShaderCreationData;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/undefined UNK_180447c90;/undefined TessellationShaderSetupData;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/undefined UNK_180447d20;/undefined HullShaderConfigurationData;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/undefined UNK_180447d30;/undefined DomainShaderConfigurationData;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 第二批变量替换
sed -i 's/undefined UNK_180447dc0;/undefined RenderTargetCreationData;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/undefined UNK_1804482a0;/undefined DepthBufferCreationData;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/undefined UNK_1804482b0;/undefined StencilBufferCreationData;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/undefined UNK_1804482e0;/undefined RenderPassConfigurationData;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/undefined UNK_180448370;/undefined FrameBufferConfigurationData;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "变量替换完成"