#!/bin/bash

# 渲染系统变量重命名脚本
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 定义变量映射
declare -A VAR_MAP=(
    ["DAT_180a1ef48"]="RenderDeviceName"
    ["DAT_180a1f740"]="RenderFeatureLevel"
    ["DAT_180a1f750"]="RenderApiVersion"
    ["DAT_180a1f8f0"]="RenderMemoryPool"
    ["DAT_180a1f8f8"]="RenderDescriptorHeap"
    ["DAT_180a1f910"]="RenderCommandQueue"
    ["DAT_180a1f920"]="RenderCommandList"
    ["DAT_180a1f930"]="RenderCommandAllocator"
    ["DAT_180a1f940"]="RenderFence"
    ["DAT_180a1f950"]="RenderSwapChain"
    ["DAT_180a1f960"]="RenderBackBuffer"
    ["DAT_180a064c8"]="RenderDepthBuffer"
    ["DAT_180a1fc50"]="RenderStencilBuffer"
    ["DAT_180a1fc58"]="RenderViewport"
    ["DAT_180a1fdd8"]="RenderScissorRect"
    ["DAT_180a1fdf0"]="RenderBlendState"
    ["DAT_180a1fdf8"]="RenderRasterizerState"
    ["DAT_180a1ff70"]="RenderDepthStencilState"
    ["DAT_180a1ffa0"]="RenderSamplerState"
    ["DAT_180a1ffd8"]="RenderTexture"
    ["DAT_180a1ffe8"]="RenderShader"
    ["DAT_180a1fff8"]="RenderPipelineState"
)

# 执行替换
for old_var in "${!VAR_MAP[@]}"; do
    new_var="${VAR_MAP[$old_var]}"
    echo "替换 $old_var -> $new_var"
    sed -i "s/\b$old_var\b/$new_var/g" 03_rendering.c
done

echo "变量重命名完成"