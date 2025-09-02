#!/bin/bash

# 修复06_utilities.c文件中的重复变量名问题
# 主要是修复GetSystemRuntimeStatus函数中的重复变量名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 使用sed命令修复重复的变量名
sed -i 's/float CalculatedFloatValue;/float SystemRuntimeCalculatedValue;/' "$FILE_PATH"
sed -i 's/float UpperBoundFloatValue;/float SystemRuntimeUpperBoundValue;/' "$FILE_PATH"
sed -i 's/float LowerBoundFloatValue;/float SystemRuntimeLowerBoundValue;/' "$FILE_PATH"
sed -i 's/float InputFloatValue;/float SystemRuntimeInputValue;/' "$FILE_PATH"
sed -i 's/float ResultFloatValue;/float SystemRuntimeResultValue;/' "$FILE_PATH"

# 修复函数中的变量引用
sed -i 's/CalculatedFloatValue = \*(float \*)(ResourceContext + 0x10);/SystemRuntimeCalculatedValue = \*(float \*)(ResourceContext + 0x10);/' "$FILE_PATH"
sed -i 's/LowerBoundFloatValue = \*(float \*)(ResourceTablePointerPointer + ResourceFloatValue1Offset);/SystemRuntimeLowerBoundValue = \*(float \*)(ResourceTablePointerPointer + ResourceFloatValue1Offset);/' "$FILE_PATH"
sed -i 's/\*(float \*)(ResourceTablePointerPointer + ResourceFloatValue1Offset) <= InputParameterValue/\*(float \*)(ResourceTablePointerPointer + ResourceFloatValue1Offset) <= SystemRuntimeInputValue/' "$FILE_PATH"
sed -i 's/InputParameterValue <= \*(float \*)(ResourceTablePointerPointer + ResourceFloatValue2Offset))/SystemRuntimeInputValue <= \*(float \*)(ResourceTablePointerPointer + ResourceFloatValue2Offset))/' "$FILE_PATH"
sed -i 's/LowerBoundFloatValue = InputParameterValue;/SystemRuntimeLowerBoundValue = SystemRuntimeInputValue;/' "$FILE_PATH"
sed -i 's/\*(float \*)(ResourceContext + 0x10) = ResultFloatValue;/\*(float \*)(ResourceContext + 0x10) = SystemRuntimeResultValue;/' "$FILE_PATH"
sed -i 's/ValidationStatusCode = ValidateResourceParameters(SystemRegisterContext + ValidationContextHashOffset,ResourceContextSecondary,ResultFloatValue);/ValidationStatusCode = ValidateResourceParameters(SystemRegisterContext + ValidationContextHashOffset,ResourceContextSecondary,SystemRuntimeResultValue);/' "$FILE_PATH"

echo "变量名修复完成"