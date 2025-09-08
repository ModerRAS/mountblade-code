#!/bin/bash

# 批量美化99_unmatched_functions.c中的变量名
# 该脚本将自动生成的变量名替换为语义化的名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 浮点变量名替换
sed -i 's/\bfVar[0-9]\+\b/FloatValue/g' "$FILE_PATH"

# 整数变量名替换
sed -i 's/\biVar[0-9]\+\b/IntegerValue/g' "$FILE_PATH"

# 无符号整数变量名替换
sed -i 's/\buVar[0-9]\+\b/UnsignedValue/g' "$FILE_PATH"

# 栈变量名替换
sed -i 's/\biStack_[0-9a-f]\+\b/StackInteger/g' "$FILE_PATH"
sed -i 's/\buStack_[0-9a-f]\+\b/StackUnsigned/g' "$FILE_PATH"
sed -i 's/\bpuStack_[0-9a-f]\+\b/StackPointer/g' "$FILE_PATH"
sed -i 's/\blStack_[0-9a-f]\+\b/StackLong/g' "$FILE_PATH"

# 局部变量名替换
sed -i 's/\blocal_[0-9]\+\b/LocalVariable/g' "$FILE_PATH"

# 特殊变量名替换
sed -i 's/\bunaff_RBP\>/FramePointer/g' "$FILE_PATH"
sed -i 's/\bunaff_R[0-9A-Z]\+\>/Register/g' "$FILE_PATH"

echo "变量名批量替换完成"