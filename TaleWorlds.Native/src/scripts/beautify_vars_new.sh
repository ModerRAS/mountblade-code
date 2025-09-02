#!/bin/bash

# 变量名替换脚本
# 用于美化02_core_engine.c文件中的变量名

# 首先备份原始文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.backup

# 替换常见变量命名模式
sed -i 's/bool bVar\([0-9]\+\)/bool isFlag\1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/byte bVar\([0-9]\+\)/byte byteValue\1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/char cVar\([0-9]\+\)/char charValue\1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/float fVar\([0-9]\+\)/float floatValue\1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/double dVar\([0-9]\+\)/double doubleValue\1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/short sVar\([0-9]\+\)/short shortValue\1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/uint uVar\([0-9]\+\)/uint uintValue\1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/void\* pvVar\([0-9]\+\)/void* pointerValue\1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/void\*\* ppvVar\([0-9]\+\)/void** pointerPointer\1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/long long llVar\([0-9]\+\)/long long longLongValue\1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/int iVar\([0-9]\+\)/int intValue\1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 处理一些特殊情况（如 iVar[0-9] 在某些情况下）
sed -i 's/iVar\([0-9]\+\)/intValue\1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

echo "变量名替换完成"