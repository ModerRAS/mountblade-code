#!/bin/bash

# 美化函数 FUN_1803f8150 的变量名
# 这是一个系统数据处理和配置优化函数

sed -i 's/float ComparisonResult1;/float HorizontalComparisonResult;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/float ComparisonResult2;/float VerticalComparisonResult;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/float fVar3;/float DepthScalingFactor;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/float fVar4;/float PerspectiveScalingFactor;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/int ComparisonResult;/int IndexCounter;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/longlong StringOffset;/longlong ConfigurationTableOffset;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/float fVar7;/float InverseAspectRatio;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/undefined1 auStack_88 \[32\];/undefined1 StackProtectionArray [32];/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/SystemDataDword uStack_68;/SystemDataDword ProcessingFlagsRegister;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/SystemDataDword uStack_60;/SystemDataDword FinalBufferRegister;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/SystemQword uStack_58;/SystemQword MathConstantRegister1;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/SystemQword TertiaryEncodingType;/SystemQword EncodingConstantRegister;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/SystemQword uStack_40;/SystemQword MathConstantRegister2;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/SystemDataDword FunctionParameter2;/SystemDataDword PrecisionParameter;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/SystemDataDword DoublePrecisionValue1;/SystemDataDword RoundingParameter;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/ulonglong uStack_30;/ulonglong StackValidationValue;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

# 更新变量使用
sed -i 's/uStack_30 =/StackValidationValue =/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/ComparisonResult =/IndexCounter =/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/StringOffset =/ConfigurationTableOffset =/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/TertiaryEncodingType =/EncodingConstantRegister =/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/uStack_40 =/MathConstantRegister2 =/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/FunctionParameter2 =/PrecisionParameter =/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/DoublePrecisionValue1 =/RoundingParameter =/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/uStack_58 =/MathConstantRegister1 =/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/fVar7 =/InverseAspectRatio =/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/fVar2 =/VerticalComparisonResult =/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/fVar3 =/DepthScalingFactor =/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/uStack_60 =/FinalBufferRegister =/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/fVar4 =/PerspectiveScalingFactor =/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c
sed -i 's/uStack_68 =/ProcessingFlagsRegister =/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

echo "变量名美化完成"