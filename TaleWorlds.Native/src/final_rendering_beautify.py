#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
渲染系统最终美化脚本
用于完成 03_rendering.c 文件的美化工作
"""

import re

def final_beautify():
    """最终美化处理"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    
    # 读取文件
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    print("开始最终美化处理...")
    
    # 1. 替换剩余的undefined函数声明
    print("1. 替换剩余的undefined函数声明...")
    content = re.sub(r'\bundefined\s+(FUN_180[a-f0-9]{5})\s*;', r'void \1;', content)
    
    # 2. 替换主要的FUN_180xxxxx函数名
    print("2. 替换主要的FUN_180xxxxx函数名...")
    fun_replacements = {
        'FUN_18043fa30': 'InitializeRenderDisplayMode',
        'FUN_18043fae0': 'SetupRenderDisplaySettings',
        'FUN_18043fb10': 'ConfigureRenderOutput',
        'FUN_18043fc20': 'CreateRenderSwapChain',
        'FUN_18043fce0': 'InitializeRenderFrameBuffer',
        'FUN_18043fd10': 'SetupRenderBackBuffer',
        'FUN_18043fd70': 'ConfigureRenderDepthBuffer',
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
    
    for old_name, new_name in fun_replacements.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    # 3. 替换剩余的UNK_180xxxxx变量
    print("3. 替换剩余的UNK_180xxxxx变量...")
    unk_replacements = {
        'UNK_180446280': 'DeviceContextManager',
        'UNK_180446290': 'ViewportSetupManager',
        'UNK_180446530': 'ScissorConfiguration',
        'UNK_180446560': 'SwapChainCreator',
        'UNK_1804465b0': 'DeviceMemoryManager',
        'UNK_180446600': 'DeviceCommandQueue',
        'UNK_180446900': 'DeviceFence',
        'UNK_180446950': 'DeviceStateInitializer',
        'UNK_1804469d0': 'DeviceContextManager',
        'UNK_1804469e0': 'DeviceAdapterInfo',
        'UNK_180446a20': 'DeviceOutputManager',
        'UNK_180446a40': 'DeviceFactory',
        'UNK_180446b10': 'DeviceAdapter',
        'UNK_180446e00': 'DeviceMemoryAllocator',
        'UNK_180446e10': 'DeviceDescriptorHeap',
        'UNK_180446e20': 'DeviceCommandAllocator',
        'UNK_180446e30': 'DeviceGraphicsCommandList',
        'UNK_180446e50': 'DeviceComputeCommandList',
        'UNK_180446e60': 'DeviceCopyCommandList',
        'UNK_180446f90': 'DeviceBundleCommandList',
        'UNK_180447010': 'DeviceVideoDecodeCommandList',
        'UNK_180447020': 'DeviceVideoProcessCommandList',
        'UNK_1804470c0': 'DeviceVideoEncodeCommandList',
        'UNK_180447110': 'DeviceExtensionCommandList',
        'UNK_1804473a0': 'DevicePipelineState',
        'UNK_1804475b0': 'DeviceRootSignature',
        'UNK_180447c80': 'DeviceResource',
        'UNK_180447c90': 'DeviceHeap',
        'UNK_180447d20': 'DeviceResourceAllocation',
        'UNK_180447d30': 'DeviceResourceHeap',
        'UNK_180447dc0': 'DevicePlacedResource',
        'UNK_1804482a0': 'DeviceReservedResource',
        'UNK_1804482b0': 'DeviceSharedResource',
        'UNK_1804482e0': 'DeviceCrossAdapterResource',
        'UNK_180448370': 'DeviceQuery',
        'UNK_180448400': 'DevicePredicate',
        'UNK_180448410': 'DeviceCounter',
        'UNK_1804497e0': 'DeviceDebugDevice',
        'UNK_180449820': 'DeviceInfoQueue',
        'UNK_180449830': 'DeviceDebugCommandList',
        'UNK_180449840': 'DeviceDebugCommandQueue',
        'UNK_180449920': 'DeviceShaderCache',
        'UNK_180449be0': 'DevicePipelineLibrary',
        'UNK_180449bf0': 'DeviceFeatureSupport',
        'UNK_18044a390': 'DeviceOptions',
        'UNK_18044a7c0': 'DeviceSwapChain',
        'UNK_18044a7d0': 'DeviceSwapChainPanel',
        'UNK_18044a7e0': 'DeviceSwapChainBackgroundPanel',
        'UNK_18044a7f0': 'DeviceSwapChainDesc',
        'UNK_18044a800': 'DeviceSwapChainFullscreenDesc',
        'UNK_18044ab30': 'DeviceFrameStatistics',
        'UNK_18044ab40': 'DevicePresentParameters',
        'UNK_18044ab50': 'DeviceResizeTargetParameters',
        'UNK_18044ab60': 'DeviceResizeBuffersParameters',
        'UNK_18044b250': 'DeviceFullscreenParameters',
        'UNK_18044b540': 'DeviceGammaControl',
        'UNK_18044b570': 'DeviceFrameLatency',
        'UNK_18044b6c0': 'DeviceMultiheadSwapChain',
        'UNK_18044baa0': 'DeviceWindowAssociation',
        'UNK_18044bc30': 'DeviceContentProtection',
        'UNK_18044bc40': 'DeviceHardwareProtection',
        'UNK_18044c070': 'DeviceOutputDesc',
        'UNK_18044c080': 'DeviceOutputDuplication',
        'UNK_18044c0a0': 'DeviceOutputFrame',
        'UNK_18044c0b0': 'DeviceOutputMetadata',
        'UNK_18044c0c0': 'DeviceOutputHandle',
        'UNK_18044c710': 'DeviceOutput1',
        'UNK_18044c940': 'DeviceOutput2',
        'UNK_18044c980': 'DeviceOutput3',
        'UNK_18044c9a0': 'DeviceOutput4',
        'UNK_18044ca40': 'DeviceOutput5',
        'UNK_18044ca60': 'DeviceOutput6',
        'UNK_18044ca80': 'DeviceOutput7',
        'UNK_18044caa0': 'DeviceOutput8',
        'UNK_18044cac0': 'DeviceAdapterDesc',
        'UNK_18044cae0': 'DeviceAdapter1',
        'UNK_18044cb00': 'DeviceAdapter2',
        'UNK_18044cb20': 'DeviceAdapter3',
        'UNK_18044cb40': 'DeviceAdapter4',
        'UNK_18044cb60': 'DeviceVideoDecoder',
        'UNK_18044d030': 'DeviceVideoDecoderOutputView',
        'UNK_18044d040': 'DeviceVideoProcessor',
        'UNK_18044d050': 'DeviceVideoProcessorEnumerator',
        'UNK_18044d080': 'DeviceVideoProcessorInputView',
        'UNK_18044d090': 'DeviceVideoProcessorOutputView',
        'UNK_18044d330': 'DeviceVideoDecoder1',
        'UNK_18044d400': 'DeviceVideoDecoder2',
        'UNK_18044d410': 'DeviceVideoProcessor1',
        'UNK_18044d420': 'DeviceVideoProcessor2',
        'UNK_18044d630': 'DeviceVideoProcessor3',
        'UNK_18044d660': 'DeviceVideoProcessor4',
        'UNK_18044d6f0': 'DeviceVideoProcessor5',
        'UNK_18044d720': 'DeviceVideoProcessor6',
        'UNK_18044d740': 'DeviceVideoProcessor7',
        'UNK_18044d760': 'DeviceVideoProcessor8',
        'UNK_18044d780': 'DeviceVideoProcessor9',
        'UNK_18044d7a0': 'DeviceVideoProcessor10',
        'UNK_18044d7c0': 'DeviceVideoProcessor11',
        'UNK_18044dbf0': 'DeviceVideoProcessor12',
        'UNK_18044e040': 'DeviceVideoProcessor13',
        'UNK_18044e230': 'DeviceVideoProcessor14',
        'UNK_18044e250': 'DeviceVideoProcessor15',
        'UNK_18044e260': 'DeviceVideoContext',
        'UNK_18044e270': 'DeviceVideoContext1',
        'UNK_18044e2a0': 'DeviceVideoContext2',
        'UNK_18044e320': 'DeviceVideoContext3',
        'UNK_18044e330': 'DeviceVideoDevice',
        'UNK_18044e340': 'DeviceVideoDevice1',
        'UNK_18044e360': 'DeviceVideoDevice2',
        'UNK_18044e380': 'DeviceVideoDevice3',
        'UNK_18044e390': 'DeviceVideoDevice4',
        'UNK_18044e610': 'DeviceVideoDevice5',
        'UNK_18044e640': 'DeviceVideoDevice6',
        'UNK_18044f490': 'DeviceVideoInput',
        'UNK_18044f4b0': 'DeviceVideoOutput',
        'UNK_18044f4f0': 'DeviceVideoStream',
        'UNK_18044f510': 'DeviceVideoFormat',
        'UNK_18044f530': 'DeviceVideoResolution',
        'UNK_18044f580': 'DeviceVideoFrameRate',
        'UNK_18044f5d0': 'DeviceVideoBitRate',
        'UNK_18044f5f0': 'DeviceVideoQuality',
        'UNK_18044f610': 'DeviceVideoProfile',
        'UNK_18044f630': 'DeviceVideoLevel',
        'UNK_18044f640': 'DeviceVideoUsage',
        'UNK_18044f660': 'DeviceVideoPool',
        'UNK_18044f690': 'DeviceVideoType',
        'UNK_18044f6b0': 'DeviceVideoMode',
        'UNK_18044f6e0': 'DeviceVideoStandard',
        'UNK_18044f750': 'DeviceVideoTransfer',
        'UNK_18044f940': 'DeviceVideoPrimaries',
        'UNK_18044f960': 'DeviceVideoRange',
        'UNK_18044f980': 'DeviceVideoMaxLuminance',
        'UNK_18044f9a0': 'DeviceVideoMinLuminance',
        'UNK_18044f9c0': 'DeviceVideoMaxFrameAverage',
        'UNK_18044f9e0': 'DeviceVideoFlags',
        'UNK_18044faf0': 'DeviceVideoCapabilities',
        'UNK_18044fb20': 'DeviceVideoExtension',
        'UNK_18044fb40': 'DeviceVideoExtension1',
        'UNK_18044fb60': 'DeviceVideoExtension2',
        'UNK_18044fb80': 'DeviceVideoExtension3',
        'UNK_18044fba0': 'DeviceVideoExtension4',
        'UNK_18044fbc0': 'DeviceVideoExtension5',
        'UNK_18044fbe0': 'DeviceVideoExtension6',
        'UNK_18044fc00': 'DeviceVideoExtension7',
        'UNK_18044fc20': 'DeviceVideoExtension8',
        'UNK_18044fc40': 'DeviceVideoExtension9',
        'UNK_18044fc60': 'DeviceVideoExtension10',
        'UNK_18044fc80': 'DeviceVideoExtension11',
        'UNK_18044fca0': 'DeviceVideoExtension12',
        'UNK_18044fcc0': 'DeviceVideoExtension13',
        'UNK_18044fce0': 'DeviceVideoExtension14',
        'UNK_18044fd00': 'DeviceVideoExtension15',
        'UNK_18044fd20': 'DeviceVideoExtension16',
        'UNK_18044fd40': 'DeviceVideoExtension17',
        'UNK_18044fd60': 'DeviceVideoExtension18',
        'UNK_18044fd80': 'DeviceVideoExtension19',
        'UNK_18044fda0': 'DeviceVideoExtension20',
        'UNK_18044fdc0': 'DeviceVideoExtension21',
        'UNK_18044fde0': 'DeviceVideoExtension22',
        'UNK_18044fe00': 'DeviceVideoExtension23',
        'UNK_18044fe20': 'DeviceVideoExtension24',
        'UNK_18044fe40': 'DeviceVideoExtension25',
        'UNK_18044fe60': 'DeviceVideoExtension26',
        'UNK_18044fe80': 'DeviceVideoExtension27',
        'UNK_18044fe90': 'DeviceVideoExtension28',
        'UNK_18044fea0': 'DeviceVideoExtension29',
        'UNK_18044fee0': 'DeviceVideoExtension30',
        'UNK_18044ff00': 'DeviceVideoExtension31',
        'UNK_18044ff20': 'DeviceVideoExtension32'
    }
    
    for old_name, new_name in unk_replacements.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    # 4. 替换DAT_180xxxxx变量
    print("4. 替换DAT_180xxxxx变量...")
    for old_name, new_name in unk_replacements.items():
        dat_name = old_name.replace('UNK_', 'DAT_')
        content = re.sub(r'\b' + re.escape(dat_name) + r'\b', new_name, content)
    
    # 5. 更新文档注释中的返回类型
    print("5. 更新文档注释中的返回类型...")
    content = re.sub(r'@return undefined', '@return void', content)
    content = re.sub(r'@return undefined4', '@return uint32_t', content)
    content = re.sub(r'@return undefined8', '@return uint64_t', content)
    content = re.sub(r'@return undefined\*', '@return void*', content)
    
    # 写入文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("最终美化处理完成！")
    print(f"文件已更新: {file_path}")

if __name__ == "__main__":
    final_beautify()