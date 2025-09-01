#!/bin/bash

# 美化06_utilities.c中的变量名
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 重命名DAT_变量
sed -i 's/undefined DAT_180bf99a0;/void* MemoryMappingDescriptor;/g' 06_utilities.c
sed -i 's/undefined DAT_180bf99a8;/void* MemoryMappingHandle;/g' 06_utilities.c
sed -i 's/undefined DAT_180bf99f0;/void* MemoryMappingTable;/g' 06_utilities.c
sed -i 's/undefined DAT_180bf99f8;/void* MemoryMappingStatus;/g' 06_utilities.c
sed -i 's/undefined DAT_180bf9a00;/void* MemoryMappingConfig;/g' 06_utilities.c
sed -i 's/undefined DAT_180bf9a08;/void* MemoryMappingBuffer;/g' 06_utilities.c

# 更新引用
sed -i 's/_DAT_180bf99f0/MemoryMappingTable/g' 06_utilities.c

echo "变量重命名完成"