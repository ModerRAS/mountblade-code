#!/bin/bash

# 批量重命名UI系统中的UNK_变量
# 使用sed命令进行批量替换

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# UI系统渲染相关的UNK_变量重命名映射
sed -i 's/UNK_18094da20/UISystemRenderBufferPointer/g' 04_ui_system.c
sed -i 's/UNK_18094db40/UISystemRenderTextureHandle/g' 04_ui_system.c
sed -i 's/UNK_18094db90/UISystemRenderShaderProgram/g' 04_ui_system.c
sed -i 's/UNK_18094dba0/UISystemRenderVertexPointer/g' 04_ui_system.c
sed -i 's/UNK_18094d8b8/UISystemRenderIndexPointer/g' 04_ui_system.c
sed -i 's/UNK_18094d9d0/UISystemRenderUniformBuffer/g' 04_ui_system.c
sed -i 's/UNK_18094dd88/UISystemRenderFrameBuffer/g' 04_ui_system.c
sed -i 's/UNK_18094dee0/UISystemRenderDepthBuffer/g' 04_ui_system.c
sed -i 's/UNK_18094df30/UISystemRenderStencilBuffer/g' 04_ui_system.c
sed -i 's/UNK_18094df50/UISystemRenderColorBuffer/g' 04_ui_system.c
sed -i 's/UNK_18094dbe8/UISystemRenderViewportWidth/g' 04_ui_system.c
sed -i 's/UNK_18094dd38/UISystemRenderViewportHeight/g' 04_ui_system.c
sed -i 's/UNK_18094e138/UISystemRenderProjectionMatrix/g' 04_ui_system.c
sed -i 's/UNK_18094e280/UISystemRenderModelMatrix/g' 04_ui_system.c
sed -i 's/UNK_18094e2d0/UISystemRenderViewMatrix/g' 04_ui_system.c
sed -i 's/UNK_18094e2f0/UISystemRenderTransformMatrix/g' 04_ui_system.c
sed -i 's/UNK_18094dfa8/UISystemRenderNormalMatrix/g' 04_ui_system.c
sed -i 's/UNK_18094e0e8/UISystemRenderClipPlane/g' 04_ui_system.c
sed -i 's/UNK_1806f0f60/UISystemRenderLightPosition/g' 04_ui_system.c
sed -i 's/UNK_1806f1a70/UISystemRenderLightColor/g' 04_ui_system.c
sed -i 's/UNK_18094e3c0/UISystemRenderAmbientLight/g' 04_ui_system.c
sed -i 's/UNK_18094e3d0/UISystemRenderDiffuseLight/g' 04_ui_system.c
sed -i 's/UNK_18094e3e0/UISystemRenderSpecularLight/g' 04_ui_system.c
sed -i 's/UNK_18094e3e8/UISystemRenderShininess/g' 04_ui_system.c
sed -i 's/UNK_18094e3f8/UISystemRenderOpacity/g' 04_ui_system.c
sed -i 's/UNK_18094e408/UISystemRenderBlendMode/g' 04_ui_system.c
sed -i 's/UNK_18094e480/UISystemRenderDepthTest/g' 04_ui_system.c

echo "UI系统UNK_变量重命名完成"