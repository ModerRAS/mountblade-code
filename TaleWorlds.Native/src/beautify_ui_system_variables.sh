#!/bin/bash

# 美化04_ui_system.c文件中的变量名
# 这个脚本会替换文件中的Ghidra生成变量名为语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
TEMP_FILE="/tmp/ui_system_temp.c"

# 创建备份
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 美化变量名替换规则
sed -i 's/ptrLocal6/UIEventPointerArray/g' "$INPUT_FILE"
sed -i 's/BasePointer/StackFrameBasePointer/g' "$INPUT_FILE"
sed -i 's/localLong7/MemoryContextPointer/g' "$INPUT_FILE"
sed -i 's/pallocatedMemory/AllocatedMemoryPointer/g' "$INPUT_FILE"
sed -i 's/iStack0000000000000028/EventProcessingCounter/g' "$INPUT_FILE"
sed -i 's/iStack0000000000000044/UIContextStatus/g' "$INPUT_FILE"
sed -i 's/iStack0000000000000040/ProcessingResult/g' "$INPUT_FILE"
sed -i 's/stack0x00000040/ContextStackBuffer/g' "$INPUT_FILE"
sed -i 's/LAB_180787e12/EventProcessingCompleteLabel/g' "$INPUT_FILE"

# 替换UNK_变量
sed -i 's/UNK_18095acf0/UIEventDispatcherPointer/g' "$INPUT_FILE"
sed -i 's/UNK_18095ac80/UIEventHandlerTable/g' "$INPUT_FILE"

# 替换其他变量
sed -i 's/iterationCount/EventIterationCount/g' "$INPUT_FILE"
sed -i 's/EventTypeCode/EventTypeIdentifier/g' "$INPUT_FILE"
sed -i 's/ProcessingStatus/EventProcessingStatus/g' "$INPUT_FILE"
sed -i 's/pEventDataIndex/EventDataIndexArray/g' "$INPUT_FILE"
sed -i 's/eventProcessingStatus/EventFlags/g' "$INPUT_FILE"
sed -i 's/TargetHandle/UITargetHandle/g' "$INPUT_FILE"
sed -i 's/uiContext/UIContextPointer/g' "$INPUT_FILE"
sed -i 's/result0/OperationResult/g' "$INPUT_FILE"

echo "变量名美化完成"