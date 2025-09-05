#!/bin/bash

# 美化06_utilities.c文件中的变量名
# 将十六进制地址变量名替换为有意义的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 06_utilities.c 06_utilities.c.backup

# 定义替换规则
# 栈变量替换
sed -i 's/stack0x00000000/StackBufferBase/g' 06_utilities.c
sed -i 's/stack0x00000030/StackBuffer30/g' 06_utilities.c
sed -i 's/stack0x00000040/StackBuffer40/g' 06_utilities.c
sed -i 's/stack0x00000048/StackBuffer48/g' 06_utilities.c
sed -i 's/stack0x00000070/StackBuffer70/g' 06_utilities.c
sed -i 's/stack0x00000080/StackBuffer80/g' 06_utilities.c
sed -i 's/stack0x000000b8/StackBufferB8/g' 06_utilities.c
sed -i 's/stack0x00000020/StackBuffer20/g' 06_utilities.c
sed -i 's/stack0x00000028/StackBuffer28/g' 06_utilities.c
sed -i 's/stack0x00000094/StackBuffer94/g' 06_utilities.c

# 输入参数变量替换
sed -i 's/in_stack_00000028/InputParam28/g' 06_utilities.c
sed -i 's/in_stack_00000030/InputParam30/g' 06_utilities.c
sed -i 's/in_stack_00000038/InputParam38/g' 06_utilities.c
sed -i 's/in_stack_00000040/InputParam40/g' 06_utilities.c
sed -i 's/in_stack_00000048/InputParam48/g' 06_utilities.c
sed -i 's/in_stack_00000050/InputParam50/g' 06_utilities.c
sed -i 's/in_stack_00000058/InputParam58/g' 06_utilities.c
sed -i 's/in_stack_00000060/InputParam60/g' 06_utilities.c
sed -i 's/in_stack_00000068/InputParam68/g' 06_utilities.c
sed -i 's/in_stack_00000070/InputParam70/g' 06_utilities.c
sed -i 's/in_stack_00000078/InputParam78/g' 06_utilities.c
sed -i 's/in_stack_00000090/InputParam90/g' 06_utilities.c
sed -i 's/in_stack_000000a0/InputParamA0/g' 06_utilities.c
sed -i 's/in_stack_000000b0/InputParamB0/g' 06_utilities.c
sed -i 's/in_stack_000000c0/InputParamC0/g' 06_utilities.c
sed -i 's/in_stack_00000220/InputParam220/g' 06_utilities.c

# 浮点栈变量替换
sed -i 's/fStack0000000000000040/FloatStack40/g' 06_utilities.c
sed -i 's/fStack0000000000000044/FloatStack44/g' 06_utilities.c
sed -i 's/fStack0000000000000048/FloatStack48/g' 06_utilities.c
sed -i 's/fStack000000000000004c/FloatStack4c/g' 06_utilities.c

# 无符号栈变量替换
sed -i 's/uStack0000000000000028/UIntStack28/g' 06_utilities.c
sed -i 's/uStack0000000000000034/UIntStack34/g' 06_utilities.c
sed -i 's/uStack0000000000000040/UIntStack40/g' 06_utilities.c
sed -i 's/uStack0000000000000058/UIntStack58/g' 06_utilities.c
sed -i 's/uStack0000000000000068/UIntStack68/g' 06_utilities.c
sed -i 's/uStack0000000000000070/UIntStack70/g' 06_utilities.c

# 长整型栈变量替换
sed -i 's/lStack0000000000000060/LongStack60/g' 06_utilities.c

echo "变量名美化完成"