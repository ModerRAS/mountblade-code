#!/bin/bash

# 03_rendering.c 美化脚本
# 重命名 UNK_ 和 FUN_ 变量/函数为语义化名称

# 定义重命名映射
declare -A RENAME_MAP=(
    # 渲染状态相关
    ["UNK_18044e360"]="RenderCacheInitializer"
    ["UNK_18044e380"]="RenderCacheCleanupHandler"
    ["UNK_18044e390"]="RenderCacheFlushController"
    ["UNK_18044e610"]="RenderCacheMemoryManager"
    ["UNK_18044e640"]="RenderCacheBufferPool"
    ["UNK_18044f490"]="TextureSamplerConfigurator"
    ["UNK_18044f4b0"]="BlendModeController"
    ["UNK_18044f4f0"]="RenderStateInitializer"
    ["UNK_18044f510"]="RenderPipelineConfigurator"
    
    # 渲染管线相关
    ["UNK_180445280"]="PipelineStateManager"
    ["UNK_1804452d0"]="ShaderProgramManager"
    ["UNK_1804461a0"]="VertexProcessor"
    ["UNK_180446280"]="FragmentProcessor"
    ["UNK_180446290"]="GeometryProcessor"
    ["UNK_180446530"]="RenderTargetManager"
    ["UNK_180446550"]="DepthStencilManager"
    ["UNK_180446560"]="StencilBufferManager"
    ["UNK_1804465b0"]="ColorAttachmentManager"
    ["UNK_180446600"]="ViewportManager"
    
    # 函数重命名
    ["FUN_1804460c0"]="InitializeRenderContext"
    ["FUN_1804460f0"]="CreateRenderDevice"
    ["FUN_180446120"]="SetupSwapChain"
    ["FUN_180446160"]="ConfigureCommandQueue"
    ["FUN_1804461b0"]="CreateRenderTargets"
)

# 执行替换
for old_name in "${!RENAME_MAP[@]}"; do
    new_name="${RENAME_MAP[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
done

echo "03_rendering.c 美化完成"