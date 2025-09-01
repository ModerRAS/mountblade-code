#!/bin/bash

# 批量替换01_initialization.c中的FUN_函数为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 01_initialization.c 01_initialization.c.backup

# 批量替换FUN_函数
sed -i 's/FUN_1800432d0/SystemThreadManagerInitializer/g' 01_initialization.c
sed -i 's/FUN_1800433d0/SystemResourceTrackerInitializer/g' 01_initialization.c
sed -i 's/FUN_1800434d0/SystemPerformanceMonitorInitializer/g' 01_initialization.c
sed -i 's/FUN_180043560/SystemSecurityManagerInitializer/g' 01_initialization.c
sed -i 's/FUN_180043690/SystemNetworkManagerInitializer/g' 01_initialization.c
sed -i 's/FUN_180044dc0/SystemConfigurationLoader/g' 01_initialization.c
sed -i 's/FUN_180045af0/SystemDataValidator/g' 01_initialization.c
sed -i 's/FUN_180045b20/SystemMemoryAllocator/g' 01_initialization.c
sed -i 's/FUN_180045ba0/SystemResourceLoader/g' 01_initialization.c
sed -i 's/FUN_180045bc1/SystemCleanupHandler/g' 01_initialization.c
sed -i 's/FUN_180045ea0/SystemMemoryManager/g' 01_initialization.c
sed -i 's/FUN_180045ee0/SystemMemoryDeallocator/g' 01_initialization.c
sed -i 's/FUN_180045f60/SystemResourceUnloader/g' 01_initialization.c
sed -i 's/FUN_180045f81/SystemShutdownHandler/g' 01_initialization.c
sed -i 's/FUN_180045fa6/SystemErrorHandler/g' 01_initialization.c
sed -i 's/FUN_180045fc0/SystemLogger/g' 01_initialization.c
sed -i 's/FUN_180046130/SystemDebugManager/g' 01_initialization.c
sed -i 's/FUN_180046160/SystemProfiler/g' 01_initialization.c
sed -i 's/FUN_180046400/SystemMemoryMapper/g' 01_initialization.c
sed -i 's/FUN_1800464f0/SystemCacheManager/g' 01_initialization.c
sed -i 's/FUN_180046650/SystemMemoryPool/g' 01_initialization.c
sed -i 's/FUN_1800466a0/SystemGarbageCollector/g' 01_initialization.c
sed -i 's/FUN_1800466d0/SystemMemoryReleaser/g' 01_initialization.c
sed -i 's/FUN_180046750/SystemMemoryCompactor/g' 01_initialization.c
sed -i 's/FUN_180046790/SystemMemoryOptimizer/g' 01_initialization.c
sed -i 's/FUN_180046820/SystemMemoryBalancer/g' 01_initialization.c
sed -i 's/FUN_180046840/SystemMemoryDefragmenter/g' 01_initialization.c
sed -i 's/FUN_180046860/SystemMemoryValidator/g' 01_initialization.c
sed -i 's/FUN_180046890/SystemMemoryChecker/g' 01_initialization.c
sed -i 's/FUN_180046b10/SystemMemoryHandler/g' 01_initialization.c
sed -i 's/FUN_180046b80/SystemMemoryCalculator/g' 01_initialization.c
sed -i 's/FUN_180046ca0/SystemMemoryCoordinator/g' 01_initialization.c

echo "批量替换完成"