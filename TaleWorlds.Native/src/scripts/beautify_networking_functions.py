#!/usr/bin/env python3
"""
美化05_networking.c文件中的函数名和变量名
"""

import re
import os

def read_file(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(filepath, content):
    with open(filepath, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_networking_file():
    filepath = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    # 备份原文件
    backup_path = filepath + ".backup"
    if not os.path.exists(backup_path):
        os.system(f"cp '{filepath}' '{backup_path}'")
    
    content = read_file(filepath)
    
    # 函数重命名映射
    function_renames = {
        'FUN_1808616bc': 'HandleNetworkConnectionError',
        'FUN_18086247a': 'ProcessNetworkConnectionFailure',
        'FUN_180862c75': 'HandleNetworkConnectionResponse',
        'FUN_180853230': 'ValidateNetworkConnectionState',
        'FUN_1808538a0': 'ProcessNetworkConnectionEvent',
        'FUN_180853c50': 'GetNetworkConnectionInformation',
        'FUN_180853d20': 'CheckNetworkConnectionStatus',
        'FUN_180855467': 'ValidateNetworkBufferAccess',
        'FUN_18085551e': 'InitializeNetworkContext',
        'FUN_180855559': 'InitializeNetworkTransmitter',
        'FUN_180856512': 'CreateNetworkConnection',
        'FUN_180856ec0': 'ProcessNetworkBufferData',
        'FUN_18085791f': 'CheckNetworkStatus',
        'FUN_180857928': 'GetNetworkErrorInformation',
        'FUN_18085b050': 'TransmitNetworkPacket',
        'FUN_18085bb20': 'SetupNetworkBuffer',
        'FUN_18085c7260': 'SendNetworkPacket',
        'FUN_18085d0d90': 'ValidateNetworkPacket',
        'FUN_18085d15f0': 'ProcessNetworkPacketData',
        'FUN_18085d3ee0': 'ProcessNetworkPacketEx',
        'FUN_18085d5bd0': 'InitializeNetworkContextEx',
        'FUN_18085f0e0': 'HandleNetworkConnection',
        'FUN_18085f163': 'ValidateNetworkConnection',
        'FUN_18085f2d3': 'InitializeNetworkConnection',
        'FUN_18085f340': 'ProcessNetworkConnection',
        'FUN_18085f812': 'UpdateNetworkConnectionStatus',
        'FUN_18085f879': 'SyncNetworkConnectionStatus',
        'FUN_18085f893': 'ResetNetworkConnection',
        'FUN_180860170': 'AuthenticateNetworkConnection',
        'FUN_180860210': 'GetNetworkPacketInfo',
        'FUN_180860690': 'HandleNetworkConnectionHandler',
        'FUN_180860737': 'ProcessNetworkConnectionState',
        'FUN_180864780': 'ValidateNetworkConnectionEx',
        'FUN_180866550': 'SendNetworkPacket',
        'FUN_180866820': 'ProcessNetworkConnection',
        'FUN_1808668a0': 'SendNetworkPacketEx',
        'FUN_1808669b0': 'ProcessNetworkPacket',
        'FUN_180866a90': 'SendNetworkPacketDirect',
        'FUN_180866c90': 'CleanupNetworkConnection',
        'FUN_180866d00': 'SendNetworkPacketWithFlags',
        'FUN_180867d60': 'GetNetworkConnectionState',
        'FUN_180869ab0': 'ProcessNetworkPacket',
        'FUN_180869b10': 'ProcessNetworkConnection',
        'FUN_180869d10': 'ProcessNetworkPacketEx',
        'FUN_180869f10': 'ProcessNetworkConnectionEx',
        'FUN_18086a110': 'ProcessNetworkData',
        'FUN_18086a310': 'ProcessNetworkSecurity',
        'FUN_18086a510': 'ProcessNetworkProtocol',
        'FUN_18086a710': 'ProcessNetworkBuffer',
        'FUN_18086a910': 'ProcessNetworkState',
        'FUN_18086ab10': 'ProcessNetworkError',
        'FUN_18086acf0': 'ProcessNetworkEvent',
        'FUN_18086aed0': 'ProcessNetworkThread',
        'FUN_18086b0d0': 'ProcessNetworkSocket',
        'FUN_18086b2d0': 'ProcessNetworkStream',
        'FUN_18086b4b0': 'ProcessNetworkCompression',
        'FUN_18086b6b0': 'ProcessNetworkEncryption',
        'FUN_18086b8b0': 'ProcessNetworkAuthentication',
        'FUN_18086ba90': 'ProcessNetworkValidation',
        'FUN_18086bc90': 'ProcessNetworkMonitoring',
        'FUN_18086be90': 'ProcessNetworkLogging',
        'FUN_18086c090': 'ProcessNetworkConfiguration',
        'FUN_18086c290': 'ProcessNetworkPerformance',
        'FUN_18086c470': 'ProcessNetworkDebug',
        'FUN_18086c670': 'ProcessNetworkTest',
        'FUN_18086c870': 'ProcessNetworkBackup',
        'FUN_18086ca70': 'ProcessNetworkRecovery',
        'FUN_18086cc70': 'ProcessNetworkOptimization',
        'FUN_18086ce70': 'ProcessNetworkScaling',
        'FUN_18086d070': 'ProcessNetworkSynchronization',
        'FUN_18086d270': 'ProcessNetworkLoadBalancing',
        'FUN_18086d7d0': 'HandleNetworkLoad',
        'FUN_18086d930': 'ManageNetworkLoad',
        'FUN_18086da90': 'BalanceNetworkLoad',
        'FUN_18086df30': 'MonitorNetworkLoad',
        'FUN_18086e090': 'AdjustNetworkLoad',
        'FUN_18086e1f0': 'ScaleNetworkLoad',
        'FUN_18086e330': 'BalanceNetworkConnections',
        'FUN_18086e480': 'OptimizeNetworkConnections',
        'FUN_18086e5c0': 'ManageNetworkConnections',
        'FUN_18086e710': 'DistributeNetworkConnections',
        'FUN_18086e860': 'HandleNetworkConnectionDistribution',
        'FUN_18086e9b0': 'OptimizeNetworkConnectionDistribution',
        'FUN_18086eb00': 'ManageNetworkConnectionDistribution',
        'FUN_18086ec60': 'DistributeNetworkConnectionLoad',
        'FUN_18086eda0': 'HandleNetworkConnectionLoadBalancing',
        'FUN_18086eef0': 'OptimizeNetworkConnectionLoad',
        'FUN_18086f040': 'ManageNetworkConnectionLoad',
        'FUN_18086f1a0': 'BalanceNetworkConnectionLoad',
        'FUN_18086f300': 'DistributeNetworkConnectionRequests',
        'FUN_18086f460': 'ScaleNetworkConnectionRequests',
        'FUN_18086f610': 'ProcessNetworkRequest',
        'FUN_18086f7c0': 'HandleNetworkRequestWithSize',
        'FUN_18086f8b0': 'ProcessNetworkRequestWithSize',
        'FUN_18086f9a0': 'ManageNetworkRequestWithSize',
        'FUN_18086fa90': 'OptimizeNetworkRequestWithSize',
        'FUN_18086fb80': 'DistributeNetworkRequestWithSize',
        'FUN_18086fc70': 'BalanceNetworkRequestWithSize',
        'FUN_18086fd60': 'ScaleNetworkRequestWithSize',
        'FUN_18086fe50': 'HandleNetworkRequestDistribution',
        'FUN_18086ff40': 'ProcessNetworkRequestDistribution',
        'FUN_180870030': 'ManageNetworkRequestDistribution',
        'FUN_180870120': 'OptimizeNetworkRequestDistribution',
        'FUN_180870210': 'DistributeNetworkRequestLoad',
        'FUN_180870310': 'BalanceNetworkRequestLoad',
        'FUN_180870410': 'ScaleNetworkRequestLoad',
        'FUN_180870500': 'HandleNetworkRequestLoadBalancing',
        'FUN_1808705f0': 'ProcessNetworkRequestLoadBalancing',
        'FUN_1808706e0': 'ManageNetworkRequestLoadBalancing',
        'FUN_1808707d0': 'OptimizeNetworkRequestLoadBalancing',
        'FUN_1808708c0': 'DistributeNetworkRequestMetrics',
        'FUN_1808709b0': 'BalanceNetworkRequestMetrics',
        'FUN_180870aa0': 'ScaleNetworkRequestMetrics',
        'FUN_180870b90': 'HandleNetworkRequestMetrics',
        'FUN_180870c80': 'ProcessNetworkRequestMetrics',
        'FUN_180870d70': 'ManageNetworkRequestMetrics',
        'FUN_180870e60': 'OptimizeNetworkRequestMetrics',
        'FUN_180870f50': 'DistributeNetworkRequestMonitoring',
        'FUN_180871040': 'BalanceNetworkRequestMonitoring',
    }
    
    # 重命名函数调用
    replaced_count = 0
    for old_name, new_name in function_renames.items():
        pattern = r'\b' + re.escape(old_name) + r'\b'
        if re.search(pattern, content):
            content = re.sub(pattern, new_name, content)
            print(f"替换 {old_name} -> {new_name}")
            replaced_count += 1
    
    # 重命名栈变量
    stack_var_renames = {
        'puStack0000000000000030': 'NetworkStatusPointer',
        'puStack0000000000000058': 'NetworkContextPointer',
        'localVar7': 'NetworkConnectionData',
    }
    
    for old_name, new_name in stack_var_renames.items():
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
        print(f"替换变量 {old_name} -> {new_name}")
    
    write_file(filepath, content)
    print(f"05_networking.c 文件美化完成，共替换 {replaced_count} 个函数")

if __name__ == "__main__":
    beautify_networking_file()