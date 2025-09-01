#!/bin/bash

# 批量替换03_rendering.c中的UNK变量
# 这个脚本用于美化变量名

# 变量替换映射
replacements=(
    "s/UNK_18044f610/FrameBufferTextureAttachmentConfig/g"
    "s/UNK_18044f630/FrameBufferRenderBufferAttachmentConfig/g"
    "s/UNK_18044f640/FrameBufferDepthAttachmentConfig/g"
    "s/UNK_18044f660/FrameBufferStencilAttachmentConfig/g"
    "s/UNK_18044f690/FrameBufferColorAttachmentConfig/g"
    "s/UNK_18044f6b0/FrameBufferAttachmentPointConfig/g"
    "s/UNK_18044f6e0/FrameBufferAttachmentTypeConfig/g"
    "s/UNK_18044f750/FrameBufferAttachmentLevelConfig/g"
    "s/UNK_18044f940/FrameBufferAttachmentLayerConfig/g"
    "s/UNK_18044f960/FrameBufferAttachmentFaceConfig/g"
    "s/UNK_18044f980/FrameBufferMipmapLevelConfig/g"
    "s/UNK_18044f9a0/FrameBufferCubeMapFaceConfig/g"
    "s/UNK_18044f9c0/FrameBufferTextureLayerConfig/g"
    "s/UNK_18044f9e0/FrameBufferTextureLevelConfig/g"
    "s/UNK_18044faf0/FrameBufferMultisampleConfig/g"
    "s/UNK_18044fb20/FrameBufferResolveConfig/g"
)

# 执行替换
for replacement in "${replacements[@]}"; do
    echo "执行替换: $replacement"
    sed -i "$replacement" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
done

echo "批量替换完成！"