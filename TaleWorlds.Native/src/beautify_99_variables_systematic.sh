#!/bin/bash

# 美化99_unmatched_functions.c文件中的变量名
# 这个脚本将替换常见的Ghidra生成的变量名为语义化名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 备份原文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 函数变量名替换
sed -i 's/FUN_1806aca90/ProcessCharacterEncodingAndDataMatching/g' "$FILE_PATH"
sed -i 's/FUN_1806acce0/ProcessSystemCharacterEncodingAndDataAllocation/g' "$FILE_PATH"
sed -i 's/FUN_1806ae680/ProcessCharacterEncodingValidation/g' "$FILE_PATH"

# 变量名替换 - 在ProcessCharacterEncodingAndDataMatching函数中
sed -i '/ProcessCharacterEncodingAndDataMatching/,/^}/ {
    s/cVar2/CurrentChar/g
    s/TempChar/ComparisonChar/g
    s/pcVar5/EncodedDataPointer/g
    s/pcVar6/SourceStringPointer/g
    s/pEncodedData3/EncodedDataBase/g
    s/RegionTotal2/StringOffset/g
    s/pProcessingFlags/ProcessingFlagsPointer/g
    s/MemoryAllocationResult0/MemoryAllocationIndex/g
}' "$FILE_PATH"

echo "变量名美化完成"