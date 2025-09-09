#!/bin/bash

# 批量美化脚本 - 用于美化剩余的变量名和函数名
# 这个脚本会搜索并替换一些常见的逆向工程生成的变量名

echo "开始批量美化变量名..."

# 美化常见的变量模式
echo "美化浮点寄存器变量..."
sed -i 's/unaff_XMM[0-9]_[0-9A-Fa-f]*/FloatRegister/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

echo "美化通用寄存器变量..."
sed -i 's/unaff_[ER][ABCD]X[0-9]*/GeneralRegister/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

echo "美化栈变量..."
sed -i 's/stack_[0-9a-fA-F]*/StackVariable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

echo "美化临时变量..."
sed -i 's/temp_[0-9a-fA-F]*/TemporaryVariable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

echo "批量美化完成！"