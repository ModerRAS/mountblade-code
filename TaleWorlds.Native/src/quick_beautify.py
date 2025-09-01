import re
import sys

def main():
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        print(f"文件读取成功，大小: {len(content)} 字符")
    except Exception as e:
        print(f"读取文件失败: {e}")
        return
    
    # 备份文件
    backup_path = file_path + '.backup'
    with open(backup_path, 'w', encoding='utf-8') as f:
        f.write(content)
    print(f"备份文件: {backup_path}")
    
    # 主要的函数重命名
    function_renames = {
        "FUN_180860170": "HandleNetworkConnectionRequest",
        "FUN_180860210": "ProcessNetworkDataTransfer",
        "FUN_180860390": "ValidateNetworkPacketData",
        "FUN_1808603ae": "CheckNetworkConnectionState",
        "FUN_1808603f6": "GetNetworkSystemStatus",
        "FUN_180860650": "TransmitNetworkPacket",
        "FUN_180860690": "ProcessNetworkConnectionHandler",
        "FUN_180860737": "CleanupNetworkResources"
    }
    
    # 变量重命名
    variable_renames = {
        "local_10": "loopCounter",
        "local_18": "bufferSize",
        "local_20": "dataSize",
        "local_28": "connectionHandle",
        "local_30": "networkStatus",
        "local_38": "packetData",
        "local_40": "socketHandle",
        "local_48": "contextPointer",
        "local_50": "resultCode"
    }
    
    # 统计原始数量
    original_fun_count = len(re.findall(r'FUN_180[0-9a-f]{4}', content))
    print(f"原始FUN_函数数量: {original_fun_count}")
    
    # 应用函数重命名
    total_replaced = 0
    for old_name, new_name in function_renames.items():
        pattern = rf'\b{old_name}\b'
        count = len(re.findall(pattern, content))
        if count > 0:
            content = re.sub(pattern, new_name, content)
            print(f"替换: {old_name} -> {new_name} ({count} 处)")
            total_replaced += count
    
    # 应用变量重命名
    for old_name, new_name in variable_renames.items():
        pattern = rf'\b{old_name}\b'
        count = len(re.findall(pattern, content))
        if count > 0:
            content = re.sub(pattern, new_name, content)
            print(f"变量替换: {old_name} -> {new_name} ({count} 处)")
    
    # 写入文件
    try:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"文件写入成功")
        
        # 统计结果
        remaining_count = len(re.findall(r'FUN_180[0-9a-f]{4}', content))
        print(f"替换完成:")
        print(f"  - 总共替换: {total_replaced} 处")
        print(f"  - 剩余FUN_函数: {remaining_count} 处")
        
    except Exception as e:
        print(f"写入文件失败: {e}")

if __name__ == "__main__":
    main()