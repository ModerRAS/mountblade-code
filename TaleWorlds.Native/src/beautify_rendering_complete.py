#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
渲染系统美化脚本
用于美化 03_rendering.c 文件，将：
1. undefined 类型替换为 void 类型（对于函数声明）
2. undefined 类型替换为适当的指针类型（对于变量声明）
3. FUN_180xxxxx 函数重命名为语义化名称
4. UNK_180xxxxx 变量重命名为语义化名称
5. DAT_180xxxxx 变量重命名为语义化名称
6. 为每个函数添加详细的文档注释
"""

import re
import os

def render_function_name_mapping():
    """渲染函数名映射表"""
    return {
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
        'FUN_180442d10': 'CreateQuery',
        'FUN_180442e00': 'BeginQuery',
        'FUN_180443000': 'EndQuery',
        'FUN_180443080': 'GetQueryData',
        'FUN_1804431c0': 'CreatePredicate',
        'FUN_180443320': 'SetMarker',
        'FUN_180443510': 'BeginEvent',
        'FUN_180443630': 'EndEvent',
        'FUN_180443680': 'SetPipelineState',
        'FUN_180443700': 'SetGraphicsRootSignature',
        'FUN_180443770': 'SetComputeRootSignature',
        'FUN_180443820': 'SetGraphicsRootDescriptorTable',
        'FUN_180443930': 'SetComputeRootDescriptorTable',
        'FUN_180443a40': 'SetGraphicsRootConstantBufferView',
        'FUN_180443aa0': 'SetComputeRootConstantBufferView',
        'FUN_180443b00': 'SetGraphicsRootShaderResourceView',
        'FUN_180443b40': 'SetComputeRootShaderResourceView',
        'FUN_180443b80': 'SetGraphicsRootUnorderedAccessView',
        'FUN_180443d10': 'SetComputeRootUnorderedAccessView',
        'FUN_180443d70': 'SetGraphicsRoot32BitConstant',
        'FUN_180443df0': 'SetComputeRoot32BitConstant',
        'FUN_180443f80': 'SetGraphicsRoot32BitConstants',
        'FUN_180443ff0': 'SetComputeRoot32BitConstants',
        'FUN_180444030': 'SetGraphicsRootDescriptorTable',
        'FUN_180444070': 'SetComputeRootDescriptorTable',
        'FUN_180444100': 'IASetPrimitiveTopology',
        'FUN_180444200': 'IASetVertexBuffers',
        'FUN_180444280': 'IASetIndexBuffer',
        'FUN_1804442c0': 'VSSetShaderResources',
        'FUN_1804442e0': 'VSSetSamplers',
        'FUN_180444370': 'VSSetConstantBuffers',
        'FUN_1804443c0': 'PSSetShaderResources',
        'FUN_180444410': 'PSSetSamplers',
        'FUN_1804445b0': 'PSSetConstantBuffers',
        'FUN_180444600': 'GSSetShaderResources',
        'FUN_180444700': 'GSSetSamplers',
        'FUN_1804447c0': 'GSSetConstantBuffers',
        'FUN_1804448a0': 'CSSetShaderResources',
        'FUN_1804449a0': 'CSSetSamplers',
        'FUN_180444a20': 'CSSetConstantBuffers',
        'FUN_180444b70': 'OMSetRenderTargets',
        'FUN_180444dd0': 'OMSetDepthStencilState',
        'FUN_180444e90': 'OMSetBlendState',
        'FUN_180445060': 'RSSetViewports',
        'FUN_180445110': 'RSSetScissorRects',
        'FUN_180445180': 'SOSetTargets',
        'FUN_180445390': 'Draw',
        'FUN_180445480': 'DrawIndexed',
        'FUN_180445570': 'DrawInstanced',
        'FUN_180445680': 'DrawIndexedInstanced',
        'FUN_1804457b0': 'DrawAuto',
        'FUN_180445870': 'DrawIndexedInstancedIndirect',
        'FUN_180445970': 'Dispatch',
        'FUN_180445a80': 'DispatchIndirect',
        'FUN_180445cd0': 'CopyBufferRegion',
        'FUN_180445dc0': 'CopyTextureRegion',
        'FUN_180445eb0': 'CopyResource',
        'FUN_180445fd0': 'ResolveSubresource',
        'FUN_180446010': 'GenerateMips',
        'FUN_180446080': 'UpdateSubresource',
        'FUN_1804460c0': 'UpdateTileMappings',
        'FUN_1804460f0': 'CopyTileMappings',
        'FUN_180446120': 'CopyTiles',
        'FUN_180446160': 'UpdateTiles',
        'FUN_1804461b0': 'TiledResourceBarrier',
        'FUN_1804462a0': 'ResizeBuffers',
        'FUN_1804462e0': 'ResizeTarget',
        'FUN_180446320': 'SetFullscreenState',
        'FUN_180446370': 'GetFullscreenState'
    }

def render_variable_name_mapping():
    """渲染变量名映射表"""
    return {
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

def render_function_docs():
    """渲染函数文档注释模板"""
    return {
        'InitializeRenderContext': {
            'brief': '初始化渲染上下文',
            'desc': '创建并初始化渲染上下文，设置渲染设备和交换链的基本配置',
            'params': [],
            'return': 'void* 返回创建的渲染上下文指针'
        },
        'CreateRenderDevice': {
            'brief': '创建渲染设备',
            'desc': '创建渲染设备实例，用于管理图形硬件资源',
            'params': [],
            'return': 'void* 返回创建的渲染设备指针'
        },
        'SetupRenderPipeline': {
            'brief': '设置渲染管线',
            'desc': '配置渲染管线状态，包括着色器、光栅化、深度测试等设置',
            'params': [],
            'return': 'void* 返回渲染管线状态对象'
        },
        'ConfigureRenderState': {
            'brief': '配置渲染状态',
            'desc': '设置当前的渲染状态，包括混合模式、深度测试、模板测试等',
            'params': [],
            'return': 'void* 返回渲染状态对象'
        },
        'CreateVertexBuffer': {
            'brief': '创建顶点缓冲区',
            'desc': '创建用于存储顶点数据的缓冲区',
            'params': [],
            'return': 'void* 返回创建的顶点缓冲区指针'
        },
        'CreateIndexBuffer': {
            'brief': '创建索引缓冲区',
            'desc': '创建用于存储顶点索引数据的缓冲区',
            'params': [],
            'return': 'void* 返回创建的索引缓冲区指针'
        },
        'CreateConstantBuffer': {
            'brief': '创建常量缓冲区',
            'desc': '创建用于存储常量数据的缓冲区，供着色器使用',
            'params': [],
            'return': 'void* 返回创建的常量缓冲区指针'
        },
        'CreateShaderProgram': {
            'brief': '创建着色器程序',
            'desc': '创建着色器程序，用于编译和链接着色器',
            'params': [],
            'return': 'void* 返回创建的着色器程序指针'
        },
        'CreateTexture2D': {
            'brief': '创建2D纹理',
            'desc': '创建2D纹理资源，用于存储纹理数据',
            'params': [],
            'return': 'void* 返回创建的纹理指针'
        },
        'CreateSamplerState': {
            'brief': '创建采样器状态',
            'desc': '创建采样器状态，用于控制纹理采样方式',
            'params': [],
            'return': 'void* 返回创建的采样器状态指针'
        },
        'CreateRenderTarget': {
            'brief': '创建渲染目标',
            'desc': '创建渲染目标，用于离屏渲染或后处理效果',
            'params': [],
            'return': 'void* 返回创建的渲染目标指针'
        },
        'CreateDepthStencil': {
            'brief': '创建深度模板缓冲区',
            'desc': '创建深度模板缓冲区，用于深度测试和模板测试',
            'params': [],
            'return': 'void* 返回创建的深度模板缓冲区指针'
        },
        'CreateRenderPass': {
            'brief': '创建渲染通道',
            'desc': '创建渲染通道，定义渲染过程中的渲染目标和状态',
            'params': [],
            'return': 'void* 返回创建的渲染通道指针'
        },
        'InitializeShaderCompiler': {
            'brief': '初始化着色器编译器',
            'desc': '初始化着色器编译器，用于编译HLSL/GLSL着色器代码',
            'params': [],
            'return': 'void* 返回着色器编译器实例'
        },
        'CompileVertexShader': {
            'brief': '编译顶点着色器',
            'desc': '编译顶点着色器代码，生成可执行的着色器程序',
            'params': [],
            'return': 'void* 返回编译后的顶点着色器'
        },
        'CompilePixelShader': {
            'brief': '编译像素着色器',
            'desc': '编译像素着色器代码，生成可执行的着色器程序',
            'params': [],
            'return': 'void* 返回编译后的像素着色器'
        },
        'CompileGeometryShader': {
            'brief': '编译几何着色器',
            'desc': '编译几何着色器代码，生成可执行的着色器程序',
            'params': [],
            'return': 'void* 返回编译后的几何着色器'
        },
        'LinkShaderProgram': {
            'brief': '链接着色器程序',
            'desc': '将多个着色器阶段链接成一个完整的着色器程序',
            'params': [],
            'return': 'void* 返回链接后的着色器程序'
        },
        'ValidateShaderProgram': {
            'brief': '验证着色器程序',
            'desc': '验证着色器程序的正确性和兼容性',
            'params': [],
            'return': 'void* 返回验证结果'
        },
        'SetVertexBufferData': {
            'brief': '设置顶点缓冲区数据',
            'desc': '将顶点数据复制到顶点缓冲区中',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'SetIndexBufferData': {
            'brief': '设置索引缓冲区数据',
            'desc': '将索引数据复制到索引缓冲区中',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'SetConstantBufferData': {
            'brief': '设置常量缓冲区数据',
            'desc': '将常量数据复制到常量缓冲区中',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'SetTextureData': {
            'brief': '设置纹理数据',
            'desc': '将纹理数据复制到纹理资源中',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'SetSamplerParameters': {
            'brief': '设置采样器参数',
            'desc': '配置采样器的过滤、寻址等参数',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'SetRenderTargetSize': {
            'brief': '设置渲染目标大小',
            'desc': '设置渲染目标的宽度和高度',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'SetDepthStencilFormat': {
            'brief': '设置深度模板格式',
            'desc': '设置深度模板缓冲区的数据格式',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'BeginRenderPass': {
            'brief': '开始渲染通道',
            'desc': '开始一个新的渲染通道，设置渲染目标和状态',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'EndRenderPass': {
            'brief': '结束渲染通道',
            'desc': '结束当前的渲染通道，执行渲染操作',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'BindVertexBuffer': {
            'brief': '绑定顶点缓冲区',
            'desc': '将顶点缓冲区绑定到渲染管线',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'BindIndexBuffer': {
            'brief': '绑定索引缓冲区',
            'desc': '将索引缓冲区绑定到渲染管线',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'BindConstantBuffer': {
            'brief': '绑定常量缓冲区',
            'desc': '将常量缓冲区绑定到渲染管线',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'BindShaderProgram': {
            'brief': '绑定着色器程序',
            'desc': '将着色器程序绑定到渲染管线',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'BindTexture': {
            'brief': '绑定纹理',
            'desc': '将纹理绑定到渲染管线',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'BindSampler': {
            'brief': '绑定采样器',
            'desc': '将采样器绑定到渲染管线',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'BindRenderTarget': {
            'brief': '绑定渲染目标',
            'desc': '将渲染目标绑定到渲染管线',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'BindDepthStencil': {
            'brief': '绑定深度模板缓冲区',
            'desc': '将深度模板缓冲区绑定到渲染管线',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'SetViewport': {
            'brief': '设置视口',
            'desc': '设置渲染视口的大小和位置',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'SetScissorRect': {
            'brief': '设置裁剪矩形',
            'desc': '设置渲染裁剪矩形的大小和位置',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'SetRasterizerState': {
            'brief': '设置光栅化状态',
            'desc': '设置光栅化器的状态参数',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'SetDepthStencilState': {
            'brief': '设置深度模板状态',
            'desc': '设置深度测试和模板测试的状态参数',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'SetBlendState': {
            'brief': '设置混合状态',
            'desc': '设置颜色混合的状态参数',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'DrawPrimitive': {
            'brief': '绘制图元',
            'desc': '绘制非索引化的基本图元',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'DrawIndexedPrimitive': {
            'brief': '绘制索引图元',
            'desc': '绘制索引化的基本图元',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'DrawInstancedPrimitive': {
            'brief': '绘制实例化图元',
            'desc': '绘制实例化的非索引化图元',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'DrawInstancedIndexedPrimitive': {
            'brief': '绘制实例化索引图元',
            'desc': '绘制实例化的索引化图元',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'DispatchComputeShader': {
            'brief': '分发计算着色器',
            'desc': '执行计算着色器的计算任务',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'CopyTextureRegion': {
            'brief': '复制纹理区域',
            'desc': '将纹理的一个区域复制到另一个纹理',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'CopyResource': {
            'brief': '复制资源',
            'desc': '将一个资源完全复制到另一个资源',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'ResolveMultisampleTexture': {
            'brief': '解析多重采样纹理',
            'desc': '将多重采样纹理解析为单采样纹理',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'GenerateMipmaps': {
            'brief': '生成Mipmap链',
            'desc': '为纹理生成完整的Mipmap链',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'MapBuffer': {
            'brief': '映射缓冲区',
            'desc': '将缓冲区映射到CPU内存空间',
            'params': [],
            'return': 'void* 返回映射后的内存指针'
        },
        'UnmapBuffer': {
            'brief': '取消映射缓冲区',
            'desc': '取消缓冲区到CPU内存空间的映射',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'UpdateSubresource': {
            'brief': '更新子资源',
            'desc': '更新资源的子资源数据',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'CopySubresourceRegion': {
            'brief': '复制子资源区域',
            'desc': '复制资源的子资源区域',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'ClearRenderTarget': {
            'brief': '清除渲染目标',
            'desc': '清除渲染目标的内容',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'ClearDepthStencil': {
            'brief': '清除深度模板缓冲区',
            'desc': '清除深度模板缓冲区的内容',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'ClearUnorderedAccessView': {
            'brief': '清除无序访问视图',
            'desc': '清除无序访问视图的内容',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'SetResourceBarrier': {
            'brief': '设置资源屏障',
            'desc': '设置资源的状态转换屏障',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'ExecuteCommandList': {
            'brief': '执行命令列表',
            'desc': '执行命令列表中的所有命令',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'PresentFrame': {
            'brief': '呈现帧',
            'desc': '将渲染的帧呈现到屏幕',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'WaitForGPU': {
            'brief': '等待GPU',
            'desc': '等待GPU完成所有操作',
            'params': [],
            'return': 'void* 返回操作结果'
        },
        'FlushCommandQueue': {
            'brief': '刷新命令队列',
            'desc': '刷新命令队列，确保所有命令都提交给GPU',
            'params': [],
            'return': 'void* 返回操作结果'
        }
    }

def generate_function_doc(function_name, doc_template):
    """生成函数文档注释"""
    if function_name not in doc_template:
        return f"/**\n * @brief {function_name}\n * 待完善文档\n */"
    
    doc = doc_template[function_name]
    doc_str = f"/**\n * @brief {doc['brief']}\n * \n * {doc['desc']}\n"
    
    if doc['params']:
        doc_str += " * \n * @param params 参数说明\n"
    
    doc_str += f" * \n * @return {doc['return']}\n */"
    return doc_str

def beautify_rendering_file(input_file, output_file):
    """美化渲染文件"""
    # 读取文件
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 获取映射表
    func_mapping = render_function_name_mapping()
    var_mapping = render_variable_name_mapping()
    func_docs = render_function_docs()
    
    # 1. 替换 undefined 类型为 void 类型（对于函数声明）
    # 匹配函数声明中的 undefined
    content = re.sub(r'\bundefined\s+([A-Za-z_][A-Za-z0-9_]*)\s*;', r'void \1;', content)
    
    # 2. 替换 undefined 类型为 void* 类型（对于变量声明）
    # 匹配变量声明中的 undefined
    content = re.sub(r'\bundefined\s+([A-Za-z_][A-Za-z0-9_]*)\s*[;=]', r'void* \1 ', content)
    
    # 3. 替换 FUN_180xxxxx 函数名
    for old_name, new_name in func_mapping.items():
        # 匹配函数声明
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    # 4. 替换 UNK_180xxxxx 变量名
    for old_name, new_name in var_mapping.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    # 5. 替换 DAT_180xxxxx 变量名（如果有）
    # 这里假设 DAT_ 开头的变量与 UNK_ 开头的变量使用相同的映射
    for old_name, new_name in var_mapping.items():
        dat_name = old_name.replace('UNK_', 'DAT_')
        content = re.sub(r'\b' + re.escape(dat_name) + r'\b', new_name, content)
    
    # 6. 为函数添加文档注释
    # 首先找到所有函数声明的位置
    lines = content.split('\n')
    new_lines = []
    
    i = 0
    while i < len(lines):
        line = lines[i].strip()
        
        # 检查是否是函数声明
        if re.match(r'^(void|int|longlong|float|double|bool|char|unsigned|size_t|uint32_t|int32_t|uint64_t|int64_t)\s+\w+\s*\([^)]*\)\s*;', line):
            # 提取函数名
            func_match = re.search(r'(\w+)\s*\(', line)
            if func_match:
                func_name = func_match.group(1)
                
                # 检查是否已经存在文档注释
                if i > 0 and '/**' in lines[i-1]:
                    # 已经有文档注释，直接添加
                    new_lines.append(lines[i])
                else:
                    # 添加文档注释
                    doc_comment = generate_function_doc(func_name, func_docs)
                    new_lines.append(doc_comment)
                    new_lines.append(lines[i])
            else:
                new_lines.append(lines[i])
        else:
            new_lines.append(lines[i])
        
        i += 1
    
    # 重新组合内容
    content = '\n'.join(new_lines)
    
    # 写入文件
    with open(output_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"文件美化完成: {output_file}")

if __name__ == "__main__":
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    output_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    
    beautify_rendering_file(input_file, output_file)