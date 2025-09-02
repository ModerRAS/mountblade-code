#!/usr/bin/env python3
"""
美化03_rendering.c文件中的未美化函数名
"""

import re
import sys

def beautify_rendering_functions():
    """美化渲染文件中的函数名"""
    
    # 函数名映射字典
    function_mappings = {
        'FUN_1802719da': 'InitializeRenderObjectAllocation',
        'FUN_1802719f1': 'CleanupRenderObjectAllocation',
        'FUN_180271b17': 'ResetRenderObjectState',
        'FUN_180271bcb': 'ReleaseRenderObjectMemory',
        'FUN_180275730': 'InitializeRenderContext',
        'FUN_180275820': 'SetupRenderParameters',
        'FUN_180275870': 'ConfigureRenderSettings',
        'FUN_1802758eb': 'ValidateRenderConfiguration',
        'FUN_180275944': 'FinalizeRenderSetup',
        'FUN_180275cf0': 'ProcessRenderObjectAllocation',
        'FUN_180275e10': 'HandleRenderObjectAllocation',
        'FUN_18027606a': 'CalculateRenderObjectMetrics',
        'FUN_18027613a': 'ValidateRenderObjectIntegrity',
        'FUN_1802762d8': 'CheckRenderObjectStatus',
        'FUN_1802763d0': 'ProcessRenderObjectDistance',
        'FUN_180276610': 'HandleRenderObjectTransform',
        'FUN_1802768b0': 'ProcessRenderObjectBuffer',
        'FUN_180276a70': 'SetupRenderObjectScaling',
        'FUN_180276ad4': 'ProcessRenderObjectAnimation',
        'FUN_180276ade': 'HandleRenderObjectUpdate',
        'FUN_180276d52': 'ProcessRenderObjectPhysics',
        'FUN_180276eef': 'CleanupRenderContext',
        'FUN_180276f1a': 'ResetRenderContext',
        'FUN_180276f30': 'UpdateRenderObjectContext',
        'FUN_180276f8c': 'ProcessRenderContextUpdate',
        'FUN_180276fad': 'FinalizeRenderContext',
        'FUN_180277019': 'ReleaseRenderContext',
        'FUN_180277068': 'CalculateRenderObjectTransform',
        'FUN_18027708e': 'CalculateRenderObjectScale',
        'FUN_180277326': 'UpdateRenderMinimumValue',
        'FUN_18027733a': 'RenderPlaceholderFunction',
        'FUN_180277360': 'ReleaseRenderThreadResources',
        'FUN_1802776ad': 'CleanupRenderResources',
        'FUN_1802777dd': 'RenderEmptyFunction',
        'FUN_1802777f0': 'ReleaseRenderObject',
        'FUN_180277e30': 'ProcessRenderObjectData',
        'FUN_180277e52': 'ResetRenderData',
        'FUN_180277f3a': 'ClearRenderBuffer',
        'FUN_180277f50': 'InitializeRenderBuffer',
        'FUN_180277f79': 'CleanupRenderData',
        'FUN_180278261': 'ReleaseRenderMemory',
        'FUN_180278270': 'ProcessRenderState',
        'FUN_1802786d0': 'InitializeRenderObjectContext',
        'FUN_180278870': 'ProcessRenderObjectContext',
        'FUN_180279640': 'ConfigureRenderParameters',
        'FUN_18027a810': 'UpdateRenderObjectContext',
        'FUN_18027b5d0': 'ProcessRenderBufferData',
        'FUN_18027ba80': 'InitializeRenderBuffer',
        'FUN_1808fc050': 'RenderSystemOperation',
        'FUN_1808fc838': 'RenderSystemConfiguration',
        'FUN_180241f10': 'ProcessRenderObject',
        'FUN_18022dfe0': 'ResetRenderSystem',
        'FUN_180639de0': 'UpdateRenderObjectData',
        'FUN_1802731f0': 'GetRenderObjectPointer',
        'FUN_180049c70': 'ProcessRenderStack',
        'FUN_180275a60': 'SetupRenderContext',
        'FUN_1802786d0': 'InitializeRenderObject',
        'FUN_18027a810': 'UpdateRenderObject',
        'FUN_180285e20': 'ProcessRenderAllocation',
        'FUN_1802786d0': 'HandleRenderAllocation',
        'FUN_1800b6de0': 'GetRenderContext',
        'FUN_180275960': 'InitializeRenderSystem',
        'FUN_1802752b0': 'SetupRenderAllocation',
        'FUN_1802841d0': 'FinalizeRenderSetup',
        'FUN_180079520': 'ProcessRenderStatus',
        'FUN_180284500': 'HandleRenderMemory',
        'FUN_180275090': 'AllocateRenderMemory',
        'FUN_180627be0': 'ProcessRenderMemory',
        'FUN_180284240': 'UpdateRenderMemory',
        'FUN_1800763c0': 'ProcessRenderContext',
        'FUN_1802842e0': 'SetupRenderBuffer',
        'FUN_180276f30': 'UpdateRenderObjectContext',
        'FUN_180077750': 'CalculateRenderMetrics',
        'FUN_180075630': 'ProcessRenderCalculation',
        'FUN_180285cf0': 'UpdateRenderTransform',
        'FUN_180077f20': 'ProcessRenderData',
        'FUN_18007f4c0': 'InitializeRenderVariable',
        'FUN_180075b70': 'GetRenderContext',
        'FUN_18007f6a0': 'ProcessRenderVariable',
        'FUN_1800781e0': 'ProcessRenderIteration',
        'FUN_180626f80': 'UpdateRenderConfiguration',
        'FUN_180285b40': 'ProcessRenderVector',
        'FUN_1801b9a40': 'GetRenderProperty',
        'FUN_18020a7b0': 'ProcessRenderProperty',
        'FUN_180076c50': 'ValidateRenderMemory',
        'FUN_18023b050': 'ReleaseRenderMemory',
        'FUN_180080060': 'ResetRenderMemory',
        'FUN_1800a02a0': 'GetRenderIterator',
        'FUN_18039ffc0': 'GetRenderObject',
        'FUN_1800b30d0': 'ProcessRenderString',
        'FUN_1801c1720': 'ProcessRenderTransform',
        'FUN_180085020': 'CalculateRenderScale',
        'FUN_180631960': 'UpdateRenderParameter',
        'FUN_180085c10': 'ProcessRenderRotation',
        'FUN_180085970': 'ProcessRenderTranslation',
        'FUN_180085ac0': 'ProcessRenderScale',
        'FUN_180631b90': 'GetRenderOffset',
        'FUN_18004a180': 'ProcessRenderStringData',
        'FUN_180080810': 'UpdateRenderData',
        'FUN_180076910': 'ProcessRenderContextData',
        'FUN_180627c50': 'InitializeRenderIterator',
        'FUN_1806277c0': 'UpdateRenderIterator',
        'FUN_180627ae0': 'ProcessRenderAllocation',
        'FUN_180059820': 'ProcessRenderObjectData',
        'FUN_1806279c0': 'InitializeRenderBuffer',
        'FUN_180629a40': 'GetRenderBuffer',
        'FUN_180628380': 'UpdateRenderBuffer',
        'FUN_18062dee0': 'ProcessRenderMemory',
        'FUN_180627910': 'InitializeRenderContext',
        'FUN_1806272a0': 'UpdateRenderSettings',
        'FUN_18064e990': 'GetRenderData',
        'FUN_18007ea10': 'ProcessRenderData',
        'FUN_180075b70': 'GetRenderContextPointer',
        'FUN_18007f6a0': 'ProcessRenderContextPointer',
        'FUN_180079520': 'ProcessRenderStatus'
    }
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 替换函数名
    for old_name, new_name in function_mappings.items():
        # 替换函数定义
        content = re.sub(rf'\b{old_name}\b', new_name, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"成功美化 {len(function_mappings)} 个函数名")

if __name__ == "__main__":
    beautify_rendering_functions()