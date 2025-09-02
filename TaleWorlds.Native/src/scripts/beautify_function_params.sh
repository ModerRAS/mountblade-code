#!/bin/bash

# 美化04_ui_system.c文件中的函数参数名
# 这个脚本将批量替换函数定义中的通用参数名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 参数名映射表
declare -A param_mapping=(
    ["param_1"]="systemInstance"
    ["param_2"]="resourceData"
    ["param_3"]="eventIdentifier"
    ["param_4"]="targetIdentifier"
    ["param_5"]="additionalData"
    ["param_6"]="operationFlags"
    ["param_7"]="memoryHandle"
    ["param_8"]="bufferSize"
    ["param_9"]="renderFlags"
    ["param_10"]="animationData"
)

# 创建临时文件
TEMP_FILE="/tmp/ui_system_beautified.c"

# 处理函数定义行
sed 's/\/\/ 函数: void \([a-zA-Z_][a-zA-Z0-9_]*\)(.*param_\([0-9]\+\),.*param_\([0-9]\+\),.*param_\([0-9]\+\),.*param_\([0-9]\+\))/\/\/ 函数: void \1(uint64_t systemInstance, uint64_t resourceData, uint64_t eventIdentifier, uint64_t targetIdentifier)/g' "$INPUT_FILE" > "$TEMP_FILE"

# 复制回原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "函数参数名美化完成"