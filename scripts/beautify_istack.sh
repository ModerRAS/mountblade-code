#!/bin/bash

# 美化99_unmatched_functions.c文件中的栈变量名
# 将iStack系列变量名替换为语义化名称

INPUT_FILE="TaleWorlds.Native/src/99_unmatched_functions.c"

# 进入正确的目录
cd /dev/shm/mountblade-code

echo "开始美化栈变量名..."

# 将iStack变量名替换为语义化名称
sed -i 's/iStack0000000000000054/system_stack_int_54/g' "$INPUT_FILE"
sed -i 's/iStack0000000000000108/system_stack_int_108/g' "$INPUT_FILE"
sed -i 's/iStack0000000000000044/system_stack_int_44/g' "$INPUT_FILE"
sed -i 's/iStack0000000000000030/system_stack_int_30/g' "$INPUT_FILE"
sed -i 's/iStack0000000000000034/system_stack_int_34/g' "$INPUT_FILE"
sed -i 's/iStack0000000000000038/system_stack_int_38/g' "$INPUT_FILE"
sed -i 's/iStack000000000000003c/system_stack_int_3c/g' "$INPUT_FILE"

echo "栈变量名美化完成！"