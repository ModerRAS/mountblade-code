#!/usr/bin/env python3
import re

def beautify_ui_system_function():
    """美化04_ui_system.c文件中的UISystemProcessSemaphoreSynchronization函数"""
    
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量名替换映射
    variable_mappings = {
        'aAnimationFrameIndex': 'AnimationFrameIndex',
        'asemaphoreCount': 'SemaphoreCount',
        'acurrentSemaphoreIndex': 'CurrentSemaphoreIndex',
        'aanimationDataSize': 'AnimationDataSize',
        'asemaphoreArrayIndex': 'SemaphoreArrayIndex',
        'auiDataSize': 'UiDataSize',
        'intVariable8': 'TemporaryUInt8',
        'aTemporaryUInt1': 'TemporaryUInt1',
        'paanimationDataSize9': 'AnimationDataSizePointer9',
        'pasemaphoreArrayIndex0': 'SemaphoreArrayIndexPointer0',
        'pasemaphoreArrayIndex2': 'SemaphoreArrayIndexPointer2',
        'paanimationDataSize3': 'AnimationDataSizePointer3',
        'paanimationDataSize4': 'AnimationDataSizePointer4',
        'paanimationDataSize1': 'AnimationDataSizePointer1',
        'systemContext': 'SystemContext',
        'parameterTwo': 'OffsetParameter',
        'parameterThree': 'ValidationDataPointer',
        'parameterFour': 'AnimationDataPointer',
        'parameterFive': 'ValidationValue'
    }
    
    # 执行变量名替换
    for old_name, new_name in variable_mappings.items():
        # 使用单词边界来确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量名美化完成")

if __name__ == "__main__":
    beautify_ui_system_function()