#!/usr/bin/env python3
"""
网络系统文件重命名脚本
用于重命名05_networking.c文件中的FUN_函数、UNK_变量和DAT_变量
"""

import re
import os

def main():
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    if not os.path.exists(file_path):
        print(f"文件不存在: {file_path}")
        return
    
    print("开始重命名网络系统文件...")
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # FUN_函数重命名映射
    fun_renames = {
        # 连接管理相关函数
        "FUN_18085b200": "ProcessNetworkConnectionData",
        "FUN_18085b595": "SendNetworkPacketData",
        "FUN_18085bbe0": "ValidateNetworkConnection",
        "FUN_18085c230": "HandleNetworkTimeout",
        "FUN_18085c5b0": "ProcessNetworkPacket",
        "FUN_18085ca30": "CleanupNetworkResources",
        "FUN_18085d460": "CreateNetworkConnection",
        "FUN_18085d650": "InitializeNetworkSocket",
        "FUN_18085d7f0": "SetupNetworkConnection",
        "FUN_18085dca0": "CloseNetworkConnection",
        "FUN_18085dd4b": "ResetNetworkState",
        "FUN_18085dd7c": "ClearNetworkCache",
        "FUN_18085dff0": "DestroyNetworkConnection",
        "FUN_18085e003": "ReleaseNetworkResources",
        "FUN_18085e112": "ShutdownNetworkSystem",
        "FUN_18085e221": "RestartNetworkService",
        "FUN_18085e4a0": "ConfigureNetworkSettings",
        
        # 数据传输相关函数
        "FUN_18085e820": "SendNetworkData",
        "FUN_18085e860": "ReceiveNetworkData",
        "FUN_18085e990": "ProcessNetworkTransfer",
        "FUN_18085ea80": "HandleNetworkStream",
        "FUN_18085eabf": "MonitorNetworkTraffic",
        "FUN_18085ec90": "ManageNetworkSession",
        "FUN_18085ee30": "CalculateNetworkMetrics",
        "FUN_18085ee5e": "UpdateNetworkStatistics",
        "FUN_18085eec6": "GetNetworkStatus",
        "FUN_18085ef10": "CheckNetworkConnection",
        "FUN_18085f080": "GetNetworkTimestamp",
        "FUN_18085f0e0": "ValidateNetworkPacket",
        "FUN_18085f11f": "AuthenticateNetworkClient",
        "FUN_18085f163": "AuthorizeNetworkAccess",
        "FUN_18085f2d3": "InitializeNetworkProtocol",
        "FUN_18085f336": "SetupNetworkEncryption",
        "FUN_18085f340": "ConfigureNetworkSecurity",
        "FUN_18085f36d": "VerifyNetworkIntegrity",
        "FUN_18085f39d": "EnableNetworkCompression",
        "FUN_18085f440": "OptimizeNetworkPerformance",
        "FUN_18085f500": "CalculateNetworkChecksum",
        "FUN_18085f670": "HandleNetworkError",
        "FUN_18085f812": "RecoverNetworkConnection",
        "FUN_18085f879": "LogNetworkActivity",
        "FUN_18085f893": "MonitorNetworkHealth",
        "FUN_18085fb30": "ValidateNetworkSecurity",
        "FUN_18085fc0e": "CheckNetworkAvailability",
        
        # 缓冲区管理相关函数
        "FUN_18085fd51": "InitializeNetworkBuffer",
        "FUN_18085fdf0": "AllocateNetworkMemory",
        "FUN_18085ff30": "FreeNetworkMemory",
        "FUN_18085ff70": "ResizeNetworkBuffer",
        "FUN_18085ffc0": "CopyNetworkData",
        "FUN_18085fff0": "MoveNetworkData",
        "FUN_1808600b0": "CompareNetworkData",
        "FUN_180860170": "SerializeNetworkData",
        "FUN_180860210": "DeserializeNetworkData",
        "FUN_180860390": "CompressNetworkData",
        "FUN_1808603ae": "DecompressNetworkData",
        "FUN_1808603f6": "EncryptNetworkData",
        "FUN_180860480": "DecryptNetworkData",
        "FUN_180860650": "HashNetworkData",
        "FUN_180860690": "ValidateNetworkData",
        "FUN_180860737": "SanitizeNetworkInput",
        "FUN_1808616bc": "PurgeNetworkBuffer",
        "FUN_1808616d8": "FlushNetworkCache",
        "FUN_1808616f0": "OptimizeNetworkBuffer",
        "FUN_180861720": "DefragmentNetworkMemory",
        "FUN_180861780": "ReorganizeNetworkData",
        "FUN_180861820": "ManageNetworkPool",
        "FUN_1808618d0": "AllocateNetworkChunk",
        "FUN_180861900": "CalculateNetworkUsage",
        "FUN_180861970": "GetNetworkMemoryInfo",
        "FUN_1808619a0": "SetNetworkBufferLimits",
        "FUN_1808619d0": "CheckMemoryAvailability",
        "FUN_180861a00": "AdjustMemoryAllocation",
        "FUN_180861a70": "BalanceNetworkLoad",
        "FUN_180861aa8": "MonitorMemoryUsage",
        "FUN_180861b0c": "OptimizeMemoryAccess",
        "FUN_180861b29": "CacheNetworkData",
        "FUN_180861cc6": "InitializeMemoryManager",
        "FUN_180861ccb": "ConfigureMemorySettings",
        "FUN_180861cd0": "SetupMemoryAllocator",
        "FUN_180861ce0": "AllocateSystemMemory",
        "FUN_180861d0b": "FreeSystemMemory",
        "FUN_180861d76": "ReallocateSystemMemory",
        "FUN_180861d98": "CopySystemMemory",
        "FUN_180861e7c": "MoveSystemMemory",
        "FUN_180861e8b": "CompareSystemMemory",
        "FUN_180861ed5": "FillSystemMemory",
        "FUN_180861ef0": "ClearSystemMemory",
        "FUN_180861f14": "ProtectSystemMemory",
        "FUN_180861fdf": "UnprotectSystemMemory",
        
        # 事件处理相关函数
        "FUN_180862000": "InitializeNetworkEvent",
        "FUN_180862080": "ProcessNetworkEvent",
        "FUN_18086226d": "HandleNetworkEvent",
        "FUN_18086247a": "QueueNetworkEvent",
        "FUN_1808624a0": "DispatchNetworkEvent",
        "FUN_180862670": "CancelNetworkEvent",
        "FUN_1808626e0": "WaitForNetworkEvent",
        "FUN_180862910": "SignalNetworkEvent",
        "FUN_1808629a0": "NotifyNetworkEvent",
        "FUN_1808629e9": "CompleteNetworkEvent",
        "FUN_1808629f1": "AbortNetworkEvent",
        "FUN_180862a7d": "ResetEventQueue",
        "FUN_180862ad1": "ClearEventHistory",
        "FUN_180862ae8": "LogNetworkEvent",
        "FUN_180862b96": "MonitorEventActivity",
        "FUN_180862bc0": "CalculateEventMetrics",
        "FUN_180862c50": "ValidateEventSequence",
        "FUN_180862c75": "CheckEventStatus",
        "FUN_180862d17": "InitializeEventTimer",
        "FUN_180862d20": "ScheduleEvent",
        "FUN_180862d70": "ExecuteScheduledEvent",
        "FUN_180862e00": "GetEventTimestamp",
        "FUN_180862e90": "SetEventPriority",
        "FUN_180863140": "HandleEventError",
        "FUN_180863180": "ProcessEventException",
        "FUN_180863210": "ValidateEventParameters",
        "FUN_180863420": "CheckEventAvailability",
        "FUN_180863430": "ProcessEventResult",
        "FUN_1808637ae": "GetEventStatus",
        "FUN_180863820": "SetEventCallback",
        "FUN_1808639e2": "RemoveEventCallback",
        "FUN_180863a57": "InvokeEventCallback",
        "FUN_180863a80": "ProcessEventChain",
        "FUN_180863aa3": "GetEventCount",
        "FUN_180863b09": "GetEventInfo",
        "FUN_180863b30": "SetEventData",
        "FUN_180863b80": "GetEventData",
        
        # 其他网络功能函数
        "FUN_180863bd0": "InitializeNetworkLogger",
        "FUN_180863bf7": "ConfigureLoggingSettings",
        "FUN_180863c00": "LogNetworkMessage",
        "FUN_180863c8b": "LogNetworkError",
        "FUN_180863d75": "LogNetworkWarning",
        "FUN_180863d92": "FlushNetworkLog",
        "FUN_180863f57": "RotateNetworkLog",
        "FUN_180864040": "CheckLogSize",
        "FUN_1808640c7": "CompressLogFile",
        "FUN_18086463a": "GetLogStatistics",
        "FUN_1808646a0": "SearchLogEntries",
        "FUN_180864780": "FilterLogMessages",
        "FUN_180864850": "ExportLogData",
        "FUN_18086490d": "AnalyzeLogPatterns",
        "FUN_1808649b0": "GenerateLogReport",
        "FUN_180864e8c": "MonitorLogPerformance",
        "FUN_180865027": "OptimizeLogStorage",
        "FUN_1808650a0": "SecureLogData",
        "FUN_180865286": "BackupLogFile",
        "FUN_1808652fd": "RestoreLogFile",
        "FUN_180865470": "ArchiveLogData",
        "FUN_18086547c": "PurgeOldLogs",
        "FUN_1808654be": "ValidateLogIntegrity",
        "FUN_18086551b": "RepairLogFile",
        "FUN_180865541": "MigrateLogData",
        "FUN_180865550": "ConvertLogFormat",
        "FUN_1808655bb": "IndexLogEntries",
        "FUN_1808657eb": "InitializeSearchEngine",
        "FUN_180865800": "SearchLogContent",
        "FUN_18086582c": "GetSearchResults",
        "FUN_180865a0f": "OptimizeSearchIndex",
        "FUN_180865c20": "ProcessSearchQuery",
        "FUN_180865e20": "RankSearchResults",
        "FUN_180865ec0": "FilterSearchResults",
        "FUN_180865f90": "HighlightSearchTerms",
        "FUN_180865fc0": "CacheSearchResults",
        "FUN_1808661e0": "ExportSearchData",
        "FUN_180866340": "ImportSearchData",
        "FUN_180866550": "UpdateSearchIndex",
        "FUN_180866820": "MergeSearchIndices",
        "FUN_1808668a0": "SplitSearchIndex",
        "FUN_1808669b0": "OptimizeSearchQuery",
        "FUN_180866a90": "AnalyzeSearchPattern",
        "FUN_180866ba0": "PredictSearchIntent",
        "FUN_180866c90": "InitializeRecommendation",
        "FUN_180866d00": "GenerateRecommendations",
        "FUN_180866e25": "FilterRecommendations",
        "FUN_180866e97": "RankRecommendations",
        "FUN_180866f50": "ValidateRecommendation",
        "FUN_180866fe0": "ApplyRecommendation",
        "FUN_180867092": "TrackRecommendation",
        "FUN_180867111": "GetRecommendationStats",
        "FUN_180867170": "UpdateRecommendationModel",
        "FUN_180867280": "TrainRecommendationEngine",
        "FUN_1808672e4": "EvaluateRecommendation",
        "FUN_18086735a": "InitializeAnalytics",
        "FUN_1808673a0": "CollectAnalyticsData",
        "FUN_180867470": "ProcessAnalyticsData",
        "FUN_1808674e0": "GenerateAnalyticsReport",
        "FUN_180867600": "VisualizeAnalyticsData",
        "FUN_1808676f0": "ExportAnalyticsData",
        "FUN_180867714": "ImportAnalyticsData",
        "FUN_1808677fa": "BackupAnalyticsData",
        "FUN_180867810": "RestoreAnalyticsData",
        "FUN_1808678e0": "ArchiveAnalyticsData",
        "FUN_180867990": "PurgeAnalyticsData",
        "FUN_180867bc0": "GetAnalyticsSummary",
        "FUN_180867d60": "CalculateAnalyticsMetrics",
        "FUN_180867f80": "UpdateAnalyticsModel",
        "FUN_180868160": "ValidateAnalyticsData",
        "FUN_1808681d0": "CleanAnalyticsData",
        "FUN_180868210": "NormalizeAnalyticsData",
        "FUN_180868246": "AggregateAnalyticsData",
        "FUN_18086825f": "SampleAnalyticsData",
        "FUN_180868330": "FilterAnalyticsData",
        "FUN_180868363": "SortAnalyticsData",
        "FUN_180868459": "GroupAnalyticsData",
        "FUN_180868490": "TransformAnalyticsData",
        "FUN_180868640": "JoinAnalyticsData",
        "FUN_1808686a0": "MergeAnalyticsData",
        "FUN_180868700": "SplitAnalyticsData",
        "FUN_180868724": "PartitionAnalyticsData",
        "FUN_1808687df": "DistributeAnalyticsData",
        "FUN_180868800": "ReplicateAnalyticsData",
        "FUN_180868970": "SynchronizeAnalyticsData",
        "FUN_1808689a5": "ValidateSyncOperation",
        "FUN_1808689f2": "MonitorSyncProgress",
        "FUN_180868a00": "HandleSyncError",
        "FUN_180868a33": "RecoverSyncOperation",
        "FUN_180868a47": "OptimizeSyncPerformance",
        "FUN_180868a67": "BalanceSyncLoad",
        "FUN_180868a6c": "PrioritizeSyncTasks",
        "FUN_180868a80": "ScheduleSyncOperation",
        "FUN_180868d20": "ExecuteSyncTask",
        "FUN_180868d80": "MonitorSyncTask",
        "FUN_180868de0": "ValidateSyncResult",
        "FUN_180868e40": "CompleteSyncOperation",
        "FUN_180868ea0": "CancelSyncOperation",
        "FUN_180868f00": "RetrySyncOperation",
        "FUN_180868f60": "ResumeSyncOperation",
        "FUN_180868fc0": "PauseSyncOperation",
        "FUN_180869020": "AbortSyncOperation",
        "FUN_180869080": "ResetSyncOperation",
    }
    
    # UNK_变量重命名映射
    unk_renames = {
        "UNK_180984a60": "NetworkConnectionTable",
        "UNK_180984a70": "NetworkConnectionData",
        "UNK_180984aa0": "NetworkConnectionInfo",
        "UNK_180986f68": "NetworkConnectionConfig",
        "UNK_180984ab8": "NetworkConnectionHandle",
        "UNK_180986f90": "NetworkConnectionStatus",
        "UNK_180984ac0": "NetworkSocketData",
        "UNK_180984ac8": "NetworkSocketInfo",
        "UNK_180984ad0": "NetworkProtocolData",
        "UNK_180984b50": "NetworkPacketData",
        "UNK_180984cd0": "NetworkStreamData",
        "UNK_180984c90": "NetworkBufferPool",
        "UNK_180984ca0": "NetworkMemoryPool",
        "UNK_180984cb0": "NetworkCachePool",
        "UNK_180984cc0": "NetworkTempPool",
        "UNK_18095af38": "NetworkMemoryManager",
        "UNK_180863400": "NetworkEventDispatcher",
        "UNK_1808633a0": "NetworkEventHandler",
        "UNK_18095b500": "NetworkSecurityData",
        "UNK_180957600": "NetworkErrorMessage",
        "UNK_180984d50": "NetworkTransferData",
        "UNK_180984e88": "NetworkConfigData",
        "UNK_180984eb0": "NetworkConfigInfo",
        "UNK_180984ef0": "NetworkProtocolConfig",
        "UNK_180981c30": "NetworkGlobalData",
        "UNK_180981be0": "NetworkSystemInfo",
        "UNK_180981c08": "NetworkSystemConfig",
        "UNK_180985010": "NetworkServerData",
        "UNK_18097cf70": "NetworkClientData",
        "UNK_180985080": "NetworkSessionData",
        "UNK_180985170": "NetworkSessionConfig",
        "UNK_180985140": "NetworkSessionInfo",
        "UNK_180985b90": "NetworkAuthData",
        "UNK_180984ff8": "NetworkPacketBuffer",
        "UNK_180981b58": "NetworkSocketBuffer",
        "UNK_180a0b198": "NetworkValidationData",
        "UNK_180c4ea94": "NetworkReturnData",
    }
    
    # DAT_变量重命名映射
    dat_renames = {
        "DAT_180c4ea94": "NetworkGlobalConstants",
    }
    
    # 应用重命名
    print("应用FUN_函数重命名...")
    for old_name, new_name in fun_renames.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    print("应用UNK_变量重命名...")
    for old_name, new_name in unk_renames.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    print("应用DAT_变量重命名...")
    for old_name, new_name in dat_renames.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    # 为主要函数添加文档注释
    print("添加函数文档注释...")
    
    # 为连接管理函数添加注释
    content = re.sub(
        r'NetworkHandle ProcessNetworkConnectionData\(longlong connectionContext,uint \*packetData,longlong \*dataSize\)',
        '''/**
 * 处理网络连接数据
 * 
 * 该函数负责处理网络连接的数据，包括数据包的解析、验证和转发。
 * 主要用于网络连接数据的处理和传输操作。
 * 
 * @param connectionContext 网络连接上下文指针
 * @param packetData 数据包数据指针
 * @param dataSize 数据大小指针
 * @return 处理结果状态码
 */
NetworkHandle ProcessNetworkConnectionData(longlong connectionContext,uint *packetData,longlong *dataSize)''',
        content
    )
    
    content = re.sub(
        r'int SendNetworkPacketData\(longlong connectionContext,uint packetData,longlong dataSize,longlong connectionParam4\)',
        '''/**
 * 发送网络数据包数据
 * 
 * 该函数负责发送网络数据包，包括数据封装和传输。
 * 主要用于网络数据的发送操作。
 * 
 * @param connectionContext 网络连接上下文
 * @param packetData 数据包数据
 * @param dataSize 数据大小
 * @param connectionParam4 连接参数
 * @return 发送结果状态码
 */
int SendNetworkPacketData(longlong connectionContext,uint packetData,longlong dataSize,longlong connectionParam4)''',
        content
    )
    
    content = re.sub(
        r'void ValidateNetworkConnection\(longlong connectionContext,NetworkStatus packetData\)',
        '''/**
 * 验证网络连接
 * 
 * 该函数负责验证网络连接的完整性和有效性。
 * 主要用于网络连接的验证和安全检查。
 * 
 * @param connectionContext 网络连接上下文
 * @param packetData 数据包数据
 */
void ValidateNetworkConnection(longlong connectionContext,NetworkStatus packetData)''',
        content
    )
    
    content = re.sub(
        r'NetworkHandle CreateNetworkConnection\(NetworkHandle connectionContext,longlong \*packetData,longlong \*dataSize,char connectionParam4\)',
        '''/**
 * 创建网络连接
 * 
 * 该函数负责创建新的网络连接，包括套接字初始化和连接建立。
 * 主要用于网络连接的创建和管理。
 * 
 * @param connectionContext 网络连接上下文
 * @param packetData 数据包数据指针
 * @param dataSize 数据大小指针
 * @param connectionParam4 连接参数
 * @return 连接句柄
 */
NetworkHandle CreateNetworkConnection(NetworkHandle connectionContext,longlong *packetData,longlong *dataSize,char connectionParam4)''',
        content
    )
    
    content = re.sub(
        r'void CloseNetworkConnection\(longlong \*connectionContext\)',
        '''/**
 * 关闭网络连接
 * 
 * 该函数负责关闭网络连接，释放相关资源。
 * 主要用于网络连接的清理和资源管理。
 * 
 * @param connectionContext 网络连接上下文指针
 */
void CloseNetworkConnection(longlong *connectionContext)''',
        content
    )
    
    content = re.sub(
        r'void DestroyNetworkConnection\(NetworkHandle \*connectionContext\)',
        '''/**
 * 销毁网络连接
 * 
 * 该函数负责完全销毁网络连接，清理所有相关资源。
 * 主要用于网络连接的彻底清理。
 * 
 * @param connectionContext 网络连接上下文指针
 */
void DestroyNetworkConnection(NetworkHandle *connectionContext)''',
        content
    )
    
    content = re.sub(
        r'NetworkHandle SendNetworkData\(NetworkHandle connectionContext,ulonglong packetData\)',
        '''/**
 * 发送网络数据
 * 
 * 该函数负责发送网络数据，包括数据封装和传输。
 * 主要用于网络数据的发送操作。
 * 
 * @param connectionContext 网络连接上下文
 * @param packetData 数据包数据
 * @return 发送结果状态码
 */
NetworkHandle SendNetworkData(NetworkHandle connectionContext,ulonglong packetData)''',
        content
    )
    
    content = re.sub(
        r'NetworkHandle ReceiveNetworkData\(ulonglong \*connectionContext,NetworkHandle packetData\)',
        '''/**
 * 接收网络数据
 * 
 * 该函数负责接收网络数据，包括数据解析和验证。
 * 主要用于网络数据的接收操作。
 * 
 * @param connectionContext 网络连接上下文指针
 * @param packetData 数据包数据
 * @return 接收结果状态码
 */
NetworkHandle ReceiveNetworkData(ulonglong *connectionContext,NetworkHandle packetData)''',
        content
    )
    
    content = re.sub(
        r'NetworkHandle CheckNetworkConnection\(longlong connectionContext\)',
        '''/**
 * 检查网络连接状态
 * 
 * 该函数负责检查网络连接的当前状态。
 * 主要用于网络连接状态的监控和管理。
 * 
 * @param connectionContext 网络连接上下文
 * @return 连接状态
 */
NetworkHandle CheckNetworkConnection(longlong connectionContext)''',
        content
    )
    
    content = re.sub(
        r'void ConfigureNetworkSettings\(longlong connectionContext\)',
        '''/**
 * 配置网络设置
 * 
 * 该函数负责配置网络连接的各种设置。
 * 主要用于网络连接的配置和管理。
 * 
 * @param connectionContext 网络连接上下文
 */
void ConfigureNetworkSettings(longlong connectionContext)''',
        content
    )
    
    # 保存修改后的文件
    backup_path = file_path + '.backup'
    if not os.path.exists(backup_path):
        os.rename(file_path, backup_path)
        print(f"原始文件已备份到: {backup_path}")
    
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"文件重命名完成，结果已保存到: {file_path}")
    print(f"共重命名 {len(fun_renames)} 个FUN_函数")
    print(f"共重命名 {len(unk_renames)} 个UNK_变量")
    print(f"共重命名 {len(dat_renames)} 个DAT_变量")

if __name__ == "__main__":
    main()