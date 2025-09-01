#!/bin/bash

# 美化00_data_definitions.h文件中的DAT_变量
# 这个脚本将DAT_变量重命名为有意义的名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"

# 创建备份
cp "$INPUT_FILE" "${INPUT_FILE}.backup"

# 定义变量映射关系
declare -A variable_mappings=(
    # 系统常量字符串相关
    ["DAT_180bf8378"]="SystemConstantStringPrimary"
    ["DAT_180bf83d0"]="SystemConstantStringSecondary"
    ["DAT_180bf8428"]="SystemConstantStringTertiary"
    ["DAT_180bf8480"]="SystemConstantStringQuaternary"
    
    # 系统内存指针相关
    ["_DAT_180bf8360"]="SystemMemoryPoolPointerPrimary"
    ["_DAT_180bf8368"]="SystemMemoryPoolPointerSecondary"
    ["_DAT_180bf8370"]="SystemMemoryPoolSizePrimary"
    ["_DAT_180bf83b8"]="SystemMemoryPoolPointerTertiary"
    ["_DAT_180bf83c0"]="SystemMemoryPoolPointerQuaternary"
    ["_DAT_180bf83c8"]="SystemMemoryPoolSizeSecondary"
    ["_DAT_180bf8410"]="SystemMemoryPoolPointerQuinary"
    ["_DAT_180bf8418"]="SystemMemoryPoolPointerSenary"
    ["_DAT_180bf8420"]="SystemMemoryPoolSizeTertiary"
    ["_DAT_180bf8468"]="SystemMemoryPoolPointerSeptenary"
    ["_DAT_180bf8470"]="SystemMemoryPoolPointerOctonary"
    ["_DAT_180bf8478"]="SystemMemoryPoolSizeQuaternary"
)

# 应用变量映射
for old_name in "${!variable_mappings[@]}"; do
    new_name="${variable_mappings[$old_name]}"
    sed -i "s/\b$old_name\b/$new_name/g" "$INPUT_FILE"
done

echo "变量重命名完成"