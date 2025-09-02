#!/bin/bash

# 美化06_utilities.c文件中的变量名
# 去除"System"前缀，使变量名更简洁

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 创建备份
cp "$FILE" "$FILE.bak"

echo "开始修改变量名..."

# 修改变量声明处的名称
sed -i 's/uint8_t SystemHeapManager;/uint8_t HeapManager; \/\/ 堆管理器 - 用于管理系统堆内存分配/' "$FILE"
sed -i 's/uint8_t SystemStackManager;/uint8_t StackManager; \/\/ 栈管理器 - 用于管理系统栈内存操作/' "$FILE"
sed -i 's/uint8_t SystemGlobalData;/uint8_t GlobalData; \/\/ 全局数据 - 存储系统全局状态信息/' "$FILE"
sed -i 's/uint8_t SystemConfigurationData;/uint8_t ConfigurationData; \/\/ 配置数据 - 存储系统配置信息/' "$FILE"
sed -i 's/uint8_t SystemRuntimeData;/uint8_t RuntimeData; \/\/ 运行时数据 - 存储系统运行时状态/' "$FILE"
sed -i 's/uint8_t SystemCacheManager;/uint8_t CacheManager; \/\/ 缓存管理器 - 管理系统缓存机制/' "$FILE"
sed -i 's/uint8_t SystemDataBufferPool;/uint8_t DataBufferPool; \/\/ 数据缓冲池 - 管理数据缓冲区资源/' "$FILE"
sed -i 's/uint8_t SystemEventTable;/uint8_t EventTable; \/\/ 事件表 - 存储系统事件信息/' "$FILE"
sed -i 's/uint8_t SystemThreadManager;/uint8_t ThreadManager; \/\/ 线程管理器 - 管理系统线程生命周期/' "$FILE"
sed -i 's/uint8_t SystemProcessManager;/uint8_t ProcessManager; \/\/ 进程管理器 - 管理系统进程操作/' "$FILE"
sed -i 's/uint8_t SystemMemoryAllocator;/uint8_t MemoryAllocator; \/\/ 内存分配器 - 负责内存分配操作/' "$FILE"
sed -i 's/uint8_t SystemMemoryPool;/uint8_t MemoryPool; \/\/ 内存池 - 管理内存池资源/' "$FILE"
sed -i 's/uint8_t SystemTaskScheduler;/uint8_t TaskScheduler; \/\/ 任务调度器 - 负责任务调度执行/' "$FILE"
sed -i 's/uint8_t SystemResourcePool;/uint8_t ResourcePool; \/\/ 资源池 - 管理系统资源池/' "$FILE"
sed -i 's/uint8_t SystemDataManager;/uint8_t DataManager; \/\/ 数据管理器 - 管理系统数据操作/' "$FILE"
sed -i 's/uint8_t SystemDataBufferManager;/uint8_t DataBufferManager; \/\/ 数据缓冲管理器 - 管理数据缓冲区/' "$FILE"
sed -i 's/uint8_t SystemIoManager;/uint8_t IoManager; \/\/ IO管理器 - 管理系统输入输出操作/' "$FILE"
sed -i 's/uint8_t SystemFileHandler;/uint8_t FileHandler; \/\/ 文件处理器 - 处理文件相关操作/' "$FILE"

# 修改void*类型的变量声明
sed -i 's/void\* SystemMemoryAllocator;/void* MemoryAllocator; \/\/ 内存分配器指针/' "$FILE"
sed -i 's/void\* SystemMemoryPool;/void* MemoryPool; \/\/ 内存池指针/' "$FILE"

# 修改函数中的变量使用
sed -i 's/SystemHeapManager/HeapManager/g' "$FILE"
sed -i 's/SystemStackManager/StackManager/g' "$FILE"
sed -i 's/SystemGlobalData/GlobalData/g' "$FILE"
sed -i 's/SystemConfigurationData/ConfigurationData/g' "$FILE"
sed -i 's/SystemRuntimeData/RuntimeData/g' "$FILE"
sed -i 's/SystemCacheManager/CacheManager/g' "$FILE"
sed -i 's/SystemDataBufferPool/DataBufferPool/g' "$FILE"
sed -i 's/SystemEventTable/EventTable/g' "$FILE"
sed -i 's/SystemThreadManager/ThreadManager/g' "$FILE"
sed -i 's/SystemProcessManager/ProcessManager/g' "$FILE"
sed -i 's/SystemMemoryAllocator/MemoryAllocator/g' "$FILE"
sed -i 's/SystemMemoryPool/MemoryPool/g' "$FILE"
sed -i 's/SystemTaskScheduler/TaskScheduler/g' "$FILE"
sed -i 's/SystemResourcePool/ResourcePool/g' "$FILE"
sed -i 's/SystemDataManager/DataManager/g' "$FILE"
sed -i 's/SystemDataBufferManager/DataBufferManager/g' "$FILE"
sed -i 's/SystemIoManager/IoManager/g' "$FILE"
sed -i 's/SystemFileHandler/FileHandler/g' "$FILE"

echo "变量名修改完成！"
echo "修改摘要："
echo "- SystemHeapManager -> HeapManager"
echo "- SystemStackManager -> StackManager"
echo "- SystemGlobalData -> GlobalData"
echo "- SystemConfigurationData -> ConfigurationData"
echo "- SystemRuntimeData -> RuntimeData"
echo "- SystemCacheManager -> CacheManager"
echo "- SystemDataBufferPool -> DataBufferPool"
echo "- SystemEventTable -> EventTable"
echo "- SystemThreadManager -> ThreadManager"
echo "- SystemProcessManager -> ProcessManager"
echo "- SystemMemoryAllocator -> MemoryAllocator"
echo "- SystemMemoryPool -> MemoryPool"
echo "- SystemTaskScheduler -> TaskScheduler"
echo "- SystemResourcePool -> ResourcePool"
echo "- SystemDataManager -> DataManager"
echo "- SystemDataBufferManager -> DataBufferManager"
echo "- SystemIoManager -> IoManager"
echo "- SystemFileHandler -> FileHandler"