#!/usr/bin/env python3
"""
批量重命名渲染系统UNK_变量的Python脚本
该脚本用于将03_rendering.c文件中的UNK_变量重命名为语义化名称
"""

import re

def rename_rendering_unk_variables():
    """重命名渲染系统中的UNK_变量"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量映射关系
    variable_mapping = {
        'UNK_180446940': 'RenderLightingData',
        'UNK_180446950': 'RenderCameraData',
        'UNK_1804469d0': 'RenderViewportData',
        'UNK_1804469e0': 'RenderScissorData',
        'UNK_180446a20': 'RenderBlendingData',
        'UNK_180446a40': 'RenderDepthData',
        'UNK_180446b10': 'RenderStencilData',
        'UNK_180446e00': 'RenderCullingData',
        'UNK_180446e10': 'RenderShaderData',
        'UNK_180446e20': 'RenderResourceData',
        'UNK_180446e30': 'RenderDeviceData',
        'UNK_180446e50': 'RenderContextData',
        'UNK_180446e60': 'ShaderSystemData',
        'UNK_180446f90': 'VertexBufferData',
        'UNK_180447010': 'RenderPipelineStateData',
        'UNK_180447020': 'VertexShaderData',
        'UNK_1804470c0': 'VertexShaderCompiledData',
        'UNK_180447110': 'VertexShaderCompiledCode',
        'UNK_1804473a0': 'TextureData',
        'UNK_1804475b0': 'MaterialData',
        'UNK_180447c80': 'BufferManagerData',
        'UNK_180447c90': 'BufferPoolData',
        'UNK_180447d20': 'BufferAllocationData',
        'UNK_180447d30': 'BufferDescriptorData',
        'UNK_180447dc0': 'BufferMemoryData',
        'UNK_1804482a0': 'RenderTargetData',
        'UNK_1804482b0': 'RenderTargetViewData',
        'UNK_1804482e0': 'RenderTargetDescriptorData',
        'UNK_180448370': 'RenderTargetConfigData',
        'UNK_180448400': 'DepthStencilData',
        'UNK_180448410': 'DepthStencilViewData',
        'UNK_1804497e0': 'ConstantBufferData',
        'UNK_180449820': 'ConstantBufferViewData',
        'UNK_180449830': 'ConstantBufferDescriptorData',
        'UNK_180449840': 'ConstantBufferConfigData',
        'UNK_180449920': 'SamplerData',
        'UNK_180449be0': 'SamplerStateData',
        'UNK_180449bf0': 'SamplerDescriptorData',
        'UNK_18044a390': 'InputAssemblyData',
        'UNK_18044a7c0': 'InputLayoutData',
        'UNK_18044a7d0': 'InputLayoutDescriptorData',
        'UNK_18044a7e0': 'InputLayoutConfigData',
        'UNK_18044a7f0': 'InputLayoutElementData',
        'UNK_18044a800': 'InputLayoutAttributeData'
    }
    
    # 执行替换
    for old_name, new_name in variable_mapping.items():
        pattern = r'undefined ' + re.escape(old_name) + r';'
        replacement = f'undefined {new_name};'
        content = re.sub(pattern, replacement, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("渲染系统UNK_变量重命名完成")

if __name__ == "__main__":
    rename_rendering_unk_variables()