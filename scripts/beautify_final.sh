#!/bin/bash

# 美化99_unmatched_functions.c文件中的变量名
# 这是简化实现，主要处理剩余变量名的语义化替换

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 浮点指针变量
sed -i 's/pfVar[0-9]\+/system_float_ptr_temp/g' "$INPUT_FILE"

# 双精度变量
sed -i 's/dVar[0-9]\+/system_double_temp/g' "$INPUT_FILE"

# 双精度指针变量
sed -i 's/pdVar[0-9]\+/system_double_ptr_temp/g' "$INPUT_FILE"

# 字节数组变量
sed -i 's/auVar[0-9]\+/system_byte_array_temp/g' "$INPUT_FILE"

# 无符号指针指针变量
sed -i 's/ppuVar[0-9]\+/system_uint_ptr_ptr_temp/g' "$INPUT_FILE"

# 整数指针变量
sed -i 's/piVar[0-9]\+/system_int_ptr_temp/g' "$INPUT_FILE"

# 浮点栈变量 - 处理十六进制格式
sed -i 's/fStack[0-9a-fA-F]\+/system_float_stack_temp/g' "$INPUT_FILE"

echo "变量名美化完成"