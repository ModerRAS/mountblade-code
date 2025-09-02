#!/usr/bin/env python3
"""
美化03_rendering.c文件中的变量名
"""

import re
import sys

def beautify_rendering_file():
    """美化03_rendering.c文件中的变量名"""
    
    # 读取文件内容
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量名映射
    variable_mappings = {
        # 渲染系统配置相关
        'DAT_180a1ef48': 'RenderSystemConfig',
        'DAT_180a1f3d0': 'RenderDeviceName',
        'DAT_180a1f550': 'RenderAdapterName',
        'DAT_180a1f560': 'RenderDriverName',
        'DAT_180a1f740': 'RenderFeatureLevel',
        'DAT_180a1f750': 'RenderApiVersion',
        'DAT_180a1f8f0': 'RenderMemoryPool',
        'DAT_180a1f8f8': 'RenderDescriptorHeap',
        'DAT_180a1f910': 'RenderCommandQueue',
        'DAT_180a1f920': 'RenderCommandList',
        'DAT_180a1f930': 'RenderCommandAllocator',
        'DAT_180a1f940': 'RenderFence',
        'DAT_180a1f950': 'RenderSwapChain',
        'DAT_180a1f960': 'RenderRenderTarget',
        'DAT_180a064c8': 'RenderBackBuffer',
        'DAT_180a1fc50': 'RenderDepthBuffer',
        'DAT_180a1fc58': 'RenderStencilBuffer',
        'DAT_180a1fdd8': 'RenderViewport',
        'DAT_180a1fdf0': 'RenderScissorRect',
        'DAT_180a1fdf8': 'RenderBlendState',
        'DAT_180a1ff70': 'RenderRasterizerState',
        'DAT_180a1ffa0': 'RenderDepthStencilState',
        'DAT_180a1ffd8': 'RenderSamplerState',
        'DAT_180a1ffe8': 'RenderTexture',
        'DAT_180a1fff8': 'RenderShader',
        
        # 内存管理相关
        'DAT_180a20198': 'MemoryAllocator',
        'DAT_180a20238': 'MemoryPool',
        'DAT_180a201a8': 'MemoryHeap',
        'DAT_180a201c0': 'MemoryBuffer',
        
        # 渲染资源相关
        'DAT_180a20c88': 'ResourceDatabase',
        'DAT_180a20c48': 'ResourceTable',
        'DAT_180a20c58': 'ResourceLayout',
        'DAT_180a20c68': 'ResourceBinding',
        'DAT_180a20c78': 'ResourceView',
        'DAT_180a20c98': 'ResourceDescriptor',
        'DAT_180a20ca8': 'ResourceHeap',
        'DAT_180c91f50': 'ResourceManager',
        'DAT_180c91f48': 'ResourceCache',
        'DAT_180c8aa6b': 'ResourceFlag',
        'DAT_180a20e58': 'ResourceFactory',
        'DAT_180a20e30': 'ResourceBuilder',
        'DAT_180a20e40': 'ResourceCompiler',
        'DAT_180a20e70': 'ResourceLoader',
        'DAT_180a20e80': 'ResourceSaver',
        'DAT_180a20e48': 'ResourceValidator',
        'DAT_180a20f08': 'ResourceOptimizer',
        'DAT_180a20f20': 'ResourceCompressor',
        'DAT_180a20f30': 'ResourceConverter',
        
        # 渲染管线相关
        'DAT_180a402a0': 'PipelineState',
        'DAT_180a21838': 'PipelineLayout',
        'DAT_180a21858': 'PipelineDescriptor',
        
        # 其他系统变量
        'DAT_180d48ee8': 'SystemConfig',
        'DAT_180d48ee0': 'SystemState',
        'DAT_180d48ee4': 'SystemFlags',
        'DAT_180c91fe0': 'GlobalContext',
        'DAT_180c91fe8': 'GlobalSettings',
        'DAT_180a406e0': 'RenderStats',
        'DAT_180a3f940': 'RenderMetrics',
        'DAT_180a406c0': 'RenderCounters',
        'DAT_180a3f950': 'RenderTimers',
        'DAT_180a406d0': 'RenderProfilers',
        'DAT_180a3f970': 'RenderDebug',
        'DAT_180a40700': 'RenderLogger',
        'DAT_180a3f960': 'RenderTracer'
    }
    
    # 应用变量名替换
    for old_name, new_name in variable_mappings.items():
        # 只替换完整的变量名，避免部分匹配
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 写入文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"已美化 {len(variable_mappings)} 个变量名")

if __name__ == "__main__":
    beautify_rendering_file()