#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
渲染系统函数美化脚本
用于将03_rendering.c文件中的FUN_函数名替换为有意义的名称
"""

import re
import sys

# 函数名映射字典
FUNCTION_MAPPINGS = {
    # 渲染对象相关函数
    'FUN_18020a7b0': 'InitializeRenderObjectContext',
    'FUN_180285b40': 'CalculateRenderScalingFactors',
    'FUN_1801b9a40': 'GetRenderPropertyIndex',
    'FUN_180194940': 'CreateRenderContextInstance',
    'FUN_18063a240': 'SetupRenderContextParameters',
    'FUN_18023b050': 'ReleaseRenderMemoryResources',
    'FUN_18039ffc0': 'GetRenderObjectProperties',
    'FUN_1801c1720': 'ProcessRenderTransformData',
    'FUN_180631b90': 'FormatRenderBufferData',
    'FUN_180627c50': 'UpdateRenderLoopCounter',
    'FUN_1806277c0': 'SetRenderPropertyLength',
    'FUN_180631960': 'InitializeRenderBufferParameters',
    'FUN_18062dee0': 'CopyRenderStringData',
    'FUN_180627910': 'ProcessRenderNetworkData',
    'FUN_180627ae0': 'InitializeRenderNetworkBuffer',
    'FUN_180629a40': 'ParseRenderContextData',
    'FUN_180628380': 'ValidateRenderContextData',
    'FUN_18064e990': 'GetRenderDataSize',
    'FUN_1806272a0': 'ProcessRenderCharacterData',
    'FUN_18022f2e0': 'InitializeRenderConnection',
    'FUN_1804c1300': 'AllocateRenderMemoryBlock',
    'FUN_180628ca0': 'GetRenderContextOffset',
    'FUN_180630b20': 'WriteRenderBufferData',
    'FUN_180630c80': 'FinalizeRenderBufferWrite',
    'FUN_18062fb40': 'SetupRenderBufferArrays',
    'FUN_180075030': 'CreateRenderDataPointer',
    'FUN_180628040': 'InitializeRenderMemoryManager',
    'FUN_18062b8b0': 'ReallocateRenderMemory',
    'FUN_180235ca0': 'ProcessRenderNetworkConnection',
    'FUN_18022f410': 'CloseRenderNetworkConnection',
    'FUN_18017a600': 'SerializeRenderData',
    'FUN_180284fe0': 'CalculateRenderContextOffset',
    'FUN_180280fd0': 'SetRenderContextData',
    'FUN_180284f90': 'ResetRenderContextData',
    'FUN_180284780': 'ReleaseRenderContextResources',
    'FUN_180285080': 'ResetRenderSystemState',
    'FUN_18066c220': 'ConfigureRenderTarget',
    'FUN_180285760': 'FinalizeRenderTargetConfiguration',
    'FUN_180075ff0': 'ReleaseRenderObjectHandle',
    'FUN_1801940f0': 'CreateRenderContextPointer',
    'FUN_1800b32c0': 'InitializeRenderQueue',
    'FUN_180334930': 'CalculateRenderQueueOffset',
    'FUN_18022cb40': 'GetRenderBufferData',
    'FUN_180240430': 'ExtractRenderBufferPointer',
    'FUN_18022dd60': 'ReleaseRenderBufferPointer',
    'FUN_1803310f0': 'ConfigureRenderOutput',
    'FUN_1803269f0': 'SetupRenderPipeline',
    'FUN_1803276a0': 'InitializeRenderPipelineState',
    'FUN_180339110': 'GetRenderDataLength',
    'FUN_180274db0': 'ReleaseRenderDataBlock',
    'FUN_1803263e0': 'CopyRenderDataBlock',
    'FUN_180327250': 'CompareRenderDataBlocks',
    'FUN_180281e80': 'ReleaseRenderDataMemory',
    'FUN_180284720': 'ReleaseRenderContextPointer',
    'FUN_180284580': 'ValidateRenderContextPointer',
    'FUN_180255f80': 'GetRenderObjectStatus',
    'FUN_180075990': 'InitializeRenderDataStructure',
    'FUN_1802abe00': 'SetupRenderDataStructure',
    'FUN_18007bbb0': 'FinalizeRenderDataStructure',
    'FUN_180628f30': 'SetRenderPropertyValue',
    'FUN_180079430': 'GetRenderSystemStatus',
    'FUN_18007baa0': 'ValidateRenderSystemData',
    'FUN_18007f6a0': 'ProcessRenderValidationData',
    'FUN_180284de0': 'InitializeRenderDataTransfer',
    'FUN_180285190': 'ProcessRenderDataTransfer',
    'FUN_18007b240': 'ValidateRenderPropertyType',
    'FUN_1802864f0': 'ResetRenderFloatValues',
    'FUN_180287b30': 'GetRenderContextBuffer',
    'FUN_1801ee790': 'GetRenderMemoryStatus',
    'FUN_180287f70': 'ReleaseRenderValidationData',
    'FUN_180062300': 'InitializeRenderConfiguration'
}

def beautify_rendering_functions(file_path):
    """
    美化渲染系统函数名
    
    Args:
        file_path: 要处理的文件路径
    """
    
    print(f"正在处理文件: {file_path}")
    
    # 读取文件内容
    try:
        with open(file_path, 'r', encoding='utf-8') as file:
            content = file.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return False
    
    original_content = content
    replacement_count = 0
    
    # 替换函数名
    for old_name, new_name in FUNCTION_MAPPINGS.items():
        # 替换函数调用
        pattern = r'\b' + re.escape(old_name) + r'\b'
        matches = re.findall(pattern, content)
        if matches:
            content = re.sub(pattern, new_name, content)
            replacement_count += len(matches)
            print(f"替换 {old_name} -> {new_name} ({len(matches)} 处)")
    
    # 如果有替换，写入文件
    if replacement_count > 0:
        try:
            with open(file_path, 'w', encoding='utf-8') as file:
                file.write(content)
            print(f"成功替换 {replacement_count} 个函数名")
            return True
        except Exception as e:
            print(f"写入文件失败: {e}")
            return False
    else:
        print("没有找到需要替换的函数名")
        return False

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("用法: python beautify_rendering_functions.py <文件路径>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    beautify_rendering_functions(file_path)