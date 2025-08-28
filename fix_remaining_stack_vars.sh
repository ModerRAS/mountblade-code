#!/bin/bash

# 修复剩余栈变量名脚本

cd /root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/pretty

# 修复剩余的栈变量名
sed -i 's/in_stack_000000b0/local_buffer_b0/g' 06_utilities_part022.c
sed -i 's/in_stack_000000b8/local_buffer_b8/g' 06_utilities_part022.c
sed -i 's/uStack00000000000000b8/local_buffer_b8/g' 06_utilities_part022.c

echo "剩余栈变量名修复完成"