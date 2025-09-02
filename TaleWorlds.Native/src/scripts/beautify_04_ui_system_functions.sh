#!/bin/bash

# 美化04_ui_system.c文件中的FUN_函数名
# 这个脚本将逆向工程生成的函数名替换为语义化的名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 定义函数名替换映射
# 基于函数的功能和上下文来命名

# 处理UI系统相关的函数
sed -e 's/FUN_18065f210/UITerminateSystem/g' \
    -e 's/FUN_18066d310/UIDeinitializeSystem/g' \
    -e 's/FUN_18066d130/UIProcessEvent/g' \
    -e 's/FUN_18066d210/UIProcessEventData/g' \
    -e 's/FUN_18066eea0/UIGetEventData/g' \
    -e 's/FUN_18066d370/UISetEventParameter/g' \
    -e 's/FUN_18066e500/UIProcessEventQueue/g' \
    -e 's/FUN_18066f080/UIAcquireResource/g' \
    -e 's/FUN_18066ef60/UICreateRenderContext/g' \
    -e 's/FUN_18066efd0/UICalculateElementSize/g' \
    -e 's/FUN_18066e7a0/UIDestroyResource/g' \
    -e 's/FUN_180697e60/UICreateRenderBuffer/g' \
    -e 's/FUN_18066e8f0/UIAllocateMemory/g' \
    -e 's/FUN_180697ed0/UIFreeResource/g' \
    -e 's/FUN_18069c540/UICopyRenderData/g' \
    -e 's/FUN_18066e960/UICreateMemoryPool/g' \
    -e 's/FUN_180671080/UIInitializeSystem/g' \
    -e 's/FUN_180698e20/UIConfigureRenderContext/g' \
    -e 's/FUN_18066e9b0/UIGetCurrentSemaphore/g' \
    -e 's/FUN_18069a490/UIGetSystemStatus/g' \
    -e 's/FUN_18069c080/UISetRenderParameters/g' \
    -e 's/FUN_18069d280/UIDrawElement/g' \
    -e 's/FUN_18069c200/UISetTransformParameters/g' \
    -e 's/FUN_18069de90/UIEndRenderPass/g' \
    -e 's/FUN_18069c820/UISetShaderParameters/g' \
    -e 's/FUN_18069c710/UISetVertexBuffer/g' \
    -e 's/FUN_18069cf80/UIGetRenderStatistics/g' \
    -e 's/FUN_18066f3e0/UIProcessRenderCommand/g' \
    -e 's/FUN_18069cb40/UIDrawRectangle/g' \
    -e 's/FUN_18069ca00/UIDrawCircle/g' \
    -e 's/FUN_18069cad0/UIDrawTriangle/g' \
    -e 's/FUN_18069c900/UIDrawLine/g' \
    -e 's/FUN_18069ca80/UIDrawText/g' \
    -e 's/FUN_18069c990/UIDrawImage/g' \
    -e 's/FUN_18069def0/UICleanupSystemResources/g' \
    -e 's/FUN_18069dfe0/UIProcessAnimation/g' \
    -e 's/FUN_18069e620/UIUpdateTexture/g' \
    -e 's/FUN_18069e6e0/UILoadResource/g' \
    -e 's/FUN_18069e7c0/UIProcessInput/g' \
    -e 's/FUN_18069ef30/UIHandleEvent/g' \
    -e 's/FUN_18069f770/UISendMessage/g' \
    -e 's/FUN_180700e20/UIUpdateLayout/g' \
    -e 's/FUN_180701270/UIValidateLayout/g' \
    -e 's/FUN_180701330/UICalculateLayout/g' \
    -e 's/FUN_180701920/UIApplyConstraints/g' \
    -e 's/FUN_180703200/UIBeginFrame/g' \
    -e 's/FUN_180703510/UIRenderFrame/g' \
    -e 's/FUN_180703a80/UISetRenderTarget/g' \
    -e 's/FUN_1807042f0/UIDrawPrimitive/g' \
    -e 's/FUN_1807048a0/UIProcessPrimitives/g' \
    -e 's/FUN_180704a20/UISetPrimitiveData/g' \
    -e 's/FUN_180705180/UIAllocateVertexBuffer/g' \
    -e 's/FUN_1807054a0/UIUpdateVertexData/g' \
    -e 's/FUN_1807056b0/UISetVertexAttribute/g' \
    -e 's/FUN_1807056f0/UISetVertexFormat/g' \
    -e 's/FUN_180705870/UIUpdateIndexBuffer/g' \
    -e 's/FUN_180705980/UISetUniformData/g' \
    -e 's/FUN_1807069e0/UIFlushRenderQueue/g' \
    -e 's/FUN_180706b30/UIProcessRenderQueue/g' \
    -e 's/FUN_180707200/UISetShaderParameter/g' \
    -e 's/FUN_1807072c0/UISetMatrixParameter/g' \
    -e 's/FUN_18070737d/UISetVectorParameter/g' \
    -e 's/FUN_180707457/UISetColorParameter/g' \
    -e 's/FUN_1807074b0/UISetTextureParameter/g' \
    -e 's/FUN_1807075c0/UIBindShader/g' \
    -e 's/FUN_180707950/UIDrawMesh/g' \
    -e 's/FUN_180707a74/UIEndFrame/g' \
    -e 's/FUN_180707df0/UIPresentFrame/g' \
    -e 's/FUN_18070b660/UILockResource/g' \
    -e 's/FUN_18070b6a0/UIUnlockResource/g' \
    -e 's/FUN_18070ba50/UIMapResource/g' \
    -e 's/FUN_18070ce70/UIUpdateResource/g' \
    -e 's/FUN_18070ee30/UIProcessTextures/g' \
    -e 's/FUN_18070fc20/UIUpdateFontCache/g' \
    -e 's/FUN_180710510/UIProcessTextLayout/g' \
    -e 's/FUN_180711020/UIDrawTextPrimitive/g' \
    -e 's/FUN_180711351/UIDrawTextLine/g' \
    -e 's/FUN_180711576/UIDrawTextBlock/g' \
    -e 's/FUN_180711674/UIMeasureText/g' \
    -e 's/FUN_180711810/UIProcessText/g' \
    -e 's/FUN_180712340/UIUpdateAnimation/g' \
    -e 's/FUN_1807123a8/UIInterpolateValue/g' \
    -e 's/FUN_1807123c2/UIInterpolateColor/g' \
    -e 's/FUN_180712526/UIInterpolateVector/g' \
    -e 's/FUN_180712541/UIUpdateTransform/g' \
    -e 's/FUN_180712943/UIInterpolateTransform/g' \
    -e 's/FUN_180712b50/UIProcessAnimationQueue/g' \
    -e 's/FUN_180712bf0/UIBeginAnimation/g' \
    -e 's/FUN_180712c50/UISetAnimationParameter/g' \
    -e 's/FUN_180712e3f/UIUpdateAnimationFrame/g' \
    -e 's/FUN_180712f20/UIDrawAnimation/g' \
    -e 's/FUN_180712f5f/UIEndAnimation/g' \
    -e 's/FUN_180713020/UIProcessAnimationData/g' \
    -e 's/FUN_180713126/UIUpdateTextAnimation/g' \
    -e 's/FUN_180713394/UIProcessTextAnimation/g' \
    -e 's/FUN_180713470/UIUpdateFontAnimation/g' \
    -e 's/FUN_180713890/UIProcessFontCache/g' \
    -e 's/FUN_180713c60/UIUpdateFontMetrics/g' \
    -e 's/FUN_1807141f0/UIProcessFontData/g' \
    -e 's/FUN_1807152b0/UIRenderText/g' \
    -e 's/FUN_1807152e3/UIDrawTexturedText/g' \
    -e 's/FUN_180715720/UIProcessTextRendering/g' \
    -e 's/FUN_180715830/UIDrawTextShadow/g' \
    -e 's/FUN_1807160c0/UIProcessTextEffects/g' \
    -e 's/FUN_1807163d0/UISetTextParameters/g' \
    -e 's/FUN_1807165a0/UIUpdateTextLayout/g' \
    -e 's/FUN_1807165be/UITextLayoutUpdate/g' \
    -e 's/FUN_180716890/UIProcessTextLayout/g' \
    -e 's/FUN_180716aa0/UIValidateTextLayout/g' \
    -e 's/FUN_180716da0/UIProcessTextConstraints/g' \
    -e 's/FUN_180716f10/UIDrawTextPrimitive/g' \
    -e 's/FUN_180719789/UIProcessFont/g' \
    -e 's/FUN_1807197a0/UILoadFont/g' \
    -e 's/FUN_18071985a/UIMeasureFont/g' \
    -e 's/FUN_18071991e/UIProcessFontMetrics/g' \
    "$FILE_PATH" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$FILE_PATH"

echo "函数名替换完成"