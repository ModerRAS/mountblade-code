#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量网络函数重命名脚本
用于批量处理05_networking.c中的FUN_函数重命名
"""

def create_batch_rename_commands():
    """创建批量重命名命令"""
    
    # 定义要重命名的函数映射
    function_mappings = [
        # 网络连接相关
        ("FUN_18086582c", "GetNetworkConnectionStatus582c"),
        ("FUN_180865b00", "GetNetworkConnectionPtr5b00"),
        ("FUN_180865bc0", "GetNetworkConnectionPtr5bc0"),
        ("FUN_180865c20", "ProcessNetworkConnection5c20"),
        ("FUN_180865e20", "CreateNetworkConnection5e20"),
        ("FUN_180865ec0", "InitializeNetworkContext5ec0"),
        ("FUN_180865f90", "ProcessNetworkPacket5f90"),
        ("FUN_180865fc0", "ProcessNetworkConnection5fc0"),
        ("FUN_1808661e0", "ProcessNetworkData61e0"),
        ("FUN_180866340", "CreateNetworkHandle6340"),
        ("FUN_180866820", "ProcessNetworkData6820"),
        ("FUN_1808668a0", "ProcessNetworkConnection68a0"),
        ("FUN_1808669b0", "ProcessNetworkData69b0"),
        ("FUN_180866a90", "ProcessNetworkPacket6a90"),
        ("FUN_180866ba0", "ProcessNetworkConnection6ba0"),
        ("FUN_180866d00", "InitializeNetworkConnection6d00"),
        ("FUN_180866e25", "GetNetworkHandle6e25"),
        ("FUN_180866e97", "GetNetworkConnection6e97"),
        ("FUN_180866f50", "GetNetworkStatus6f50"),
        ("FUN_180866fe0", "ProcessNetworkConnection6fe0"),
        ("FUN_180867092", "GetNetworkConnection7092"),
        ("FUN_180867111", "GetNetworkHandle7111"),
        ("FUN_180867170", "InitializeNetworkProcessor7170"),
        ("FUN_180867280", "ValidateNetworkState7280"),
        ("FUN_1808672e4", "CleanupNetworkResources72e4"),
        ("FUN_1808673a0", "CheckNetworkConnection73a0"),
        ("FUN_180867470", "ProcessNetworkData7470"),
        ("FUN_180867600", "ProcessNetworkConnection7600"),
        ("FUN_1808676f0", "ValidateNetworkConnection76f0"),
        ("FUN_180867714", "GetNetworkStatus7714"),
        ("FUN_1808677fa", "GetNetworkHandle77fa"),
        ("FUN_1808678e0", "ProcessNetworkConnection78e0"),
        ("FUN_180867990", "ProcessNetworkOperation7990"),
        ("FUN_180867f80", "ProcessNetworkData7f80"),
        ("FUN_1808681d0", "GetNetworkStatus81d0"),
        ("FUN_180868363", "InitializeNetworkSystem8363"),
        ("FUN_180868459", "InitializeNetworkContext8459"),
        ("FUN_180868490", "ProcessNetworkData8490"),
        ("FUN_1808686a0", "ProcessNetworkConnection86a0"),
        ("FUN_180868700", "ValidateNetworkPacket8700"),
        ("FUN_180868724", "GetNetworkStatus8724"),
        ("FUN_1808687df", "GetNetworkHandle87df"),
        ("FUN_180868800", "ProcessNetworkData8800"),
        ("FUN_1808689a5", "InitializeNetworkSystem89a5"),
        ("FUN_1808689f2", "GetNetworkHandle89f2"),
        ("FUN_180868a00", "ValidateNetworkData8a00"),
        ("FUN_180868a33", "GetNetworkConnection8a33"),
        ("FUN_180868a47", "ValidateNetworkHandle8a47"),
        ("FUN_180868a67", "GetNetworkStatus8a67"),
        ("FUN_180868a6c", "GetNetworkHandle8a6c"),
        ("FUN_180868a80", "ProcessNetworkBuffer8a80"),
        ("FUN_180868fc0", "ProcessNetworkConnection8fc0"),
        ("FUN_180869020", "ProcessNetworkData9020"),
        ("FUN_180869080", "ProcessNetworkPacket9080"),
        ("FUN_1808690e0", "ProcessNetworkConnection90e0"),
        ("FUN_180869270", "ProcessNetworkData9270"),
        ("FUN_180869400", "ProcessNetworkPacket9400"),
        ("FUN_180869590", "ProcessNetworkData9590"),
        ("FUN_180869720", "ProcessNetworkConnection9720"),
        ("FUN_180869ab0", "CleanupNetworkConnection9ab0"),
        ("FUN_180869b10", "ProcessNetworkData9b10"),
        ("FUN_180869b4f", "InitializeNetworkSystem9b4f"),
    ]
    
    return function_mappings

def main():
    """主函数"""
    print("网络函数重命名映射:")
    print("=" * 60)
    
    mappings = create_batch_rename_commands()
    
    for i, (old_name, new_name) in enumerate(mappings, 1):
        print(f"{i:2d}. {old_name:<20} -> {new_name}")
    
    print(f"\n总共 {len(mappings)} 个函数需要重命名")
    print("=" * 60)

if __name__ == "__main__":
    main()