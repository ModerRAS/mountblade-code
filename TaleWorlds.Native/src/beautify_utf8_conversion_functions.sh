#!/bin/bash

# 美化 ProcessUtf8ToUtf16Conversion 函数的变量名

# 定义源文件路径
SOURCE_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 美化 ProcessUtf8ToUtf16Conversion 函数中的变量名
sed -i 's/bool HighByte;/bool IsHighByteSet;/g' "$SOURCE_FILE"
sed -i 's/byte \*LowBytePointer;/byte *SourceBytePointer;/g' "$SOURCE_FILE"
sed -i 's/uint CalculatedCodePoint;/uint UnicodeCodePoint;/g' "$SOURCE_FILE"
sed -i 's/int ValidationResult;/int EncodingValidationResult;/g' "$SOURCE_FILE"
sed -i 's/HighByte = false;/IsHighByteSet = false;/g' "$SOURCE_FILE"
sed -i 's/HighByte = true;/IsHighByteSet = true;/g' "$SOURCE_FILE"
sed -i 's/LowBytePointer = \*(byte \*\*)(SystemContext + 8);/SourceBytePointer = *(byte **)(SystemContext + 8);/g' "$SOURCE_FILE"
sed -i 's/SystemDataTablePointer = Utf8SourcePointer\[5\] - (long long)LowBytePointer;/StringOffsetDifference = Utf8SourcePointer[5] - (long long)SourceBytePointer;/g' "$SOURCE_FILE"
sed -i 's/CalculatedCodePoint = (uint)LowBytePointer\[SystemDataTablePointer\];/UnicodeCodePoint = (uint)SourceBytePointer[StringOffsetDifference];/g' "$SOURCE_FILE"
sed -i 's/ValidationResult = \*LowBytePointer - CalculatedCodePoint;/EncodingValidationResult = *SourceBytePointer - UnicodeCodePoint;/g' "$SOURCE_FILE"
sed -i 's/if (\*LowBytePointer != CalculatedCodePoint)/if (*SourceBytePointer != UnicodeCodePoint)/g' "$SOURCE_FILE"
sed -i 's/LowBytePointer = LowBytePointer + 1;/SourceBytePointer = SourceBytePointer + 1;/g' "$SOURCE_FILE"
sed -i 's/while (CalculatedCodePoint != 0)/while (UnicodeCodePoint != 0)/g' "$SOURCE_FILE"
sed -i 's/HighByte = 0 < ValidationResult;/IsHighByteSet = 0 < EncodingValidationResult;/g' "$SOURCE_FILE"
sed -i 's/if (ValidationResult < 1)/if (EncodingValidationResult < 1)/g' "$SOURCE_FILE"
sed -i 's/if (HighByte)/if (IsHighByteSet)/g' "$SOURCE_FILE"
sed -i 's/LowBytePointer = (byte \*)Utf16EndPointer\[5\];/SourceBytePointer = (byte *)Utf16EndPointer[5];/g' "$SOURCE_FILE"
sed -i 's/SystemDataTablePointer = \*(long long \*)(SystemContext + 8) - (long long)LowBytePointer;/StringOffsetDifference = *(long long *)(SystemContext + 8) - (long long)SourceBytePointer;/g' "$SOURCE_FILE"
sed -i 's/CalculatedCodePoint = (uint)LowBytePointer\[SystemDataTablePointer\];/UnicodeCodePoint = (uint)SourceBytePointer[StringOffsetDifference];/g' "$SOURCE_FILE"

echo "ProcessUtf8ToUtf16Conversion 函数变量名美化完成"