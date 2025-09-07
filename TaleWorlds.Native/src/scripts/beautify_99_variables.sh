#!/bin/bash

# 变量名美化脚本 - 99_unmatched_functions.c
# 用于美化逆向生成的变量名

# 定义输入文件
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
TEMP_FILE="/tmp/99_unmatched_functions_temp.c"

# 创建临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 美化变量名替换规则
# 浮点数变量
sed -i 's/fVar[0-9]\+/FloatValue/g' "$TEMP_FILE"

# 整数变量
sed -i 's/iVar[0-9]\+/IntegerValue/g' "$TEMP_FILE"

# 布尔变量
sed -i 's/bVar[0-9]\+/BooleanValue/g' "$TEMP_FILE"

# 无符号变量
sed -i 's/uVar[0-9]\+/UnsignedValue/g' "$TEMP_FILE"

# 字符变量
sed -i 's/cVar[0-9]\+/CharValue/g' "$TEMP_FILE"

# 长整型变量
sed -i 's/lVar[0-9]\+/LongValue/g' "$TEMP_FILE"

# 栈变量
sed -i 's/Stack[0-9]\+/StackValue/g' "$TEMP_FILE"

# 参数变量
sed -i 's/param_[0-9]\+/Parameter/g' "$TEMP_FILE"

# 特殊变量名
sed -i 's/unaff_RBX/DataBufferRegister/g' "$TEMP_FILE"
sed -i 's/unaff_R14/SystemContextRegister/g' "$TEMP_FILE"
sed -i 's/unaff_RBP/StackFrameRegister/g' "$TEMP_FILE"
sed -i 's/unaff_RSI/StringRegister/g' "$TEMP_FILE"
sed -i 's/unaff_RDI/IndexRegister/g' "$TEMP_FILE"
sed -i 's/unaff_RSP/StackPointerRegister/g' "$TEMP_FILE"

# 输出缓冲区变量
sed -i 's/OutputBuffer/SystemOutputBuffer/g' "$TEMP_FILE"
sed -i 's/InputBuffer/SystemInputBuffer/g' "$TEMP_FILE"

# 寄存器上下文变量
sed -i 's/RegisterContext[0-9]*/SystemRegisterContext/g' "$TEMP_FILE"

# 字符编码相关变量
sed -i 's/CharacterCode/CharacterEncodingValue/g' "$TEMP_FILE"
sed -i 's/InputStringEnd/StringTerminator/g' "$TEMP_FILE"

# 内存分配相关变量
sed -i 's/MemoryAllocationResult/MemoryAllocationStatus/g' "$TEMP_FILE"
sed -i 's/SystemContext/SystemContextPointer/g' "$TEMP_FILE"

# 整数标志变量
sed -i 's/IntegerFlag/ProcessingFlag/g' "$TEMP_FILE"

# 应用更改
mv "$TEMP_FILE" "$INPUT_FILE"

echo "变量名美化完成"