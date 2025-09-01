#!/bin/bash

# 美化网络文件中的变量名
# 将栈变量名改为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 05_networking.c 05_networking.c.backup

# 基本栈变量替换
sed -i 's/lStack_\([0-9a-fA-F]\+\)/LocalStackVariable\1/g' 05_networking.c
sed -i 's/uStack_\([0-9a-fA-F]\+\)/UnsignedStackVariable\1/g' 05_networking.c
sed -i 's/pStack_\([0-9a-fA-F]\+\)/PointerStackVariable\1/g' 05_networking.c
sed -i 's/plStack_\([0-9a-fA-F]\+\)/PointerLongStackVariable\1/g' 05_networking.c
sed -i 's/puStack_\([0-9a-fA-F]\+\)/PointerUnsignedStackVariable\1/g' 05_networking.c
sed -i 's/iStack_\([0-9a-fA-F]\+\)/IntegerStackVariable\1/g' 05_networking.c

# 特定变量替换
sed -i 's/dVar\([0-9]\+\)/DoubleVariable\1/g' 05_networking.c
sed -i 's/iVar\([0-9]\+\)/IntegerVariable\1/g' 05_networking.c
sed -i 's/uVar\([0-9]\+\)/UnsignedVariable\1/g' 05_networking.c
sed -i 's/bVar\([0-9]\+\)/BooleanVariable\1/g' 05_networking.c
sed -i 's/sVar\([0-9]\+\)/ShortVariable\1/g' 05_networking.c

echo "变量名美化完成"