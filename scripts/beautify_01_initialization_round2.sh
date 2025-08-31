#!/bin/bash

# 01_initialization.c 第二轮变量名美化脚本

# 替换 uVar 开头的变量
sed -i 's/uVar14/system_unsigned_long_var_14/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/uVar15/system_unsigned_int_var_15/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/uVar7/system_unsigned_byte_var_7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
sed -i 's/uVar12/system_unsigned_byte_var_12/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

echo "第二轮变量名美化完成"