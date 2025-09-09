#!/bin/bash

# UI系统文件变量名美化脚本
# 处理04_ui_system.c文件中剩余的Ghidra自动生成的变量名

INPUT_FILE="TaleWorlds.Native/src/04_ui_system.c"
TEMP_FILE="/tmp/ui_system_beautified.c"

echo "开始美化UI系统文件..."

# 备份原始文件
cp "$INPUT_FILE" "$INPUT_FILE.backup_$(date +%Y%m%d_%H%M%S)"

# 复制文件进行处理
cp "$INPUT_FILE" "$TEMP_FILE"

# 美化函数中的局部变量
echo "美化局部变量..."
sed -i 's/processingResult/UIProcessingResult/g' "$TEMP_FILE"
sed -i 's/shortCalculationResult/UIShortCalculationResult/g' "$TEMP_FILE"
sed -i 's/contextHandle/UIContextHandle/g' "$TEMP_FILE"
sed -i 's/bufferPointer/UIBufferPointer/g' "$TEMP_FILE"
sed -i 's/registerValue/UIRegisterValue/g' "$TEMP_FILE"
sed -i 's/preservedRegister15D/UIPreservedRegister15D/g' "$TEMP_FILE"
sed -i 's/stackParameter50/UIStackParameter50/g' "$TEMP_FILE"

# 美化UI处理相关的变量
echo "美化UI处理变量..."
sed -i 's/bufferSize/UIBufferSize/g' "$TEMP_FILE"
sed -i 's/uiCompareResult/UICompareResult/g' "$TEMP_FILE"
sed -i 's/ProcessingStatus/UIProcessingStatus/g' "$TEMP_FILE"
sed -i 's/eventDataIndex/UIEventDataIndex/g' "$TEMP_FILE"
sed -i 's/contextDataHandle/UIContextDataHandle/g' "$TEMP_FILE"
sed -i 's/pResultFloatValue/UIPtrResultFloatValue/g' "$TEMP_FILE"
sed -i 's/eventProcessingCounter/UIEventProcessingCounter/g' "$TEMP_FILE"
sed -i 's/eventStatus/UIEventStatus/g' "$TEMP_FILE"
sed -i 's/BaseValuePointer0/UIPtrBaseValue0/g' "$TEMP_FILE"
sed -i 's/ProcessingResult1/UIProcessingResult1/g' "$TEMP_FILE"
sed -i 's/SourceHandle/UISourceHandle/g' "$TEMP_FILE"
sed -i 's/renderDataPointer/UIPtrRenderData/g' "$TEMP_FILE"
sed -i 's/contextValue/UIContextValue/g' "$TEMP_FILE"
sed -i 's/componentIndex/UIComponentIndex/g' "$TEMP_FILE"
sed -i 's/CounterResult/UICounterResult/g' "$TEMP_FILE"
sed -i 's/baseValue6/UIBaseValue6/g' "$TEMP_FILE"
sed -i 's/result7/UIResult7/g' "$TEMP_FILE"
sed -i 's/FloatValue2/UIFloatValue2/g' "$TEMP_FILE"
sed -i 's/AccumulatedFloat/UIAccumulatedFloat/g' "$TEMP_FILE"
sed -i 's/transformCoeff11/UITransformCoeff11/g' "$TEMP_FILE"
sed -i 's/iterationCount2/UIIterationCount2/g' "$TEMP_FILE"
sed -i 's/stackUInt32_68/UIStackUInt32_68/g' "$TEMP_FILE"

# 美化数组变量
echo "美化数组变量..."
sed -i 's/aresult8/UIResultArray8/g' "$TEMP_FILE"
sed -i 's/extraout_XMM0_Qb_00/UIExtraOutXMM0_Qb_00/g' "$TEMP_FILE"
sed -i 's/extraout_XMM0_Qb_01/UIExtraOutXMM0_Qb_01/g' "$TEMP_FILE"
sed -i 's/extraout_XMM0_Qb/UIExtraOutXMM0_Qb/g' "$TEMP_FILE"

# 美化XMM寄存器变量
echo "美化XMM寄存器变量..."
sed -i 's/extraout_XMM0_Da/UIXMM0Data/g' "$TEMP_FILE"
sed -i 's/extraout_XMM0_Da_00/UIXMM0Data00/g' "$TEMP_FILE"

# 美化SIMD向量变量
echo "美化SIMD向量变量..."
sed -i 's/BlendFactorVector/UIBlendFactorVector/g' "$TEMP_FILE"
sed -i 's/XmmRegister1/UIXmmRegister1/g' "$TEMP_FILE"
sed -i 's/SourceVector1/UISourceVector1/g' "$TEMP_FILE"
sed -i 's/XmmRegister2/UIXmmRegister2/g' "$TEMP_FILE"
sed -i 's/SourceVector2/UISourceVector2/g' "$TEMP_FILE"
sed -i 's/BlendedVector1/UIBlendedVector1/g' "$TEMP_FILE"
sed -i 's/BlendedVector2/UIBlendedVector2/g' "$TEMP_FILE"
sed -i 's/BlendedVector3/UIBlendedVector3/g' "$TEMP_FILE"
sed -i 's/BlendedVector4/UIBlendedVector4/g' "$TEMP_FILE"
sed -i 's/BlendedVector5/UIBlendedVector5/g' "$TEMP_FILE"
sed -i 's/BlendedVector6/UIBlendedVector6/g' "$TEMP_FILE"
sed -i 's/BlendedVector7/UIBlendedVector7/g' "$TEMP_FILE"
sed -i 's/BlendedVector8/UIBlendedVector8/g' "$TEMP_FILE"
sed -i 's/ShiftVector/UIShiftVector/g' "$TEMP_FILE"

# 美化颜色处理变量
echo "美化颜色处理变量..."
sed -i 's/BlendResult/UIBlendResult/g' "$TEMP_FILE"
sed -i 's/ColorBlendVector/UIColorBlendVector/g' "$TEMP_FILE"
sed -i 's/RedChannelValue/UIRedChannelValue/g' "$TEMP_FILE"
sed -i 's/GreenChannelValue/UIGreenChannelValue/g' "$TEMP_FILE"
sed -i 's/BlueChannelValue/UIBlueChannelValue/g' "$TEMP_FILE"
sed -i 's/AlphaChannelValue/UIAlphaChannelValue/g' "$TEMP_FILE"
sed -i 's/secondaryRedChannelValue/UISecondaryRedChannelValue/g' "$TEMP_FILE"
sed -i 's/secondaryGreenChannelValue/UISecondaryGreenChannelValue/g' "$TEMP_FILE"
sed -i 's/secondaryBlueChannelValue/UISecondaryBlueChannelValue/g' "$TEMP_FILE"
sed -i 's/secondaryAlphaChannelValue/UISecondaryAlphaChannelValue/g' "$TEMP_FILE"

# 美化循环变量
echo "美化循环变量..."
sed -i 's/loopCounter/UILoopCounter/g' "$TEMP_FILE"
sed -i 's/stringCompareIndex/UIStringCompareIndex/g' "$TEMP_FILE"
sed -i 's/maxProcessingCount/UIMaxProcessingCount/g' "$TEMP_FILE"
sed -i 's/ptrResult/UIPtrResult/g' "$TEMP_FILE"
sed -i 's/ptrLocal9/UIPtrLocal9/g' "$TEMP_FILE"
sed -i 's/piterationCounter/UIPtrIterationCounter/g' "$TEMP_FILE"
sed -i 's/contextOffset/UIContextOffset/g' "$TEMP_FILE"

# 美化栈变量
echo "美化栈变量..."
sed -i 's/stackUInt18/UIStackUInt18/g' "$TEMP_FILE"
sed -i 's/astackLong138/UIStackLong138/g' "$TEMP_FILE"
sed -i 's/apstackUInt128/UIStackPtrArray128/g' "$TEMP_FILE"
sed -i 's/uiValidationResult/UIValidationResult/g' "$TEMP_FILE"
sed -i 's/astackUInt168/UIStackUInt168/g' "$TEMP_FILE"
sed -i 's/pstackUInt178/UIPtrStackUInt178/g' "$TEMP_FILE"
sed -i 's/pstackUInt180/UIPtrStackUInt180/g' "$TEMP_FILE"
sed -i 's/astackUInt1a8/UIStackUInt1A8/g' "$TEMP_FILE"
sed -i 's/astackUInt158/UIStackUInt158/g' "$TEMP_FILE"

# 美化数据源和目标变量
echo "美化数据源和目标变量..."
sed -i 's/dataSource/UIDataSource/g' "$TEMP_FILE"
sed -i 's/targetBuffer/UITargetBuffer/g' "$TEMP_FILE"
sed -i 's/resultPointer/UIResultPointer/g' "$TEMP_FILE"

# 美化像素处理变量
echo "美化像素处理变量..."
sed -i 's/PixelValue/UIPixelValue/g' "$TEMP_FILE"
sed -i 's/uiRenderDataSize/UIRenderDataSize/g' "$TEMP_FILE"
sed -i 's/blendFactorVector/UIBlendFactorVector/g' "$TEMP_FILE"
sed -i 's/blendResultVector/UIBlendResultVector/g' "$TEMP_FILE"
sed -i 's/secondaryColorChannel/UISecondaryColorChannel/g' "$TEMP_FILE"
sed -i 's/primaryColorChannel/UIPrimaryColorChannel/g' "$TEMP_FILE"
sed -i 's/colorShiftAmount/UIColorShiftAmount/g' "$TEMP_FILE"
sed -i 's/blendTargetMemory/UIBlendTargetMemory/g' "$TEMP_FILE"
sed -i 's/blendOffset/UIBlendOffset/g' "$TEMP_FILE"

# 替换原始文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "UI系统文件美化完成！"
echo "美化后的文件已保存到: $INPUT_FILE"
echo "备份文件已保存到: $INPUT_FILE.backup_$(date +%Y%m%d_%H%M%S)"