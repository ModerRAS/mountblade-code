#!/bin/bash

# 美化 ProcessStringComparisonAndMemoryIndexVariantB 函数的变量名

# 定义源文件路径
SOURCE_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 美化 ProcessStringComparisonAndMemoryIndexVariantB 函数中的变量名
sed -i 's/byte \*HighBytePointer;/byte *HighBytePointer;/g' "$SOURCE_FILE"
sed -i 's/long long \*MemoryBlockIndex;/long long *MemoryBlockIndex;/g' "$SOURCE_FILE"
sed -i 's/uint MemoryAddressMaskPointer;/uint MemoryAddressMaskPointer;/g' "$SOURCE_FILE"
sed -i 's/long long SystemContext;/long long SystemContext;/g' "$SOURCE_FILE"
sed -i 's/long long PatternMatchStatus;/long long PatternMatchStatus;/g' "$SOURCE_FILE"
sed -i 's/long long AllocatedMemorySize;/long long MemorySizeDifference;/g' "$SOURCE_FILE"
sed -i 's/long long SystemParameter;/long long SystemParameter;/g' "$SOURCE_FILE"
sed -i 's/if (SystemParameter != PatternIndex)/if (SystemParameter != PatternIndex)/g' "$SOURCE_FILE"
sed -i 's/HighBytePointer = \*(byte \*\*)(SystemParameter + 0x28);/HighBytePointer = *(byte **)(SystemParameter + 0x28);/g' "$SOURCE_FILE"
sed -i 's/long long AllocatedMemorySize = \*(long long \*)(SystemContext + 8) - (long long)HighBytePointer;/MemorySizeDifference = *(long long *)(SystemContext + 8) - (long long)HighBytePointer;/g' "$SOURCE_FILE"
sed -i 's/StringComparisonByte = \*HighBytePointer;/StringComparisonByte = *HighBytePointer;/g' "$SOURCE_FILE"
sed -i 's/MemoryAddressMaskPointer = (uint)HighBytePointer\[AllocatedMemorySize\];/MemoryAddressMaskPointer = (uint)HighBytePointer[MemorySizeDifference];/g' "$SOURCE_FILE"
sed -i 's/if (StringComparisonByte != MemoryAddressMaskPointer)/if (StringComparisonByte != MemoryAddressMaskPointer)/g' "$SOURCE_FILE"
sed -i 's/HighBytePointer = HighBytePointer + 1;/HighBytePointer = HighBytePointer + 1;/g' "$SOURCE_FILE"
sed -i 's/while (MemoryAddressMaskPointer != 0)/while (MemoryAddressMaskPointer != 0)/g' "$SOURCE_FILE"
sed -i 's/if ((int)(StringComparisonByte - MemoryAddressMaskPointer) < 1) goto LAB_180203b67;/if ((int)(StringComparisonByte - MemoryAddressMaskPointer) < 1) goto ContextBufferReturnLabel;/g' "$SOURCE_FILE"
sed -i 's/MemoryBlockIndex = (long long \*)FUN_180203ba0();/MemoryBlockIndex = (long long *)FUN_180203ba0();/g' "$SOURCE_FILE"
sed -i 's/return \*MemoryBlockIndex + 0x78;/return *MemoryBlockIndex + 0x78;/g' "$SOURCE_FILE"

echo "ProcessStringComparisonAndMemoryIndexVariantB 函数变量名美化完成"