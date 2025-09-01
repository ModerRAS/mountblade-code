#!/usr/bin/env python3
"""
网络模块美化脚本 - 系统化处理
"""

import re
import os

def beautify_networking_file():
    """美化网络模块文件"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    print("开始处理网络模块文件...")
    
    try:
        # 读取文件
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        print(f"文件读取成功，大小: {len(content)} 字符")
        
        # 备份文件
        backup_path = file_path + '.backup'
        with open(backup_path, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"备份文件创建: {backup_path}")
        
        # 统计原始FUN_函数数量
        original_count = len(re.findall(r'FUN_180[0-9a-f]{4}', content))
        print(f"原始FUN_函数数量: {original_count}")
        
        # 主要函数重命名映射
        function_renames = {
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
            "FUN_180861a70": "ProcessNetworkAuthentication"
        }
        
        # 变量重命名映射
        variable_renames = {
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
        
        # 应用函数重命名
        total_fun_replaced = 0
        for old_name, new_name in function_renames.items():
            pattern = rf'\b{old_name}\b'
            count = len(re.findall(pattern, content))
            if count > 0:
                content = re.sub(pattern, new_name, content)
                print(f"函数重命名: {old_name} -> {new_name} ({count} 处)")
                total_fun_replaced += count
        
        # 应用变量重命名
        total_var_replaced = 0
        for old_name, new_name in variable_renames.items():
            pattern = rf'\b{old_name}\b'
            count = len(re.findall(pattern, content))
            if count > 0:
                content = re.sub(pattern, new_name, content)
                print(f"变量重命名: {old_name} -> {new_name} ({count} 处)")
                total_var_replaced += count
        
        # 写入文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        # 统计结果
        remaining_count = len(re.findall(r'FUN_180[0-9a-f]{4}', content))
        print(f"处理完成:")
        print(f"  - 函数重命名: {total_fun_replaced} 处")
        print(f"  - 变量重命名: {total_var_replaced} 处")
        print(f"  - 剩余FUN_函数: {remaining_count} 处")
        print(f"文件已保存: {file_path}")
        
    except Exception as e:
        print(f"处理文件时出错: {e}")
        import traceback
        traceback.print_exc()

if __name__ == "__main__":
    beautify_networking_file()