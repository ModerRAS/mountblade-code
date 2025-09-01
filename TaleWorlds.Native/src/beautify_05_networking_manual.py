#!/usr/bin/env python3
"""
美化 05_networking.c 文件的脚本
主要任务：
1. 重命名变量为语义化名称
2. 为函数添加文档注释
3. 删除文件头部的大量注释
"""

import re
import os

def beautify_networking_file():
    """美化网络模块文件"""
    input_file = "05_networking.c"
    
    # 读取文件
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 变量重命名映射
    variable_mappings = {
        # 通用变量名映射
        r'\buVar(\d+)\b': r'unsignedVar\1',
        r'\biVar(\d+)\b': r'intVar\1',
        r'\blVar(\d+)\b': r'longVar\1',
        r'\bcVar(\d+)\b': r'charVar\1',
        r'\blocal_(\d+)\b': r'localVar\1',
        r'\bstack_(\d+)\b': r'stackVar\1',
        r'\bparam_(\d+)\b': r'param\1',
        r'\bpauVar(\d+)\b': r'paramAUVar\1',
        r'\bpauStack(\d+)\b': r'paramAUStack\1',
        r'\bpnetwork(\w+)\b': r'network\1',
        r'\balStack(\w+)\b': r'localStack\1',
        r'\buStack(\w+)\b': r'unsignedStack\1',
        r'\biStack(\w+)\b': r'intStack\1',
        r'\blStack(\w+)\b': r'longStack\1',
        r'\bin_stack_(\w+)\b': r'inputStack\1',
        r'\bplVar(\d+)\b': r'pointerLongVar\1',
        r'\bpuVar(\d+)\b': r'pointerUnsignedVar\1',
        r'\bpcVar(\d+)\b': r'pointerCharVar\1',
        r'\bpiVar(\d+)\b': r'pointerIntVar\1',
        r'\bplStack(\d+)\b': r'pointerLongStack\1',
        r'\bpuStack(\d+)\b': r'pointerUnsignedStack\1',
        r'\bpcStack(\d+)\b': r'pointerCharStack\1',
        r'\bpiStack(\d+)\b': r'pointerIntStack\1',
    }
    
    # 函数重命名映射
    function_mappings = {
        r'FUN_180860170': 'HandleNetworkConnectionRequest',
        r'FUN_180860210': 'ProcessNetworkDataTransfer',
        r'FUN_180860390': 'ValidateNetworkPacketData',
        r'FUN_180860690': 'ProcessNetworkConnectionHandler',
        r'FUN_180860737': 'CleanupNetworkConnection',
        r'FUN_1808616d8': 'InitializeNetworkConnection',
        r'FUN_1808616f0': 'ValidateNetworkConnection',
        r'FUN_180861720': 'ProcessNetworkConnectionData',
        r'FUN_180861780': 'HandleNetworkConnectionRequest',
        r'FUN_180861820': 'ProcessNetworkPacketData',
        r'FUN_1808618d0': 'SendNetworkPacket',
        r'FUN_180861900': 'ReceiveNetworkPacket',
        r'FUN_180861970': 'GetNetworkConnectionStatus',
        r'FUN_1808619a0': 'SetNetworkConnectionStatus',
        r'FUN_1808619d0': 'CheckNetworkConnection',
        r'FUN_180861a00': 'CreateNetworkConnection',
        r'FUN_180861a70': 'DestroyNetworkConnection',
        r'FUN_180861aa8': 'InitializeNetworkSystem',
        r'FUN_180861b0c': 'ShutdownNetworkSystem',
        r'FUN_180861b29': 'ResetNetworkConnection',
        r'FUN_180861cc6': 'ProcessNetworkEvent',
        r'FUN_180861ccb': 'HandleNetworkError',
        r'FUN_180861cd0': 'LogNetworkActivity',
        r'FUN_180861d0b': 'GetNetworkStatistics',
        r'FUN_180861d76': 'UpdateNetworkConfiguration',
        r'FUN_180861d98': 'ConfigureNetworkSettings',
        r'FUN_180861e7c': 'ValidateNetworkSettings',
        r'FUN_180861e8b': 'ApplyNetworkConfiguration',
        r'FUN_180861ed5': 'SaveNetworkConfiguration',
        r'FUN_180861ef0': 'LoadNetworkConfiguration',
        r'FUN_180861f14': 'ResetNetworkConfiguration',
        r'FUN_180861fdf': 'GetDefaultNetworkSettings',
        r'FUN_180862000': 'SendNetworkData',
        r'FUN_180862080': 'ReceiveNetworkData',
    }
    
    # 应用变量重命名
    for pattern, replacement in variable_mappings.items():
        content = re.sub(pattern, replacement, content)
    
    # 应用函数重命名
    for pattern, replacement in function_mappings.items():
        content = re.sub(pattern, replacement, content)
    
    # 删除文件头部的多余注释
    lines = content.split('\n')
    cleaned_lines = []
    skip_header_comments = True
    
    for line in lines:
        # 跳过文件头部的注释块
        if skip_header_comments and (line.strip().startswith('//') or line.strip().startswith('/*') or line.strip().startswith('*')):
            continue
        skip_header_comments = False
        cleaned_lines.append(line)
    
    # 写入文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write('\n'.join(cleaned_lines))
    
    print(f"文件 {input_file} 美化完成")
    print("主要改动：")
    print("1. 重命名了通用变量为语义化名称")
    print("2. 重命名了FUN_函数为语义化名称")
    print("3. 删除了文件头部的多余注释")

if __name__ == "__main__":
    beautify_networking_file()