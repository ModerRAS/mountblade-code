#!/bin/bash

# UI系统变量名美化脚本
# 批量替换04_ui_system.c文件中的变量名为有意义的名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

echo "开始美化UI系统变量名..."

# 替换SIMD相关的变量名
sed -i 's/SimdResult4\._0_4_/SimdResultX/g' "$INPUT_FILE"
sed -i 's/SimdResult4\._4_4_/SimdResultY/g' "$INPUT_FILE"
sed -i 's/SimdResult4\._8_4_/SimdResultZ/g' "$INPUT_FILE"
sed -i 's/SimdResult4\._12_4_/SimdResultW/g' "$INPUT_FILE"
sed -i 's/SimdResult2\._0_4_/SimdSourceX/g' "$INPUT_FILE"
sed -i 's/SimdResult2\._4_4_/SimdSourceY/g' "$INPUT_FILE"
sed -i 's/SimdResult2\._8_4_/SimdSourceZ/g' "$INPUT_FILE"
sed -i 's/SimdResult2\._12_4_/SimdSourceW/g' "$INPUT_FILE"
sed -i 's/SimdResult1\._0_4_/SimdTempX/g' "$INPUT_FILE"
sed -i 's/SimdResult1\._4_4_/SimdTempY/g' "$INPUT_FILE"
sed -i 's/SimdResult1\._8_4_/SimdTempZ/g' "$INPUT_FILE"
sed -i 's/SimdResult1\._12_4_/SimdTempW/g' "$INPUT_FILE"

# 替换像素通道相关的变量名
sed -i 's/SimdResult1\._0_2_/RedChannelValue/g' "$INPUT_FILE"
sed -i 's/SimdResult1\._2_2_/GreenChannelValue/g' "$INPUT_FILE"
sed -i 's/SimdResult1\._4_2_/BlueChannelValue/g' "$INPUT_FILE"
sed -i 's/SimdResult1\._6_2_/AlphaChannelValue/g' "$INPUT_FILE"
sed -i 's/PixelDataBuffer\._0_4_/PixelData/g' "$INPUT_FILE"
sed -i 's/SourcePixelData\._0_4_/SourceRedChannel/g' "$INPUT_FILE"
sed -i 's/SourcePixelData\._4_4_/SourceGreenChannel/g' "$INPUT_FILE"
sed -i 's/SourcePixelData\._8_4_/SourceBlueChannel/g' "$INPUT_FILE"
sed -i 's/SourcePixelData\._12_4_/SourceAlphaChannel/g' "$INPUT_FILE"

# 替换栈变量名
sed -i 's/auStack_[0-9a-fA-F]*/LocalStackBuffer/g' "$INPUT_FILE"
sed -i 's/uStack_[0-9a-fA-F]*/LocalStackUInt/g' "$INPUT_FILE"
sed -i 's/uiStack_[0-9a-fA-F]*/LocalStackUI/g' "$INPUT_FILE"
sed -i 's/lStack_[0-9a-fA-F]*/LocalStackLong/g' "$INPUT_FILE"
sed -i 's/iStack_[0-9a-fA-F]*/LocalStackInt/g' "$INPUT_FILE"
sed -i 's/cStack_[0-9a-fA-F]*/LocalStackChar/g' "$INPUT_FILE"
sed -i 's/pcStack_[0-9a-fA-F]*/LocalStackPtrChar/g' "$INPUT_FILE"

# 替换临时变量名
sed -i 's/tempUInt[0-9]*/TempUInt/g' "$INPUT_FILE"
sed -i 's/tempPtr[0-9]*/TempPtr/g' "$INPUT_FILE"
sed -i 's/tempShort[0-9]*/TempShort/g' "$INPUT_FILE"
sed -i 's/ptempUInt[0-9]*/TempPointer/g' "$INPUT_FILE"
sed -i 's/sVar[0-9]*/TempShortVar/g' "$INPUT_FILE"

# 替换动画相关的变量名
sed -i 's/animationDataBuffer[0-9]*/AnimationDataBuffer/g' "$INPUT_FILE"
sed -i 's/animationFrameIndex[0-9]*/AnimationFrameIndex/g' "$INPUT_FILE"
sed -i 's/animationDataSize/AnimationDataSize/g' "$INPUT_FILE"

# 替换参数变量名
sed -i 's/parameter[0-9]*/Parameter/g' "$INPUT_FILE"
sed -i 's/parameterTwo/ParameterSecond/g' "$INPUT_FILE"
sed -i 's/parameterThree/ParameterThird/g' "$INPUT_FILE"
sed -i 's/parameterFour/ParameterFourth/g' "$INPUT_FILE"

# 替换系统相关的变量名
sed -i 's/UserInterfaceSystemFlags/UserInterfaceSystemFlags/g' "$INPUT_FILE"
sed -i 's/UIInterfaceMemoryBufferFlag/UIInterfaceMemoryBufferFlag/g' "$INPUT_FILE"
sed -i 's/UserInterfaceSystemRenderBufferA/UserInterfaceSystemRenderBufferA/g' "$INPUT_FILE"
sed -i 's/UIInitializationCompletedFlag/UIInitializationCompletedFlag/g' "$INPUT_FILE"

# 替换未知指针名
sed -i 's/UISystemUnknownDataPointer530/UISystemUnknownDataPointer530/g' "$INPUT_FILE"
sed -i 's/UISystemUnknownDataPointer580/UISystemUnknownDataPointer580/g' "$INPUT_FILE"
sed -i 's/UISystemUnknownDataPointer598/UISystemUnknownDataPointer598/g' "$INPUT_FILE"
sed -i 's/UISystemUnknownDataPointer5A8/UISystemUnknownDataPointer5A8/g' "$INPUT_FILE"
sed -i 's/UISystemUnknownDataPointer608/UISystemUnknownDataPointer608/g' "$INPUT_FILE"
sed -i 's/UISystemUnknownDataPointer2B0/UISystemUnknownDataPointer2B0/g' "$INPUT_FILE"
sed -i 's/UISystemUnknownDataPointer3E8/UISystemUnknownDataPointer3E8/g' "$INPUT_FILE"
sed -i 's/UISystemUnknownDataPointer308/UISystemUnknownDataPointer308/g' "$INPUT_FILE"
sed -i 's/UISystemUnknownDataPointer358/UISystemUnknownDataPointer358/g' "$INPUT_FILE"
sed -i 's/UISystemUnknownDataPointer610/UISystemUnknownDataPointer610/g' "$INPUT_FILE"
sed -i 's/UISystemUnknownDataPointer258/UISystemUnknownDataPointer258/g' "$INPUT_FILE"
sed -i 's/UISystemUnknownDataPointer650/UISystemUnknownDataPointer650/g' "$INPUT_FILE"
sed -i 's/UISystemUnknownDataPointer9B0/UISystemUnknownDataPointer9B0/g' "$INPUT_FILE"

echo "UI系统变量名美化完成"