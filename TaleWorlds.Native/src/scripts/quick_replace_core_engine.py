#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
快速替换02_core_engine.c中的FUN_函数名
"""

def replace_function_names():
    """替换函数名"""
    replacements = {
        'FUN_1801954d0': 'InitializeSystemContext',
        'FUN_180199500': 'ConfigureSystemContext',
        'FUN_1801a2ea0': 'FinalizeSystemContext',
        'FUN_18062c5f0': 'InitializeRenderBuffer',
        'FUN_18004b100': 'InitializeSystemConfig',
        'FUN_180628040': 'ConfigureSystemData',
        'FUN_180061db0': 'ResetAudioSystem',
        'FUN_180061be0': 'InitializeAudioDevice',
        'FUN_180624af0': 'GetCharacterVariable',
        'FUN_180054360': 'ProcessCharacterData',
        'FUN_18005c1c0': 'ValidateCharacterData',
        'FUN_18062db60': 'ProcessSystemBuffer',
        'FUN_180637560': 'ReleaseDataBuffer',
        'FUN_18004bd10': 'CreateSystemTimer',
        'FUN_18005c090': 'CreateMemoryManager',
        'FUN_18015c450': 'CreateResourceManager',
        'FUN_180058c20': 'ReleaseSystemResource',
        'FUN_180058210': 'ProcessSystemData',
        'FUN_1801299b0': 'InitializeNetworkSystem',
        'FUN_18010f010': 'UpdateNetworkParameter',
        'FUN_180055050': 'InitializeCoreEngine',
        'FUN_180055e10': 'ProcessCoreEngineData'
    }
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 执行替换
    for old_name, new_name in replacements.items():
        content = content.replace(old_name, new_name)
        print(f"替换: {old_name} -> {new_name}")
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("批量替换完成!")

if __name__ == '__main__':
    replace_function_names()