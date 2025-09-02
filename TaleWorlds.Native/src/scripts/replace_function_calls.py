#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量替换核心引擎文件中的FUN_函数调用
"""

def replace_function_calls():
    """替换文件中的FUN_函数调用"""
    
    # 函数映射表
    function_map = {
        'FUN_180057830': 'CoreEngineReleaseMemoryPool',
        'FUN_1801b9920': 'CoreEngineShutdownSubsystem',
        'FUN_180319840': 'CoreEngineFinalizeComponents',
        'FUN_1801ba4d0': 'CoreEngineFlushCommandBuffer',
        'FUN_18004b730': 'CoreEngineCleanupEventQueue',
        'FUN_180196de0': 'CoreEngineResetSystemState'
    }
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 替换函数调用
    for old_name, new_name in function_map.items():
        content = content.replace(old_name + '(', new_name + '(')
    
    # 写入文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("函数调用替换完成")

if __name__ == "__main__":
    replace_function_calls()