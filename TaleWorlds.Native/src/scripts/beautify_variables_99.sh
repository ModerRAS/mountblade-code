#!/bin/bash

# 美化99_unmatched_functions.c文件中的变量名
# 该脚本将改进一些仍然使用数字后缀的变量名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 使用sed进行变量名替换
sed -e 's/SecondCharacterCode0/CharacterCodeMaximum/g' \
    -e 's/uStack_[0-9]*/StackVariable/g' \
    -e 's/DataValue[0-9]*/TempDataValue/g' \
    -e 's/CurrentChar[0-9]*/CurrentCharacter/g' \
    -e 's/Counter[0-9]*/CharacterCounter/g' \
    -e 's/ResourceLockPointer[0-9]*/ResourceLock/g' \
    -e 's/BufferPageIndex/BufferPageCurrent/g' \
    -e 's/BufferOffsetIndex/BufferOffsetCurrent/g' \
    -e 's/DataPointer[0-9]*/DataPointer/g' \
    -e 's/HeapNodePointer/HeapNode/g' \
    -e 's/TargetHeapNodePointer/TargetHeapNode/g' \
    -e 's/StringBufferEnd/StringBufferEndPtr/g' \
    -e 's/InputStringEnd/InputStringEndPtr/g' \
    -e 's/InputStringPosition/InputStringPtr/g' \
    -e 's/CharacterDataPointer/CharacterDataPtr/g' \
    -e 's/NodeDataValue/NodeValue/g' \
    -e 's/NodeProcessingFlags/NodeFlags/g' \
    -e 's/ResourceDataPointer/ResourceDataPtr/g' \
    -e 's/DataBufferOffset/DataBufferOffset/g' \
    -e 's/CharacterCodeValue/CharacterCode/g' \
    -e 's/NextCharacterCode/NextCharacter/g' \
    -e 's/CharacterCodeStart/CharacterStart/g' \
    -e 's/CharacterCodeCurrent/CharacterCurrent/g' \
    -e 's/CharacterCodeEnd/CharacterEnd/g' \
    -e 's/CharacterCountTotal/CharacterCount/g' \
    -e 's/CharacterCountDifference/CharacterCountDiff/g' \
    -e 's/MemoryAllocationResult[0-9]*/MemoryAllocResult/g' \
    -e 's/SecondCharacterCode[0-9]*/CharacterCode/g' \
    -e 's/UnsignedVar[0-9]*/UnsignedValue/g' \
    -e 's/ProcessingFlags/ProcessFlags/g' \
    -e 's/BufferRegionTotal/BufferRegion/g' \
    -e 's/DataValue[0-9]*/DataValue/g' \
    -e 's/iVar[0-9]*/IndexValue/g' \
    -e 's/bVar[0-9]*/BooleanValue/g' \
    -e 's/pCurrentChar[0-9]*/CurrentCharPtr/g' \
    -e 's/ShouldContinueProcessing/ContinueProcessing/g' \
    -e 's/IsDataProcessingActive/DataProcessingActive/g' \
    -e 's/TempCharacterIndex/TempCharIndex/g' \
    -e 's/CurrentDataIndex/CurrentIndex/g' \
    -e 's/SystemMemoryAllocationTable/MemoryAllocationTable/g' \
    -e 's/CONCAT71/ConcatValue/g' \
    -e 's/StackProtectionValue/StackProtect/g' \
    -e 's/auStack_[0-9]*/StackArray/g' \
    -e 's/EncodingCharacter/EncodedChar/g' \
    -e 's/CurrentChar[0-9]*/CurrentChar/g' \
    -e 's/DataValue[0-9]*/DataVal/g' \
    -e 's/uStack_[0-9]*/UnsignedStack/g' \
    "$INPUT_FILE" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "变量名美化完成"