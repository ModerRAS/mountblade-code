#!/bin/bash
# 美化网络模块栈变量名的脚本

# 输入文件路径
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
TEMP_FILE="/tmp/05_networking_temp.c"

# 创建临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 美化栈变量名
sed -i 's/in_stack_fffffffffffffe78/StackParameterBufferE78/g' "$TEMP_FILE"
sed -i 's/in_stack_fffffffffffffe80/StackParameterBufferE80/g' "$TEMP_FILE"
sed -i 's/in_stack_fffffffffffffe88/StackParameterBufferE88/g' "$TEMP_FILE"
sed -i 's/in_stack_ffffffffffffff08/StackParameterBufferF08/g' "$TEMP_FILE"
sed -i 's/in_stack_ffffffffffffff88/StackParameterBufferF88/g' "$TEMP_FILE"
sed -i 's/in_stack_ffffffffffffff90/StackParameterBufferF90/g' "$TEMP_FILE"
sed -i 's/in_stack_ffffffffffffff98/StackParameterBufferF98/g' "$TEMP_FILE"
sed -i 's/in_stack_ffffffffffffffa0/StackParameterBufferFA0/g' "$TEMP_FILE"
sed -i 's/in_stack_ffffffffffffffb8/StackParameterBufferFB8/g' "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "栈变量名美化完成"