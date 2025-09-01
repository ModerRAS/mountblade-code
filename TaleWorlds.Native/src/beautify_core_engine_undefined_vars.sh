#!/bin/bash

# 批量替换02_core_engine.c中的undefined类型变量
# 将undefined类型替换为适当的类型

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 02_core_engine.c 02_core_engine.c.backup_$(date +%Y%m%d_%H%M%S)

echo "开始替换undefined类型变量..."

# 第一批：替换基本的undefined变量为void*
sed -i 's/undefined UnknownMemoryRegion30;/void* SystemMemoryRegion30;/g' 02_core_engine.c
sed -i 's/undefined UnknownMemoryRegion80;/void* SystemMemoryRegion80;/g' 02_core_engine.c
sed -i 's/undefined SystemConfigurationDataB0;/void* SystemConfigurationDataB0;/g' 02_core_engine.c
sed -i 's/undefined SystemConfigurationDataA8;/void* SystemConfigurationDataA8;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryPool;/void* SystemMemoryPool;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryHeap;/void* SystemMemoryHeap;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryStack;/void* SystemMemoryStack;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryCache;/void* SystemMemoryCache;/g' 02_core_engine.c
sed -i 's/undefined UnknownMemoryRegion68;/void* SystemMemoryRegion68;/g' 02_core_engine.c
sed -i 's/undefined UnknownMemoryRegionC8;/void* SystemMemoryRegionC8;/g' 02_core_engine.c
sed -i 's/undefined UnknownMemoryRegionF0;/void* SystemMemoryRegionF0;/g' 02_core_engine.c
sed -i 's/undefined UnknownMemoryRegion10;/void* SystemMemoryRegion10;/g' 02_core_engine.c
sed -i 's/undefined UnknownMemoryRegion60;/void* SystemMemoryRegion60;/g' 02_core_engine.c
sed -i 's/undefined UnknownMemoryRegionA8;/void* SystemMemoryRegionA8;/g' 02_core_engine.c

# 第二批：替换系统内存管理相关变量
sed -i 's/undefined SystemMemoryManager;/void* SystemMemoryManager;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryAllocator;/void* SystemMemoryAllocator;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryDeallocator;/void* SystemMemoryDeallocator;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryGarbageCollector;/void* SystemMemoryGarbageCollector;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryTracker;/void* SystemMemoryTracker;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryProfiler;/void* SystemMemoryProfiler;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryDebugger;/void* SystemMemoryDebugger;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryMonitor;/void* SystemMemoryMonitor;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryOptimizer;/void* SystemMemoryOptimizer;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryCompactor;/void* SystemMemoryCompactor;/g' 02_core_engine.c

# 第三批：替换更多系统内存管理变量
sed -i 's/undefined SystemMemoryValidator;/void* SystemMemoryValidator;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryChecker;/void* SystemMemoryChecker;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryCleaner;/void* SystemMemoryCleaner;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryFlusher;/void* SystemMemoryFlusher;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryResetter;/void* SystemMemoryResetter;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryConfigurator;/void* SystemMemoryConfigurator;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryPartitioner;/void* SystemMemoryPartitioner;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryMapper;/void* SystemMemoryMapper;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryUnmapper;/void* SystemMemoryUnmapper;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryProtector;/void* SystemMemoryProtector;/g' 02_core_engine.c

# 第四批：替换系统内存管理的高级变量
sed -i 's/undefined SystemMemoryGuardian;/void* SystemMemoryGuardian;/g' 02_core_engine.c
sed -i 's/undefined SystemMemorySentinel;/void* SystemMemorySentinel;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryController;/void* SystemMemoryController;/g' 02_core_engine.c
sed -i 's/undefined SystemMemorySupervisor;/void* SystemMemorySupervisor;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryAdministrator;/void* SystemMemoryAdministrator;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryOperator;/void* SystemMemoryOperator;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryExecutor;/void* SystemMemoryExecutor;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryScheduler;/void* SystemMemoryScheduler;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryDispatcher;/void* SystemMemoryDispatcher;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryHandler;/void* SystemMemoryHandler;/g' 02_core_engine.c

# 第五批：替换系统内存管理的线程和任务相关变量
sed -i 's/undefined SystemMemoryProcessor;/void* SystemMemoryProcessor;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryWorker;/void* SystemMemoryWorker;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryThread;/void* SystemMemoryThread;/g' 02_core_engine.c
sed -i 's/undefined SystemMemoryTask;/void* SystemMemoryTask;/g' 02_core_engine.c
sed -i 's/undefined UnknownMemoryRegion58;/void* SystemMemoryRegion58;/g' 02_core_engine.c
sed -i 's/undefined UnknownMemoryRegion90;/void* SystemMemoryRegion90;/g' 02_core_engine.c
sed -i 's/undefined NetworkPacketHeaderData;/void* NetworkPacketHeaderData;/g' 02_core_engine.c
sed -i 's/undefined UnknownMemoryRegionE0;/void* SystemMemoryRegionE0;/g' 02_core_engine.c

echo "第一批undefined变量替换完成"
echo "请检查文件后继续下一批处理"