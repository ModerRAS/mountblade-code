#!/usr/bin/env python3
"""
美化99_unmatched_functions.c文件中的DAT_变量
"""

import re

def read_file(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(filepath, content):
    with open(filepath, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_dat_variables(content):
    # 替换DAT_变量为更有意义的名称
    replacements = {
        'DAT_180a0d5b8': 'DefaultStringConstant1',
        'DAT_180a0d5d0': 'DefaultStringConstant2', 
        'DAT_180a0e020': 'CompressionAlgorithmTable',
        'DAT_180a0ce08': 'EncryptionKeyTable',
        'DAT_180a0cf7c': 'SystemConfigData',
        'DAT_180a0cfc8': 'MemoryAllocationTable',
        'DAT_180c8aa20': 'NetworkProtocolTable',
        'DAT_1809fd7c8': 'GraphicsShaderData',
        'DAT_180c8aa28': 'SystemMutexLock',
        'DAT_1809fd518': 'InputMappingTable',
        'DAT_180a083b4': 'PhysicsMaterialTable',
        'DAT_180a089c4': 'AnimationDataTable',
        'DAT_180a0e8a0': 'UiLayoutTable',
        'DAT_180a0eb68': 'LocalizationStringTable',
        'DAT_180c8aa30': 'SaveGameFormatTable',
        'DAT_180c8aa38': 'MultiplayerConfigTable',
        'DAT_180a0f804': 'AchievementSystemTable',
        'DAT_180c8aa48': 'DlcContentTable',
        'DAT_180c91cf8': 'ModSupportTable',
        'DAT_180c91d00': 'DebugSystemTable',
    }
    
    # 应用替换
    for old_name, new_name in replacements.items():
        # 替换变量定义
        content = re.sub(rf'undefined {old_name};', f'undefined {new_name};', content)
        # 替换变量引用
        content = re.sub(rf'&{old_name}', f'&{new_name}', content)
        content = re.sub(rf'_{old_name}', f'_{new_name}', content)
        content = re.sub(rf'\b{old_name}\b', new_name, content)
    
    return content

def main():
    filepath = '/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c'
    content = read_file(filepath)
    
    # 美化DAT_变量
    content = beautify_dat_variables(content)
    
    write_file(filepath, content)
    print("DAT_变量美化完成")

if __name__ == "__main__":
    main()