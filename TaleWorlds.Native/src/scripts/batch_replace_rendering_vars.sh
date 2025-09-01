#!/bin/bash

# 批量替换03_rendering.c中的UNK_变量
FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 替换一些关键的渲染相关变量
sed -i 's/undefined UNK_180446940;/void* RenderLightingSystem;/g' "$FILE"
sed -i 's/undefined UNK_180446950;/void* RenderCameraSystem;/g' "$FILE"
sed -i 's/undefined UNK_1804469d0;/void* RenderViewportManager;/g' "$FILE"
sed -i 's/undefined UNK_1804469e0;/void* RenderViewportConfiguration;/g' "$FILE"
sed -i 's/undefined UNK_180446a20;/void* RenderDepthTestingFlag;/g' "$FILE"
sed -i 's/undefined UNK_180446a40;/void* RenderStencilTestingFlag;/g' "$FILE"
sed -i 's/undefined UNK_180446b10;/void* RenderBlendingState;/g' "$FILE"
sed -i 's/undefined UNK_180446e00;/void* RenderRasterizerState;/g' "$FILE"
sed -i 's/undefined UNK_180446e10;/void* RenderMultisamplingState;/g' "$FILE"
sed -i 's/undefined UNK_180446e20;/void* RenderScissorTestState;/g' "$FILE"
sed -i 's/undefined UNK_180446e30;/void* RenderOcclusionQueryState;/g' "$FILE"
sed -i 's/undefined UNK_180446e50;/void* RenderPredicateState;/g' "$FILE"
sed -i 's/undefined UNK_180446e60;/void* RenderQueryState;/g' "$FILE"
sed -i 's/undefined UNK_180446f90;/void* RenderStreamOutputState;/g' "$FILE"

echo "批量替换完成"