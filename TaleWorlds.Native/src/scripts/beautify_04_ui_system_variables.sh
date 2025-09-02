#!/bin/bash

# 美化04_ui_system.c文件中的变量名
# 替换十六进制变量名为语义化名称

# 确保在正确的目录中
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 04_ui_system.c 04_ui_system.c.backup

# 替换带有十六进制数字的变量名
sed -i 's/UISystemDataTable8c0/UISystemWidgetPropertyTable/g' 04_ui_system.c
sed -i 's/UISystemDataTable8a8/UISystemEventDataTable/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable050/UISystemInputBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable110/UISystemRenderBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable2A0/UISystemTextureBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable300/UISystemShaderBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable3B0/UISystemVertexBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable430/UISystemIndexBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable540/UISystemUniformBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable5C0/UISystemFrameBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable6C0/UISystemStencilBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable880/UISystemDepthBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTableD80/UISystemColorBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTableDE0/UISystemAlphaBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTableE90/UISystemNormalBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTableFA0/UISystemPositionBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable9D0/UISystemTangentBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable080/UISystemUVBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable440/UISystemBoneBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable7B0/UISystemAnimationBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTableBC0/UISystemLightBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable190/UISystemShadowBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable5D0/UISystemReflectionBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable945/UISystemFogBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTableB22/UISystemWeatherBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTableF34/UISystemTimeBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTableFF0/UISystemCameraBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable630/UISystemProjectionBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTableBC6/UISystemViewBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTableEB4/UISystemWorldBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable470/UISystemModelBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable4E0/UISystemInstanceBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable550/UISystemMaterialBufferOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable5E0/UISystemTextureOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable670/UISystemSamplerOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable6E0/UISystemConstantOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable750/UISystemAttributeOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable7C0/UISystemVaryingOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable850/UISystemUniformOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable8E0/UISystemVertexOffset/g' 04_ui_system.c
sed -i 's/UISystemMemoryOffsetTable120/UISystemFragmentOffset/g' 04_ui_system.c

echo "变量名美化完成"