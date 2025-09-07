#!/bin/bash

# 美化UI系统文件的变量名
# 处理常见的Ghidra逆向变量名模式

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
TEMP_FILE="/tmp/ui_system_beautified.c"

# 创建临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 美化变量名 - 将数字后缀的变量名改为语义化名称
sed -i 's/localInt[0-9]*/localIntValue/g' "$TEMP_FILE"
sed -i 's/localFloat[0-9]*/localFloatValue/g' "$TEMP_FILE"
sed -i 's/localLong[0-9]*/localLongValue/g' "$TEMP_FILE"
sed -i 's/allocatedMemory[0-9]*/allocatedMemoryBlock/g' "$TEMP_FILE"
sed -i 's/result[0-9]*/operationResult/g' "$TEMP_FILE"
sed -i 's/uVar[0-9]*/unsignedValue/g' "$TEMP_FILE"
sed -i 's/iVar[0-9]*/integerValue/g' "$TEMP_FILE"
sed -i 's/bVar[0-9]*/booleanValue/g' "$TEMP_FILE"
sed -i 's/sVar[0-9]*/shortValue/g' "$TEMP_FILE"
sed -i 's/p[al][a-zA-Z]*[0-9]*/pointerValue/g' "$TEMP_FILE"

# 美化栈变量
sed -i 's/iStack[0-9a-fA-F]*/stackInteger/g' "$TEMP_FILE"
sed -i 's/lStack[0-9a-fA-F]*/stackLong/g' "$TEMP_FILE"
sed -i 's/cStack[0-9a-fA-F]*/stackChar/g' "$TEMP_FILE"
sed -i 's/in_stack_[0-9a-fA-F]*/stackParameter/g' "$TEMP_FILE"

# 美化函数名 - 保留已定义的宏，只美化未定义的FUN_函数
sed -i 's/FUN_180705180/ProcessUIDataWriteInternal/g' "$TEMP_FILE"
sed -i 's/FUN_180705210/InitializeUIContextInternal/g' "$TEMP_FILE"
sed -i 's/FUN_1807054a0/ProcessUIDataReadInternal/g' "$TEMP_FILE"
sed -i 's/FUN_180705530/UpdateUIStateInternal/g' "$TEMP_FILE"
sed -i 's/FUN_180705545/ProcessUIBufferOperationInternal/g' "$TEMP_FILE"
sed -i 's/FUN_180705616/ValidateUISystemInternal/g' "$TEMP_FILE"
sed -i 's/FUN_1807056b0/GetUIDataInternal/g' "$TEMP_FILE"
sed -i 's/FUN_1807056f0/SetUIDataInternal/g' "$TEMP_FILE"

# 替换原始文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "UI系统文件变量名美化完成"