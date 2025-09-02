#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量处理渲染系统函数美化
"""

import re

def batch_beautify_functions():
    """批量美化函数"""
    
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    
    # 函数映射
    function_map = {
        'FUN_180453f90': 'DestroyRenderBufferInstance',
        'FUN_180454070': 'ConfigureRenderBufferFormat',
        'FUN_1804541a0': 'AllocateRenderBufferMemory',
        'FUN_180454230': 'UpdateRenderBufferData',
        'FUN_180454300': 'BindRenderBufferToPipeline',
        'FUN_1804543f0': 'ValidateRenderBufferState',
        'FUN_180454d00': 'InitializeRenderTextureManager',
        'FUN_180454d80': 'CreateRenderTextureInstance',
        'FUN_180454ea0': 'LoadRenderTextureData',
        'FUN_180454ff0': 'DestroyRenderTextureInstance',
        'FUN_180455090': 'ConfigureRenderTextureParameters',
        'FUN_180455250': 'ApplyRenderTextureFilter',
        'FUN_180455340': 'GenerateRenderTextureMipmaps',
        'FUN_180455430': 'ValidateRenderTextureFormat',
        'FUN_1804555a0': 'InitializeRenderSampler',
        'FUN_1804557b0': 'CreateRenderSamplerInstance',
        'FUN_180455980': 'ConfigureRenderSamplerState',
        'FUN_1804559d0': 'ApplyRenderSamplerFilter'
    }
    
    # 批量替换
    for old_name, new_name in function_map.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
        print(f"替换: {old_name} → {new_name}")
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("批量替换完成")

if __name__ == '__main__':
    batch_beautify_functions()