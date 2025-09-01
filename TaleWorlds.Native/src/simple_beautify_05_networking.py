#!/usr/bin/env python3
"""
简化版网络模块美化脚本
"""

import re

def simple_beautify():
    """简单的美化处理"""
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    # 最重要的函数重命名
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
    
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        print(f"文件读取成功，大小: {len(content)} 字符")
        
        # 备份
        backup_file = input_file + '.backup'
        with open(backup_file, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"备份文件: {backup_file}")
        
        # 统计原始FUN_函数数量
        original_count = len(re.findall(r'FUN_180[0-9a-f]{4}', content))
        print(f"原始FUN_函数数量: {original_count}")
        
        # 应用重命名
        total_replaced = 0
        for old_name, new_name in function_renames.items():
            pattern = rf'\b{old_name}\b'
            count = len(re.findall(pattern, content))
            if count > 0:
                content = re.sub(pattern, new_name, content)
                print(f"替换: {old_name} -> {new_name} ({count} 处)")
                total_replaced += count
        
        # 写入文件
        with open(input_file, 'w', encoding='utf-8') as f:
            f.write(content)
        
        # 统计剩余的FUN_函数
        remaining_count = len(re.findall(r'FUN_180[0-9a-f]{4}', content))
        print(f"替换完成，总共替换了 {total_replaced} 处")
        print(f"剩余FUN_函数数量: {remaining_count}")
        
    except Exception as e:
        print(f"处理出错: {e}")
        import traceback
        traceback.print_exc()

if __name__ == "__main__":
    simple_beautify()