#!/bin/bash

# 03_rendering.c 变量美化脚本
# 用于批量替换UNK_变量为语义化名称

echo "开始美化 03_rendering.c 文件..."

# 定义替换映射
declare -A replacements=(
    # 渲染缓冲区相关变量
    ["UNK_18044e640"]="RenderBufferObjectStorage"
    ["UNK_18044f580"]="FrameBufferBindConfig"
    ["UNK_18044f5d0"]="FrameBufferUnbindConfig"
    ["UNK_18044f5f0"]="FrameBufferCompletenessConfig"
    ["UNK_18044f610"]="FrameBufferTextureAttachmentConfig"
    ["UNK_18044f630"]="FrameBufferRenderBufferAttachmentConfig"
    ["UNK_18044f640"]="FrameBufferDepthAttachmentConfig"
    ["UNK_18044f660"]="FrameBufferStencilAttachmentConfig"
    ["UNK_18044f690"]="FrameBufferColorAttachmentConfig"
    ["UNK_18044f6b0"]="FrameBufferAttachmentPointConfig"
    ["UNK_18044f6e0"]="FrameBufferAttachmentTypeConfig"
    ["UNK_18044f750"]="FrameBufferAttachmentLevelConfig"
    ["UNK_18044f940"]="FrameBufferAttachmentLayerConfig"
    ["UNK_18044f960"]="FrameBufferAttachmentFaceConfig"
    ["UNK_18044f980"]="FrameBufferMipmapLevelConfig"
    ["UNK_18044f9a0"]="FrameBufferCubeMapFaceConfig"
    ["UNK_18044f9c0"]="FrameBufferTextureLayerConfig"
    ["UNK_18044f9e0"]="FrameBufferTextureLevelConfig"
    ["UNK_18044faf0"]="FrameBufferMultisampleConfig"
    ["UNK_18044fb20"]="FrameBufferResolveConfig"
)

# 执行替换
for key in "${!replacements[@]}"; do
    value="${replacements[$key]}"
    echo "替换: $key -> $value"
    sed -i "s/$key/$value/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
done

echo "变量替换完成！"