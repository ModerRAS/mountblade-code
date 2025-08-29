#!/bin/bash

# 网络系统变量美化脚本
# 将 void* g_xxx 替换为具体的类型名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 网络性能相关变量
sed -i 's/void\* g_networkLatency;/uint32 g_networkLatency;/g' 05_networking.c
sed -i 's/void\* g_networkPacketLoss;/float g_networkPacketLoss;/g' 05_networking.c
sed -i 's/void\* g_networkStatistics;/NetworkStatistics* g_networkStatistics;/g' 05_networking.c
sed -i 's/void\* g_networkPerformance;/NetworkPerformance* g_networkPerformance;/g' 05_networking.c
sed -i 's/void\* g_networkMetrics;/NetworkMetrics* g_networkMetrics;/g' 05_networking.c
sed -i 's/void\* g_networkDiagnostics;/NetworkDiagnostics* g_networkDiagnostics;/g' 05_networking.c

# 网络内存管理相关变量
sed -i 's/void\* g_networkMemoryManager;/NetworkMemoryManager* g_networkMemoryManager;/g' 05_networking.c
sed -i 's/void\* g_networkThreadLock;/ThreadLock* g_networkThreadLock;/g' 05_networking.c
sed -i 's/void\* g_networkCriticalSection;/CriticalSection* g_networkCriticalSection;/g' 05_networking.c
sed -i 's/void\* g_networkSemaphore;/Semaphore* g_networkSemaphore;/g' 05_networking.c
sed -i 's/void\* g_networkEventSignal;/EventSignal* g_networkEventSignal;/g' 05_networking.c
sed -i 's/void\* g_networkThreadPool;/ThreadPool* g_networkThreadPool;/g' 05_networking.c

# 网络连接相关变量
sed -i 's/void\* g_networkServerInfo;/ServerInfo* g_networkServerInfo;/g' 05_networking.c
sed -i 's/void\* g_networkClientInfo;/ClientInfo* g_networkClientInfo;/g' 05_networking.c
sed -i 's/void\* g_networkGameSession;/GameSession* g_networkGameSession;/g' 05_networking.c
sed -i 's/void\* g_networkPlayerData;/PlayerData* g_networkPlayerData;/g' 05_networking.c
sed -i 's/void\* g_networkGameState;/GameState* g_networkGameState;/g' 05_networking.c
sed -i 's/void\* g_networkSyncData;/SyncData* g_networkSyncData;/g' 05_networking.c

# 网络游戏相关变量
sed -i 's/void\* g_networkLobbyData;/LobbyData* g_networkLobbyData;/g' 05_networking.c
sed -i 's/void\* g_networkMatchData;/MatchData* g_networkMatchData;/g' 05_networking.c

# 网络广播相关变量
sed -i 's/void\* g_networkBroadcastBuffer;/BroadcastBuffer* g_networkBroadcastBuffer;/g' 05_networking.c
sed -i 's/void\* g_networkMulticastGroup;/MulticastGroup* g_networkMulticastGroup;/g' 05_networking.c
sed -i 's/void\* g_networkMulticastAddress;/NetworkAddress* g_networkMulticastAddress;/g' 05_networking.c
sed -i 's/void\* g_networkMulticastPort;/uint16 g_networkMulticastPort;/g' 05_networking.c
sed -i 's/void\* g_networkMulticastTTL;/uint8 g_networkMulticastTTL;/g' 05_networking.c
sed -i 's/void\* g_networkMulticastInterface;/NetworkInterface* g_networkMulticastInterface;/g' 05_networking.c
sed -i 's/void\* g_networkMulticastSocket;/NetworkSocket* g_networkMulticastSocket;/g' 05_networking.c

# 网络连接限制相关变量
sed -i 's/void\* g_networkMaxConnections;/uint32 g_networkMaxConnections;/g' 05_networking.c
sed -i 's/void\* g_networkCurrentConnections;/uint32 g_networkCurrentConnections;/g' 05_networking.c
sed -i 's/void\* g_networkConnectionLimit;/uint32 g_networkConnectionLimit;/g' 05_networking.c
sed -i 's/void\* g_networkConnectionTimeout;/uint32 g_networkConnectionTimeout;/g' 05_networking.c

# 网络心跳相关变量
sed -i 's/void\* g_networkHeartbeatInterval;/uint32 g_networkHeartbeatInterval;/g' 05_networking.c
sed -i 's/void\* g_networkPingInterval;/uint32 g_networkPingInterval;/g' 05_networking.c
sed -i 's/void\* g_networkKeepAlive;/bool g_networkKeepAlive;/g' 05_networking.c
sed -i 's/void\* g_networkDisconnectTimeout;/uint32 g_networkDisconnectTimeout;/g' 05_networking.c
sed -i 's/void\* g_networkReconnectDelay;/uint32 g_networkReconnectDelay;/g' 05_networking.c
sed -i 's/void\* g_networkRetryCount;/uint32 g_networkRetryCount;/g' 05_networking.c

# 网络连接质量相关变量
sed -i 's/void\* g_networkConnectionQuality;/ConnectionQuality* g_networkConnectionQuality;/g' 05_networking.c
sed -i 's/void\* g_networkConnectionStability;/ConnectionStability* g_networkConnectionStability;/g' 05_networking.c
sed -i 's/void\* g_networkConnectionHistory;/ConnectionHistory* g_networkConnectionHistory;/g' 05_networking.c
sed -i 's/void\* g_networkConnectionStats;/ConnectionStats* g_networkConnectionStats;/g' 05_networking.c
sed -i 's/void\* g_networkConnectionMetrics;/ConnectionMetrics* g_networkConnectionMetrics;/g' 05_networking.c

# 网络监控相关变量
sed -i 's/void\* g_networkLatencyMonitor;/LatencyMonitor* g_networkLatencyMonitor;/g' 05_networking.c
sed -i 's/void\* g_networkPacketLossMonitor;/PacketLossMonitor* g_networkPacketLossMonitor;/g' 05_networking.c
sed -i 's/void\* g_networkJitterMonitor;/JitterMonitor* g_networkJitterMonitor;/g' 05_networking.c
sed -i 's/void\* g_networkThroughputMonitor;/ThroughputMonitor* g_networkThroughputMonitor;/g' 05_networking.c
sed -i 's/void\* g_networkPerformanceMonitor;/PerformanceMonitor* g_networkPerformanceMonitor;/g' 05_networking.c

# 网络诊断相关变量
sed -i 's/void\* g_networkDiagnosticData;/DiagnosticData* g_networkDiagnosticData;/g' 05_networking.c
sed -i 's/void\* g_networkDebugInfo;/DebugInfo* g_networkDebugInfo;/g' 05_networking.c

# 网络日志相关变量
sed -i 's/void\* g_networkLogLevel;/LogLevel g_networkLogLevel;/g' 05_networking.c
sed -i 's/void\* g_networkLogBuffer;/LogBuffer* g_networkLogBuffer;/g' 05_networking.c
sed -i 's/void\* g_networkLogFile;/LogFile* g_networkLogFile;/g' 05_networking.c
sed -i 's/void\* g_networkLogSize;/uint32 g_networkLogSize;/g' 05_networking.c
sed -i 's/void\* g_networkLogRotation;/bool g_networkLogRotation;/g' 05_networking.c
sed -i 's/void\* g_networkLogCompression;/bool g_networkLogCompression;/g' 05_networking.c
sed -i 's/void\* g_networkLogArchive;/LogArchive* g_networkLogArchive;/g' 05_networking.c

echo "网络系统变量美化完成"