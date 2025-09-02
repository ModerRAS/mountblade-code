#!/bin/bash

# 美化06_utilities.c文件中的变量名和函数名
# 注意：这个脚本会直接修改源文件，请谨慎使用

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 备份原文件
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 美化函数名
sed -i 's/Unwind_1809079e0/ProcessResourceCleanup/g' "$INPUT_FILE"
sed -i 's/Unwind_180907a00/ResetResourceValidationTable/g' "$INPUT_FILE"
sed -i 's/Unwind_180907a10/ProcessResourceValidationCleanup/g' "$INPUT_FILE"
sed -i 's/func_0x00018064e870/SystemExceptionalHandler/g' "$INPUT_FILE"

# 美化Unwind函数名
sed -i 's/UnwindExceptionHandler180908850/ExecuteExceptionCleanupHandler/g' "$INPUT_FILE"
sed -i 's/UnwindResourceTableHandler180908860/ExecuteResourceTableCleanupHandler/g' "$INPUT_FILE"
sed -i 's/UnwindMemoryAccessValidator180908870/ValidateMemoryAccessWithCleanup/g' "$INPUT_FILE"
sed -i 's/UnwindMutexUnlockHandler180908880/ExecuteMutexUnlockHandler/g' "$INPUT_FILE"
sed -i 's/UnwindMutexUnlockSecondary180908890/ExecuteMutexUnlockSecondaryHandler/g' "$INPUT_FILE"
sed -i 's/UnwindResourceOperationHandler1809088a0/ExecuteResourceOperationHandler/g' "$INPUT_FILE"
sed -i 's/UnwindResourceHashInitializer1809088d0/InitializeResourceHashWithCleanup/g' "$INPUT_FILE"
sed -i 's/UnwindExceptionHandler180908910/HandleExceptionCleanup/g' "$INPUT_FILE"
sed -i 's/UnwindMemoryManager180908920/ExecuteMemoryCleanupManager/g' "$INPUT_FILE"
sed -i 's/UnwindSystemCleanupHandler180908950/ExecuteSystemCleanupHandler/g' "$INPUT_FILE"
sed -i 's/UnwindResourceValidator180908980/ValidateResourceWithCleanup/g' "$INPUT_FILE"
sed -i 's/UnwindSystemValidator180908990/ValidateSystemWithCleanup/g' "$INPUT_FILE"
sed -i 's/UnwindSecurityValidator1809089a0/ValidateSecurityWithCleanup/g' "$INPUT_FILE"
sed -i 's/UnwindTransactionHandler1809089b0/ExecuteTransactionHandler/g' "$INPUT_FILE"
sed -i 's/UnwindExceptionHandler1809089e0/HandleExceptionWithCleanup/g' "$INPUT_FILE"

# 美化变量名
sed -i 's/pintegerValue1/pReferenceCount/g' "$INPUT_FILE"
sed -i 's/pvalidationResult/pResourceStatus/g' "$INPUT_FILE"
sed -i 's/presourceHash/pResourceHash/g' "$INPUT_FILE"
sed -i 's/unsignedResult4/resourceBaseAddress/g' "$INPUT_FILE"
sed -i 's/resourceIndex/resourceOffset/g' "$INPUT_FILE"

# 美化其他变量名
sed -i 's/integerValue1/validationResult/g' "$INPUT_FILE"
sed -i 's/integerValue2/indexValue/g' "$INPUT_FILE"
sed -i 's/integerValue6/convertedIntValue/g' "$INPUT_FILE"
sed -i 's/pintegerValue2/pValidationCode/g' "$INPUT_FILE"

echo "06_utilities.c 文件美化完成"