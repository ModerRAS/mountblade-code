#!/bin/bash

# 美化04_ui_system.c中的FUN_函数和变量
# 这个脚本将系统地美化UI系统中的函数和变量名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
TEMP_FILE="/tmp/ui_system_beautified.c"

# 创建备份
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 美化函数定义 - 将FUN_函数替换为语义化名称
sed -i 's/FUN_180742460/ProcessUIContextAllocation/g' "$INPUT_FILE"
sed -i 's/FUN_180742570/AllocateUIComponentMemory/g' "$INPUT_FILE"
sed -i 's/FUN_180742070/InitializeUIComponentSystem/g' "$INPUT_FILE"
sed -i 's/FUN_18076bcd0/ConfigureUIComponentData/g' "$INPUT_FILE"

# 美化变量名
sed -i 's/allocatedMemory/allocatedUIComponentMemory/g' "$INPUT_FILE"
sed -i 's/semaphoreHandle/uiSemaphoreHandle/g' "$INPUT_FILE"
sed -i 's/EventTypeCode/uiEventTypeCode/g' "$INPUT_FILE"
sed -i 's/pallocatedMemory/pAllocatedUIMemory/g' "$INPUT_FILE"
sed -i 's/componentIndex/uiComponentIndex/g' "$INPUT_FILE"

# 美化缓冲区变量名
sed -i 's/uiBufferData/uiContextBufferData/g' "$INPUT_FILE"

echo "UI系统函数美化完成"
echo "处理的文件: $INPUT_FILE"