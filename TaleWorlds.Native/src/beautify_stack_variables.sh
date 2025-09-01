#!/bin/bash

# 美化栈变量名的脚本
# 将 uStack_Xxx 格式的变量名改为更语义化的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 处理常见的栈变量模式
sed -i 's/uStack_\([0-9a-fA-F]\+\)/StackOffset\1/g' 03_rendering.c
sed -i 's/fStack_\([0-9a-fA-F]\+\)/FloatStackOffset\1/g' 03_rendering.c
sed -i 's/iStack_\([0-9a-fA-F]\+\)/IntStackOffset\1/g' 03_rendering.c
sed -i 's/lStack_\([0-9a-fA-F]\+\)/LongStackOffset\1/g' 03_rendering.c
sed -i 's/puStack_\([0-9a-fA-F]\+\)/PtrStackOffset\1/g' 03_rendering.c
sed -i 's/auStack_\([0-9a-fA-F]\+\)/ArrayStackOffset\1/g' 03_rendering.c

# 处理一些特殊的变量命名
sed -i 's/fVar\([0-9]\+\)/FloatValue\1/g' 03_rendering.c
sed -i 's/uVar\([0-9]\+\)/UintValue\1/g' 03_rendering.c
sed -i 's/iVar\([0-9]\+\)/IntValue\1/g' 03_rendering.c
sed -i 's/lVar\([0-9]\+\)/LongValue\1/g' 03_rendering.c
sed -i 's/pVar\([0-9]\+\)/PtrValue\1/g' 03_rendering.c

echo "栈变量美化完成"