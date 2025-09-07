#!/bin/bash

# 美化99_unmatched_functions.c文件中的魔法数字
# 为系统操作函数添加语义化的常量定义

INPUT_FILE="99_unmatched_functions.c"
TEMP_FILE="${INPUT_FILE}.tmp"

# 创建常量定义
cat > /tmp/constants.h << 'EOF'
// 系统输出缓冲区偏移量常量
#define SystemOutputBufferPrimaryOffset 0x2438
#define SystemOutputBufferSecondaryOffset 0x2439
#define SystemOutputBufferTertiaryOffset 0x243a
#define SystemOutputBufferQuaternaryOffset 0x243b
#define SystemOutputBufferFinalOffset 0x243c
#define SystemOutputBufferControlOffset 0x2437
#define SystemOutputBufferLockOffset 0x243d

// 系统寄存器上下文索引常量
#define SystemRegisterContextPrimaryIndex 0x394
#define SystemRegisterContextSecondaryIndex 0x38f
#define SystemRegisterContextTertiaryIndex 0x390
#define SystemRegisterContextQuaternaryIndex 0x391

// 系统处理状态索引常量
#define SystemProcessingStatusIndex 0x3ae
#define SystemSecondaryProcessingStatusIndex 0x3ad
#define SystemTertiaryProcessingStatusIndex 0x3af
#define SystemBufferSizeIndex 0x3b0

// 系统内存清理常量
#define SystemMemoryClearStartOffset 0x3c1
#define SystemMemoryClearSize 0x103b0

// 系统验证数据偏移量常量
#define SystemValidationDataPrimaryOffset 0x1d50
#define SystemValidationDataSecondaryOffset 0x1cd0
#define SystemValidationDataTertiaryOffset 0x1cc8
#define SystemValidationDataQuaternaryOffset 0x1cc0
#define SystemValidationDataFinalOffset 0x1cb8
#define SystemValidationDataCleanupOffset 0x1cb0
EOF

# 在文件中插入常量定义
sed -i '/^#include "TaleWorlds.Native.Split.h"/a\\n// 系统常量定义\n#define SystemOutputBufferPrimaryOffset 0x2438\n#define SystemOutputBufferSecondaryOffset 0x2439\n#define SystemOutputBufferTertiaryOffset 0x243a\n#define SystemOutputBufferQuaternaryOffset 0x243b\n#define SystemOutputBufferFinalOffset 0x243c\n#define SystemOutputBufferControlOffset 0x2437\n#define SystemOutputBufferLockOffset 0x243d\n\n#define SystemRegisterContextPrimaryIndex 0x394\n#define SystemRegisterContextSecondaryIndex 0x38f\n#define SystemRegisterContextTertiaryIndex 0x390\n#define SystemRegisterContextQuaternaryIndex 0x391\n\n#define SystemProcessingStatusIndex 0x3ae\n#define SystemSecondaryProcessingStatusIndex 0x3ad\n#define SystemTertiaryProcessingStatusIndex 0x3af\n#define SystemBufferSizeIndex 0x3b0\n\n#define SystemMemoryClearStartOffset 0x3c1\n#define SystemMemoryClearSize 0x103b0' "$INPUT_FILE"

# 替换魔法数字为常量
sed -i 's/OutputBuffer\[0x2438\]/OutputBuffer[SystemOutputBufferPrimaryOffset]/g' "$INPUT_FILE"
sed -i 's/OutputBuffer\[0x2439\]/OutputBuffer[SystemOutputBufferSecondaryOffset]/g' "$INPUT_FILE"
sed -i 's/OutputBuffer\[0x243a\]/OutputBuffer[SystemOutputBufferTertiaryOffset]/g' "$INPUT_FILE"
sed -i 's/OutputBuffer\[0x243b\]/OutputBuffer[SystemOutputBufferQuaternaryOffset]/g' "$INPUT_FILE"
sed -i 's/OutputBuffer\[0x243c\]/OutputBuffer[SystemOutputBufferFinalOffset]/g' "$INPUT_FILE"
sed -i 's/OutputBuffer\[0x2437\]/OutputBuffer[SystemOutputBufferControlOffset]/g' "$INPUT_FILE"
sed -i 's/OutputBuffer\[0x243d\]/OutputBuffer[SystemOutputBufferLockOffset]/g' "$INPUT_FILE"

sed -i 's/OutputBuffer\[0x394\]/OutputBuffer[SystemRegisterContextPrimaryIndex]/g' "$INPUT_FILE"
sed -i 's/OutputBuffer\[0x38f\]/OutputBuffer[SystemRegisterContextSecondaryIndex]/g' "$INPUT_FILE"
sed -i 's/OutputBuffer\[0x390\]/OutputBuffer[SystemRegisterContextTertiaryIndex]/g' "$INPUT_FILE"
sed -i 's/OutputBuffer\[0x391\]/OutputBuffer[SystemRegisterContextQuaternaryIndex]/g' "$INPUT_FILE"

sed -i 's/OutputBuffer\[0x3ae\]/OutputBuffer[SystemProcessingStatusIndex]/g' "$INPUT_FILE"
sed -i 's/OutputBuffer\[0x3ad\]/OutputBuffer[SystemSecondaryProcessingStatusIndex]/g' "$INPUT_FILE"
sed -i 's/OutputBuffer\[0x3af\]/OutputBuffer[SystemTertiaryProcessingStatusIndex]/g' "$INPUT_FILE"
sed -i 's/OutputBuffer\[0x3b0\]/OutputBuffer[SystemBufferSizeIndex]/g' "$INPUT_FILE"

sed -i 's/OutputBuffer + 0x3c1/OutputBuffer + SystemMemoryClearStartOffset/g' "$INPUT_FILE"
sed -i 's/0x103b0/SystemMemoryClearSize/g' "$INPUT_FILE"

# 替换验证函数中的魔法数字
sed -i 's/OutputBuffer + 0x1d50/OutputBuffer + SystemValidationDataPrimaryOffset/g' "$INPUT_FILE"
sed -i 's/OutputBuffer + 0x1cd0/OutputBuffer + SystemValidationDataSecondaryOffset/g' "$INPUT_FILE"
sed -i 's/OutputBuffer + 0x1cc8/OutputBuffer + SystemValidationDataTertiaryOffset/g' "$INPUT_FILE"
sed -i 's/OutputBuffer + 0x1cc0/OutputBuffer + SystemValidationDataQuaternaryOffset/g' "$INPUT_FILE"
sed -i 's/OutputBuffer + 0x1cb8/OutputBuffer + SystemValidationDataFinalOffset/g' "$INPUT_FILE"
sed -i 's/OutputBuffer + 0x1cb0/OutputBuffer + SystemValidationDataCleanupOffset/g' "$INPUT_FILE"

echo "魔法数字美化完成"