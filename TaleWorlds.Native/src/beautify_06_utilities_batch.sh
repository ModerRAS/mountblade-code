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