#!/bin/bash

# 美化 ProcessStringEncodingAndContextValidation 函数的变量名

# 定义源文件路径
SOURCE_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 美化 ProcessStringEncodingAndContextValidation 函数中的变量名
sed -i 's/TemporaryBuffer = ContextHandle;/ContextBuffer = ContextHandle;/g' "$SOURCE_FILE"
sed -i 's/StringProcessingStatus = (void \*)ContextHandle\[2\];/StringProcessingStatus = (void \*)ContextHandle[2];/g' "$SOURCE_FILE"
sed -i 's/HighByte = false;/IsHighByteSet = false;/g' "$SOURCE_FILE"
sed -i 's/HighByte = true;/IsHighByteSet = true;/g' "$SOURCE_FILE"
sed -i 's/LowBytePointer = \*(byte \*\*)(OperationBufferSize + 8);/SourceBytePointer = *(byte **)(OperationBufferSize + 8);/g' "$SOURCE_FILE"
sed -i 's/EncodingConversionResult = StringProcessingStatus\[5\] - (long long)LowBytePointer;/StringOffsetDifference = StringProcessingStatus[5] - (long long)SourceBytePointer;/g' "$SOURCE_FILE"
sed -i 's/CalculatedCodePoint = (uint)LowBytePointer\[EncodingConversionResult\];/UnicodeCodePoint = (uint)SourceBytePointer[StringOffsetDifference];/g' "$SOURCE_FILE"
sed -i 's/ValidationResult = \*LowBytePointer - CalculatedCodePoint;/EncodingValidationResult = *SourceBytePointer - UnicodeCodePoint;/g' "$SOURCE_FILE"
sed -i 's/if (\*LowBytePointer != CalculatedCodePoint)/if (*SourceBytePointer != UnicodeCodePoint)/g' "$SOURCE_FILE"
sed -i 's/LowBytePointer = LowBytePointer + 1;/SourceBytePointer = SourceBytePointer + 1;/g' "$SOURCE_FILE"
sed -i 's/while (CalculatedCodePoint != 0)/while (UnicodeCodePoint != 0)/g' "$SOURCE_FILE"
sed -i 's/HighByte = 0 < ValidationResult;/IsHighByteSet = 0 < EncodingValidationResult;/g' "$SOURCE_FILE"
sed -i 's/if (ValidationResult < 1)/if (EncodingValidationResult < 1)/g' "$SOURCE_FILE"
sed -i 's/if (HighByte)/if (IsHighByteSet)/g' "$SOURCE_FILE"
sed -i 's/StringProcessingStatus = TemporaryBuffer;/StringProcessingStatus = ContextBuffer;/g' "$SOURCE_FILE"
sed -i 's/TemporaryBuffer = StringProcessingStatus;/ContextBuffer = StringProcessingStatus;/g' "$SOURCE_FILE"
sed -i 's/if (TemporaryBuffer != ContextHandle)/if (ContextBuffer != ContextHandle)/g' "$SOURCE_FILE"
sed -i 's/return TemporaryBuffer + 0xf;/return ContextBuffer + 0xf;/g' "$SOURCE_FILE"
sed -i 's/LowBytePointer = (byte \*)TemporaryBuffer\[5\];/SourceBytePointer = (byte *)ContextBuffer[5];/g' "$SOURCE_FILE"
sed -i 's/CalculatedCodePoint = (uint)LowBytePointer\[\(long long\)StringProcessingStatus\];/UnicodeCodePoint = (uint)SourceBytePointer[(long long)StringProcessingStatus];/g' "$SOURCE_FILE"
sed -i 's/SystemContextPtr = (long long \*)FUN_180203ba0(ContextHandle,SystemRegisterFlagBuffer,StringProcessingStatus,TemporaryBuffer,OperationBufferSize);/SystemContextPtr = (long long *)FUN_180203ba0(ContextHandle,SystemRegisterFlagBuffer,StringProcessingStatus,ContextBuffer,OperationBufferSize);/g' "$SOURCE_FILE"

echo "ProcessStringEncodingAndContextValidation 函数变量名美化完成"