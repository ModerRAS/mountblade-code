#!/bin/bash

# 批量替换99_unmatched_functions.c中的DAT_变量
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换系统配置相关变量
sed -i 's/undefined DAT_180a02638;/void* SystemStateData;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180a0263c;/void* SystemStateFlags;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180a02640;/void* SystemStateContext;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180a02644;/void* SystemStateProcessor;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180a02648;/void* SystemStateQueue;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180a0264c;/void* SystemStateHandler;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180a06430;/void* SystemStateController;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180c8a9b8;/void* MemoryAllocationTable;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180a02fe8;/void* MemoryPoolData;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180a035c0;/void* MemoryBufferPointer;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180a036e0;/void* MemoryAllocationStatus;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180c86970;/void* MemoryManagementData;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180a03870;/void* MemoryStackPointer;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180a038d8;/void* MemoryHeapData;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180a035d0;/void* MemoryAllocationTracker;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180c86978;/void* MemoryPageTable;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180c8695c;/void* MemorySegmentData;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180c86968;/void* MemoryAllocationMap;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180a03e88;/void* SystemDataTable;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180a03ec0;/void* SystemDataBuffer;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180a03f00;/void* SystemDataContext;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180a03f58;/void* SystemDataProcessor;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_18098d7b0;/void* SystemDataController;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180a00320;/void* SystemDataManager;/g' 99_unmatched_functions.c
sed -i 's/undefined DAT_180c8aa40;/void* NetworkConnectionTable;/g' 99_unmatched_functions.c

echo "DAT_变量替换完成"