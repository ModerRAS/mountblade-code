#!/bin/bash

# 美化06_utilities.c文件中的硬编码值
# 这个脚本将替换常见的硬编码偏移量为语义化常量名称

# 定义一些常见的偏移量常量
declare -A OFFSET_MAP=(
    ["0x18"]="SystemContextSecondaryDataOffset"
    ["0x20"]="SystemContextPrimaryDataOffset"
    ["0x25"]="ObjectContextValidationFlagOffset"
    ["0x38"]="ObjectContextResourceDataOffset"
    ["0x48"]="ObjectContextHandleOffset"
    ["0x4c"]="ObjectContextStatusOffset"
    ["0x50"]="SystemContextResourceOffset"
    ["0x58"]="SystemContextCallbackOffset"
    ["0x60"]="ObjectContextOperationFlagOffset"
    ["0x98"]="SystemContextResourcePointerOffset"
    ["0xb0"]="ObjectContextProcessingLimitOffset"
    ["0xb8"]="ObjectContextResourceFlagOffset"
    ["0xc0"]="ObjectContextMethodPointerOffset"
    ["0xd0"]="ResourceTablePointerValidationOffset"
    ["0x2c"]="SystemContextSizeOffset"
    ["0x28"]="SystemContextCountOffset"
    ["0x10"]="ResourceDataPointerOffset"
    ["0x58"]="ResourceProcessingLimitOffset"
    ["0x50"]="ResourceStringPointerOffset"
    ["0x80b0"]="SystemResourceTableExtendedOffset"
    ["0x8088"]="SystemResourceTableIndexOffset"
    ["0x7f20"]="SystemResourceTableBaseOffset"
    ["0x2a0"]="SystemDataStructurePointerOffset"
    ["0x660"]="SystemSecondaryDataPointerOffset"
    ["0x310"]="SystemValidationContextSizeOffset"
    ["0x1cd8"]="GlobalResourceTablePointerOffset"
    ["0x12e3"]="SystemGlobalFlagPrimaryOffset"
    ["0x12dd"]="SystemGlobalFlagSecondaryOffset"
    ["0x80d8"]="SystemResourceTableExtendedDataOffset"
)

# 处理文件
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 读取文件并替换硬编码值
while IFS= read -r line; do
    # 替换每个硬编码偏移量
    for offset in "${!OFFSET_MAP[@]}"; do
        # 替换 ValidationContext + offset 格式
        line=$(echo "$line" | sed "s/ValidationContext + $offset/ValidationContext + ${OFFSET_MAP[$offset]}/g")
        # 替换 SystemContext + offset 格式
        line=$(echo "$line" | sed "s/SystemContext + $offset/SystemContext + ${OFFSET_MAP[$offset]}/g")
        # 替换 ObjectContext + offset 格式
        line=$(echo "$line" | sed "s/ObjectContext + $offset/ObjectContext + ${OFFSET_MAP[$offset]}/g")
        # 替换 ResourceTablePointerPointer + offset 格式
        line=$(echo "$line" | sed "s/ResourceTablePointerPointer + $offset/ResourceTablePointerPointer + ${OFFSET_MAP[$offset]}/g")
        # 替换 GlobalDataBuffer + offset 格式
        line=$(echo "$line" | sed "s/GlobalDataBufferResourceTablePointer + $offset/GlobalDataBufferResourceTablePointer + ${OFFSET_MAP[$offset]}/g")
        line=$(echo "$line" | sed "s/GlobalDataBufferSystemFlags + $offset/GlobalDataBufferSystemFlags + ${OFFSET_MAP[$offset]}/g")
    done
    
    echo "$line" >> "$TEMP_FILE"
done < "$FILE_PATH"

# 替换原文件
mv "$TEMP_FILE" "$FILE_PATH"

echo "硬编码值美化完成"