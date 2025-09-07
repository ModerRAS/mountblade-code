#!/bin/bash

# 美化02_core_engine.c中的硬编码地址
# 将常见的硬编码偏移量替换为有意义的常量名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
TEMP_FILE="/tmp/core_engine_beautified.c"

# 常见偏移量的语义化替换
declare -A offset_replacements=(
    ["0x200"]="CharacterByteCountOffset"
    ["0x24"]="Utf16ConversionContextOffset" 
    ["0x20"]="UnicodeCharacterValueOffset"
    ["0xd"]="StringBuffer6Offset"
    ["0x48"]="CharacterTablePrimaryOffset"
    ["0x50"]="CharacterTableSecondaryOffset"
    ["0x4c"]="CharacterTableTertiaryOffset"
    ["0x44"]="Utf16ConversionContextTableOffset"
    ["0x2c"]="UnicodeCharacterTableOffset"
    ["0xc30"]="CharacterTableBaseOffset"
    ["0xe78"]="CoreEngineSystemContextOffset"
    ["0x128"]="CharacterTableRowSize"
    ["0x40"]="CharacterDataBlockSize"
    ["0x10"]="CharacterCodeTablePointerOffset"
    ["0x30"]="CharacterCodeTableTertiaryOffset"
    ["0x374"]="CalculatedDistanceOffset"
    ["0x378"]="ProcessedFloatValueOffset"
    ["900"]="NormalizedParameterOffset"
)

# 创建临时文件并执行替换
cp "$INPUT_FILE" "$TEMP_FILE"

# 替换每个偏移量
for offset in "${!offset_replacements[@]}"; do
    replacement="${offset_replacements[$offset]}"
    # 使用sed替换，只替换在指针访问或数组访问中的偏移量
    sed -i "s/\+ $offset\b/+ $replacement/g" "$TEMP_FILE"
    sed -i "s/+ (unsigned long long)$offset\b/+ (unsigned long long)$replacement/g" "$TEMP_FILE"
    sed -i "s/($offset + /($replacement + /g" "$TEMP_FILE"
    sed -i "s/\*(int \*)(\w+ \+ $offset)/\*(int *)(\1 + $replacement)/g" "$TEMP_FILE"
    sed -i "s/\*(uint8_t \*)(\w+ \+ $offset)/\*(uint8_t *)(\1 + $replacement)/g" "$TEMP_FILE"
    sed -i "s/\*(uint32_t \*)(\w+ \+ $offset)/\*(uint32_t *)(\1 + $replacement)/g" "$TEMP_FILE"
    sed -i "s/\*(char \*)(\w+ \+ $offset)/\*(char *)(\1 + $replacement)/g" "$TEMP_FILE"
    sed -i "s/\*(float \*)(\w+ \+ $offset)/\*(float *)(\1 + $replacement)/g" "$TEMP_FILE"
    sed -i "s/\*(long long \*)(\w+ \+ $offset)/\*(long long *)(\1 + $replacement)/g" "$TEMP_FILE"
    sed -i "s/\*(void \*)(\w+ \+ $offset)/\*(void *)(\1 + $replacement)/g" "$TEMP_FILE"
done

# 添加常量定义到文件开头
cat > /tmp/constants.h << 'EOF'
// 核心引擎系统常量定义
#define CharacterByteCountOffset 0x200                    // 字符字节计数偏移量
#define Utf16ConversionContextOffset 0x24                  // UTF16转换上下文偏移量
#define UnicodeCharacterValueOffset 0x20                   // Unicode字符值偏移量
#define StringBuffer6Offset 0xd                           // 字符串缓冲区6偏移量
#define CharacterTablePrimaryOffset 0x48                    // 字符表主偏移量
#define CharacterTableSecondaryOffset 0x50                  // 字符表次偏移量
#define CharacterTableTertiaryOffset 0x4c                  // 字符表第三偏移量
#define Utf16ConversionContextTableOffset 0x44             // UTF16转换上下文表偏移量
#define UnicodeCharacterTableOffset 0x2c                   // Unicode字符表偏移量
#define CharacterTableBaseOffset 0xc30                     // 字符表基偏移量
#define CoreEngineSystemContextOffset 0xe78                 // 核心引擎系统上下文偏移量
#define CharacterTableRowSize 0x128                        // 字符表行大小
#define CharacterDataBlockSize 0x40                        // 字符数据块大小
#define CharacterCodeTablePointerOffset 0x10               // 字符代码表指针偏移量
#define CharacterCodeTableTertiaryOffset 0x30              // 字符代码表第三偏移量
#define CalculatedDistanceOffset 0x374                     // 计算距离偏移量
#define ProcessedFloatValueOffset 0x378                    // 处理浮点值偏移量
#define NormalizedParameterOffset 900                       // 归一化参数偏移量

EOF

# 将常量定义插入到文件中
sed -i '/^#include "TaleWorlds.Native.Split.h"/r /tmp/constants.h' "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

# 清理临时文件
rm -f /tmp/constants.h

echo "核心引擎硬编码地址美化完成"