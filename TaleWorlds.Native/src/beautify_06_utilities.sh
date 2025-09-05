#!/bin/bash

# 美化06_utilities.c文件中的变量名
# 系统性变量名替换脚本

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 备份原文件
cp "$FILE" "$FILE.backup"

echo "开始系统性美化变量名..."

# 1. 替换 registerR14 -> systemContext
sed -i 's/registerR14/systemContext/g' "$FILE"

# 2. 替换 extraout_XMM0_Da 变量
sed -i 's/extraout_XMM0_Da/floatResultA/g' "$FILE"
sed -i 's/extraout_XMM0_Da_00/floatResultB/g' "$FILE"
sed -i 's/extraout_XMM0_Da_01/floatResultC/g' "$FILE"
sed -i 's/extraout_XMM0_Da_02/floatResultD/g' "$FILE"
sed -i 's/extraout_XMM0_Da_03/floatResultE/g' "$FILE"
sed -i 's/extraout_XMM0_Da_04/floatResultF/g' "$FILE"
sed -i 's/extraout_XMM0_Da_05/floatResultG/g' "$FILE"

# 3. 替换栈变量
sed -i 's/aiStackX_8/stackIntBuffer/g' "$FILE"
sed -i 's/auStackX_10/stackUIntBuffer/g' "$FILE"
sed -i 's/auStackX_20/stackByteBuffer/g' "$FILE"

# 4. 替换 LAB 标签为有意义的名称
# 根据文件末尾的宏定义，我们可以使用这些有意义的名称
sed -i 's/LAB_1808963ec/ProcessCheckpointSecurityCheck/g' "$FILE"
sed -i 's/LAB_1808962af/ProcessCheckpointDataFlow/g' "$FILE"
sed -i 's/LAB_18089638e/ProcessCheckpointParameterValidation/g' "$FILE"
sed -i 's/LAB_180896ce3/ProcessCheckpointSystemCleanup/g' "$FILE"
sed -i 's/LAB_1808974ec/ProcessCheckpointSizeValidation/g' "$FILE"
sed -i 's/LAB_180897ce8/ProcessCheckpointResourceValidation/g' "$FILE"
sed -i 's/LAB_18089866f/ProcessCheckpointBufferValidation/g' "$FILE"
sed -i 's/LAB_1808985be/ProcessCheckpointDataProcessing/g' "$FILE"
sed -i 's/LAB_180898629/ProcessCheckpointOperationResult/g' "$FILE"
sed -i 's/LAB_1808989b1/ProcessCheckpointStringValidation/g' "$FILE"
sed -i 's/LAB_1808989f7/ProcessCheckpointExceptionHandling/g' "$FILE"
sed -i 's/LAB_180898e0b/ProcessCheckpointMemoryAllocation/g' "$FILE"
sed -i 's/LAB_1808992a5/ProcessCheckpointDataValidation/g' "$FILE"
sed -i 's/LAB_180899456/ProcessCheckpointBufferAllocation/g' "$FILE"
sed -i 's/LAB_180899546/ProcessCheckpointDataProcessingLoop/g' "$FILE"
sed -i 's/LAB_18089962f/ProcessCheckpointErrorHandling/g' "$FILE"
sed -i 's/LAB_18089ae18/ProcessCheckpointValidationStart/g' "$FILE"
sed -i 's/LAB_18089af81/ProcessCheckpointContextValidation/g' "$FILE"
sed -i 's/LAB_18089b1ab/ProcessCheckpointDataSizeCheck/g' "$FILE"
sed -i 's/LAB_18089b22a/ProcessCheckpointRegisterValidation/g' "$FILE"
sed -i 's/LAB_18089b226/ProcessCheckpointRegisterCleanup/g' "$FILE"
sed -i 's/LAB_1808a2e6d/ProcessCheckpointDataFlowControl/g' "$FILE"
sed -i 's/LAB_18089b91c/ProcessCheckpointStackValidation/g' "$FILE"
sed -i 's/LAB_18089bbcc/ProcessCheckpointErrorRecovery/g' "$FILE"
sed -i 's/LAB_18089bfc7/ProcessCheckpointOperationCheck/g' "$FILE"
sed -i 's/LAB_18089c131/ProcessCheckpointAddressValidation/g' "$FILE"
sed -i 's/LAB_18089c300/ProcessCheckpointCalculationResult/g' "$FILE"
sed -i 's/LAB_18089c40a/ProcessCheckpointStatusValidation/g' "$FILE"
sed -i 's/LAB_18089c586/ProcessCheckpointParameterRangeCheck/g' "$FILE"
sed -i 's/LAB_18089c78f/ProcessCheckpointSystemStateUpdate/g' "$FILE"
sed -i 's/LAB_18089c743/ProcessCheckpointBufferSizeCheck/g' "$FILE"
sed -i 's/LAB_18089c808/ProcessCheckpointOperationFlow/g' "$FILE"
sed -i 's/LAB_18089c878/ProcessCheckpointDataTransfer/g' "$FILE"
sed -i 's/LAB_18089c9ee/ProcessCheckpointValidationComplete/g' "$FILE"
sed -i 's/LAB_18089c9a8/ProcessCheckpointValidationContext/g' "$FILE"
sed -i 's/LAB_18089ca9c/ProcessCheckpointValidationRetry/g' "$FILE"
sed -i 's/LAB_18089cad8/ProcessCheckpointValidationError/g' "$FILE"
sed -i 's/LAB_18089cbf6/ProcessCheckpointDataProcessingComplete/g' "$FILE"
sed -i 's/LAB_18089cd46/ProcessCheckpointValidationContext2/g' "$FILE"
sed -i 's/LAB_18089cd76/ProcessCheckpointValidationState/g' "$FILE"
sed -i 's/LAB_18089cef2/ProcessCheckpointValidationCleanup/g' "$FILE"
sed -i 's/LAB_18089cf93/ProcessCheckpointValidationStateUpdate/g' "$FILE"
sed -i 's/LAB_18089d034/ProcessCheckpointValidationComplete2/g' "$FILE"
sed -i 's/LAB_18089d06e/ProcessCheckpointValidationError2/g' "$FILE"
sed -i 's/LAB_18089d07f/ProcessCheckpointValidationExit/g' "$FILE"
sed -i 's/LAB_18089d455/ProcessCheckpointValidationData/g' "$FILE"
sed -i 's/LAB_18089d378/ProcessCheckpointValidationError3/g' "$FILE"
sed -i 's/LAB_18089d435/ProcessCheckpointValidationStateUpdate2/g' "$FILE"
sed -i 's/LAB_18089e447/ProcessCheckpointValidationComplete3/g' "$FILE"
sed -i 's/LAB_18089e70b/ProcessCheckpointValidationError4/g' "$FILE"
sed -i 's/LAB_18089ea0f/ProcessCheckpointValidationStart2/g' "$FILE"
sed -i 's/LAB_18089eaae/ProcessCheckpointValidationError5/g' "$FILE"
sed -i 's/LAB_18089ea93/ProcessCheckpointValidationState2/g' "$FILE"
sed -i 's/LAB_18089eb22/ProcessCheckpointValidationData2/g' "$FILE"
sed -i 's/LAB_18089eb3c/ProcessCheckpointValidationError6/g' "$FILE"
sed -i 's/LAB_18089ebaa/ProcessCheckpointValidationState3/g' "$FILE"
sed -i 's/LAB_18089ebc4/ProcessCheckpointValidationError7/g' "$FILE"
sed -i 's/LAB_18089ec32/ProcessCheckpointValidationState4/g' "$FILE"
sed -i 's/LAB_18089ec4c/ProcessCheckpointValidationError8/g' "$FILE"
sed -i 's/LAB_18089ecba/ProcessCheckpointValidationState5/g' "$FILE"
sed -i 's/LAB_18089ecd4/ProcessCheckpointValidationError9/g' "$FILE"
sed -i 's/LAB_18089ed1b/ProcessCheckpointValidationExit2/g' "$FILE"
sed -i 's/LAB_18089f45f/ProcessCheckpointValidationCase/g' "$FILE"
sed -i 's/LAB_1801571ef/ProcessCheckpointValidationData3/g' "$FILE"

echo "变量名替换完成！"
echo "备份文件保存在: $FILE.backup"

# 验证替换结果
echo "验证替换结果..."
grep -n "registerR14\|extraout_XMM0_Da\|aiStackX_8\|auStackX_10\|auStackX_20\|LAB_[0-9a-fA-F]" "$FILE" | head -10

if [ $? -eq 0 ]; then
    echo "警告：仍有未替换的变量名"
else
    echo "所有变量名已成功替换"
fi