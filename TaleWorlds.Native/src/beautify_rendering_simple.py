#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
渲染系统美化脚本 - 简化版本
用于快速美化 03_rendering.c 文件
"""

import re
import os

def beautify_rendering_file():
    """美化渲染文件"""
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    output_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    
    # 读取文件
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    print("开始美化渲染文件...")
    
    # 1. 替换 undefined 类型为 void 类型（对于函数声明）
    print("1. 替换 undefined 类型为 void 类型...")
    content = re.sub(r'\bundefined\s+([A-Za-z_][A-Za-z0-9_]*)\s*;', r'void \1;', content)
    
    # 2. 替换 undefined 类型为 void* 类型（对于变量声明）
    print("2. 替换 undefined 类型为 void* 类型...")
    content = re.sub(r'\bundefined\s+([A-Za-z_][A-Za-z0-9_]*)\s*[;=]', r'void* \1 ', content)
    
    # 3. 主要的 FUN_180xxxxx 函数映射
    print("3. 替换 FUN_180xxxxx 函数名...")
    fun_mappings = {
        'FUN_18043fe10': 'InitializeRenderContext',
        'FUN_18043fe70': 'CreateRenderDevice',
        'FUN_18043fef0': 'SetupRenderPipeline',
        'FUN_18043ff20': 'ConfigureRenderState',
        'FUN_1804401b0': 'CreateVertexBuffer',
        'FUN_180440220': 'CreateIndexBuffer',
        'FUN_180440280': 'CreateConstantBuffer',
        'FUN_1804402e0': 'CreateShaderProgram',
        'FUN_180440350': 'CreateTexture2D',
        'FUN_1804403d0': 'CreateSamplerState',
        'FUN_1804404b0': 'CreateRenderTarget',
        'FUN_180440560': 'CreateDepthStencil',
        'FUN_1804405e0': 'CreateRenderPass',
        'FUN_180440660': 'InitializeShaderCompiler',
        'FUN_180440750': 'CompileVertexShader',
        'FUN_180440910': 'CompilePixelShader',
        'FUN_180440aa0': 'CompileGeometryShader',
        'FUN_180440cb0': 'LinkShaderProgram',
        'FUN_180440d20': 'ValidateShaderProgram',
        'FUN_180440d90': 'SetVertexBufferData',
        'FUN_180440e00': 'SetIndexBufferData',
        'FUN_180440e70': 'SetConstantBufferData',
        'FUN_180440f30': 'SetTextureData',
        'FUN_180441070': 'SetSamplerParameters',
        'FUN_1804410a0': 'SetRenderTargetSize',
        'FUN_180441110': 'SetDepthStencilFormat',
        'FUN_180441180': 'BeginRenderPass',
        'FUN_180441260': 'EndRenderPass',
        'FUN_180441420': 'BindVertexBuffer',
        'FUN_1804414d0': 'BindIndexBuffer',
        'FUN_1804415d0': 'BindConstantBuffer',
        'FUN_180441640': 'BindShaderProgram',
        'FUN_180441730': 'BindTexture',
        'FUN_1804417b0': 'BindSampler',
        'FUN_180441830': 'BindRenderTarget',
        'FUN_180441890': 'BindDepthStencil',
        'FUN_1804418e0': 'SetViewport',
        'FUN_180441910': 'SetScissorRect',
        'FUN_180441950': 'SetRasterizerState',
        'FUN_180441a00': 'SetDepthStencilState',
        'FUN_180441c50': 'SetBlendState',
        'FUN_180441cc0': 'DrawPrimitive',
        'FUN_180441dd0': 'DrawIndexedPrimitive',
        'FUN_180441e10': 'DrawInstancedPrimitive',
        'FUN_180441e50': 'DrawInstancedIndexedPrimitive',
        'FUN_180441e90': 'DispatchComputeShader',
        'FUN_180441f60': 'CopyTextureRegion',
        'FUN_180441fc0': 'CopyResource',
        'FUN_180442020': 'ResolveMultisampleTexture',
        'FUN_1804420c0': 'GenerateMipmaps',
        'FUN_180442180': 'MapBuffer',
        'FUN_1804422a0': 'UnmapBuffer',
        'FUN_180442370': 'UpdateSubresource',
        'FUN_180442450': 'CopySubresourceRegion',
        'FUN_1804424d0': 'ClearRenderTarget',
        'FUN_180442560': 'ClearDepthStencil',
        'FUN_180442670': 'ClearUnorderedAccessView',
        'FUN_180442720': 'SetResourceBarrier',
        'FUN_180442860': 'ExecuteCommandList',
        'FUN_180442950': 'PresentFrame',
        'FUN_1804429f0': 'WaitForGPU',
        'FUN_180442b30': 'FlushCommandQueue',
    }
    
    for old_name, new_name in fun_mappings.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    # 4. 主要的 UNK_180xxxxx 变量映射
    print("4. 替换 UNK_180xxxxx 变量名...")
    unk_mappings = {
        'UNK_180444460': 'ConstantBufferCreationFlags',
        'UNK_180444470': 'PipelineStateInitializationFlags',
        'UNK_180444480': 'PipelineParameterConfiguration',
        'UNK_1804445a0': 'BufferSetupConfiguration',
        'UNK_1804449d0': 'ShaderInitializationParameters',
        'UNK_1804449f0': 'TextureConfigurationParameters',
        'UNK_180444a00': 'OutputConfigurationParameters',
        'UNK_180444d60': 'PipelineCacheConfiguration',
        'UNK_180444f20': 'BlendingConfigurationParameters',
        'UNK_180444f60': 'RasterizationInitializationFlags',
        'UNK_180444fb0': 'RasterizationCullMode',
        'UNK_180444fd0': 'RasterizationFillMode',
        'UNK_180445020': 'DepthTestConfiguration',
        'UNK_1804450e0': 'PipelineStateConfiguration',
        'UNK_180445140': 'VertexShaderConfiguration',
        'UNK_180445160': 'PixelShaderConfiguration',
        'UNK_180445230': 'GeometryShaderConfiguration',
        'UNK_180445280': 'RenderTargetConfiguration',
        'UNK_1804452d0': 'ShaderCompilerSettings',
        'UNK_1804452f0': 'SamplerConfiguration',
        'UNK_180445310': 'DepthTestParameters',
        'UNK_180445330': 'StencilBufferConfiguration',
        'UNK_180445340': 'BlendModeConfiguration',
        'UNK_180445350': 'RasterizerStateParameters',
        'UNK_180445360': 'RasterizerDepthBias',
        'UNK_180445370': 'RasterizerSlopeScaledDepthBias',
        'UNK_180445470': 'RasterizerDepthBiasClamp',
        'UNK_1804454d0': 'RasterizerMultisampleEnable',
        'UNK_180445550': 'MaterialPropertyConfiguration',
        'UNK_1804455b0': 'MaterialCacheInitialization',
        'UNK_1804455c0': 'TextureDataProcessor',
        'UNK_1804455d0': 'TextureSamplerSetup',
        'UNK_1804455e0': 'TextureViewManager',
        'UNK_1804455f0': 'TextureMipmapGenerator',
        'UNK_180445600': 'TextureViewCreator',
        'UNK_180445790': 'MipmapUpdateProcessor',
        'UNK_1804457a0': 'TextureShaderBinder',
        'UNK_180445960': 'TextureFilterManager',
        'UNK_180445fa0': 'TextureAddressManager',
        'UNK_180445fb0': 'MipmapGenerator',
        'UNK_180445fc0': 'TextureCompressor',
        'UNK_180445ff0': 'TextureDecompressor',
        'UNK_180446000': 'TextureFormatConverter',
        'UNK_180446070': 'BufferInstanceCreator',
        'UNK_1804460b0': 'FormatCompatibilityValidator',
        'UNK_1804461a0': 'ResourceReferenceManager',
        'UNK_180446280': 'RenderingContextInitializer',
        'UNK_180446290': 'ViewportSetupManager',
        'UNK_180446530': 'ScissorConfiguration',
        'UNK_180446560': 'SwapChainCreator',
        'UNK_1804465b0': 'DeviceMemoryManager',
        'UNK_180446600': 'DeviceCommandQueue',
        'UNK_180446900': 'DeviceFence',
        'UNK_180446950': 'DeviceStateInitializer',
        'UNK_1804469d0': 'DeviceContextManager',
        'UNK_1804469e0': 'DeviceAdapterInfo',
    }
    
    for old_name, new_name in unk_mappings.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    # 5. 替换 DAT_180xxxxx 变量名
    print("5. 替换 DAT_180xxxxx 变量名...")
    for old_name, new_name in unk_mappings.items():
        dat_name = old_name.replace('UNK_', 'DAT_')
        content = re.sub(r'\b' + re.escape(dat_name) + r'\b', new_name, content)
    
    # 写入文件
    with open(output_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"文件美化完成: {output_file}")

if __name__ == "__main__":
    beautify_rendering_file()