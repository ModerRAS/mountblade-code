#!/bin/bash

# 脚本：更新ProcessSystemMathCalculationAndStateManagement函数中的变量引用
# 文件路径：/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c

echo "开始更新ProcessSystemMathCalculationAndStateManagement函数中的变量引用..."

# 备份原文件
cp "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c" "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c.backup"

# 使用sed进行精确替换
sed -i '
# 替换函数调用
s/func_0x0001801c0ee0();/InitializeSystemContextEx();/g
s/FUN_1801c0df0();/CleanupSystemContextEx();/g
s/FUN_1801be620(fVar6,/ConfigureSystemParametersEx(NormalizedValue,/g

# 替换变量引用
s/MemoryAllocationResult = logf/LogarithmResult = logf/g
s/fVar6 = extraout_XMM0_Da/NormalizedValue = FloatResult1/g
s/aProcessingFlags\._4_4_ = extraout_XMM0_Db/ProcessingVector._4_4_ = FloatComponent1/g
s/aProcessingFlags\._0_4_ = fVar6/ProcessingVector._0_4_ = NormalizedValue/g
s/StatusResult = (int)fVar6/StatusResult = (int)NormalizedValue/g
s/fVar7 = fVar6/AdjustedValue = NormalizedValue/g
s/aProcessingFlags\._8_4_ = extraout_XMM0_Db/ProcessingVector._8_4_ = FloatComponent1/g
s/aProcessingFlags\._12_4_ = extraout_XMM0_Db/ProcessingVector._12_4_ = FloatComponent1/g
s/aUnsignedVar8\._8_8_ = aProcessingFlags\._8_8_/ResultVector._8_8_ = ProcessingVector._8_8_/g
s/aUnsignedVar8\._4_4_ = fVar6/ResultVector._4_4_ = NormalizedValue/g
s/aUnsignedVar8\._0_4_ = fVar6/ResultVector._0_4_ = NormalizedValue/g
s/SecondCharacterCode = movmskps(MemoryAllocationResult,aUnsignedVar8)/BitMaskResult = movmskps(LogarithmResult,ResultVector)/g
s/fVar7 = (float)(int)(StatusResult + (SecondCharacterCode & 1 ^ 1))/AdjustedValue = (float)(int)(StatusResult + (BitMaskResult & 1 ^ 1))/g
s/if (fVar6 <= 0\.0)/if (NormalizedValue <= 0.0)/g
s/fVar7 = fVar7 - 1e-08/AdjustedValue = AdjustedValue - 1e-08/g
s/fVar7 = fVar7 + 1e-08/AdjustedValue = AdjustedValue + 1e-08/g
s/ActiveCount = (int)fVar7/ActiveCount = (int)AdjustedValue/g
s/fVar6 = extraout_XMM0_Da_00/NormalizedValue = FloatResult2/g
s/aDataValue11\._4_4_ = extraout_XMM0_Db_00/DataVector._4_4_ = FloatComponent2/g
s/aDataValue11\._0_4_ = fVar6/DataVector._0_4_ = NormalizedValue/g
s/aDataValue11\._8_4_ = extraout_XMM0_Db_00/DataVector._8_4_ = FloatComponent2/g
s/aDataValue11\._12_4_ = extraout_XMM0_Db_00/DataVector._12_4_ = FloatComponent2/g
s/aMemoryAllocationResult0\._8_8_ = aDataValue11\._8_8_/CalculationVector._8_8_ = DataVector._8_8_/g
s/aMemoryAllocationResult0\._4_4_ = fVar6/CalculationVector._4_4_ = NormalizedValue/g
s/aMemoryAllocationResult0\._0_4_ = fVar6/CalculationVector._0_4_ = NormalizedValue/g
s/SecondCharacterCode = movmskps(MemoryAllocationResult,aMemoryAllocationResult0)/BitMaskResult = movmskps(LogarithmResult,CalculationVector)/g
s/ProcessingFlag = (int)fVar7/ProcessingFlag = (int)AdjustedValue/g
s/\*(undefined8 \*)(unaff_RBX + 0x30) = OutputBuffer/\*(undefined8 \*)(SystemContextPointer + 0x30) = OutputBuffer/g
s/\*(undefined1 \*)(unaff_RBX + 0x39) = 1/\*(undefined1 \*)(SystemContextPointer + 0x39) = 1/g
s/fStack0000000000000070/StackFloat3/g
s/fStack0000000000000068/StackFloat1/g
s/fStack0000000000000074/StackFloat4/g
s/fStack000000000000006c/StackFloat2/g
' "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

echo "变量引用更新完成！"
echo "请检查文件以确认更改是否正确。"