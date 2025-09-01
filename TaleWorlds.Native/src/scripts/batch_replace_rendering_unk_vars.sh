#!/bin/bash

# 批量替换03_rendering.c文件中的UNK_变量
# 这个脚本会将有意义的名称赋给渲染系统相关的变量

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 定义替换映射
declare -A replacements=(
    ["UNK_180446530"]="RenderPipelineState"
    ["UNK_180446550"]="RenderShaderProgram"
    ["UNK_180446560"]="RenderVertexBuffer"
    ["UNK_1804465b0"]="RenderIndexBuffer"
    ["UNK_180446600"]="RenderConstantBuffer"
    ["UNK_180446900"]="RenderTextureSampler"
    ["UNK_180446940"]="RenderRenderTarget"
    ["UNK_180446950"]="RenderDepthStencil"
    ["UNK_1804469d0"]="RenderBlendState"
    ["UNK_1804469e0"]="RenderRasterizerState"
    ["UNK_180446a20"]="RenderViewport"
    ["UNK_180446a40"]="RenderScissorRect"
    ["UNK_180446b10"]="RenderStencilRef"
    ["UNK_180446e00"]="RenderQueryManager"
    ["UNK_180446e10"]="RenderPredicate"
    ["UNK_180446e20"]="RenderCounter"
    ["UNK_180446e30"]="RenderTimestamp"
    ["UNK_180446e50"]="RenderStatistics"
    ["UNK_180446e60"]="RenderProfiler"
    ["UNK_180446f90"]="RenderDebugInfo"
    ["UNK_180447010"]="RenderValidation"
    ["UNK_180447020"]="RenderErrorHandling"
    ["UNK_1804470c0"]="RenderMemoryManager"
    ["UNK_180447110"]="RenderGarbageCollector"
    ["UNK_1804473a0"]="RenderResourcePool"
    ["UNK_1804475b0"]="RenderBufferManager"
    ["UNK_180447c80"]="RenderTextureManager"
    ["UNK_180447c90"]="RenderShaderManager"
    ["UNK_180447d20"]="RenderPipelineManager"
    ["UNK_180447d30"]="RenderStateManager"
    ["UNK_180447dc0"]="RenderCommandManager"
)

# 执行替换
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    sed -i "s/undefined $old_name;/void* $new_name;/g" 03_rendering.c
done

echo "批量替换完成"