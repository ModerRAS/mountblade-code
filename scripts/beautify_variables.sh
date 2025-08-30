#!/bin/bash

# 创建变量名美化脚本
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 01_initialization.c 01_initialization.c.backup_before_var_beautify

# 美化栈指针变量名
sed -i 's/system_longlong_pointer_stack_8/system_longlong_pointer_stack_primary/g' 01_initialization.c
sed -i 's/system_longlong_pointer_pointer_stack_10/system_longlong_pointer_pointer_stack_secondary/g' 01_initialization.c
sed -i 's/system_longlong_pointer_stack_18/system_longlong_pointer_stack_tertiary/g' 01_initialization.c
sed -i 's/system_longlong_pointer_stack_20/system_longlong_pointer_stack_quaternary/g' 01_initialization.c

echo "变量名美化完成"