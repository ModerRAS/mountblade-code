#!/bin/bash

# 美化01_initialization.c中的标签名
# 这是一个简化实现，用于批量替换标签名为语义化名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 标签映射表 - 将十六进制标签映射为语义化名称
declare -A LABEL_MAPPING=(
    ["LAB_18006d3bb"]="EntryAvailableCheck"
    ["LAB_18006d67d"]="ResourceValidationComplete"
    ["LAB_18006d7fb"]="MemoryAllocationComplete"
    ["LAB_18006d957"]="ContextValidationCheck"
    ["LAB_18006d9d7"]="ThreadIdValidationCheck"
    ["LAB_18006d9f6"]="ThreadContextComplete"
    ["LAB_18006f48d"]="SystemStatusCheck"
    ["LAB_180070230"]="ResourceAllocationStart"
    ["LAB_180070a3f"]="MemoryOperationComplete"
    ["LAB_180070b00"]="HashValidationCheck"
    ["LAB_1800718e9"]="SystemProcessingComplete"
    ["LAB_180070db8"]="StringComparisonStart"
    ["LAB_180070e64"]="MemoryOffsetCheck"
    ["LAB_180070ee8"]="OffsetValidationComplete"
    ["LAB_180070f81"]="MemoryRangeCheck"
)

# 备份原文件
cp "$FILE_PATH" "${FILE_PATH}.backup"

# 替换每个标签
for label in "${!LABEL_MAPPING[@]}"; do
    new_name="${LABEL_MAPPING[$label]}"
    echo "替换标签: $label -> $new_name"
    
    # 替换goto语句
    sed -i "s/goto $label/goto $new_name/g" "$FILE_PATH"
    
    # 替换标签定义
    sed -i "s/^$label:/$new_name:/g" "$FILE_PATH"
done

echo "标签美化完成"