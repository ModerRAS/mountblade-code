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

# 美化 astackUInt 变量
sed -i 's/astackUInt158/UIDataBuffer158/g' "$TEMP_FILE"
sed -i 's/astackUInt118/UIValidationBuffer118/g' "$TEMP_FILE"
sed -i 's/astackUInt168/UIRenderBuffer168/g' "$TEMP_FILE"
sed -i 's/astackUInt178/UILayoutParameter178/g' "$TEMP_FILE"
sed -i 's/astackUInt278/UIComponentContext278/g' "$TEMP_FILE"
sed -i 's/astackUInt1a8/UIEventContext1A8/g' "$TEMP_FILE"
sed -i 's/astackUIntf8/UITransformFactorF8/g' "$TEMP_FILE"
sed -i 's/astackUInt48/UIAnimationState48/g' "$TEMP_FILE"
sed -i 's/astackUInta8/UIComponentA8/g' "$TEMP_FILE"
sed -i 's/astackUInt6a8/UIDataBuffer6A8/g' "$TEMP_FILE"
sed -i 's/astackUInt728/UIRenderBuffer728/g' "$TEMP_FILE"

# 美化 pstackUInt 变量
sed -i 's/pstackUInt138/UIValidationBufferPtr138/g' "$TEMP_FILE"
sed -i 's/pstackUInt180/UIStringFormatPtr180/g' "$TEMP_FILE"
sed -i 's/pstackUInt178/UIRenderBufferPtr178/g' "$TEMP_FILE"
sed -i 's/pstackUInt30/UIPrimaryBufferPtr30/g' "$TEMP_FILE"
sed -i 's/pstackUInt50/UISecondaryBufferPtr50/g' "$TEMP_FILE"
sed -i 's/pstackUInt98/UIPrimaryBufferPtr98/g' "$TEMP_FILE"
sed -i 's/pstackUInt90/UINullBufferPtr90/g' "$TEMP_FILE"
sed -i 's/pstackUIntb8/UIPrimaryBufferPtrB8/g' "$TEMP_FILE"

# 美化 stackUInt 变量
sed -i 's/stackUInt120/UIStackParameter120/g' "$TEMP_FILE"
sed -i 's/stackUInt18/UIStackEncryptionKey18/g' "$TEMP_FILE"
sed -i 's/stackUInt170/UIStackCounter170/g' "$TEMP_FILE"
sed -i 's/stackUInt298/UIStackStatus298/g' "$TEMP_FILE"
sed -i 's/stackUInt38/UIStackCounter38/g' "$TEMP_FILE"
sed -i 's/stackUInt80/UIStackValue80/g' "$TEMP_FILE"
sed -i 's/stackUInta0/UIStackValueA0/g' "$TEMP_FILE"

# 美化其他变量
sed -i 's/processingResult/UIProcessingResult/g' "$TEMP_FILE"
sed -i 's/uiValidationResult/UIValidationResult/g' "$TEMP_FILE"
sed -i 's/uiCompareResult/UICompareResult/g' "$TEMP_FILE"
sed -i 's/operationResult/UIOperationResult/g' "$TEMP_FILE"
sed -i 's/dataValidationResult/UIDataValidationResult/g' "$TEMP_FILE"
sed -i 's/bufferCompareResult/UIBufferCompareResult/g' "$TEMP_FILE"
sed -i 's/RenderContextSize/UIRenderContextSize/g' "$TEMP_FILE"
sed -i 's/XorEncryptionKey/UIXorEncryptionKey/g' "$TEMP_FILE"
sed -i 's/GlobalUIResourceManagerF0/UIGlobalResourceManagerF0/g' "$TEMP_FILE"
sed -i 's/UIContextFontRenderer/UIFontRendererContext/g' "$TEMP_FILE"
sed -i 's/UIBufferControlData/UIControlDataBuffer/g' "$TEMP_FILE"
sed -i 's/PrimaryUIBuffer/UIPrimaryDataBuffer/g' "$TEMP_FILE"
sed -i 's/SecondaryUIBuffer/UISecondaryDataBuffer/g' "$TEMP_FILE"
sed -i 's/UIStringFormatTemplate/UIFormatTemplate/g' "$TEMP_FILE"
sed -i 's/uiStatusPointer/UIStatusPointer/g' "$TEMP_FILE"

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