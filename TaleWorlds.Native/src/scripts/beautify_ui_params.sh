#!/bin/bash

# 美化04_ui_system.c文件中的参数名
# 这个脚本将通用的param_1, param_2等参数名替换为更有意义的名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
TEMP_FILE="/tmp/ui_system_beautified.c"

# 创建备份
cp "$INPUT_FILE" "$INPUT_FILE.backup"

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

# 读取文件并逐行处理
while IFS= read -r line; do
    # 替换参数名
    for old_name in "${!param_mapping[@]}"; do
        new_name="${param_mapping[$old_name]}"
        # 使用sed进行替换，只替换完整的单词
        line=$(echo "$line" | sed "s/\b$old_name\b/$new_name/g")
    done
    echo "$line"
done < "$INPUT_FILE" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "04_ui_system.c 参数名美化完成"