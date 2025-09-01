#!/bin/bash

# 美化06_utilities.c文件中的变量名
# 将简单的数字编号替换为有意义的名称

# 系统事件管理器插槽
sed -i 's/SystemEventManagerSlot01/SystemEventManagerInputSlot/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/SystemEventManagerSlot02/SystemEventManagerOutputSlot/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/SystemEventManagerSlot03/SystemEventManagerEventSlot/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/SystemEventManagerSlot04/SystemEventHandlerSlot/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/SystemEventManagerSlot05/SystemEventCallbackSlot/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 系统性能计数器
sed -i 's/SystemPerformanceCounter01/SystemFrameTimeCounter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/SystemPerformanceCounter02/SystemMemoryUsageCounter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/SystemPerformanceCounter03/SystemCpuUsageCounter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/SystemPerformanceCounter04/SystemGpuUsageCounter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/SystemPerformanceCounter05/SystemNetworkUsageCounter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 系统配置参数
sed -i 's/SystemConfigurationParameter01/SystemConfigResolutionWidth/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/SystemConfigurationParameter02/SystemConfigResolutionHeight/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/SystemConfigurationParameter03/SystemConfigRefreshRate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/SystemConfigurationParameter04/SystemConfigQualityLevel/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/SystemConfigurationParameter05/SystemConfigLanguage/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "变量名美化完成"