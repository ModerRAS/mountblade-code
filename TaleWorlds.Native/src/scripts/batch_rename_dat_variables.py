#!/usr/bin/env python3
"""
批量重命名03_rendering.c文件中的DAT_变量
"""

import re

def batch_rename_dat_variables():
    """批量重命名DAT_变量"""
    
    # 读取文件内容
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义DAT_变量映射（根据地址范围和用途）
    dat_mappings = {
        # 渲染设备和API相关
        'DAT_180a1ef48': 'RenderDeviceName',
        'DAT_180a1f740': 'RenderFeatureLevel',
        'DAT_180a1f750': 'RenderApiVersion',
        'DAT_180a1f8f0': 'RenderMemoryPool',
        'DAT_180a1f8f8': 'RenderDescriptorHeap',
        'DAT_180a1f910': 'RenderCommandQueue',
        'DAT_180a1f920': 'RenderCommandList',
        'DAT_180a1f930': 'RenderCommandAllocator',
        'DAT_180a1f940': 'RenderFence',
        'DAT_180a1f950': 'RenderSwapChain',
        'DAT_180a1f960': 'RenderBackBuffer',
        'DAT_180a064c8': 'RenderDepthBuffer',
        'DAT_180a1fc50': 'RenderStencilBuffer',
        'DAT_180a1fc58': 'RenderViewport',
        'DAT_180a1fdd8': 'RenderScissorRect',
        'DAT_180a1fdf0': 'RenderBlendState',
        'DAT_180a1fdf8': 'RenderRasterizerState',
        'DAT_180a1ff70': 'RenderDepthStencilState',
        'DAT_180a1ffa0': 'RenderSamplerState',
        'DAT_180a1ffd8': 'RenderTexture',
        'DAT_180a1ffe8': 'RenderShader',
        'DAT_180a1fff8': 'RenderPipelineState',
        
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
        'DAT_180a3f960': 'RenderTracer',
        
        # 其他变量（根据地址范围推测用途）
        'DAT_180a3f760': 'RenderConstants',
        'DAT_180a3f910': 'RenderParameters',
        'DAT_180a40580': 'RenderUniforms',
        'DAT_180a3f980': 'RenderAttributes',
        'DAT_180a406f0': 'RenderVaryings',
        'DAT_180a40710': 'RenderOutputs',
        'DAT_180a3f990': 'RenderInputs',
        
        # 系统配置
        'DAT_180c8ec8c': 'SystemMemoryConfig',
        'DAT_180a069f0': 'SystemThreadConfig',
        'DAT_180a06a00': 'SystemProcessConfig',
        'DAT_180a06a28': 'SystemPriorityConfig',
        'DAT_180a06a48': 'SystemSecurityConfig',
        'DAT_180a06ea8': 'SystemNetworkConfig',
        'DAT_180a06ec0': 'SystemFileSystemConfig',
        'DAT_180a06ed8': 'SystemDatabaseConfig',
        'DAT_180a06ee8': 'SystemCacheConfig',
        
        # 其他常量
        'DAT_180a29de8': 'GlobalConstants',
        'DAT_180a29e24': 'GlobalVariables',
        'DAT_1809fd0f8': 'SystemConstants',
        'DAT_1809ff0c8': 'SystemVariables',
        
        # 等等...
    }
    
    # 应用变量名替换
    for old_name, new_name in dat_mappings.items():
        # 只替换完整的变量名，避免部分匹配
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 写入文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"已重命名 {len(dat_mappings)} 个DAT_变量")

if __name__ == "__main__":
    batch_rename_dat_variables()