#!/bin/bash

# 美化变量名脚本
# 将一些常见的逆向变量名替换为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换栈相关变量名
sed -i 's/auStack_\([0-9a-fA-F]\+\)/StackBuffer\1/g' 02_core_engine.c
sed -i 's/aStack_\([0-9a-fA-F]\+\)/StackVariable\1/g' 02_core_engine.c
sed -i 's/lStack_\([0-9a-fA-F]\+\)/StackOffset\1/g' 02_core_engine.c
sed -i 's/plStack_\([0-9a-fA-F]\+\)/StackPointer\1/g' 02_core_engine.c
sed -i 's/uStack_\([0-9a-fA-F]\+\)/StackValue\1/g' 02_core_engine.c
sed -i 's/pcStack_\([0-9a-fA-F]\+\)/ProgramCounter\1/g' 02_core_engine.c

# 替换系统相关变量名
sed -i 's/aSystem\([0-9a-fA-F_]\+\)/System\1/g' 02_core_engine.c
sed -i 's/aBuffer\([0-9a-fA-F_]\+\)/Buffer\1/g' 02_core_engine.c

# 替换数据相关变量名
sed -i 's/aData\([0-9a-fA-F_]\+\)/Data\1/g' 02_core_engine.c

echo "变量名美化完成"