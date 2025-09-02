#!/usr/bin/env python3
import os
import re
import shutil

def backup_file(file_path):
    backup_path = f"{file_path}.backup"
    shutil.copy2(file_path, backup_path)
    print(f"原始文件已备份为: {backup_path}")
    return backup_path

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def rename_hex_functions(content):
    function_mappings = {
        'func_0x000180881f80': 'GetNetworkPacketFlag',
        'func_0x0001808e64b0': 'ProcessNetworkHandleOperation',
        'func_0x0001808e63f0': 'GetNetworkContextStatus',
        'func_0x000180879a40': 'ExtractNetworkContextIndex',
        'func_0x00018085fa80': 'GetNetworkProcessingStatus',
        'func_0x00018074b7b0': 'ProcessNetworkPacketSegment',
        'func_0x000180851460': 'CheckNetworkTimeoutStatus',
        'func_0x000180861a30': 'GetNetworkFlagsValue',
        'func_0x00018085eef0': 'ProcessNetworkDataBuffer',
        'func_0x0001808757f0': 'HandleNetworkPrimaryTransfer',
        'func_0x0001808d2620': 'ProcessNetworkTransferOperation',
        'func_0x0001808d2660': 'ProcessNetworkTransferValidation',
        'func_0x0001808d2830': 'ExecuteNetworkTransferFinalization',
        'func_0x0001808c2130': 'ValidateNetworkHandleStatus',
        'func_0x00018088aed0': 'ProcessNetworkPacketCompletion',
        'func_0x0001808c8710': 'GetNetworkSessionPrimaryStatus',
        'func_0x0001808c8700': 'GetNetworkSessionSecondaryStatus',
        'func_0x0001808c8470': 'GetNetworkSessionTertiaryStatus',
        'func_0x0001808c7d30': 'ValidateNetworkConnectionHandle',
        'func_0x000180867680': 'InitializeNetworkTimeoutContext',
        'func_0x000180867960': 'ProcessNetworkTimeoutOperation'
    }
    
    total_replacements = 0
    
    for old_name, new_name in function_mappings.items():
        pattern = r'\b' + re.escape(old_name) + r'\b'
        matches = re.findall(pattern, content)
        if matches:
            content = re.sub(pattern, new_name, content)
            total_replacements += len(matches)
            print(f"替换 {old_name} -> {new_name} ({len(matches)} 次)")
    
    return content, total_replacements

file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
print('开始美化 05_networking.c 文件中的剩余函数名...')
content = read_file(file_path)
content, replacements = rename_hex_functions(content)
write_file(file_path, content)
print(f"美化完成！总共替换了 {replacements} 个函数名")