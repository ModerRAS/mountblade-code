#!/bin/bash

# 美化06_utilities.c文件中的undefined变量
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 处理SystemDataBuffer[0-9]+变量
for i in {72..129}; do
    num=$(printf "%03d" $i)
    sed -i "s/undefined SystemDataBuffer${num};/void* SystemDataBufferPool${i};/g" 06_utilities.c
done

# 处理其他undefined变量
sed -i 's/undefined SystemConfigDataTable;/void* SystemConfigurationDataTable;/g' 06_utilities.c
sed -i 's/undefined SystemMemoryStatusTable;/void* SystemMemoryStatusTable;/g' 06_utilities.c
sed -i 's/undefined SystemThreadControlTable;/void* SystemThreadControlTable;/g' 06_utilities.c
sed -i 's/undefined SystemEventQueueTable;/void* SystemEventQueueTable;/g' 06_utilities.c
sed -i 's/undefined SystemMessageBufferTable;/void* SystemMessageBufferTable;/g' 06_utilities.c
sed -i 's/undefined SystemResourceAllocationTable;/void* SystemResourceAllocationTable;/g' 06_utilities.c
sed -i 's/undefined SystemPerformanceMetricsTable;/void* SystemPerformanceMetricsTable;/g' 06_utilities.c
sed -i 's/undefined SystemNetworkStatusTable;/void* SystemNetworkStatusTable;/g' 06_utilities.c
sed -i 's/undefined SystemGraphicsStateTable;/void* SystemGraphicsStateTable;/g' 06_utilities.c
sed -i 's/undefined SystemAudioSettingsTable;/void* SystemAudioSettingsTable;/g' 06_utilities.c
sed -i 's/undefined SystemInputStateTable;/void* SystemInputStateTable;/g' 06_utilities.c
sed -i 's/undefined SystemPhysicsDataTable;/void* SystemPhysicsDataTable;/g' 06_utilities.c
sed -i 's/undefined SystemAnimationStateTable;/void* SystemAnimationStateTable;/g' 06_utilities.c
sed -i 's/undefined SystemScriptingContextTable;/void* SystemScriptingContextTable;/g' 06_utilities.c
sed -i 's/undefined SystemFileSystemTable;/void* SystemFileSystemTable;/g' 06_utilities.c

echo "变量美化完成"