#!/usr/bin/env python3
"""
批量美化03_rendering.c文件中的FUN_函数和变量
"""

import re
import sys
import os

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_functions(content):
    """美化FUN_函数"""
    
    # 渲染系统函数映射
    function_map = {
        'FUN_1802b6e50': 'InitializeRenderBuffer',
        'FUN_180627be0': 'CopyRenderData',
        'FUN_18023fa30': 'ProcessRenderResource',
        'FUN_18062b1e0': 'CreateRenderResourceHandle',
        'FUN_18023fe10': 'GetRenderResourceManager',
        'FUN_1802416d0': 'SetupRenderProperty',
        'FUN_18025a7b0': 'ConfigureRenderTexture',
        'FUN_180271cf0': 'UpdateRenderContext',
        'FUN_1808fc050': 'CalculateRenderHash',
        'FUN_180639bf0': 'SetRenderProperty',
        'FUN_180272d60': 'ApplyRenderTransform',
        'FUN_180639ec0': 'BindRenderBuffer',
    }
    
    # 批量替换函数名
    for old_name, new_name in function_map.items():
        # 使用正则表达式确保只替换完整的函数名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def beautify_variables(content):
    """美化变量名"""
    
    # 渲染变量映射
    variable_map = {
        'UNK_18098dfd0': 'DefaultTextureSampler',
        'UNK_18098de80': 'RenderTransformMatrix',
        'DAT_180c8ed18': 'RenderResourcePool',
        'DAT_180c924d0': 'RenderBufferPool',
        'DAT_180c924f0': 'RenderTexturePool',
        'objectState': 'RenderObjectState',
        'contextData': 'RenderContext',
        'iStack_70': 'RenderBufferIndex',
        'iStack_60': 'RenderIntensity',
        'fStack_5c': 'RenderScaleFactor',
        'uStack_58': 'RenderFlags',
        'puStack_a8': 'RenderPropertyStack',
        'iStack_b8': 'RenderStateIndex',
        'uStack_498': 'RenderBufferSize',
        'iStack_58': 'RenderPropertyIndex',
        'uStack_48': 'RenderHashValue',
        'auStack_f8': 'RenderHashMatrix',
        'iStackX_20': 'RenderOffsetIndex',
        'afStack_88': 'RenderColorArray',
        'afStack_80': 'RenderVertexData',
        'stack0x00000008': 'RenderQueueStack',
        'thirdValue': 'RenderParameter',
        'fourthValue': 'RenderOption',
        'currentNode': 'RenderNode',
        'nodeData': 'RenderNodeData',
        'nodeDataLength': 'RenderNodeLength',
        'stringCompareTarget': 'RenderCompareTarget',
        'memoryOffset': 'RenderMemoryOffset',
        'uVar2': 'RenderTempValue2',
        'uVar9': 'RenderTempValue9',
        'lVar6': 'RenderLoopIndex',
        'puVar8': 'RenderPointerValue8',
        'plVar9': 'RenderPointerValue9',
        'plStackX_18': 'RenderStackPointer18',
        'ppropertyLength0': 'RenderPropertyLength0',
        'ppropertyLength8': 'RenderPropertyLength8',
        'pdataSize': 'RenderDataSize',
        'nodePointer': 'RenderNodePointer',
        'pcontextOffset0': 'RenderContextOffset0',
        'baseOffset': 'RenderBaseOffset',
        'contextOffset': 'RenderContextOffset',
        'contextOffset1': 'RenderContextOffset1',
        'calculatedValue': 'RenderCalculatedValue',
        'dataSize': 'RenderDataSize',
        'unaff_R15': 'RenderRegister15',
        'contextOffset6': 'RenderContextOffset6',
        'pcontextOffset': 'RenderContextPointerOffset',
        'afStack_78': 'RenderTransformArray',
        'local_20': 'RenderLocal20',
        'local_18': 'RenderLocal18',
        'local_10': 'RenderLocal10',
        'local_8': 'RenderLocal8',
        'local_28': 'RenderLocal28',
        'local_30': 'RenderLocal30',
        'local_38': 'RenderLocal38',
        'local_40': 'RenderLocal40',
        'local_48': 'RenderLocal48',
        'local_50': 'RenderLocal50',
        'local_58': 'RenderLocal58',
        'local_60': 'RenderLocal60',
        'local_68': 'RenderLocal68',
        'local_70': 'RenderLocal70',
        'local_78': 'RenderLocal78',
        'local_80': 'RenderLocal80',
        'local_88': 'RenderLocal88',
        'local_90': 'RenderLocal90',
        'local_98': 'RenderLocal98',
        'local_a0': 'RenderLocalA0',
        'local_a8': 'RenderLocalA8',
        'local_b0': 'RenderLocalB0',
        'local_b8': 'RenderLocalB8',
        'local_c0': 'RenderLocalC0',
        'local_c8': 'RenderLocalC8',
        'local_d0': 'RenderLocalD0',
        'local_d8': 'RenderLocalD8',
        'local_e0': 'RenderLocalE0',
        'local_e8': 'RenderLocalE8',
        'local_f0': 'RenderLocalF0',
        'local_f8': 'RenderLocalF8',
        'auStack_128': 'RenderArray128',
        'auStack_138': 'RenderArray138',
        'auStack_148': 'RenderArray148',
        'auStack_158': 'RenderArray158',
        'auStack_168': 'RenderArray168',
        'auStack_178': 'RenderArray178',
        'auStack_188': 'RenderArray188',
        'auStack_198': 'RenderArray198',
        'auStack_1a8': 'RenderArray1A8',
        'auStack_1b8': 'RenderArray1B8',
        'auStack_1c8': 'RenderArray1C8',
        'auStack_1d8': 'RenderArray1D8',
        'auStack_1e8': 'RenderArray1E8',
        'auStack_1f8': 'RenderArray1F8',
    }
    
    # 批量替换变量名
    for old_name, new_name in variable_map.items():
        # 使用正则表达式确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def main():
    if len(sys.argv) != 2:
        print("Usage: python batch_beautify_03_rendering.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    print(f"Beautifying {file_path}...")
    
    # 检查文件是否存在
    if not os.path.exists(file_path):
        print(f"Error: File {file_path} not found!")
        sys.exit(1)
    
    # 读取文件
    try:
        content = read_file(file_path)
    except Exception as e:
        print(f"Error reading file: {e}")
        sys.exit(1)
    
    # 美化函数名
    print("Beautifying function names...")
    content = beautify_functions(content)
    
    # 美化变量名
    print("Beautifying variable names...")
    content = beautify_variables(content)
    
    # 写回文件
    try:
        write_file(file_path, content)
        print("Beautification completed successfully!")
    except Exception as e:
        print(f"Error writing file: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()