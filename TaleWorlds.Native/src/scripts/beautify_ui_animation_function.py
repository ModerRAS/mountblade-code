#!/usr/bin/env python3
"""
批量替换04_ui_system.c文件中ProcessUIAnimationData函数的变量名
"""

import re

def beautify_process_ui_animation_data():
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量名映射
    variable_mappings = {
        'acurrentSemaphoreIndex3': 'SemaphoreVector3',
        'acurrentSemaphoreIndex4': 'SemaphoreVector4',
        'acurrentSemaphoreIndex5': 'SemaphoreVector5',
        'acurrentSemaphoreIndex6': 'SemaphoreVector6',
        'acurrentSemaphoreIndex7': 'SemaphoreVector7',
        'acurrentSemaphoreIndex8': 'SemaphoreVector8',
        'acurrentSemaphoreIndex9': 'SemaphoreVector9',
        'acurrentSemaphoreIndex1': 'SemaphoreVector1',
        'acurrentSemaphoreIndex2': 'SemaphoreVector2',
        'aanimationDataSize0': 'AnimationSizeVector0',
        'aanimationDataSize1': 'AnimationSizeVector1',
        'aanimationDataSize2': 'AnimationSizeVector2',
        'aanimationDataSize3': 'AnimationSizeVector3',
        'aanimationDataSize4': 'AnimationSizeVector4',
        'aanimationDataSize5': 'AnimationSizeVector5',
        'animationDataBuffer28': 'AnimationDataBuffer1',
        'animationDataBuffer29': 'AnimationDataBuffer2',
        'animationDataBuffer30': 'AnimationDataBuffer3',
        'aAnimationFrameIndex0': 'AnimationFrameVector0',
        'aAnimationFrameIndex1': 'AnimationFrameVector1',
        'aAnimationFrameIndex2': 'AnimationFrameVector2',
        'aAnimationFrameIndex3': 'AnimationFrameVector3',
        'aAnimationFrameIndex4': 'AnimationFrameVector4',
        'aAnimationFrameIndex5': 'AnimationFrameVector5',
        'aAnimationFrameIndex6': 'AnimationFrameVector6',
        'aAnimationFrameIndex7': 'AnimationFrameVector7',
        'aAnimationFrameIndex8': 'AnimationFrameVector8',
        'aintVariable8': 'IntVariableArray',
        'aTemporaryUInt1': 'TemporaryUIntArray',
        'TempArray2': 'TempProcessingArray',
        'SourcePixelData20': 'SourcePixelData',
        'cleanupCounter2': 'offsetCounter2',
        'cleanupCounter7': 'offsetCounter7',
        'animationFrameIndex': 'AnimationFrameIndex',
    }
    
    # 批量替换变量名
    for old_name, new_name in variable_mappings.items():
        # 使用单词边界确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量名替换完成")

if __name__ == "__main__":
    beautify_process_ui_animation_data()