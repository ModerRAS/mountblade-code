#!/bin/bash

# 美化99_unmatched_functions.c中的函数名
# 这个脚本将func_0x开头的函数名替换为语义化的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 99_unmatched_functions.c 99_unmatched_functions.c.backup

# 函数映射表
declare -A function_mapping=(
    ["func_0x00018029db20"]="ProcessSystemMemoryAllocation"
    ["func_0x0001800ed880"]="ValidateSystemConfiguration"
    ["func_0x00018024c420"]="GetStringBufferData"
    ["func_0x0001800858c0"]="ProcessStringCharacter"
    ["func_0x0001800ae1f0"]="AllocateStringContext"
    ["func_0x0001800ed840"]="ProcessStringBuffer"
    ["func_0x0001800e7950"]="ProcessXmlElement"
    ["func_0x0001800ba3b0"]="ValidateXmlData"
    ["func_0x00018024c040"]="GetStringBufferPointer"
    ["func_0x00018029dab0"]="ProcessStringBufferData"
    ["func_0x0001800d4090"]="HandleResourceOperation"
    ["func_0x0001800d40c0"]="ProcessResourceData"
    ["func_0x000180079240"]="GetSystemMemoryPointer"
    ["func_0x00018066c530"]="ProcessXmlStringData"
    ["func_0x00018066d300"]="GetXmlProcessingStatus"
    ["func_0x00018005d390"]="ReleaseCharacterData"
    ["func_0x0001801c0ee0"]="ProcessXmlContext"
    ["func_0x0001803b0980"]="InitializeXmlParser"
    ["func_0x00018031cb70"]="ProcessXmlDocument"
    ["func_0x00018023a1e0"]="FormatStringData"
    ["func_0x0001802eeba0"]="ProcessXmlDeclaration"
    ["func_0x0001801be7c0"]="ProcessXmlAttributes"
    ["func_0x000180239f10"]="ProcessXmlElementData"
    ["func_0x000180645570"]="ConvertXmlDataType"
    ["func_0x000180388c90"]="AllocateXmlResource"
    ["func_0x00018038d2f0"]="ProcessXmlFormatting"
    ["func_0x0001801ece00"]="ProcessXmlValidation"
    ["func_0x0001801eb6f0"]="CompareXmlData"
    ["func_0x0001801c7f00"]="ProcessXmlNamespace"
    ["func_0x00018022cda0"]="GetXmlContextData"
    ["func_0x00018013d940"]="ProcessCharacterEncoding"
    ["func_0x0001800938f0"]="ProcessFloatingPointData"
    ["func_0x0001801fc7a0"]="GetXmlTokenData"
    ["func_0x0001801fc730"]="ValidateXmlToken"
    ["func_0x0001801fcb80"]="ProcessXmlAttribute"
    ["func_0x0001801fcb40"]="ProcessXmlElementContent"
    ["func_0x0001801fcb00"]="ProcessXmlComment"
    ["func_0x0001801fcac0"]="ProcessXmlCData"
    ["func_0x0001801fc760"]="ProcessXmlEntity"
    ["func_0x0001801fca90"]="ProcessXmlProcessingInstruction"
    ["func_0x0001801fc880"]="ProcessXmlDoctype"
    ["func_0x0001801fc840"]="ProcessXmlNotation"
    ["func_0x0001801fc800"]="ProcessXmlEntityReference"
    ["func_0x0001801fc8c0"]="ProcessXmlTextContent"
    ["func_0x00018012e760"]="ProcessXmlSystemCall"
    ["func_0x000180121e20"]="ProcessXmlSystemData"
    ["func_0x000180233670"]="CompareStringData"
    ["func_0x00018023a100"]="ProcessXmlFormattingData"
    ["func_0x000180085e10"]="GetStringCharacterData"
    ["func_0x000180078440"]="ProcessStringEncoding"
    ["func_0x0001800aada0"]="ProcessSystemData"
    ["func_0x00018005c480"]="ProcessXmlSystemData"
    ["func_0x0001800854e0"]="ValidateStringData"
)

# 执行替换
for func_name in "${!function_mapping[@]}"; do
    new_name="${function_mapping[$func_name]}"
    echo "替换 $func_name -> $new_name"
    sed -i "s/$func_name/$new_name/g" 99_unmatched_functions.c
done

echo "函数名替换完成"