#!/usr/bin/env python3
"""
网络模块美化完整脚本
"""

import re

def complete_beautify():
    """完整的网络模块美化"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    print("=== 网络模块美化脚本 ===")
    print("开始处理文件:", file_path)
    
    try:
        # 读取文件
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        print(f"文件读取成功，大小: {len(content)} 字符")
        
        # 创建备份
        backup_path = file_path + '.backup'
        with open(backup_path, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"备份文件: {backup_path}")
        
        # 统计原始状态
        original_fun_count = len(re.findall(r'FUN_180[0-9a-f]{4}', content))
        original_var_count = len(re.findall(r'\b(local_|param_)[0-9a-f]+\b', content))
        print(f"原始状态:")
        print(f"  - FUN_函数数量: {original_fun_count}")
        print(f"  - 通用变量数量: {original_var_count}")
        
        # 函数重命名映射
        function_map = {
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
        
        # 应用函数重命名
        print("\n=== 函数重命名 ===")
        fun_replaced = 0
        for old_name, new_name in function_map.items():
            pattern = rf'\b{old_name}\b'
            count = len(re.findall(pattern, content))
            if count > 0:
                content = re.sub(pattern, new_name, content)
                print(f"✓ {old_name} -> {new_name} ({count} 处)")
                fun_replaced += count
        
        # 应用变量重命名
        print("\n=== 变量重命名 ===")
        var_replaced = 0
        for old_name, new_name in variable_map.items():
            pattern = rf'\b{old_name}\b'
            count = len(re.findall(pattern, content))
            if count > 0:
                content = re.sub(pattern, new_name, content)
                print(f"✓ {old_name} -> {new_name} ({count} 处)")
                var_replaced += count
        
        # 写入文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        # 统计最终结果
        remaining_fun = len(re.findall(r'FUN_180[0-9a-f]{4}', content))
        remaining_var = len(re.findall(r'\b(local_|param_)[0-9a-f]+\b', content))
        
        print("\n=== 美化结果 ===")
        print(f"✓ 函数重命名: {fun_replaced} 处")
        print(f"✓ 变量重命名: {var_replaced} 处")
        print(f"✓ 剩余FUN_函数: {remaining_fun} 处")
        print(f"✓ 剩余通用变量: {remaining_var} 处")
        print(f"✓ 文件已保存: {file_path}")
        
        # 为函数添加文档注释的示例
        print("\n=== 文档注释建议 ===")
        print("建议为以下函数添加文档注释:")
        for func_name in function_map.values():
            if func_name in content:
                print(f"  - {func_name}")
        
    except Exception as e:
        print(f"处理文件时出错: {e}")
        import traceback
        traceback.print_exc()

if __name__ == "__main__":
    complete_beautify()