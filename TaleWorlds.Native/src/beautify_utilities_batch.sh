#!/bin/bash

# 批量替换06_utilities.c中的变量名
# 替换内存管理相关的变量名

sed -i 's/undefined UNK_180a18870;/undefined MemoryPoolMetadata;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/undefined UNK_180a18898;/undefined MemoryUsageStatistics;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/undefined UNK_180a06b98;/undefined MemoryAllocationMetadata;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/undefined UNK_180a18880;/undefined MemoryPoolStatistics;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/undefined UNK_180a188a8;/undefined MemoryUsageMetadata;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/undefined UNK_180a188c0;/undefined MemoryAllocationStatistics;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/undefined UNK_180a188d8;/undefined MemoryPoolCounter;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/undefined UNK_180a188e0;/undefined MemoryUsageCounter;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/undefined UNK_180a188f8;/undefined MemoryAllocationCounter;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/undefined UNK_180a18908;/undefined MemoryPoolData;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "变量名替换完成"