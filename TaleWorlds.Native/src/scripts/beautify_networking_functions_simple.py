#!/usr/bin/env python3
"""
美化网络模块中的函数调用
将一些常见的FUN_函数调用替换为语义化名称
"""

import re

def beautify_networking_functions():
    """美化网络模块中的函数调用"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义函数替换映射
    function_mappings = {
        'FUN_1808787d0': 'ProcessNetworkConnectionValidation',
        'FUN_18087e0b0': 'ValidateNetworkConnectionParameters',
        'FUN_1808690e0': 'InitializeNetworkConnectionContext',
        'FUN_180869400': 'ConfigureNetworkConnectionSettings',
        'FUN_1808740c0': 'CheckNetworkConnectionStatus',
        'FUN_1808c7ff0': 'GetNetworkConnectionHandle',
        'FUN_1808db1d0': 'ProcessNetworkRequestData',
        'FUN_1808bc120': 'ValidateNetworkSocketConnection',
        'FUN_180872630': 'InitializeNetworkBuffer',
        'FUN_180873cd0': 'CleanupNetworkBuffer',
        'FUN_1808dc190': 'ProcessNetworkDataStream',
        'FUN_1808db8c0': 'FinalizeNetworkConnection',
        'FUN_180869ab0': 'ExtractNetworkPacketData',
        'FUN_18084b5a0': 'ProcessNetworkLogData',
        'FUN_1808793e0': 'GetNetworkConnectionIndex',
        'FUN_180868de0': 'ValidateNetworkConnectionIndex',
        'FUN_180868fc0': 'CheckNetworkConnectionAvailability',
        'FUN_180868ea0': 'VerifyNetworkConnectionState',
        'FUN_18084c470': 'ProcessNetworkDataTransfer',
        'FUN_180877560': 'ManageNetworkConnectionPool',
        'FUN_180868a80': 'ValidateNetworkPacketHeaders',
        'FUN_18087dd70': 'ProcessNetworkContextData',
        'FUN_180877030': 'InitializeNetworkConnectionSession',
        'FUN_1808c84b0': 'ValidateNetworkSecurityContext',
        'FUN_1808782a0': 'ProcessNetworkConnectionHandshake',
        'FUN_180879270': 'ExecuteNetworkConnectionProtocol',
        'FUN_180868e40': 'ValidateNetworkProtocolVersion',
        'FUN_180869080': 'CheckNetworkCompatibility',
        'FUN_180868f60': 'VerifyNetworkConnectionSettings',
        'FUN_1808df350': 'InitializeNetworkSecurityLayer',
        'FUN_1808698b0': 'ConfigureNetworkSecurityParameters',
        'FUN_1808df2b0': 'ValidateNetworkEncryption',
        'FUN_1808deff0': 'VerifyNetworkAuthentication',
        'FUN_1808df570': 'CheckNetworkCertificate',
        'FUN_180868d20': 'InitializeNetworkProtocolHandler',
        'FUN_1808b0660': 'SetNetworkConnectionFlag',
        'FUN_180868d80': 'ProcessNetworkConnectionEvent',
        'FUN_1808b06c0': 'UpdateNetworkConnectionStatistics',
        'FUN_18086da90': 'ProcessNetworkDataValidation',
        'FUN_1808c53d0': 'ValidateNetworkDataIntegrity',
        'FUN_1808c52b0': 'CheckNetworkDataChecksum',
        'FUN_1808dea80': 'GetNetworkSystemStatus',
        'FUN_180873f80': 'GetNetworkContextPointer'
    }
    
    # 执行替换
    original_content = content
    for old_name, new_name in function_mappings.items():
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    # 检查是否有变化
    if content != original_content:
        # 写回文件
        with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'w', encoding='utf-8') as f:
            f.write(content)
        print("成功美化网络模块函数调用")
        return True
    else:
        print("没有找到需要美化的函数调用")
        return False

if __name__ == "__main__":
    beautify_networking_functions()