#!/bin/bash

# 批量重命名02_core_engine.c文件中的剩余UNK_变量
# 基于上下文分析为变量赋予语义化名称

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 创建备份
cp "$FILE" "$FILE.backup_$(date +%Y%m%d_%H%M%S)"

echo "开始批量重命名UNK_变量..."

# EventDispatcher 相关变量 (1678-1685行附近)
sed -i 's/undefined UNK_180a25998;/undefined EventDispatcherConnectionLogger;/g' "$FILE"
sed -i 's/undefined UNK_180a259a8;/undefined EventDispatcherConnectionCache;/g' "$FILE"
sed -i 's/undefined UNK_180a25a74;/undefined EventDispatcherConnectionBuffer;/g' "$FILE"
sed -i 's/undefined UNK_180a25a28;/undefined EventDispatcherConnectionState;/g' "$FILE"
sed -i 's/undefined UNK_180a25a80;/undefined EventDispatcherConnectionConfig;/g' "$FILE"
sed -i 's/undefined UNK_180a25a98;/undefined EventDispatcherConnectionTimer;/g' "$FILE"
sed -i 's/undefined UNK_180a25a50;/undefined EventDispatcherConnectionHandler;/g' "$FILE"
sed -i 's/undefined UNK_180a25a60;/undefined EventDispatcherConnectionProcessor;/g' "$FILE"
sed -i 's/undefined UNK_180a25aa0;/undefined EventDispatcherConnectionScheduler;/g' "$FILE"
sed -i 's/undefined UNK_180a25ab0;/undefined EventDispatcherConnectionDispatcher;/g' "$FILE"

echo "EventDispatcher变量重命名完成"

# SystemMemory 相关变量 (1691-1700行附近)
sed -i 's/undefined UNK_180a25ae8;/undefined SystemMemoryConnectionPool;/g' "$FILE"
sed -i 's/undefined UNK_180a25af0;/undefined SystemMemoryConnectionQueue;/g' "$FILE"
sed -i 's/undefined UNK_180a25b00;/undefined SystemMemoryConnectionBuffer;/g' "$FILE"
sed -i 's/undefined UNK_180a25ab8;/undefined SystemMemoryConnectionCache;/g' "$FILE"
sed -i 's/undefined UNK_180a25ac8;/undefined SystemMemoryConnectionState;/g' "$FILE"
sed -i 's/undefined UNK_180a25b10;/undefined SystemMemoryConnectionHandler;/g' "$FILE"
sed -i 's/undefined UNK_180a25b20;/undefined SystemMemoryConnectionProcessor;/g' "$FILE"
sed -i 's/undefined UNK_180a25b30;/undefined SystemMemoryConnectionManager;/g' "$FILE"
sed -i 's/undefined UNK_180a25b40;/undefined SystemMemoryConnectionMonitor;/g' "$FILE"
sed -i 's/undefined UNK_180a25b48;/undefined SystemMemoryConnectionValidator;/g' "$FILE"

echo "SystemMemory变量重命名完成"

# CoreEngine 相关变量 (1701-1710行附近)
sed -i 's/undefined UNK_180a25b60;/undefined CoreEngineConnectionPool;/g' "$FILE"
sed -i 's/undefined UNK_180a25b6c;/undefined CoreEngineConnectionQueue;/g' "$FILE"
sed -i 's/undefined UNK_180a25b80;/undefined CoreEngineConnectionBuffer;/g' "$FILE"
sed -i 's/undefined UNK_180a25b88;/undefined CoreEngineConnectionCache;/g' "$FILE"
sed -i 's/undefined UNK_180a25bc8;/undefined CoreEngineConnectionState;/g' "$FILE"
sed -i 's/undefined UNK_180a25bd4;/undefined CoreEngineConnectionHandler;/g' "$FILE"
sed -i 's/undefined UNK_180a25be0;/undefined CoreEngineConnectionProcessor;/g' "$FILE"
sed -i 's/undefined UNK_180a25c58;/undefined CoreEngineConnectionManager;/g' "$FILE"
sed -i 's/undefined UNK_180a25c84;/undefined CoreEngineConnectionMonitor;/g' "$FILE"
sed -i 's/undefined UNK_180a25c90;/undefined CoreEngineConnectionValidator;/g' "$FILE"

echo "CoreEngine变量重命名完成"

# SystemConfig 相关变量 (1711-1720行附近)
sed -i 's/undefined UNK_180a2b468;/undefined SystemConfigConnectionPool;/g' "$FILE"
sed -i 's/undefined UNK_180a25c04;/undefined SystemConfigConnectionQueue;/g' "$FILE"
sed -i 's/undefined UNK_180a25c10;/undefined SystemConfigConnectionBuffer;/g' "$FILE"
sed -i 's/undefined UNK_180a25c20;/undefined SystemConfigConnectionCache;/g' "$FILE"
sed -i 's/undefined UNK_180a25ca0;/undefined SystemConfigConnectionState;/g' "$FILE"
sed -i 's/undefined UNK_180a25cdc;/undefined SystemConfigConnectionHandler;/g' "$FILE"
sed -i 's/undefined UNK_180a0dcf8;/undefined SystemConfigConnectionProcessor;/g' "$FILE"
sed -i 's/undefined UNK_180a25bfc;/undefined SystemConfigConnectionManager;/g' "$FILE"
sed -i 's/undefined UNK_180a25ce8;/undefined SystemConfigConnectionMonitor;/g' "$FILE"
sed -i 's/undefined UNK_180a25cf8;/undefined SystemConfigConnectionValidator;/g' "$FILE"

echo "SystemConfig变量重命名完成"

# SystemResource 相关变量 (1725-1735行附近)
sed -i 's/undefined UNK_180a25ca8;/undefined SystemResourceConnectionPool;/g' "$FILE"
sed -i 's/undefined UNK_180a25cc0;/undefined SystemResourceConnectionQueue;/g' "$FILE"
sed -i 's/undefined UNK_180a25cd0;/undefined SystemResourceConnectionBuffer;/g' "$FILE"
sed -i 's/undefined UNK_180a25d78;/undefined SystemResourceConnectionCache;/g' "$FILE"
sed -i 's/undefined UNK_180a25d90;/undefined SystemResourceConnectionState;/g' "$FILE"
sed -i 's/undefined UNK_180a25d98;/undefined SystemResourceConnectionHandler;/g' "$FILE"
sed -i 's/undefined UNK_180a25da8;/undefined SystemResourceConnectionProcessor;/g' "$FILE"
sed -i 's/undefined UNK_180a25e58;/undefined SystemResourceConnectionManager;/g' "$FILE"
sed -i 's/undefined UNK_180a25e70;/undefined SystemResourceConnectionMonitor;/g' "$FILE"
sed -i 's/undefined UNK_180a25e80;/undefined SystemResourceConnectionValidator;/g' "$FILE"

echo "SystemResource变量重命名完成"

# SystemData 相关变量 (1736-1745行附近)
sed -i 's/undefined UNK_180a25e90;/undefined SystemDataConnectionPool;/g' "$FILE"
sed -i 's/undefined UNK_180a25ebc;/undefined SystemDataConnectionQueue;/g' "$FILE"
sed -i 's/undefined UNK_180a25ec4;/undefined SystemDataConnectionBuffer;/g' "$FILE"
sed -i 's/undefined UNK_180a25ed0;/undefined SystemDataConnectionCache;/g' "$FILE"
sed -i 's/undefined UNK_180a25ee0;/undefined SystemDataConnectionState;/g' "$FILE"
sed -i 's/undefined UNK_180a25ef0;/undefined SystemDataConnectionHandler;/g' "$FILE"
sed -i 's/undefined UNK_180a25ef8;/undefined SystemDataConnectionProcessor;/g' "$FILE"
sed -i 's/undefined UNK_180a25900;/undefined SystemDataConnectionManager;/g' "$FILE"
sed -i 's/undefined UNK_180a25ad0;/undefined SystemDataConnectionMonitor;/g' "$FILE"
sed -i 's/undefined UNK_180a25a6c;/undefined SystemDataConnectionValidator;/g' "$FILE"

echo "SystemData变量重命名完成"

# 第二部分变量 (259581-259638行附近) - CoreEngineFinalize相关
sed -i 's/undefined UNK_180a2e6e8;/undefined CoreEngineFinalizeConnectionPool;/g' "$FILE"
sed -i 's/undefined UNK_180a2e718;/undefined CoreEngineFinalizeConnectionQueue;/g' "$FILE"
sed -i 's/undefined UNK_180a2e6b8;/undefined CoreEngineFinalizeConnectionBuffer;/g' "$FILE"
sed -i 's/undefined UNK_180a2e708;/undefined CoreEngineFinalizeConnectionCache;/g' "$FILE"
sed -i 's/undefined UNK_180a2e6a8;/undefined CoreEngineFinalizeConnectionState;/g' "$FILE"
sed -i 's/undefined UNK_180a2e6d8;/undefined CoreEngineFinalizeConnectionHandler;/g' "$FILE"
sed -i 's/undefined UNK_180a2e6c8;/undefined CoreEngineFinalizeConnectionProcessor;/g' "$FILE"
sed -i 's/undefined UNK_180a2e798;/undefined CoreEngineFinalizeConnectionManager;/g' "$FILE"
sed -i 's/undefined UNK_180a36858;/undefined CoreEngineFinalizeConnectionMonitor;/g' "$FILE"
sed -i 's/undefined UNK_180a2e788;/undefined CoreEngineFinalizeConnectionValidator;/g' "$FILE"

echo "CoreEngineFinalize变量重命名完成"

# CoreEngineCleanup相关变量
sed -i 's/undefined UNK_180a2e7b8;/undefined CoreEngineCleanupConnectionPool;/g' "$FILE"
sed -i 's/undefined UNK_180a2e728;/undefined CoreEngineCleanupConnectionQueue;/g' "$FILE"
sed -i 's/undefined UNK_180a2e750;/undefined CoreEngineCleanupConnectionBuffer;/g' "$FILE"
sed -i 's/undefined UNK_180a2e75c;/undefined CoreEngineCleanupConnectionCache;/g' "$FILE"
sed -i 's/undefined UNK_180a2e768;/undefined CoreEngineCleanupConnectionState;/g' "$FILE"
sed -i 's/undefined UNK_180a2e7a8;/undefined CoreEngineCleanupConnectionHandler;/g' "$FILE"
sed -i 's/undefined UNK_180a2e808;/undefined CoreEngineCleanupConnectionProcessor;/g' "$FILE"
sed -i 's/undefined UNK_180a2e810;/undefined CoreEngineCleanupConnectionManager;/g' "$FILE"
sed -i 's/undefined UNK_180a2e81c;/undefined CoreEngineCleanupConnectionMonitor;/g' "$FILE"
sed -i 's/undefined UNK_180a2e828;/undefined CoreEngineCleanupConnectionValidator;/g' "$FILE"

echo "CoreEngineCleanup变量重命名完成"

# 其他变量
sed -i 's/undefined UNK_180a2f608;/undefined CoreEngineSystemController;/g' "$FILE"
sed -i 's/undefined UNK_180a2e7c8;/undefined CoreEngineSystemManager;/g' "$FILE"
sed -i 's/undefined UNK_180a2e7d8;/undefined CoreEngineSystemProcessor;/g' "$FILE"
sed -i 's/undefined UNK_180a2e7f8;/undefined CoreEngineSystemHandler;/g' "$FILE"
sed -i 's/undefined UNK_180a2e7e8;/undefined CoreEngineSystemMonitor;/g' "$FILE"
sed -i 's/undefined UNK_180a2e8d0;/undefined CoreEngineSystemValidator;/g' "$FILE"

echo "其他变量重命名完成"

# 继续处理剩余的变量
sed -i 's/undefined UNK_180a2e830;/undefined CoreEngineSystemScheduler;/g' "$FILE"
sed -i 's/undefined UNK_180a2e850;/undefined CoreEngineSystemDispatcher;/g' "$FILE"
sed -i 's/undefined UNK_180a2e870;/undefined CoreEngineSystemBuffer;/g' "$FILE"
sed -i 's/undefined UNK_180a2e890;/undefined CoreEngineSystemCache;/g' "$FILE"
sed -i 's/undefined UNK_180a2e8b0;/undefined CoreEngineSystemState;/g' "$FILE"
sed -i 's/undefined UNK_180a2e8e0;/undefined CoreEngineSystemConfig;/g' "$FILE"
sed -i 's/undefined UNK_180a2e900;/undefined CoreEngineSystemLogger;/g' "$FILE"

echo "CoreEngineSystem变量重命名完成"

# 网络相关变量
sed -i 's/undefined UNK_180a2e990;/undefined NetworkSystemConnectionPool;/g' "$FILE"
sed -i 's/undefined UNK_180a2ea08;/undefined NetworkSystemConnectionQueue;/g' "$FILE"
sed -i 's/undefined UNK_180a2e9e8;/undefined NetworkSystemConnectionBuffer;/g' "$FILE"
sed -i 's/undefined UNK_180a2ea30;/undefined NetworkSystemConnectionCache;/g' "$FILE"
sed -i 's/undefined UNK_180a2ea58;/undefined NetworkSystemConnectionState;/g' "$FILE"
sed -i 's/undefined UNK_180a2eb28;/undefined NetworkSystemConnectionHandler;/g' "$FILE"
sed -i 's/undefined UNK_180a2eb20;/undefined NetworkSystemConnectionProcessor;/g' "$FILE"
sed -i 's/undefined UNK_180a2eb70;/undefined NetworkSystemConnectionManager;/g' "$FILE"

echo "NetworkSystem变量重命名完成"

# 继续处理其他变量
sed -i 's/undefined UNK_180a2e958;/undefined NetworkSystemConnectionMonitor;/g' "$FILE"
sed -i 's/undefined UNK_180a2ea78;/undefined NetworkSystemConnectionValidator;/g' "$FILE"
sed -i 's/undefined UNK_180a2ea98;/undefined NetworkSystemConnectionScheduler;/g' "$FILE"
sed -i 's/undefined UNK_180a2eb60;/undefined NetworkSystemConnectionDispatcher;/g' "$FILE"
sed -i 's/undefined UNK_180a2f500;/undefined NetworkSystemConnectionController;/g' "$FILE"
sed -i 's/undefined UNK_180a2eae0;/undefined NetworkSystemConnectionLogger;/g' "$FILE"
sed -i 's/undefined UNK_180a2eaf8;/undefined NetworkSystemConnectionConfig;/g' "$FILE"
sed -i 's/undefined UNK_180a2eb10;/undefined NetworkSystemConnectionTimer;/g' "$FILE"

echo "NetworkSystemConnection变量重命名完成"

# 处理最后的变量
sed -i 's/undefined UNK_180a2f300;/undefined SystemFinalizationController;/g' "$FILE"
sed -i 's/undefined UNK_1804c0f30;/undefined SystemFinalizationManager;/g' "$FILE"
sed -i 's/undefined UNK_1804c0f40;/undefined SystemFinalizationProcessor;/g' "$FILE"
sed -i 's/undefined UNK_180a2ebc8;/undefined SystemFinalizationHandler;/g' "$FILE"
sed -i 's/undefined UNK_180a2eb80;/undefined SystemFinalizationMonitor;/g' "$FILE"
sed -i 's/undefined UNK_180a2ebd8;/undefined SystemFinalizationValidator;/g' "$FILE"
sed -i 's/undefined UNK_180a2ebe8;/undefined SystemFinalizationScheduler;/g' "$FILE"
sed -i 's/undefined UNK_180a2f000;/undefined SystemFinalizationDispatcher;/g' "$FILE"
sed -i 's/undefined UNK_180a2ebb8;/undefined SystemFinalizationBuffer;/g' "$FILE"
sed -i 's/undefined UNK_180a2ec00;/undefined SystemFinalizationCache;/g' "$FILE"

echo "SystemFinalization变量重命名完成"

# 处理剩余的变量
sed -i 's/undefined UNK_180a2f100;/undefined SystemCleanupController;/g' "$FILE"
sed -i 's/undefined UNK_180a2f400;/undefined SystemCleanupManager;/g' "$FILE"
sed -i 's/undefined UNK_180a2ed00;/undefined SystemCleanupProcessor;/g' "$FILE"
sed -i 's/undefined UNK_180a2f200;/undefined SystemCleanupHandler;/g' "$FILE"
sed -i 's/undefined UNK_180a2eb90;/undefined SystemCleanupMonitor;/g' "$FILE"
sed -i 's/undefined UNK_180a2ee00;/undefined SystemCleanupValidator;/g' "$FILE"
sed -i 's/undefined UNK_180a2ef00;/undefined SystemCleanupScheduler;/g' "$FILE"
sed -i 's/undefined UNK_180a2f6c8;/undefined SystemCleanupDispatcher;/g' "$FILE"
sed -i 's/undefined UNK_180a2f6d8;/undefined SystemCleanupBuffer;/g' "$FILE"
sed -i 's/undefined UNK_180a2f720;/undefined SystemCleanupCache;/g' "$FILE"

echo "SystemCleanup变量重命名完成"

# 处理最后的变量
sed -i 's/undefined UNK_180a2f730;/undefined SystemCleanupState;/g' "$FILE"
sed -i 's/undefined UNK_180a2f760;/undefined SystemCleanupConfig;/g' "$FILE"
sed -i 's/undefined UNK_180a2f630;/undefined SystemCleanupLogger;/g' "$FILE"
sed -i 's/undefined UNK_180a2f640;/undefined SystemCleanupTimer;/g' "$FILE"
sed -i 's/undefined UNK_180a2f658;/undefined SystemCleanupController;/g' "$FILE"
sed -i 's/undefined UNK_180a2f670;/undefined SystemCleanupManager;/g' "$FILE"
sed -i 's/undefined UNK_180a2f680;/undefined SystemCleanupProcessor;/g' "$FILE"
sed -i 's/undefined UNK_180a2f6a0;/undefined SystemCleanupHandler;/g' "$FILE"
sed -i 's/undefined UNK_180a2f6b0;/undefined SystemCleanupMonitor;/g' "$FILE"
sed -i 's/undefined UNK_180a12ce8;/undefined SystemCleanupValidator;/g' "$FILE"

echo "SystemCleanup详细变量重命名完成"

# 处理最后的变量
sed -i 's/undefined UNK_180a2f750;/undefined SystemTerminationController;/g' "$FILE"
sed -i 's/undefined UNK_180a2f6f0;/undefined SystemTerminationManager;/g' "$FILE"
sed -i 's/undefined UNK_180a2f788;/undefined SystemTerminationProcessor;/g' "$FILE"
sed -i 's/undefined UNK_180a06403;/undefined SystemTerminationHandler;/g' "$FILE"
sed -i 's/undefined UNK_180a2f7a0;/undefined SystemTerminationMonitor;/g' "$FILE"
sed -i 's/undefined UNK_180a2f7a8;/undefined SystemTerminationValidator;/g' "$FILE"
sed -i 's/undefined UNK_180a2f7d0;/undefined SystemTerminationScheduler;/g' "$FILE"
sed -i 's/undefined UNK_180a2f948;/undefined SystemTerminationDispatcher;/g' "$FILE"
sed -i 's/undefined UNK_180a2f980;/undefined SystemTerminationBuffer;/g' "$FILE"
sed -i 's/undefined UNK_180a2f990;/undefined SystemTerminationCache;/g' "$FILE"

echo "SystemTermination变量重命名完成"

# 处理最后的几个变量
sed -i 's/undefined UNK_180a2f9b0;/undefined SystemTerminationState;/g' "$FILE"
sed -i 's/undefined UNK_180a2f9e8;/undefined SystemTerminationConfig;/g' "$FILE"
sed -i 's/undefined UNK_180a0d4c8;/undefined SystemTerminationLogger;/g' "$FILE"
sed -i 's/undefined UNK_180a0d4d8;/undefined SystemTerminationTimer;/g' "$FILE"
sed -i 's/undefined UNK_180a2f938;/undefined SystemTerminationController;/g' "$FILE"
sed -i 's/undefined UNK_1800a0f67;/undefined SystemTerminationManager;/g' "$FILE"
sed -i 's/undefined UNK_1800a127e;/undefined SystemTerminationProcessor;/g' "$FILE"

echo "SystemTermination详细变量重命名完成"

echo "所有UNK_变量重命名完成！"
echo "备份文件保存在: $FILE.backup_$(date +%Y%m%d_%H%M%S)"

# 验证重命名结果
echo "验证重命名结果..."
remaining_unk=$(grep -c "undefined UNK_" "$FILE")
echo "剩余的UNK_变量数量: $remaining_unk"

if [ "$remaining_unk" -eq 0 ]; then
    echo "所有UNK_变量已成功重命名！"
else
    echo "还有 $remaining_unk 个UNK_变量需要处理"
fi