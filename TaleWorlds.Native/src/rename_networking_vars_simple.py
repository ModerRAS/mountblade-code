#!/usr/bin/env python3
"""
简化版网络系统文件重命名脚本
用于重命名05_networking.c文件中的主要FUN_函数、UNK_变量和DAT_变量
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
    
    # 主要FUN_函数重命名映射
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
        
        # 事件处理相关函数
        "FUN_180860737": "PurgeNetworkBuffer",
        "FUN_1808616bc": "FlushNetworkCache",
        "FUN_1808616d8": "DefragmentNetworkMemory",
        "FUN_1808616f0": "OptimizeNetworkBuffer",
        "FUN_180861720": "ReorganizeNetworkData",
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
        
        # 系统管理函数
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
    }
    
    # 主要UNK_变量重命名映射
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
    }
    
    # DAT_变量重命名映射
    dat_renames = {
        "DAT_180c4ea94": "NetworkGlobalConstants",
    }
    
    # 应用重命名
    print("应用FUN_函数重命名...")
    for old_name, new_name in fun_renames.items():
        # 使用更精确的正则表达式避免误替换
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    print("应用UNK_变量重命名...")
    for old_name, new_name in unk_renames.items():
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    print("应用DAT_变量重命名...")
    for old_name, new_name in dat_renames.items():
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 为主要函数添加文档注释
    print("添加函数文档注释...")
    
    # 定义函数注释映射
    function_comments = {
        "ProcessNetworkConnectionData": '''/**
 * 处理网络连接数据
 * 
 * 该函数负责处理网络连接的数据，包括数据包的解析、验证和转发。
 * 主要用于网络连接数据的处理和传输操作。
 * 
 * @param connectionContext 网络连接上下文指针
 * @param packetData 数据包数据指针
 * @param dataSize 数据大小指针
 * @return 处理结果状态码
 */''',
        
        "SendNetworkPacketData": '''/**
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
 */''',
        
        "ValidateNetworkConnection": '''/**
 * 验证网络连接
 * 
 * 该函数负责验证网络连接的完整性和有效性。
 * 主要用于网络连接的验证和安全检查。
 * 
 * @param connectionContext 网络连接上下文
 * @param packetData 数据包数据
 */''',
        
        "CreateNetworkConnection": '''/**
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
 */''',
        
        "CloseNetworkConnection": '''/**
 * 关闭网络连接
 * 
 * 该函数负责关闭网络连接，释放相关资源。
 * 主要用于网络连接的清理和资源管理。
 * 
 * @param connectionContext 网络连接上下文指针
 */''',
        
        "DestroyNetworkConnection": '''/**
 * 销毁网络连接
 * 
 * 该函数负责完全销毁网络连接，清理所有相关资源。
 * 主要用于网络连接的彻底清理。
 * 
 * @param connectionContext 网络连接上下文指针
 */''',
        
        "SendNetworkData": '''/**
 * 发送网络数据
 * 
 * 该函数负责发送网络数据，包括数据封装和传输。
 * 主要用于网络数据的发送操作。
 * 
 * @param connectionContext 网络连接上下文
 * @param packetData 数据包数据
 * @return 发送结果状态码
 */''',
        
        "ReceiveNetworkData": '''/**
 * 接收网络数据
 * 
 * 该函数负责接收网络数据，包括数据解析和验证。
 * 主要用于网络数据的接收操作。
 * 
 * @param connectionContext 网络连接上下文指针
 * @param packetData 数据包数据
 * @return 接收结果状态码
 */''',
        
        "CheckNetworkConnection": '''/**
 * 检查网络连接状态
 * 
 * 该函数负责检查网络连接的当前状态。
 * 主要用于网络连接状态的监控和管理。
 * 
 * @param connectionContext 网络连接上下文
 * @return 连接状态
 */''',
        
        "ConfigureNetworkSettings": '''/**
 * 配置网络设置
 * 
 * 该函数负责配置网络连接的各种设置。
 * 主要用于网络连接的配置和管理。
 * 
 * @param connectionContext 网络连接上下文
 */''',
    }
    
    # 为函数添加注释
    for func_name, comment in function_comments.items():
        # 构建函数签名的正则表达式模式
        pattern = r'(\b' + re.escape(func_name) + r'\b.*?\)\s*\{)'
        replacement = comment + '\n' + r'\1'
        content = re.sub(pattern, replacement, content)
    
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
    print(f"为 {len(function_comments)} 个主要函数添加了文档注释")

if __name__ == "__main__":
    main()