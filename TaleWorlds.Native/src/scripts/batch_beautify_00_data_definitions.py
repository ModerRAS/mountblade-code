#!/usr/bin/env python3
"""
批量美化00_data_definitions.h文件中的UNK_变量名
"""

import re

def beautify_unk_variables():
    # 读取文件内容
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # UNK_变量映射表
    unk_mappings = {
        'UNK_18098bc48': 'SystemLogTemplateString',
        'UNK_1809fd350': 'SystemSecurityModeString',
        'UNK_1809fd368': 'SystemEncryptionModeString',
        'UNK_1809fd380': 'SystemCompressionModeString',
        'UNK_1809fd398': 'SystemCacheModeString',
        'UNK_1809fd3f0': 'SystemMemoryModeString',
        'UNK_1809fd4b8': 'SystemNetworkModeString',
        'UNK_1809fd3c8': 'SystemThreadModeString',
        'UNK_1809fd8c0': 'SystemPrimaryConfigString',
        'UNK_1809fdfc0': 'SystemSecondaryConfigString',
        'UNK_1809fd950': 'SystemTertiaryConfigString',
        'UNK_1809fd970': 'SystemQuaternaryConfigString'
    }
    
    # 替换UNK_变量名
    for old_name, new_name in unk_mappings.items():
        content = content.replace(f'&{old_name}', f'&{new_name}')
        content = content.replace(f'{old_name}', f'{new_name}')
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("00_data_definitions.h文件批量美化完成")

if __name__ == "__main__":
    beautify_unk_variables()