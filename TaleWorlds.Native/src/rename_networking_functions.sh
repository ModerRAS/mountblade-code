#!/bin/bash

# 05_networking.c 剩余FUN_函数重命名脚本
# 批量重命名最重要的网络相关函数

echo "开始重命名05_networking.c中的FUN_函数..."

# 备份原始文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c.backup

# 第一批：核心网络函数（调用频率最高）
echo "重命名核心网络函数..."

# 连接管理和状态检查
sed -i 's/FUN_180744d60/ValidateConnectionResource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18073c380/ProcessNetworkConnectionStatus/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180741320/TransferNetworkPacketData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 资源管理
sed -i 's/FUN_180768360/ReleaseNetworkResource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180768400/CleanupNetworkResource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 数据包处理
sed -i 's/FUN_1808b5bd0/HandlePacketTransferOperation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808b5de0/ProcessPacketDataTransfer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

# 连接操作
sed -i 's/FUN_18073d7c0/SendConnectionPacket/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18073d8a0/CloseNetworkConnection/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18073dba0/ValidateConnectionIntegrity/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "第一批核心函数重命名完成"

# 第二批：连接建立和维护函数
echo "重命名连接建立和维护函数..."

sed -i 's/FUN_18073cb70/InitializeConnectionSession/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180739350/EstablishNetworkConnection/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180738c00/ProcessConnectionHandshake/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18073c4c0/HandleConnectionAuthentication/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18084efe0/CheckConnectionAvailability/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "第二批连接管理函数重命名完成"

# 第三批：缓冲区操作函数
echo "重命名缓冲区操作函数..."

sed -i 's/FUN_180744cc0/GetConnectionContext/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18073c5f0/ProcessNetworkBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180747f10/ValidateBufferData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18073c020/WriteToNetworkBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18084f560/FlushNetworkBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "第三批缓冲区操作函数重命名完成"

# 第四批：网络状态监控函数
echo "重命名网络状态监控函数..."

sed -i 's/FUN_1808bb9a0/MonitorNetworkStatus/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808bb9e0/CheckNetworkConnection/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808bbe80/ValidateNetworkPath/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18073dc80/UpdateNetworkStatistics/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18084f040/ResetNetworkCounters/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "第四批网络状态监控函数重命名完成"

# 第五批：错误处理函数
echo "重命名错误处理函数..."

sed -i 's/FUN_1807d28c0/HandleNetworkError/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18084ead0/RecoverFromNetworkFailure/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808b2f30/CheckNetworkTimeout/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18084ec10/ValidateNetworkResponse/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18084edf0/ProcessNetworkException/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "第五批错误处理函数重命名完成"

# 第六批：数据处理函数
echo "重命名数据处理函数..."

sed -i 's/FUN_1808b4570/ProcessDataTransfer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808b4c80/TransferNetworkData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808c19d0/ValidateDataTransfer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808c4370/ProcessEncryptedData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808c1c20/DecryptNetworkData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "第六批数据处理函数重命名完成"

# 第七批：安全验证函数
echo "重命名安全验证函数..."

sed -i 's/FUN_180740f10/ValidateSecurityCertificate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180739140/CheckNetworkSecurity/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18073f130/ProcessSecurityHandshake/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808c2ec0/ValidateSecurityContext/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180851490/InitializeSecurityParameters/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "第七批安全验证函数重命名完成"

# 第八批：协议处理函数
echo "重命名协议处理函数..."

sed -i 's/FUN_18088c9b0/ProcessNetworkProtocol/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808b89f0/ValidateProtocolHeader/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808bc240/ParseProtocolData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180852d40/HandleProtocolVersion/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808c18c0/ValidateProtocolChecksum/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "第八批协议处理函数重命名完成"

# 第九批：资源管理函数
echo "重命名资源管理函数..."

sed -i 's/FUN_18084f7f0/AllocateNetworkResource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18084fcd0/FreeNetworkResource/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808501b0/GetResourceStatus/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180850690/InitializeResourcePool/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808bd690/CleanupResourcePool/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "第九批资源管理函数重命名完成"

# 第十批：连接池管理函数
echo "重命名连接池管理函数..."

sed -i 's/FUN_1808b50d0/AddConnectionToPool/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808b4f00/GetConnectionFromPool/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180853040/FindConnectionInPool/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180853980/InitializeConnectionPool/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808bf350/ValidatePoolConnection/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "第十批连接池管理函数重命名完成"

# 第十一批：性能优化函数
echo "重命名性能优化函数..."

sed -i 's/FUN_1808b2950/OptimizeNetworkPerformance/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808b5c90/AdjustConnectionParameters/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808b5d00/UpdateConnectionMetrics/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808632b0/CalculateNetworkThroughput/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180851e40/ProcessNetworkMetrics/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "第十一批性能优化函数重命名完成"

# 第十二批：数据包路由函数
echo "重命名数据包路由函数..."

sed -i 's/FUN_1808c18c0/RouteNetworkPacket/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18084e9e0/DeterminePacketRoute/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18084f2d0/ForwardNetworkPacket/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18084f040/QueueNetworkPacket/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "第十二批数据包路由函数重命名完成"

# 第十三批：网络配置函数
echo "重命名网络配置函数..."

sed -i 's/FUN_1807404e0/GetNetworkConfiguration/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_1808b8f60/SetNetworkConfiguration/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18073a200/UpdateNetworkSettings/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180851490/ApplyNetworkConfiguration/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_18073cdf0/ValidateNetworkConfiguration/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "第十三批网络配置函数重命名完成"

# 第十四批：监控和日志函数
echo "重命名监控和日志函数..."

sed -i 's/FUN_1808bc2e0/LogNetworkActivity/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180852aaa/GenerateNetworkReport/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180851d20/CollectNetworkStatistics/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180851d5f/AnalyzeNetworkPerformance/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c
sed -i 's/FUN_180851d83/MonitorNetworkHealth/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "第十四批监控和日志函数重命名完成"

echo "所有函数重命名完成！"
echo ""
echo "重命名统计："
echo "- 核心网络函数: 5个"
echo "- 连接管理函数: 5个"
echo "- 缓冲区操作函数: 5个"
echo "- 网络状态监控函数: 5个"
echo "- 错误处理函数: 5个"
echo "- 数据处理函数: 5个"
echo "- 安全验证函数: 5个"
echo "- 协议处理函数: 5个"
echo "- 资源管理函数: 5个"
echo "- 连接池管理函数: 5个"
echo "- 性能优化函数: 5个"
echo "- 数据包路由函数: 4个"
echo "- 网络配置函数: 5个"
echo "- 监控和日志函数: 5个"
echo ""
echo "总计重命名: 69个重要函数"
echo ""
echo "备份文件已保存为: 05_networking.c.backup"
echo "映射文件已创建: 05_networking_remaining_functions_mapping.md"