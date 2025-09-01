#!/usr/bin/env python3
"""
网络模块函数重命名脚本
用于重命名 05_networking.c 文件中的 FUN_ 函数
"""

import re

# 函数重命名映射
FUNCTION_RENAME_MAP = {
    # 基于功能分析的函数重命名
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

# 变量名重命名映射
VARIABLE_RENAME_MAP = {
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

def rename_functions(content):
    """重命名函数"""
    for old_name, new_name in FUNCTION_RENAME_MAP.items():
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
    
    return content

def rename_variables(content):
    """重命名变量"""
    for old_name, new_name in VARIABLE_RENAME_MAP.items():
        # 重命名局部变量
        content = re.sub(rf'\b{old_name}\b', new_name, content)
    
    return content

def process_file():
    """处理文件"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 备份原始文件
        backup_path = file_path + '.backup'
        with open(backup_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        # 处理文件内容
        content = rename_functions(content)
        content = rename_variables(content)
        
        # 写入处理后的文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"文件处理完成: {file_path}")
        print(f"备份文件: {backup_path}")
        print(f"重命名了 {len(FUNCTION_RENAME_MAP)} 个函数")
        print(f"重命名了 {len(VARIABLE_RENAME_MAP)} 个变量")
        
    except Exception as e:
        print(f"处理文件时出错: {e}")

if __name__ == "__main__":
    process_file()