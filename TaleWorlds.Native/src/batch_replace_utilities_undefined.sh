#!/bin/bash

# 批量替换undefined变量为合适的类型

# 替换SystemDataBuffer变量 (void*)
for i in {076..149}; do
    sed -i "s/undefined SystemDataBuffer$i;/void* SystemDataBuffer$i;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
done

# 替换内存相关变量 (void*)
sed -i "s/undefined g_memoryValidationContext;/void* g_memoryValidationContext;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i "s/undefined g_memoryValidationTable;/void* g_memoryValidationTable;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i "s/undefined g_memoryValidationStatus;/uint32_t g_memoryValidationStatus;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i "s/undefined g_memoryValidationConfig;/void* g_memoryValidationConfig;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i "s/undefined g_memoryValidationHandle;/void* g_memoryValidationHandle;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 替换内存分配相关变量
sed -i "s/undefined g_memoryAllocationContext;/void* g_memoryAllocationContext;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i "s/undefined g_memoryAllocationTable;/void* g_memoryAllocationTable;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i "s/undefined g_memoryAllocationStatus;/uint32_t g_memoryAllocationStatus;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i "s/undefined g_memoryAllocationConfig;/void* g_memoryAllocationConfig;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i "s/undefined g_memoryAllocationHandle;/void* g_memoryAllocationHandle;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i "s/undefined g_memoryAllocationData;/void* g_memoryAllocationData;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 替换系统缓冲区变量
sed -i "s/undefined SystemMemoryBufferA;/void* SystemMemoryBufferA;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i "s/undefined SystemMemoryBufferB;/void* SystemMemoryBufferB;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i "s/undefined SystemMemoryBufferC;/void* SystemMemoryBufferC;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i "s/undefined SystemMemoryBufferD;/void* SystemMemoryBufferD;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "批量替换完成"