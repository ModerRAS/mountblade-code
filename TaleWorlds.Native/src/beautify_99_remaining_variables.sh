#!/bin/bash

# 美化99_unmatched_functions.c文件中的变量名
# 专门处理剩余的未美化变量名

# 定义输入文件
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建临时文件
TEMP_FILE="/tmp/beautify_99_temp.c"

# 备份原始文件
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 处理uVar变量名（数字后缀的变量）
sed -i 's/\buVar[0-9]\+\b/UnsignedVariable/g' "$INPUT_FILE"

# 处理CharacterCode变量名
sed -i 's/\bCharacterCode[0-9]\+\b/CharacterCodeValue/g' "$INPUT_FILE"

# 处理MemoryAllocationResult变量名
sed -i 's/\bMemoryAllocationResult[0-9]\+\b/MemoryAllocationResult/g' "$INPUT_FILE"

# 处理DataValue变量名
sed -i 's/\bDataValue[0-9]\+\b/DataValue/g' "$INPUT_FILE"

# 处理ResourceCallbackPointer变量名
sed -i 's/\bResourceCallbackPointer[0-9]\+\b/ResourceCallbackPointer/g' "$INPUT_FILE"

# 处理StringBufferPointer变量名
sed -i 's/\bStringBufferPointer[0-9]\+\b/StringBufferPointer/g' "$INPUT_FILE"

# 处理StringBuffer变量名
sed -i 's/\bStringBuffer[0-9]\+\b/StringBuffer/g' "$INPUT_FILE"

# 处理SystemResourceLock变量名
sed -i 's/\bSystemResourceLock[0-9]\+\b/SystemResourceLock/g' "$INPUT_FILE"

# 处理ProcessingStatus变量名
sed -i 's/\bProcessingStatus[0-9]\+\b/ProcessingStatus/g' "$INPUT_FILE"

# 处理ResourceLockIndex变量名
sed -i 's/\bResourceLockIndex[0-9]\+\b/ResourceLockIndex/g' "$INPUT_FILE"

# 处理NewBufferPointer变量名
sed -i 's/\bNewBufferPointer[0-9]\+\b/NewBufferPointer/g' "$INPUT_FILE"

# 处理TableEntryLength变量名
sed -i 's/\bTableEntryLength[0-9]\+\b/TableEntryLength/g' "$INPUT_FILE"

# 处理SystemContextPointer变量名
sed -i 's/\bSystemContextPointer[0-9]\+\b/SystemContextPointer/g' "$INPUT_FILE"

# 处理SystemTablePointer变量名
sed -i 's/\bSystemTablePointer[0-9]\+\b/SystemTablePointer/g' "$INPUT_FILE"

# 处理SourceDataPointer变量名
sed -i 's/\bSourceDataPointer[0-9]\+\b/SourceDataPointer/g' "$INPUT_FILE"

# 处理DataBuffer变量名
sed -i 's/\bDataBuffer[0-9]\+\b/DataBuffer/g' "$INPUT_FILE"

# 处理FinalSystemBuffer变量名
sed -i 's/\bFinalSystemBuffer[0-9]\+\b/FinalSystemBuffer/g' "$INPUT_FILE"

# 处理SystemRegisterConfigTablePointer变量名
sed -i 's/\bSystemRegisterConfigTablePointer[0-9]\+\b/SystemRegisterConfigTablePointer/g' "$INPUT_FILE"

# 处理ResourceIterator变量名
sed -i 's/\bResourceIterator[0-9]\+\b/ResourceIterator/g' "$INPUT_FILE"

# 处理SystemContext变量名
sed -i 's/\bSystemContext[0-9]\+\b/SystemContext/g' "$INPUT_FILE"

# 处理ValidationStatus变量名
sed -i 's/\bValidationStatus[0-9a-fA-F]\+\b/ValidationStatus/g' "$INPUT_FILE"

# 处理pEncodingCharacter变量名
sed -i 's/\bpEncodingCharacter[0-9]\+\b/CharacterEncodingPointer/g' "$INPUT_FILE"

# 处理ppuStack变量名
sed -i 's/\bppuStack_[0-9a-fA-F]\+\b/PointerToPointerStack/g' "$INPUT_FILE"

# 处理cStack变量名
sed -i 's/\bcStack_[0-9a-fA-F]\+\b/CharacterStack/g' "$INPUT_FILE"

# 处理iStack变量名
sed -i 's/\biStack_[0-9a-fA-F]\+\b/IntegerStack/g' "$INPUT_FILE"

# 处理abStack变量名
sed -i 's/\babStack_[0-9a-fA-F]\+\b/ArrayByteStack/g' "$INPUT_FILE"

echo "变量名美化完成"