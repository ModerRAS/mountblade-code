#!/bin/bash

# 批量替换06_utilities.c文件中的undefined变量为void*类型

# 替换SystemDataBuffer变量
for i in {074..149}; do
    sed -i "s/undefined SystemDataBuffer$i;/void* SystemDataBuffer$i;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
done

# 替换其他系统配置表变量
sed -i "s/undefined SystemNetworkConfigTable;/void* SystemNetworkConfigTable;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i "s/undefined SystemSecurityConfigTable;/void* SystemSecurityConfigTable;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i "s/undefined SystemPerformanceConfigTable;/void* SystemPerformanceConfigTable;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i "s/undefined SystemLoggingConfigTable;/void* SystemLoggingConfigTable;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i "s/undefined SystemDebugConfigTable;/void* SystemDebugConfigTable;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i "s/undefined SystemMonitorConfigTable;/void* SystemMonitorConfigTable;/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "批量替换完成"