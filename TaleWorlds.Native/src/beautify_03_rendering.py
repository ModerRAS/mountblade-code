#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
美化03_rendering.c文件脚本
将undefined类型改为合适的类型，将UNK_和FUN_标识符改为PascalCase规范
"""

import re
import os

def beautify_rendering_file():
    """美化03_rendering.c文件"""
    
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    
    print("开始美化03_rendering.c文件...")
    
    # 读取文件内容
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 1. 首先处理所有undefined*为void*
    content = re.sub(r'undefined\*', 'void*', content)
    
    # 2. 处理所有undefined为uint32_t（但要避免处理undefined4、undefined8等）
    # 使用更精确的正则表达式
    content = re.sub(r'\bundefined\b(?!\w)', 'uint32_t', content)
    
    # 3. 处理UNK_变量
    unk_mappings = {
        'UNK_180445330': 'StencilBufferManager',
        'UNK_180445340': 'BlendModeProcessor',
        'UNK_180445350': 'RasterizerCullMode',
        'UNK_180445360': 'RasterizerFillMode',
        'UNK_180445370': 'RasterizerDepthBias',
        'UNK_180445470': 'RasterizerSlopeScaleDepthBias',
        'UNK_1804454d0': 'RasterizerDepthClipEnable',
        'UNK_180445550': 'MaterialPropertyValidator',
        'UNK_1804455b0': 'MaterialCacheManager',
        'UNK_1804455c0': 'TextureDataProcessor',
        'UNK_1804455d0': 'TextureSamplerConfigurator',
        'UNK_1804455e0': 'TextureFilterManager',
        'UNK_1804455f0': 'TextureAddressManager',
        'UNK_180445600': 'TextureViewCreator',
        'UNK_180445790': 'TextureMipmapUpdater',
        'UNK_1804457a0': 'TextureShaderBinder',
        'UNK_180445960': 'TextureFilterSetter',
        'UNK_180445fa0': 'TextureAddressSetter',
        'UNK_180445fb0': 'TextureMipmapGenerator',
        'UNK_180445fc0': 'TextureCompressor',
        'UNK_180445ff0': 'TextureDecompressor',
        'UNK_180446000': 'TextureFormatConverter',
        'UNK_180446070': 'BufferInstanceAllocator',
        'UNK_1804460b0': 'FormatCompatibilityChecker',
        'UNK_1804461a0': 'ResourceReferenceProvider',
        'UNK_180446280': 'RenderStateManager',
        'UNK_180446290': 'RenderContextManager',
        'UNK_180446530': 'RenderPipelineManager',
        'UNK_1804465b0': 'RenderStateInitializer',
        'UNK_180446600': 'RenderContextInitializer',
        'UNK_180446900': 'RenderObjectManager',
        'UNK_180446940': 'RenderContextArrayManager',
        'UNK_180446950': 'RenderContextInitializer',
        'UNK_1804469d0': 'RenderDataProcessor',
        'UNK_1804469e0': 'RenderContextProcessor',
        'UNK_180446a20': 'RenderParameterUpdater',
        'UNK_180446e60': 'RenderTargetCreator',
        'UNK_180446f90': 'CameraParameterSetter',
        'UNK_180447010': 'ViewportParameterSetter',
        'UNK_180447020': 'ClippingPlaneSetter',
        'UNK_1804470c0': 'ProjectionMatrixCalculator',
        'UNK_180447110': 'ViewMatrixCalculator',
        'UNK_1804473a0': 'TransformMatrixUpdater',
        'UNK_1804475b0': 'RenderContextInitializer',
        'UNK_180447c80': 'IndexDrawProcessor',
        'UNK_180447c90': 'InstanceDrawProcessor',
        'UNK_180447d20': 'InstanceDataManager',
        'UNK_180447d30': 'InstanceBufferManager',
        'UNK_180447dc0': 'TransformMatrixProcessor',
        'UNK_1804482a0': 'ResourceBinder',
        'UNK_1804482b0': 'ShaderParameterSetter',
        'UNK_1804482e0': 'StateDataProcessor',
        'UNK_180448370': 'ParameterDataUpdater',
        'UNK_180448400': 'RenderStateValidator'
    }
    
    for old_name, new_name in unk_mappings.items():
        content = content.replace(old_name, new_name)
    
    # 4. 处理FUN_函数
    fun_mappings = {
        'FUN_180440f30': 'ValidateRenderState',
        'FUN_180441070': 'ProcessRenderQueue',
        'FUN_1804410a0': 'ExecuteRenderCommand',
        'FUN_180441110': 'InitializeRenderDevice',
        'FUN_180441180': 'CreateRenderContext',
        'FUN_180441260': 'DestroyRenderContext',
        'FUN_180441420': 'BeginRenderFrame',
        'FUN_1804414d0': 'EndRenderFrame',
        'FUN_1804415d0': 'PresentRenderFrame',
        'FUN_180441640': 'ClearRenderBuffer',
        'FUN_180441730': 'SetRenderViewport',
        'FUN_1804417b0': 'SetRenderScissor',
        'FUN_180441830': 'SetRenderBlendFactor',
        'FUN_180441890': 'SetRenderDepthBias',
        'FUN_1804418e0': 'SetRenderStencilRef',
        'FUN_180441910': 'BindRenderPipeline',
        'FUN_180441950': 'BindVertexBuffers',
        'FUN_180441a00': 'BindIndexBuffer',
        'FUN_180441c50': 'BindConstantBuffer',
        'FUN_180441cc0': 'BindShaderResource',
        'FUN_180441dd0': 'BindSamplerState',
        'FUN_180441e10': 'BindRenderTarget',
        'FUN_180441e50': 'BindDepthStencil',
        'FUN_180441e90': 'UpdateSubresource',
        'FUN_180441f60': 'CopySubresource',
        'FUN_180441fc0': 'ResolveSubresource',
        'FUN_180442020': 'GenerateMips',
        'FUN_1804420c0': 'CreateTexture2D',
        'FUN_180442180': 'CreateTexture3D',
        'FUN_1804422a0': 'CreateBuffer',
        'FUN_180442370': 'CreateShader',
        'FUN_180442450': 'CreateInputLayout',
        'FUN_1804424d0': 'CreateRasterizerState',
        'FUN_180442560': 'CreateBlendState',
        'FUN_180442670': 'CreateDepthStencilState',
        'FUN_180442720': 'CreateSamplerState',
        'FUN_180442860': 'CreateQuery',
        'FUN_180442950': 'CreatePredicate',
        'FUN_1804429f0': 'CreateCounter',
        'FUN_180442b30': 'CreateRenderTargetView',
        'FUN_180442d10': 'CreateDepthStencilView',
        'FUN_180442e00': 'CreateShaderResourceView',
        'FUN_180443000': 'CreateUnorderedAccessView',
        'FUN_180443080': 'CreateGraphicsPipeline',
        'FUN_1804431c0': 'CreateComputePipeline',
        'FUN_180443320': 'MapResource',
        'FUN_180443510': 'UnmapResource',
        'FUN_180443630': 'BeginQuery',
        'FUN_180443680': 'EndQuery',
        'FUN_180443700': 'GetQueryData',
        'FUN_180443770': 'SetPredication',
        'FUN_180443820': 'DrawAuto',
        'FUN_180443930': 'DrawIndexedInstanced',
        'FUN_180443a40': 'DrawInstancedIndirect',
        'FUN_180443aa0': 'DrawIndexedInstancedIndirect',
        'FUN_180443b00': 'Dispatch',
        'FUN_180443b40': 'DispatchIndirect',
        'FUN_180443b80': 'CopyResource',
        'FUN_180443d10': 'UpdateTileMappings',
        'FUN_180443d70': 'CopyTileMappings',
        'FUN_180443df0': 'ResizeTilePool',
        'FUN_180443f80': 'TiledResourceBarrier',
        'FUN_180443ff0': 'CheckFeatureSupport',
        'FUN_180444030': 'GetDeviceRemovedReason',
        'FUN_180444070': 'GetPrivateData',
        'FUN_180444100': 'SetPrivateData',
        'FUN_180444200': 'GetFeatureLevel',
        'FUN_180444280': 'CreateCommandList',
        'FUN_1804442c0': 'ExecuteCommandList',
        'FUN_1804442e0': 'FlushCommandQueue',
        'FUN_180444370': 'CreateFence',
        'FUN_1804443c0': 'SignalFence',
        'FUN_180444410': 'WaitForFence',
        'FUN_1804445b0': 'CreateSwapChain',
        'FUN_180444600': 'ResizeBuffers',
        'FUN_180444700': 'GetBuffer',
        'FUN_1804447c0': 'GetDesc',
        'FUN_1804448a0': 'SetFullscreenState',
        'FUN_1804449a0': 'GetFullscreenState',
        'FUN_180444a20': 'GetContainingOutput',
        'FUN_180444b70': 'ResizeTarget',
        'FUN_180444dd0': 'IsTemporaryMonoSupported',
        'FUN_180444e90': 'GetFrameStatistics',
        'FUN_180445060': 'GetLastPresentCount',
        'FUN_180445110': 'CreateSwapChainForHwnd',
        'FUN_180445180': 'CreateSwapChainForCoreWindow',
        'FUN_180445390': 'CreateSwapChainForComposition',
        'FUN_180445480': 'GetRotation',
        'FUN_180445570': 'SetRotation',
        'FUN_180445680': 'GetSourceSize',
        'FUN_1804457b0': 'GetMaximumFrameLatency',
        'FUN_180445870': 'SetMaximumFrameLatency',
        'FUN_180445970': 'GetFrameLatencyWaitableObject',
        'FUN_180445a80': 'SetMatrixTransform',
        'FUN_180445cd0': 'GetMatrixTransform',
        'FUN_180445dc0': 'GetSourceSize',
        'FUN_180445eb0': 'GetBackgroundColor',
        'FUN_180445fd0': 'SetBackgroundColor',
        'FUN_180446010': 'GetRotation',
        'FUN_180446080': 'SetRotation',
        'FUN_1804460c0': 'GetHwnd',
        'FUN_1804460f0': 'IsFullScreen',
        'FUN_180446120': 'GetCoreWindow',
        'FUN_180446160': 'GetPresentParameters',
        'FUN_1804461b0': 'GetCompositionDevice',
        'FUN_1804462a0': 'GetFrameStatistics',
        'FUN_1804462e0': 'GetLastPresentCount',
        'FUN_180446320': 'CreateSwapChainForComposition',
        'FUN_180446370': 'GetBuffer',
        'FUN_1804463b0': 'GetDesc',
        'FUN_1804463f0': 'ResizeBuffers',
        'FUN_180446440': 'ResizeTarget'
    }
    
    for old_name, new_name in fun_mappings.items():
        content = content.replace(old_name, new_name)
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("美化完成！")
    
    # 验证修改结果
    print("验证修改结果...")
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    undefined_count = len(re.findall(r'undefined\*', content))
    undefined_standalone_count = len(re.findall(r'\bundefined\b(?!\w)', content))
    unk_count = len(re.findall(r'UNK_', content))
    fun_count = len(re.findall(r'FUN_', content))
    
    print(f"剩余的undefined*数量：{undefined_count}")
    print(f"剩余的undefined数量：{undefined_standalone_count}")
    print(f"剩余的UNK_数量：{unk_count}")
    print(f"剩余的FUN_数量：{fun_count}")
    
    return undefined_count == 0 and undefined_standalone_count == 0 and unk_count == 0 and fun_count == 0

if __name__ == "__main__":
    beautify_rendering_file()