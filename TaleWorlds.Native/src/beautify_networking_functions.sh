#!/bin/bash

# 批量替换05_networking.c中的FUN_函数为语义化名称
# 基于函数功能分析创建的有意义函数名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# ===========================================================================
# 18088xxxx 系列函数替换 (网络核心功能)
# ===========================================================================

# 网络连接和数据包处理相关函数
sed -i 's/FUN_1808801f0/ProcessNetworkConnectionRequest/g' 05_networking.c
sed -i 's/FUN_180880350/ValidateNetworkConnectionData/g' 05_networking.c
sed -i 's/FUN_180881eb0/EstablishNetworkConnection/g' 05_networking.c
sed -i 's/FUN_180881fa0/ProcessNetworkPacketData/g' 05_networking.c
sed -i 's/FUN_180881fbc/HandleNetworkPacketStream/g' 05_networking.c
sed -i 's/FUN_180882120/InitializeNetworkSystem/g' 05_networking.c
sed -i 's/FUN_180882143/ResetNetworkConnection/g' 05_networking.c
sed -i 's/FUN_18088217c/ValidateNetworkPacketHeader/g' 05_networking.c
sed -i 's/FUN_1808822c3/CleanupNetworkResources/g' 05_networking.c
sed -i 's/FUN_1808822d5/CheckNetworkStatus/g' 05_networking.c
sed -i 's/FUN_180882330/SendNetworkPacket/g' 05_networking.c
sed -i 's/FUN_180882390/GetNetworkConnectionInfo/g' 05_networking.c
sed -i 's/FUN_1808823b0/GetNetworkHandle/g' 05_networking.c
sed -i 's/FUN_1808823f2/ShutdownNetworkSystem/g' 05_networking.c
sed -i 's/FUN_180882400/CloseNetworkConnection/g' 05_networking.c
sed -i 's/FUN_180882440/ResetNetworkBuffers/g' 05_networking.c
sed -i 's/FUN_1808825ef/FlushNetworkQueue/g' 05_networking.c
sed -i 's/FUN_180882610/ProcessNetworkBufferData/g' 05_networking.c
sed -i 's/FUN_180882a50/ParseNetworkPacketHeader/g' 05_networking.c
sed -i 's/FUN_180882c20/HandleNetworkDataTransfer/g' 05_networking.c
sed -i 's/FUN_180882c70/FreeNetworkConnection/g' 05_networking.c
sed -i 's/FUN_180882c94/GetNetworkErrorCode/g' 05_networking.c
sed -i 's/FUN_180882db4/GetNetworkLastError/g' 05_networking.c
sed -i 's/FUN_180882dd0/ReleaseNetworkHandle/g' 05_networking.c
sed -i 's/FUN_180882df4/DestroyNetworkSocket/g' 05_networking.c
sed -i 's/FUN_180882ee4/InitializeNetworkSocket/g' 05_networking.c
sed -i 's/FUN_180882f00/AllocateNetworkBuffer/g' 05_networking.c
sed -i 's/FUN_180882f24/CreateNetworkSocket/g' 05_networking.c
sed -i 's/FUN_180882fec/GetNetworkBufferSize/g' 05_networking.c
sed -i 's/FUN_180883010/ReserveNetworkMemory/g' 05_networking.c
sed -i 's/FUN_180883034/GetNetworkMemorySize/g' 05_networking.c
sed -i 's/FUN_180883110/PrepareNetworkTransfer/g' 05_networking.c
sed -i 's/FUN_180883134/GetNetworkTransferStatus/g' 05_networking.c
sed -i 's/FUN_180883279/ValidateNetworkProtocol/g' 05_networking.c
sed -i 's/FUN_180883290/StartNetworkTransfer/g' 05_networking.c
sed -i 's/FUN_1808832b4/GetNetworkProtocolVersion/g' 05_networking.c
sed -i 's/FUN_180883405/CheckNetworkCompatibility/g' 05_networking.c
sed -i 's/FUN_180883420/InitializeNetworkStream/g' 05_networking.c
sed -i 's/FUN_180883444/ConfigureNetworkSocket/g' 05_networking.c
sed -i 's/FUN_1808834ff/GetNetworkConfigData/g' 05_networking.c
sed -i 's/FUN_180883520/SetupNetworkConnection/g' 05_networking.c
sed -i 's/FUN_180883544/BindNetworkSocket/g' 05_networking.c
sed -i 's/FUN_1808835ff/GetNetworkSocketType/g' 05_networking.c
sed -i 's/FUN_180883620/EstablishNetworkStream/g' 05_networking.c
sed -i 's/FUN_180883644/GetNetworkStreamInfo/g' 05_networking.c
sed -i 's/FUN_180883732/ValidateNetworkStream/g' 05_networking.c
sed -i 's/FUN_180883750/ProcessNetworkStream/g' 05_networking.c
sed -i 's/FUN_180883774/GetNetworkStreamStatus/g' 05_networking.c
sed -i 's/FUN_18088394e/InitializeNetworkStreamBuffer/g' 05_networking.c
sed -i 's/FUN_180883960/HandleNetworkStreamData/g' 05_networking.c

# 网络安全和验证相关函数
sed -i 's/FUN_180889ebf/InitializeNetworkSecurity/g' 05_networking.c
sed -i 's/FUN_180889f60/ValidateNetworkSecurity/g' 05_networking.c
sed -i 's/FUN_180889fd6/GetNetworkSecurityLevel/g' 05_networking.c
sed -i 's/FUN_180889ff0/ProcessNetworkSecurityData/g' 05_networking.c
sed -i 's/FUN_18088a0c0/EncryptNetworkData/g' 05_networking.c
sed -i 's/FUN_18088a1f0/ValidateNetworkCertificate/g' 05_networking.c
sed -i 's/FUN_18088a1fa/CheckNetworkCertificate/g' 05_networking.c
sed -i 's/FUN_18088a257/ResetNetworkSecurity/g' 05_networking.c

# 网络连接管理和控制函数
sed -i 's/FUN_18088ac50/ManageNetworkConnection/g' 05_networking.c
sed -i 's/FUN_18088aca0/ControlNetworkConnection/g' 05_networking.c
sed -i 's/FUN_18088ad30/MonitorNetworkActivity/g' 05_networking.c
sed -i 's/FUN_18088aee0/TrackNetworkConnection/g' 05_networking.c
sed -i 's/FUN_18088af30/HandleNetworkEvent/g' 05_networking.c
sed -i 's/FUN_18088afd0/CleanupNetworkSecurity/g' 05_networking.c
sed -i 's/FUN_18088b503/ResetNetworkEventQueue/g' 05_networking.c
sed -i 's/FUN_18088b520/ProcessNetworkEvent/g' 05_networking.c

# 网络缓冲区和数据处理函数
sed -i 's/FUN_18088bf80/ProcessNetworkBuffer/g' 05_networking.c
sed -i 's/FUN_18088bfed/FlushNetworkBuffer/g' 05_networking.c
sed -i 's/FUN_18088c02e/ResetNetworkBuffer/g' 05_networking.c
sed -i 's/FUN_18088c060/HandleBufferDataTransfer/g' 05_networking.c
sed -i 's/FUN_18088c1b0/ProcessBufferChunk/g' 05_networking.c
sed -i 's/FUN_18088c290/GetBufferInfo/g' 05_networking.c
sed -i 's/FUN_18088c380/ValidateBufferData/g' 05_networking.c
sed -i 's/FUN_18088c390/CheckBufferStatus/g' 05_networking.c
sed -i 's/FUN_18088c3bc/ClearBufferData/g' 05_networking.c
sed -i 's/FUN_18088c401/AllocateBufferMemory/g' 05_networking.c
sed -i 's/FUN_18088c410/GetBufferSize/g' 05_networking.c
sed -i 's/FUN_18088c449/GetBufferCapacity/g' 05_networking.c
sed -i 's/FUN_18088c46a/FreeBufferMemory/g' 05_networking.c
sed -i 's/FUN_18088c4ba/InitializeBuffer/g' 05_networking.c
sed -i 's/FUN_18088c4ea/SetupBuffer/g' 05_networking.c
sed -i 's/FUN_18088c620/ProcessBufferQueue/g' 05_networking.c
sed -i 's/FUN_18088c7c0/HandleBufferStream/g' 05_networking.c
sed -i 's/FUN_18088c970/ProcessBufferData/g' 05_networking.c
sed -i 's/FUN_18088c9b0/ValidateBufferIntegrity/g' 05_networking.c
sed -i 's/FUN_18088ca20/TransferBufferData/g' 05_networking.c
sed -i 's/FUN_18088cbb0/CompressBufferData/g' 05_networking.c
sed -i 's/FUN_18088cbf0/GetBufferPointer/g' 05_networking.c

# 网络内存管理函数
sed -i 's/FUN_18088ce50/FreeNetworkMemory/g' 05_networking.c
sed -i 's/FUN_18088cee0/AllocateNetworkMemory/g' 05_networking.c
sed -i 's/FUN_18088cf2e/GetNetworkMemoryInfo/g' 05_networking.c
sed -i 's/FUN_18088cfa3/ResetNetworkMemory/g' 05_networking.c
sed -i 's/FUN_18088cfc0/ValidateNetworkMemory/g' 05_networking.c
sed -i 's/FUN_18088d0c0/OptimizeNetworkMemory/g' 05_networking.c
sed -i 's/FUN_18088d2be/CleanupNetworkMemory/g' 05_networking.c
sed -i 's/FUN_18088d388/InitializeNetworkMemory/g' 05_networking.c
sed -i 's/FUN_18088d510/ManageNetworkMemory/g' 05_networking.c
sed -i 's/FUN_18088d575/GetMemoryUsage/g' 05_networking.c
sed -i 's/FUN_18088d6fc/ResetMemoryPool/g' 05_networking.c
sed -i 's/FUN_18088d720/ProcessMemoryData/g' 05_networking.c
sed -i 's/FUN_18088d7c0/HandleMemoryAllocation/g' 05_networking.c
sed -i 's/FUN_18088d850/ValidateMemoryPool/g' 05_networking.c
sed -i 's/FUN_18088d880/FreeMemoryPool/g' 05_networking.c
sed -i 's/FUN_18088d902/InitializeMemoryPool/g' 05_networking.c
sed -i 's/FUN_18088d90e/SetupMemoryPool/g' 05_networking.c
sed -i 's/FUN_18088d9d0/CleanupMemoryPool/g' 05_networking.c
sed -i 's/FUN_18088da44/ResetMemoryManager/g' 05_networking.c
sed -i 's/FUN_18088da49/GetMemoryManagerStatus/g' 05_networking.c
sed -i 's/FUN_18088da50/ProcessMemoryRequest/g' 05_networking.c
sed -i 's/FUN_18088da6d/ReleaseMemoryResources/g' 05_networking.c
sed -i 's/FUN_18088dad3/GetMemoryStatistics/g' 05_networking.c
sed -i 's/FUN_18088dbf0/HandleMemoryTransfer/g' 05_networking.c
sed -i 's/FUN_18088dcf0/ValidateMemoryTransfer/g' 05_networking.c
sed -i 's/FUN_18088dd60/ProcessMemoryTransfer/g' 05_networking.c
sed -i 's/FUN_18088de01/CleanupMemoryTransfer/g' 05_networking.c
sed -i 's/FUN_18088de97/ResetMemoryTransfer/g' 05_networking.c

# 网络事件和错误处理函数
sed -i 's/FUN_18088e210/InitializeNetworkEvents/g' 05_networking.c
sed -i 's/FUN_18088e480/ProcessNetworkEvent/g' 05_networking.c
sed -i 's/FUN_18088e4e4/GetEventQueueStatus/g' 05_networking.c
sed -i 's/FUN_18088e6b3/ResetEventQueue/g' 05_networking.c
sed -i 's/FUN_18088e6d0/HandleNetworkError/g' 05_networking.c
sed -i 's/FUN_18088e700/ProcessEventQueue/g' 05_networking.c
sed -i 's/FUN_18088e780/GetEventInfo/g' 05_networking.c
sed -i 's/FUN_18088e7a4/ValidateEvent/g' 05_networking.c
sed -i 's/FUN_18088e892/GetEventCount/g' 05_networking.c
sed -i 's/FUN_18088e8b0/ProcessEvent/g' 05_networking.c
sed -i 's/FUN_18088e970/HandleEventData/g' 05_networking.c
sed -i 's/FUN_18088eb60/ProcessEventStream/g' 05_networking.c

# 网络数据包验证和处理函数
sed -i 's/FUN_18088ee20/ValidateNetworkPacket/g' 05_networking.c
sed -i 's/FUN_18088ee60/ProcessNetworkPacket/g' 05_networking.c
sed -i 's/FUN_18088eebb/GetPacketInfo/g' 05_networking.c
sed -i 's/FUN_18088ef0e/ValidatePacketHeader/g' 05_networking.c
sed -i 's/FUN_18088efaa/GetPacketSize/g' 05_networking.c
sed -i 's/FUN_18088efd5/ResetPacketBuffer/g' 05_networking.c
sed -i 's/FUN_18088efe0/ProcessPacketHeader/g' 05_networking.c
sed -i 's/FUN_18088f010/ValidatePacketData/g' 05_networking.c
sed -i 's/FUN_18088f050/HandlePacketTransfer/g' 05_networking.c
sed -i 's/FUN_18088f06b/GetPacketTransferStatus/g' 05_networking.c
sed -i 's/FUN_18088f0f7/ResetPacketTransfer/g' 05_networking.c
sed -i 's/FUN_18088f18b/InitializePacketTransfer/g' 05_networking.c
sed -i 's/FUN_18088f195/SetupPacketTransfer/g' 05_networking.c
sed -i 's/FUN_18088f2d0/ProcessPacketStream/g' 05_networking.c
sed -i 's/FUN_18088f470/ValidatePacketStream/g' 05_networking.c
sed -i 's/FUN_18088f4d0/HandlePacketStream/g' 05_networking.c
sed -i 's/FUN_18088f530/ProcessPacketChunk/g' 05_networking.c
sed -i 's/FUN_18088f54e/GetPacketChunkInfo/g' 05_networking.c
sed -i 's/FUN_18088f59d/ResetPacketChunk/g' 05_networking.c
sed -i 's/FUN_18088f5a8/InitializePacketChunk/g' 05_networking.c
sed -i 's/FUN_18088f5c0/HandlePacketChunk/g' 05_networking.c
sed -i 's/FUN_18088f5de/GetPacketChunkStatus/g' 05_networking.c
sed -i 's/FUN_18088f612/FreePacketChunk/g' 05_networking.c
sed -i 's/FUN_18088f620/ProcessPacketData/g' 05_networking.c
sed -i 's/FUN_18088f643/GetPacketDataInfo/g' 05_networking.c
sed -i 's/FUN_18088f6f7/ResetPacketData/g' 05_networking.c
sed -i 's/FUN_18088f710/ValidatePacketData/g' 05_networking.c

# 高级网络功能函数
sed -i 's/FUN_18088f9ec/InitializeAdvancedNetwork/g' 05_networking.c
sed -i 's/FUN_18088fa00/ProcessAdvancedNetworkData/g' 05_networking.c
sed -i 's/FUN_18088fa22/GetAdvancedNetworkInfo/g' 05_networking.c
sed -i 's/FUN_18088fb33/ResetAdvancedNetwork/g' 05_networking.c
sed -i 's/FUN_18088fb40/ValidateAdvancedNetwork/g' 05_networking.c
sed -i 's/FUN_18088fb47/HandleAdvancedNetwork/g' 05_networking.c
sed -i 's/FUN_18088fb75/ProcessAdvancedRequest/g' 05_networking.c
sed -i 's/FUN_18088fdb0/ManageAdvancedConnection/g' 05_networking.c
sed -i 's/FUN_18088fdce/GetAdvancedConnectionInfo/g' 05_networking.c
sed -i 's/FUN_18088fded/ResetAdvancedConnection/g' 05_networking.c
sed -i 's/FUN_18088fe3b/CleanupAdvancedConnection/g' 05_networking.c
sed -i 's/FUN_18088fe51/InitializeAdvancedConnection/g' 05_networking.c
sed -i 's/FUN_18088fe60/HandleAdvancedData/g' 05_networking.c
sed -i 's/FUN_18088fea0/ProcessAdvancedStream/g' 05_networking.c
sed -i 's/FUN_18088febe/GetAdvancedStreamInfo/g' 05_networking.c
sed -i 's/FUN_18088fedd/ResetAdvancedStream/g' 05_networking.c
sed -i 's/FUN_18088ff36/InitializeAdvancedStream/g' 05_networking.c
sed -i 's/FUN_18088ff4c/SetupAdvancedStream/g' 05_networking.c
sed -i 's/FUN_18088ff60/ProcessAdvancedBufferData/g' 05_networking.c
sed -i 's/FUN_18088ffd5/GetAdvancedBufferInfo/g' 05_networking.c
sed -i 's/FUN_18088ffdf/FreeAdvancedBuffer/g' 05_networking.c
sed -i 's/FUN_18088fff0/ValidateAdvancedBuffer/g' 05_networking.c

# ===========================================================================
# UNK_ 变量替换
# ===========================================================================

# 网络配置表和缓冲区
sed -i 's/UNK_180983618/NetworkPacketBuffer/g' 05_networking.c
sed -i 's/UNK_180983680/NetworkErrorBuffer/g' 05_networking.c
sed -i 's/UNK_180983738/NetworkStreamBuffer/g' 05_networking.c
sed -i 's/UNK_1809837a0/NetworkTransferBuffer/g' 05_networking.c
sed -i 's/UNK_1809837c0/NetworkConnectionBuffer/g' 05_networking.c
sed -i 's/UNK_180983828/NetworkEventBuffer/g' 05_networking.c
sed -i 's/UNK_180983840/NetworkSecurityBuffer/g' 05_networking.c
sed -i 's/UNK_1809838a8/NetworkConfigBuffer/g' 05_networking.c
sed -i 's/UNK_180983950/NetworkDataBuffer/g' 05_networking.c
sed -i 's/UNK_1809839b8/NetworkMemoryBuffer/g' 05_networking.c
sed -i 's/UNK_180983a40/NetworkProtocolBuffer/g' 05_networking.c
sed -i 's/UNK_180983a60/NetworkSocketBuffer/g' 05_networking.c
sed -i 's/UNK_180983ac8/NetworkPacketHeader/g' 05_networking.c
sed -i 's/UNK_180983ae8/NetworkStreamHeader/g' 05_networking.c
sed -i 's/UNK_180983b50/NetworkConnectionHeader/g' 05_networking.c
sed -i 's/UNK_180983b68/NetworkEventHeader/g' 05_networking.c
sed -i 's/UNK_180983be8/NetworkSecurityHeader/g' 05_networking.c
sed -i 's/UNK_180983c50/NetworkConfigHeader/g' 05_networking.c
sed -i 's/UNK_180983c78/NetworkDataHeader/g' 05_networking.c
sed -i 's/UNK_180983cf8/NetworkMemoryHeader/g' 05_networking.c

# 网络数据结构
sed -i 's/UNK_180983d08/NetworkPacketStructure/g' 05_networking.c
sed -i 's/UNK_180983d18/NetworkStreamStructure/g' 05_networking.c
sed -i 's/UNK_180983d28/NetworkConnectionStructure/g' 05_networking.c
sed -i 's/UNK_180983d38/NetworkEventStructure/g' 05_networking.c
sed -i 's/UNK_180983d48/NetworkSecurityStructure/g' 05_networking.c
sed -i 's/UNK_180983d58/NetworkConfigStructure/g' 05_networking.c
sed -i 's/UNK_180983d68/NetworkDataStructure/g' 05_networking.c
sed -i 's/UNK_180983d78/NetworkMemoryStructure/g' 05_networking.c
sed -i 's/UNK_180983d88/NetworkProtocolStructure/g' 05_networking.c
sed -i 's/UNK_180983d98/NetworkSocketStructure/g' 05_networking.c

# 网络处理表
sed -i 's/UNK_180983e88/NetworkProcessingTable/g' 05_networking.c
sed -i 's/UNK_180983f78/NetworkPacketTable/g' 05_networking.c
sed -i 's/UNK_180984038/NetworkStreamTable/g' 05_networking.c
sed -i 's/UNK_1809840a0/NetworkConnectionTable/g' 05_networking.c
sed -i 's/UNK_180984130/NetworkEventTable/g' 05_networking.c
sed -i 's/UNK_1809841b0/NetworkSecurityTable/g' 05_networking.c
sed -i 's/UNK_180984228/NetworkConfigTable/g' 05_networking.c
sed -i 's/UNK_1809842c8/NetworkDataTable/g' 05_networking.c
sed -i 's/UNK_180984350/NetworkMemoryTable/g' 05_networking.c
sed -i 's/UNK_1809843e0/NetworkProtocolTable/g' 05_networking.c
sed -i 's/UNK_180984460/NetworkSocketTable/g' 05_networking.c
sed -i 's/UNK_1809844c8/NetworkTransferTable/g' 05_networking.c
sed -i 's/UNK_180984530/NetworkValidationTable/g' 05_networking.c
sed -i 's/UNK_180984540/NetworkCompressionTable/g' 05_networking.c
sed -i 's/UNK_1809845a0/NetworkEncryptionTable/g' 05_networking.c
sed -i 's/UNK_1809845c0/NetworkAuthenticationTable/g' 05_networking.c
sed -i 's/UNK_180984630/NetworkErrorTable/g' 05_networking.c
sed -i 's/UNK_180984690/NetworkLogTable/g' 05_networking.c
sed -i 's/UNK_1809846b0/NetworkDebugTable/g' 05_networking.c
sed -i 's/UNK_1809846e0/NetworkStatusTable/g' 05_networking.c
sed -i 's/UNK_180984700/NetworkMonitorTable/g' 05_networking.c
sed -i 's/UNK_180984730/NetworkPerformanceTable/g' 05_networking.c
sed -i 's/UNK_180984768/NetworkStatisticsTable/g' 05_networking.c
sed -i 's/UNK_180984790/NetworkMetricTable/g' 05_networking.c
sed -i 's/UNK_1809847d8/NetworkAnalysisTable/g' 05_networking.c
sed -i 's/UNK_180984830/NetworkOptimizationTable/g' 05_networking.c
sed -i 's/UNK_180984908/NetworkSecurityContextTable/g' 05_networking.c
sed -i 's/UNK_180984928/NetworkConnectionContextTable/g' 05_networking.c
sed -i 's/UNK_180984948/NetworkPacketContextTable/g' 05_networking.c
sed -i 's/UNK_180984968/NetworkStreamContextTable/g' 05_networking.c
sed -i 's/UNK_180984990/NetworkEventContextTable/g' 05_networking.c
sed -i 's/UNK_1809849d0/NetworkConfigContextTable/g' 05_networking.c
sed -i 's/UNK_180984a30/NetworkDataContextTable/g' 05_networking.c
sed -i 's/UNK_180984a60/NetworkMemoryContextTable/g' 05_networking.c
sed -i 's/UNK_180984a70/NetworkProtocolContextTable/g' 05_networking.c
sed -i 's/UNK_180984aa0/NetworkSocketContextTable/g' 05_networking.c
sed -i 's/UNK_180984ab8/NetworkTransferContextTable/g' 05_networking.c
sed -i 's/UNK_180984ac0/NetworkValidationContextTable/g' 05_networking.c
sed -i 's/UNK_180984ac8/NetworkCompressionContextTable/g' 05_networking.c
sed -i 's/UNK_180984ad0/NetworkEncryptionContextTable/g' 05_networking.c
sed -i 's/UNK_180984b50/NetworkAuthenticationContextTable/g' 05_networking.c
sed -i 's/UNK_180984be0/NetworkErrorContextTable/g' 05_networking.c
sed -i 's/UNK_180984c90/NetworkLogContextTable/g' 05_networking.c
sed -i 's/UNK_180984ca0/NetworkDebugContextTable/g' 05_networking.c
sed -i 's/UNK_180984cb0/NetworkStatusContextTable/g' 05_networking.c
sed -i 's/UNK_180984cc0/NetworkMonitorContextTable/g' 05_networking.c
sed -i 's/UNK_180984cd0/NetworkPerformanceContextTable/g' 05_networking.c
sed -i 's/UNK_180984d50/NetworkStatisticsContextTable/g' 05_networking.c

# 网络高级变量
sed -i 's/UNK_180985000/NetworkAdvancedTable/g' 05_networking.c
sed -i 's/UNK_180985100/NetworkOptimizationContext/g' 05_networking.c
sed -i 's/UNK_180985200/NetworkAnalysisContext/g' 05_networking.c
sed -i 's/UNK_180985300/NetworkMetricContext/g' 05_networking.c
sed -i 's/UNK_180985400/NetworkValidationContext/g' 05_networking.c
sed -i 's/UNK_180985500/NetworkCompressionContext/g' 05_networking.c
sed -i 's/UNK_180985600/NetworkEncryptionContext/g' 05_networking.c
sed -i 's/UNK_180985700/NetworkAuthenticationContext/g' 05_networking.c
sed -i 's/UNK_180985800/NetworkErrorContext/g' 05_networking.c
sed -i 's/UNK_180985900/NetworkLogContext/g' 05_networking.c
sed -i 's/UNK_180985a00/NetworkDebugContext/g' 05_networking.c
sed -i 's/UNK_180985b00/NetworkStatusContext/g' 05_networking.c
sed -i 's/UNK_180985c00/NetworkMonitorContext/g' 05_networking.c
sed -i 's/UNK_180985d00/NetworkPerformanceContext/g' 05_networking.c
sed -i 's/UNK_180985e00/NetworkStatisticsContext/g' 05_networking.c
sed -i 's/UNK_180985f00/NetworkMetricContext/g' 05_networking.c

# 网络系统变量
sed -i 's/UNK_180986258/NetworkSecuritySystemTable/g' 05_networking.c
sed -i 's/UNK_180986f68/NetworkConnectionSystemTable/g' 05_networking.c
sed -i 's/UNK_180986f90/NetworkPacketSystemTable/g' 05_networking.c
sed -i 's/UNK_180986fc0/NetworkStreamSystemTable/g' 05_networking.c
sed -i 's/UNK_180987020/NetworkEventSystemTable/g' 05_networking.c
sed -i 's/UNK_180987050/NetworkConfigSystemTable/g' 05_networking.c
sed -i 's/UNK_180987080/NetworkDataSystemTable/g' 05_networking.c
sed -i 's/UNK_1809870b0/NetworkProtocolSystemTable/g' 05_networking.c
sed -i 's/UNK_1809870e0/NetworkSocketSystemTable/g' 05_networking.c

# 网络高级系统变量
sed -i 's/UNK_180958180/NetworkAdvancedSystemTable/g' 05_networking.c
sed -i 's/UNK_1809570e8/NetworkAdvancedErrorTable/g' 05_networking.c
sed -i 's/UNK_180957208/NetworkAdvancedLogTable/g' 05_networking.c
sed -i 's/UNK_180957310/NetworkAdvancedDebugTable/g' 05_networking.c
sed -i 's/UNK_180957410/NetworkAdvancedStatusTable/g' 05_networking.c
sed -i 's/UNK_180957600/NetworkAdvancedMonitorTable/g' 05_networking.c
sed -i 's/UNK_18095af38/NetworkAdvancedPerformanceTable/g' 05_networking.c
sed -i 's/UNK_18095b500/NetworkAdvancedStatisticsTable/g' 05_networking.c

# 网络应用层变量
sed -i 's/UNK_180a0b198/NetworkApplicationTable/g' 05_networking.c

echo "05_networking.c 函数和变量美化完成！"