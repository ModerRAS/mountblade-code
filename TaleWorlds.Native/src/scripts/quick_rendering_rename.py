#!/usr/bin/env python3
import sys

def process_file(file_path):
    with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    
    # 定义变量映射
    replacements = {
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
    for old, new in replacements.items():
        content = content.replace(old, new)
    
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("文件处理完成")

if __name__ == "__main__":
    process_file("/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c")