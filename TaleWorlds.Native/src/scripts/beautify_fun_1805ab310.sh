#!/bin/bash

# 美化FUN_1805ab310函数的脚本
# 此脚本将对99_unmatched_functions.c文件中的FUN_1805ab310函数进行语义化处理

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
TEMP_FILE="/tmp/beautify_function.tmp"

# 创建函数美化的sed命令
cat > /tmp/sed_commands.sed << 'EOF'
# 替换函数名
s/^undefined8 \*FUN_1805ab310(undefined8 \*SystemBuffer,undefined8 \*InputStringPosition,undefined8 ContextEndPointer,undefined8 ProcessingFlags)/undefined8 *CopySystemBufferData(undefined8 *SystemBuffer, undefined8 *InputStringPosition, undefined8 ContextEndPointer, undefined8 ProcessingFlags)/

# 替换变量名
s/longlong \*ResourceLockPointerVar;/longlong *ResourceLockPointer;/g
s/longlong \*SystemContextPointer;/longlong *SystemContextPointer;/g
s/SystemDataDword Counter;/SystemDataDword DataCounter;/g
s/SystemDataDword RequiredSpace;/SystemDataDword BufferRequiredSpace;/g
s/SystemDataDword uVar5;/SystemDataDword AdditionalDataValue;/g
s/undefined8 AllocationSize;/undefined8 MemoryAllocationSize;/g

# 替换函数中的变量使用
s/ResourceLockPointerVar/ResourceLockPointer/g
s/SystemContextPointer/SystemContextPointer/g
s/Counter/DataCounter/g
s/RequiredSpace/BufferRequiredSpace/g
s/uVar5/AdditionalDataValue/g
s/AllocationSize/MemoryAllocationSize/g

# 替换函数调用
s/FUN_18017b480/CopySystemMemoryBlock/g
EOF

# 应用sed命令
sed -f /tmp/sed_commands.sed "$INPUT_FILE" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

# 清理临时文件
rm -f /tmp/sed_commands.sed

echo "函数FUN_1805ab310美化完成"