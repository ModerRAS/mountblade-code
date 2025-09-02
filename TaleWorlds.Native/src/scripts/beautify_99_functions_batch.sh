#!/bin/bash

# 美化99_unmatched_functions.c中的函数名
# 注意：这是简化实现，只处理部分函数

SOURCE_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 函数名映射
declare -A function_mapping=(
    ["FUN_1800b30d0"]="ProcessXmlElementWithValidation"
    ["FUN_1800b31f0"]="ProcessXmlContextWithFlags"
    ["FUN_1800b32c0"]="ProcessXmlElementWithExtendedFlags"
    ["FUN_1800b3510"]="ProcessXmlContextWithValidation"
    ["FUN_1800b3590"]="ProcessXmlElementWithContext"
    ["FUN_1800b3670"]="ProcessXmlDataWithFormatting"
    ["FUN_1800b3970"]="ProcessXmlDocumentWithContext"
    ["FUN_1800b4a40"]="GetXmlElementContextPointer"
    ["FUN_1800b5e80"]="ProcessXmlElementWithBuffer"
    ["FUN_1800b5ec0"]="GetXmlElementProcessingStatus"
    ["FUN_1800b6de0"]="ProcessXmlElementWithCharacterData"
    ["FUN_1800b6f90"]="ProcessXmlDocumentWithValidation"
    ["FUN_1800b55b0"]="ValidateXmlElementContext"
)

# 备份原文件
cp "$SOURCE_FILE" "${SOURCE_FILE}.backup_$(date +%Y%m%d_%H%M%S)"

# 处理每个函数映射
for old_name in "${!function_mapping[@]}"; do
    new_name="${function_mapping[$old_name]}"
    echo "处理函数: $old_name -> $new_name"
    
    # 使用sed替换函数定义
    sed -i "s/\b${old_name}\b/${new_name}/g" "$SOURCE_FILE"
done

echo "函数名美化完成"