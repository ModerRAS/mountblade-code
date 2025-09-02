#!/usr/bin/env python3
"""
美化03_rendering.c文件中的FUN_函数
"""

import re
import sys

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_rendering_functions(content):
    """美化渲染相关的FUN_函数"""
    
    # 渲染系统函数映射
    function_mappings = {
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
    
    # 应用函数名替换
    for old_name, new_name in function_mappings.items():
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    return content

def beautify_rendering_variables(content):
    """美化渲染相关的变量"""
    
    # 渲染变量映射
    variable_mappings = {
        'UNK_18098dfd0': 'DefaultTextureSampler',
        'UNK_18098de80': 'RenderTransformMatrix',
        '_DAT_180c8ed18': 'RenderResourcePool',
        'puStack_a8': 'RenderPropertyStack',
        'uStack_48': 'RenderHashValue',
        'auStack_f8': 'RenderHashMatrix',
        'iStack_70': 'RenderBufferIndex',
        'objectState': 'RenderObjectState',
        'contextData': 'RenderContext',
    }
    
    # 应用变量名替换
    for old_name, new_name in variable_mappings.items():
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    return content

def main():
    if len(sys.argv) != 2:
        print("Usage: python beautify_03_rendering.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    print(f"Beautifying {file_path}...")
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化函数名
    content = beautify_rendering_functions(content)
    
    # 美化变量名
    content = beautify_rendering_variables(content)
    
    # 写回文件
    write_file(file_path, content)
    
    print("Beautification completed!")

if __name__ == "__main__":
    main()