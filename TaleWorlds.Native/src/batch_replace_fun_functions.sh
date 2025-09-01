#!/bin/bash

# 批量替换FUN_函数为语义化名称的脚本

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建临时脚本文件
cat > batch_replace_fun_functions.sh << 'EOF'
#!/bin/bash

# 使用sed批量替换FUN_函数
sed -i 's/FUN_1802542a0/MemoryManagerInitializer/g' 99_unmatched_functions.c
sed -i 's/FUN_180254410/SystemConfigurationValidator/g' 99_unmatched_functions.c
sed -i 's/FUN_1801eb560/DataStreamProcessor/g' 99_unmatched_functions.c
sed -i 's/FUN_1801eb5a0/BufferManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1801e7680/ResourceLoader/g' 99_unmatched_functions.c
sed -i 's/FUN_1801cfcb0/NetworkConnectionHandler/g' 99_unmatched_functions.c
sed -i 's/FUN_1801cfcf0/SocketManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1801cfd30/PacketProcessor/g' 99_unmatched_functions.c
sed -i 's/FUN_1801cfe20/DataValidator/g' 99_unmatched_functions.c
sed -i 's/FUN_1801cfab0/AuthenticationHandler/g' 99_unmatched_functions.c
sed -i 's/FUN_1801cfb90/SecurityManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1801eb1e0/EncryptionEngine/g' 99_unmatched_functions.c
sed -i 's/FUN_1801ecb30/CompressionHandler/g' 99_unmatched_functions.c
sed -i 's/FUN_1801ecbb0/DecompressionEngine/g' 99_unmatched_functions.c
sed -i 's/FUN_1801eb0f0/ChecksumCalculator/g' 99_unmatched_functions.c
sed -i 's/FUN_1801deed0/FileSystemHandler/g' 99_unmatched_functions.c
sed -i 's/FUN_1801eb320/FileManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1801eb3d0/DirectoryScanner/g' 99_unmatched_functions.c
sed -i 's/FUN_1803f5b70/DatabaseConnector/g' 99_unmatched_functions.c
sed -i 's/FUN_1801f34f0/QueryExecutor/g' 99_unmatched_functions.c
sed -i 's/FUN_1801f9cf0/ResultProcessor/g' 99_unmatched_functions.c
sed -i 's/FUN_1801feca0/TransactionManager/g' 99_unmatched_functions.c
sed -i 's/FUN_180239530/ThreadManager/g' 99_unmatched_functions.c
sed -i 's/FUN_180239610/SynchronizationHandler/g' 99_unmatched_functions.c
sed -i 's/FUN_180239720/MutexManager/g' 99_unmatched_functions.c
sed -i 's/FUN_180234880/TaskScheduler/g' 99_unmatched_functions.c
sed -i 's/FUN_18023eac0/JobQueueManager/g' 99_unmatched_functions.c
sed -i 's/FUN_18023e030/WorkerPool/g' 99_unmatched_functions.c
sed -i 's/FUN_1802e51e0/AsyncOperationHandler/g' 99_unmatched_functions.c
sed -i 's/FUN_18023ded0/EventDispatcher/g' 99_unmatched_functions.c
sed -i 's/FUN_18023e880/MessageQueue/g' 99_unmatched_functions.c
sed -i 's/FUN_18023e750/NotificationSystem/g' 99_unmatched_functions.c
sed -i 's/FUN_18023e4f0/CallbackHandler/g' 99_unmatched_functions.c
sed -i 's/FUN_18023e620/EventListener/g' 99_unmatched_functions.c
sed -i 's/FUN_18023e240/PublisherSubscriber/g' 99_unmatched_functions.c
sed -i 's/FUN_18023e3d0/SignalProcessor/g' 99_unmatched_functions.c
sed -i 's/FUN_180242760/LoggerManager/g' 99_unmatched_functions.c
sed -i 's/FUN_1802436f0/DebugOutputHandler/g' 99_unmatched_functions.c
sed -i 's/FUN_1801bbf00/PerformanceMonitor/g' 99_unmatched_functions.c
sed -i 's/FUN_1801bbfb0/Profiler/g' 99_unmatched_functions.c
sed -i 's/FUN_1802541c0/MemoryTracker/g' 99_unmatched_functions.c
sed -i 's/FUN_180253fe0/GarbageCollector/g' 99_unmatched_functions.c
sed -i 's/FUN_1802540d0/HeapManager/g' 99_unmatched_functions.c
sed -i 's/FUN_180255e50/CacheManager/g' 99_unmatched_functions.c
sed -i 's/FUN_180255ea0/BufferPool/g' 99_unmatched_functions.c
sed -i 's/FUN_180255d70/ObjectPool/g' 99_unmatched_functions.c
sed -i 's/FUN_180255d20/ResourcePool/g' 99_unmatched_functions.c
sed -i 's/FUN_180257970/StreamManager/g' 99_unmatched_functions.c
sed -i 's/FUN_18025dd00/PipelineProcessor/g' 99_unmatched_functions.c

echo "批量替换完成"
EOF

# 使脚本可执行
chmod +x batch_replace_fun_functions.sh

# 执行脚本
./batch_replace_fun_functions.sh

# 清理临时文件
rm -f batch_replace_fun_functions.sh

echo "FUN_函数批量替换完成"