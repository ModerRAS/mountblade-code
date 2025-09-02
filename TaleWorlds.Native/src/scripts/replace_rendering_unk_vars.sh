#!/bin/bash

# 批量替换渲染系统中的UNK_变量
# 这个脚本用于美化03_rendering.c文件中的变量名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建临时文件
temp_file="temp_rendering_beautify.c"
cp 03_rendering.c "$temp_file"

# 定义替换映射
declare -A replacements=(
    ["UNK_180a22428"]="RenderSystemUnorderedAccessCache"
    ["UNK_180a22438"]="RenderSystemQueryCache"
    ["UNK_180a22450"]="RenderSystemFenceCache"
    ["UNK_180a2246c"]="RenderSystemSwapChainCache"
    ["UNK_180a22478"]="RenderSystemVertexLayoutCache"
    ["UNK_180a22490"]="RenderSystemIndexLayoutCache"
    ["UNK_180a224a0"]="RenderSystemConstantLayoutCache"
    ["UNK_180a1cbf8"]="RenderSystemShaderResourceCache"
    ["UNK_180a21874"]="RenderSystemSamplerStateCache"
    ["UNK_180a217e8"]="RenderSystemRasterizerStateCache"
    ["UNK_180a224b8"]="RenderSystemBlendStateCache"
    ["UNK_180a22798"]="RenderSystemDepthStencilStateCache"
    ["UNK_180a227b8"]="RenderSystemInputLayoutCache"
    ["UNK_180a227f8"]="RenderSystemVertexShaderCache"
    ["UNK_180a22820"]="RenderSystemPixelShaderCache"
    ["UNK_180a22838"]="RenderSystemGeometryShaderCache"
    ["UNK_180a227d8"]="RenderSystemHullShaderCache"
    ["UNK_180a22870"]="RenderSystemDomainShaderCache"
    ["UNK_180a228a0"]="RenderSystemComputeShaderCache"
    ["UNK_180a228c8"]="RenderSystemTextureManagerCache"
    ["UNK_180a22858"]="RenderSystemBufferManagerCache"
    ["UNK_180a22948"]="RenderSystemStateObjectCache"
    ["UNK_180a22ab0"]="RenderSystemPipelineStateCache"
    ["UNK_180a22a98"]="RenderSystemRootSignatureCache"
    ["UNK_180a22ac0"]="RenderSystemDescriptorManagerCache"
    ["UNK_180a22ad8"]="RenderSystemHeapManagerCache"
    ["UNK_180a22af0"]="RenderSystemCommandAllocatorCache"
    ["UNK_180a22b10"]="RenderSystemCommandListCache"
    ["UNK_180a22b28"]="RenderSystemGraphicsMemoryCache"
    ["UNK_180a3cb88"]="RenderSystemDeviceContextCache"
)

# 执行替换
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    sed -i "s/void $old_name;/void $new_name;/g" "$temp_file"
done

# 替换原文件
mv "$temp_file" 03_rendering.c

echo "渲染系统变量美化完成"