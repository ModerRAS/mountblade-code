#!/usr/bin/env python3
"""
完整的网络模块美化脚本
"""

import re

def process_networking_file():
    """处理网络模块文件"""
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    output_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking_beautified.c"
    
    # 函数重命名映射
    function_map = {
        # 基础网络函数
        "FUN_180860170": "HandleNetworkConnectionRequest",
        "FUN_180860210": "ProcessNetworkDataTransfer", 
        "FUN_180860390": "ValidateNetworkPacketData",
        "FUN_1808603ae": "CheckNetworkConnectionState",
        "FUN_1808603f6": "GetNetworkSystemStatus",
        "FUN_180860650": "TransmitNetworkPacket",
        "FUN_180860690": "ProcessNetworkConnectionHandler",
        "FUN_180860737": "CleanupNetworkResources",
        "FUN_1808616d8": "ResetNetworkConnectionState",
        "FUN_1808616f0": "InitializeNetworkSession",
        "FUN_180861720": "EstablishNetworkConnection",
        "FUN_180861780": "TerminateNetworkConnection",
        "FUN_180861820": "HandleNetworkDataPacket",
        "FUN_1808618d0": "ProcessNetworkMessage",
        "FUN_180861900": "ValidateNetworkCredentials",
        "FUN_180861970": "GetNetworkConnectionInfo",
        "FUN_1808619a0": "SendNetworkDataPacket",
        "FUN_1808619d0": "ReceiveNetworkDataPacket",
        "FUN_180861a00": "NetworkDataTransferComplete",
        "FUN_180861a70": "ProcessNetworkAuthentication",
        "FUN_180861aa8": "NetworkSystemInitialize",
        "FUN_180861b0c": "NetworkConnectionEstablish",
        "FUN_180861b29": "NetworkAuthenticationComplete",
        "FUN_180861cc6": "NetworkErrorHandler",
        "FUN_180861ccb": "NetworkStatusUpdate",
        "FUN_180861cd0": "NetworkConnectionMonitor",
        "FUN_180861d0b": "GetNetworkStatistics",
        "FUN_180861d76": "ValidateNetworkEndpoint",
        "FUN_180861d98": "NetworkConnectionValidate",
        "FUN_180861ef0": "CloseNetworkSession",
        "FUN_180861f14": "NetworkDisconnectHandler",
        "FUN_180861fdf": "GetNetworkLastError",
        "FUN_180862000": "SendNetworkMessage",
        "FUN_180862080": "ProcessNetworkTransmission",
        "FUN_18086226d": "HandleNetworkEvent",
        "FUN_18086247a": "NetworkCleanupComplete",
        "FUN_1808624a0": "NetworkSystemShutdown",
        "FUN_180862670": "GetNetworkConnectionStatus",
        "FUN_1808626e0": "ProcessNetworkRequest",
        "FUN_180862910": "HandleNetworkResponse",
        "FUN_1808629e9": "NetworkConnectionReset",
        "FUN_1808629f1": "NetworkBufferInitialize",
        "FUN_180862ad1": "NetworkSecurityInitialize",
        "FUN_180862b96": "NetworkConfigurationLoad",
        "FUN_180862bc0": "NetworkPerformanceMonitor",
        "FUN_180862c50": "NetworkErrorHandlerEx",
        "FUN_180862c75": "GetNetworkSystemInfo",
        "FUN_180862d17": "NetworkDebugHandler",
        "FUN_180862d20": "ProcessNetworkStream",
        "FUN_180862d70": "HandleNetworkConnectionEx"
    }
    
    # 变量重命名映射
    variable_map = {
        "local_10": "loopCounter",
        "local_18": "bufferSize", 
        "local_20": "dataSize",
        "local_28": "connectionHandle",
        "local_30": "networkStatus",
        "local_38": "packetData",
        "local_40": "socketHandle",
        "local_48": "contextPointer",
        "local_50": "resultCode",
        "local_58": "errorStatus",
        "local_60": "timeoutValue",
        "local_68": "bufferPointer",
        "local_70": "dataPointer",
        "local_78": "networkFlags",
        "local_80": "connectionFlags",
        "local_88": "packetSize",
        "local_90": "streamPointer",
        "local_98": "messagePointer",
        "param_1": "connectionContext",
        "param_2": "packetData", 
        "param_3": "dataSize",
        "param_4": "timeoutValue",
        "param_5": "callbackFunction",
        "param_6": "userData",
        "param_7": "errorHandler",
        "param_8": "completionHandler"
    }
    
    try:
        # 读取文件
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        print(f"读取文件成功，文件大小: {len(content)} 字符")
        
        # 备份原始文件
        backup_file = input_file + '.backup'
        with open(backup_file, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"备份文件创建: {backup_file}")
        
        # 应用函数重命名
        for old_name, new_name in function_map.items():
            # 统计替换次数
            count_before = content.count(old_name)
            if count_before > 0:
                # 重命名函数定义
                content = re.sub(
                    rf'\b(void|int|uint|longlong|NetworkHandle|byte|char|float|double|bool|undefined|undefined8)\s+{old_name}\s*\(',
                    rf'\1 {new_name}(',
                    content
                )
                # 重命名函数调用
                content = re.sub(rf'\b{old_name}\s*\(', f'{new_name}(', content)
                # 重命名标签引用
                content = re.sub(rf'\bgoto {old_name}', f'goto {new_name}', content)
                content = re.sub(rf'\b{old_name}:', f'{new_name}:', content)
                count_after = content.count(old_name)
                print(f"函数重命名: {old_name} -> {new_name} (替换了 {count_before - count_after} 处)")
        
        # 应用变量重命名
        for old_name, new_name in variable_map.items():
            count_before = content.count(old_name)
            if count_before > 0:
                content = re.sub(rf'\b{old_name}\b', new_name, content)
                count_after = content.count(old_name)
                print(f"变量重命名: {old_name} -> {new_name} (替换了 {count_before - count_after} 处)")
        
        # 添加文档注释
        content = add_documentation_comments(content)
        
        # 写入输出文件
        with open(input_file, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"文件处理完成: {input_file}")
        print(f"总共重命名了 {len(function_map)} 个函数")
        print(f"总共重命名了 {len(variable_map)} 个变量")
        
    except Exception as e:
        print(f"处理文件时出错: {e}")
        import traceback
        traceback.print_exc()

def add_documentation_comments(content):
    """添加文档注释"""
    # 为函数添加文档注释的示例
    function_docs = {
        "HandleNetworkConnectionRequest": """/**
 * 处理网络连接请求
 * 
 * 该函数负责处理客户端的网络连接请求，包括连接验证、
 * 资源分配和连接状态管理。
 * 
 * @param connectionContext 网络连接上下文
 * @param packetData 数据包数据
 * @return 处理结果状态码
 */""",
        
        "ProcessNetworkDataTransfer": """/**
 * 处理网络数据传输
 * 
 * 该函数负责网络数据的传输操作，包括数据打包、发送和确认。
 * 
 * @param connectionContext 网络连接上下文
 * @param packetData 数据包数据指针
 * @param dataSize 数据大小指针
 * @return 传输结果状态码
 */""",
        
        "ValidateNetworkPacketData": """/**
 * 验证网络数据包
 * 
 * 该函数负责验证网络数据包的完整性和有效性。
 * 
 * @param connectionContext 网络连接上下文
 * @param packetData 数据包数据
 * @param dataSize 数据大小指针
 * @return 验证结果状态码
 */"""
    }
    
    # 为每个函数添加文档注释
    for func_name, doc in function_docs.items():
        if func_name in content:
            # 在函数定义前添加文档注释
            pattern = rf'(\b(void|int|uint|longlong|NetworkHandle|byte|char|float|double|bool|undefined|undefined8)\s+{func_name}\s*\([^)]*\)\s*\{{)'
            replacement = f"{doc}\n\n\\1"
            content = re.sub(pattern, replacement, content)
    
    return content

if __name__ == "__main__":
    process_networking_file()