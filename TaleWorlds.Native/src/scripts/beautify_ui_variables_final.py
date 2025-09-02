#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
美化04_ui_system.c文件中的变量名
"""

import re

def beautify_ui_system_variables():
    """美化UI系统文件中的变量名"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量名映射
    variable_mappings = {
        'ByteFlag1': 'eventValidationByte',
        'BooleanFlag1': 'eventDataPointer',
        'plonglongVariable7': 'cleanupCounterPointer',
        'pBooleanFlag7': 'validationFlagPointer1',
        'pBooleanFlag8': 'validationFlagPointer2',
        'UIntStackBuffer88': 'semaphoreIndexBuffer',
        'UIStackBuffer98': 'uiComponentDataBuffer',
        'cVar5': 'componentDataStatus',
        'UInt32Value': 'uint32Value',
        'UInt8Value': 'uint8Value',
        'animationFrameIndex8': 'animationFrameArray',
        'animationFrameIndex': 'frameIndex',
        'animationFrameIndex0': 'frameIndexPointer',
        'animationFrameIndex5': 'dataBufferPointer',
        'sourcePixelData20': 'pixelDataRegister',
        'tempArray2': 'temporaryArray',
        'InputVectorRegister2': 'inputVectorData',
        'SystemContext': 'systemContextPointer',
        'TargetStructure': 'targetStructurePointer',
        'SourceStructure': 'sourceStructurePointer',
        'ResourceHandle': 'resourceHandlePointer',
        'uiDataSize': 'uiDataSizePointer',
        'UILayoutOffset': 'uiLayoutOffsetValue',
        'StackSecurityBuffer': 'stackSecurityBuffer',
        'StackProcessBuffer': 'stackProcessBuffer',
        'systemInstancePointer': 'systemInstancePointer',
        'destructorQueuePointer': 'destructorQueuePointer',
        'systemInstance': 'systemInstance',
        'systemHandle': 'systemHandle',
        'dataSize': 'dataSize',
        'dataBuffer': 'dataBuffer',
        'DataBufferPointer': 'dataBufferPointer'
    }
    
    # 执行替换
    for old_name, new_name in variable_mappings.items():
        # 使用正则表达式确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量名美化完成")

if __name__ == "__main__":
    beautify_ui_system_variables()