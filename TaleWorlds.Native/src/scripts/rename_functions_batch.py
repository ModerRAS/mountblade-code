#!/usr/bin/env python3
"""
批量重命名02_core_engine.c文件中的函数
"""

import re

def rename_functions():
    """重命名函数"""
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 函数重命名映射
    function_renames = {
        'FUN_180034550': 'CoreEngineInitializeShaderManager',
        'FUN_180034650': 'CoreEngineInitializeMeshManager',
        'FUN_180034750': 'CoreEngineInitializeParticleManager',
        'FUN_180034850': 'CoreEngineInitializeTextureManager',
        'FUN_180034950': 'CoreEngineInitializeMaterialManager',
        'FUN_180034a50': 'CoreEngineInitializeLightManager',
        'FUN_180034b40': 'CoreEngineInitializeCameraManager',
        'FUN_180034c40': 'CoreEngineInitializeRenderPipeline',
        'FUN_180034d40': 'CoreEngineInitializePostProcessor',
        'FUN_180034e40': 'CoreEngineInitializeShadowSystem',
        'FUN_180035240': 'CoreEngineInitializeAnimationSystem',
        'FUN_180035340': 'CoreEngineInitializePhysicsSystem',
        'FUN_180035440': 'CoreEngineInitializeCollisionSystem',
        'FUN_180035540': 'CoreEngineInitializeAudioSystem',
        'FUN_180035640': 'CoreEngineInitializeInputSystem',
        'FUN_180035740': 'CoreEngineInitializeNetworkSystem',
        'FUN_180035840': 'CoreEngineInitializeFileSystem',
        'FUN_180035940': 'CoreEngineInitializeMemoryManager',
        'FUN_180035a40': 'CoreEngineInitializeThreadManager',
        'FUN_180035b40': 'CoreEngineInitializeResourceManager',
    }
    
    # 执行重命名
    for old_name, new_name in function_renames.items():
        # 只替换函数定义和调用的部分
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    # 写入文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("函数重命名完成")

if __name__ == '__main__':
    rename_functions()