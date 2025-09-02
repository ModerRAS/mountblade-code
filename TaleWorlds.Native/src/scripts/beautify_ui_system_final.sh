#!/bin/bash

# 美化04_ui_system.c文件中的变量名
# 处理剩余的十六进制变量名

# 确保在正确的目录中
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换剩余的变量名
sed -i 's/void\* UISystemMemoryOffsetTableD80;/void* UISystemColorBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTableDE0;/void* UISystemAlphaBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTableE90;/void* UISystemNormalBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTableFA0;/void* UISystemPositionBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTable9D0;/void* UISystemTangentBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTable080;/void* UISystemUVBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTable440;/void* UISystemBoneBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTable7B0;/void* UISystemAnimationBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTableBC0;/void* UISystemLightBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTable190;/void* UISystemShadowBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTable5D0;/void* UISystemReflectionBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTable945;/void* UISystemFogBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTableB22;/void* UISystemWeatherBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTableDCF;/void* UISystemGeometryBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTableF34;/void* UISystemTimeBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTableFF0;/void* UISystemCameraBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTable630;/void* UISystemProjectionBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTableBC6;/void* UISystemViewBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTableEB4;/void* UISystemWorldBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTable470;/void* UISystemModelBufferOffset;/g' 04_ui_system.c
sed -i 's/void\* UISystemMemoryOffsetTable4E0;/void* UISystemInstanceBufferOffset;/g' 04_ui_system.c

echo "变量名美化完成"