#!/bin/bash

# 函数美化脚本 - 用于99_unmatched_functions.c文件
# 该脚本将逆向工程生成的函数名重命名为有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建临时文件
temp_file="/tmp/unmatched_functions_temp.c"

# 复制原文件
cp 99_unmatched_functions.c "$temp_file"

# 函数名替换映射
declare -A FUNCTION_MAP=(
    ["FUN_1800bbc40"]="InitializeXmlContextAndBuffer"
    ["FUN_1800bc110"]="ProcessXmlElementContext"
    ["FUN_1800bc460"]="HandleXmlElementContext"
    ["FUN_1800bc480"]="ValidateXmlElementContext"
    ["FUN_1800bc4a0"]="FinalizeXmlElementContext"
    ["FUN_1800bcab0"]="SetupXmlElementContext"
    ["FUN_1800c0570"]="ProcessXmlStringBuffer"
    ["FUN_1800c0830"]="HandleXmlStringBuffer"
    ["FUN_1800c0da0"]="ProcessXmlDataElement"
    ["FUN_1800c12e0"]="HandleXmlDataElement"
    ["FUN_1800c1420"]="ValidateXmlDataElement"
    ["FUN_1800c19c0"]="ProcessXmlFormatting"
    ["FUN_1800c19f0"]="HandleXmlFormatting"
    ["FUN_1800c1a20"]="ValidateXmlFormatting"
    ["FUN_1800c1a80"]="CleanupXmlProcessing"
    ["FUN_1800c2a70"]="ProcessXmlBufferAllocation"
    ["FUN_1800c2a90"]="HandleXmlBufferAllocation"
    ["FUN_1800c2c20"]="ProcessXmlElementBuffer"
    ["FUN_1800c2ca0"]="HandleXmlElementBuffer"
    ["FUN_1800c2ff0"]="ValidateXmlElementBuffer"
    ["FUN_1800ba4b0"]="AllocateStringBuffer"
    ["FUN_1806242f0"]="ProcessSystemStringBuffer"
)

# 遍历所有需要替换的函数
for func in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$func]}"
    echo "替换 $func 为 $new_name"
    sed -i "s/$func/$new_name/g" "$temp_file"
done

# 变量名替换映射
declare -A VARIABLE_MAP=(
    ["iVar1"]="BufferStatus"
    ["lVar1"]="MemoryAllocationSize"
    ["uVar1"]="ValidationFlag"
    ["uVar2"]="OperationFlag"
    ["uVar3"]="ProcessId"
    ["uVar4"]="SecurityFlag"
    ["puVar1"]="FileOperationPointer"
    ["puVar2"]="SecondaryFilePointer"
    ["puVar3"]="ContextPointer"
    ["auStack_558"]="SecurityStackBuffer"
    ["puStack_538"]="PathConversionBuffer"
    ["uStack_530"]="PathBufferSize"
    ["uStack_528"]="PathBufferUpper"
    ["uStack_520"]="PathBufferLower"
    ["puStack_518"]="FileOperationPointer"
    ["lStack_510"]="MemoryAllocationSize"
    ["iStack_508"]="StringLength"
    ["uStack_500"]="BufferCapacity"
    ["uStack_4f8"]="OperationFlag"
    ["puStack_4f0"]="SecondaryFilePointer"
    ["lStack_4e8"]="TertiaryMemoryHandle"
    ["uStack_4e0"]="ValidationFlag"
    ["uStack_4d8"]="ProcessId"
    ["uStack_4d0"]="SecurityContext"
    ["puStack_4c8"]="ContextPointer"
    ["auStack_398"]="TempProcessingBuffer"
    ["auStack_278"]="SystemPathBuffer"
    ["uStack_48"]="StackGuard"
)

# 遍历所有需要替换的变量
for var in "${!VARIABLE_MAP[@]}"; do
    new_name="${VARIABLE_MAP[$var]}"
    echo "替换变量 $var 为 $new_name"
    sed -i "s/$var/$new_name/g" "$temp_file"
done

# 替换完成，复制回原文件
cp "$temp_file" 99_unmatched_functions.c
rm "$temp_file"

echo "函数和变量替换完成"