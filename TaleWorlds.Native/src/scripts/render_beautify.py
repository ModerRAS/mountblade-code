#!/usr/bin/env python3
"""
渲染系统变量美化脚本
用于美化03_rendering.c文件中的UNK变量
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(file_path, content):
    """写入文件内容"""
    try:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def create_variable_mappings():
    """创建变量映射表"""
    mappings = {
        # 渲染对象相关
        'UNK_180a16270': 'RenderObjectVTable',
        'UNK_180a16290': 'RenderObjectHeader',
        'UNK_180a180f4': 'RenderQueueOffset',
        'UNK_180a15ff8': 'RenderQueueOffset2',
        'UNK_180a180b0': 'RenderQueueOffset3',
        'UNK_180a1810c': 'RenderQueueOffset4',
        'UNK_180a0696c': 'RenderQueueOffset5',
        'UNK_180a18100': 'RenderQueueProcessor',
        'UNK_180a18108': 'RenderQueueOffset6',
        'UNK_180a180c4': 'RenderQueueOffset7',
        'UNK_180a015b0': 'RenderQueueOffset8',
        'UNK_1809ffa18': 'RenderPropertyTable',
        'UNK_180a164e8': 'RenderPropertyLength',
        'UNK_18098de80': 'RenderObjectPool',
        'UNK_1809fcc58': 'RenderMemoryBlock',
        'UNK_18098bcb0': 'RenderMemoryBlock2',
        'UNK_18098dfd0': 'RenderObjectState',
        
        # 着色器相关
        'UNK_180a1a8c0': 'ShaderProgramHeader',
        'UNK_180a1a8d8': 'ShaderProgramInfo',
        'UNK_180a1a940': 'ShaderProgramData',
        'UNK_180a1a918': 'ShaderProgramConfig',
        'UNK_180a1a8f0': 'ShaderProgramState',
        'UNK_180a1a960': 'ShaderProgramCache',
        'UNK_180a1a988': 'ShaderProgramConstants',
        'UNK_180a1a9b0': 'ShaderProgramParameters',
        'UNK_180a1a9d8': 'ShaderProgramResources',
        'UNK_180a1aa20': 'ShaderProgramUniforms',
        'UNK_180a1aa38': 'ShaderProgramAttributes',
        'UNK_180a1aa70': 'ShaderProgramTextures',
        'UNK_180a1aa00': 'ShaderProgramBuffers',
        'UNK_180a1aa98': 'ShaderProgramSamplers',
        'UNK_180a1aab8': 'ShaderProgramInputs',
        'UNK_180a1aad8': 'ShaderProgramOutputs',
        'UNK_180a1aaf8': 'ShaderProgramLayout',
        'UNK_180a1ab48': 'ShaderProgramMetadata',
        'UNK_180a1ab80': 'ShaderProgramDebug',
        'UNK_180a1ab38': 'ShaderProgramVersion',
        'UNK_180a1ab18': 'ShaderProgramProfile',
        'UNK_180a0d408': 'ShaderProgramEntry',
        'UNK_180a1abc8': 'ShaderProgramExtensions',
        'UNK_180a1abf8': 'ShaderProgramOptions',
        'UNK_180317d20': 'ShaderProgramContext',
        
        # 渲染状态相关
        'UNK_180a1ac10': 'RenderStateHeader',
        'UNK_180a1ac28': 'RenderStateConfig',
        'UNK_180a1ac38': 'RenderStateData',
        'UNK_180a1ac88': 'RenderStateCache',
        'UNK_180a1aca0': 'RenderStateFlags',
        'UNK_180a1ad38': 'RenderStateBlend',
        'UNK_180a1ac70': 'RenderStateDepth',
        'UNK_180a1acc0': 'RenderStateStencil',
        'UNK_180a1ac48': 'RenderStateRaster',
        'UNK_180a1af58': 'RenderStateMultisample',
        'UNK_180a1aec8': 'RenderStateViewport',
        'UNK_180a1adb8': 'RenderStateScissor',
        'UNK_180a1add8': 'RenderStateCull',
        'UNK_180a1adf0': 'RenderStateFill',
        'UNK_180a1ad98': 'RenderStateAlpha',
        'UNK_180a1ae38': 'RenderStateColor',
        'UNK_180a1ae20': 'RenderStateMask',
        'UNK_180a1ae60': 'RenderStateReference',
        'UNK_180a1afe8': 'RenderStateFunction',
        
        # 缓冲区相关
        'UNK_180a1b4b0': 'VertexBufferHeader',
        'UNK_180a1b430': 'VertexBufferInfo',
        'UNK_180a1b470': 'VertexBufferData',
        'UNK_180a1b3b0': 'VertexBufferFormat',
        'UNK_180a1b3f0': 'VertexBufferLayout',
        'UNK_180a1b038': 'VertexBufferAttributes',
        'UNK_180a1b090': 'VertexBufferStride',
        'UNK_18033d3d0': 'VertexBufferPool',
        'UNK_18033d410': 'VertexBufferManager',
        'UNK_18098bc01': 'VertexBufferCache',
        'UNK_180a1b070': 'VertexBufferLock',
        'UNK_18033d2b0': 'VertexBufferSync',
        'UNK_180a09a40': 'VertexBufferFence',
        'UNK_180a1b100': 'VertexBufferMapping',
        'UNK_180a1b368': 'VertexBufferOffset',
        'UNK_18033d070': 'VertexBufferCount',
        'UNK_18033d160': 'VertexBufferSize',
        'UNK_180a1b0f8': 'VertexBufferUsage',
        'UNK_18033d030': 'VertexBufferAccess',
        
        # 纹理相关
        'UNK_180941dc0': 'TextureHeader',
        'UNK_180d48ec8': 'TextureInfo',
        'UNK_180a1b168': 'TextureData',
        'UNK_18033cc80': 'TextureFormat',
        'UNK_180a1b2d8': 'TextureSize',
        'UNK_180a1b248': 'TextureMipmaps',
        'UNK_180a1b238': 'TextureDimensions',
        'UNK_180a1c060': 'TextureLayout',
        'UNK_180a1c078': 'TextureConfiguration',
        'UNK_180a1c090': 'TextureProperties',
        'UNK_180a1c0b0': 'TextureMetadata',
        'UNK_180a1c0c8': 'TextureFlags',
        'UNK_180a1c0e0': 'TextureUsage',
        'UNK_180a1c0f8': 'TextureBinding',
        'UNK_180a1bfb0': 'TextureSampler',
        'UNK_180a1bfc8': 'TextureFilter',
        'UNK_180a1bfe0': 'TextureWrap',
        'UNK_180a1bff8': 'TextureCompare',
        'UNK_180a1c010': 'TextureBorder',
        'UNK_180a1c040': 'TextureLod',
        'UNK_180a1bab8': 'TextureView',
        'UNK_180a1bad8': 'TextureArray',
        'UNK_180a1bd10': 'TextureCube',
        
        # 渲染目标相关
        'UNK_1809935e0': 'RenderTargetHeader',
        'UNK_180993650': 'RenderTargetInfo',
        'UNK_180993690': 'RenderTargetData',
        'UNK_180993980': 'RenderTargetConfig',
        'UNK_1809939e0': 'RenderTargetProperties',
        'UNK_180a1cc50': 'RenderTargetView',
        'UNK_180a1cdc0': 'RenderTargetLayout',
        'UNK_180a1cf60': 'RenderTargetFramebuffer',
        'UNK_180a1cf28': 'RenderTargetAttachment',
        'UNK_180a1d010': 'RenderTargetFormat',
        'UNK_180a1d060': 'RenderTargetSize',
        'UNK_180a13bd8': 'RenderTargetLayers',
        
        # 渲染队列相关
        'UNK_180a1d900': 'RenderQueueHeader',
        'UNK_180a1d958': 'RenderQueueInfo',
        'UNK_180a1d8b0': 'RenderQueueData',
        'UNK_18034dc90': 'RenderQueueProcessor',
        'UNK_18034dca0': 'RenderQueueDispatcher',
        'UNK_180a1db58': 'RenderQueueContext',
        'UNK_180a1dba8': 'RenderQueueState',
        
        # 渲染命令相关
        'UNK_180a2ac38': 'RenderCommandHeader',
        'UNK_180a1ede0': 'RenderCommandInfo',
        'UNK_180a1ed58': 'RenderCommandData',
        'UNK_180a1ed70': 'RenderCommandType',
        'UNK_180a1ed88': 'RenderCommandFlags',
        'UNK_180a1ed48': 'RenderCommandParameters',
        'UNK_180a1edc0': 'RenderCommandArguments',
        'UNK_180a1eda0': 'RenderCommandResult',
        'UNK_180a1edb0': 'RenderCommandStatus',
        
        # 渲染资源相关
        'UNK_180276a30': 'ResourceHeader',
        'UNK_180a1f0f8': 'ResourceInfo',
        'UNK_180a1f013': 'ResourceData',
        'UNK_180a1f268': 'ResourceType',
        'UNK_180a1f3e8': 'ResourceFormat',
        'UNK_180a1f578': 'ResourceSize',
        'UNK_180a1f788': 'ResourceUsage',
        'UNK_180360300': 'ResourceAccess',
        'UNK_180360340': 'ResourceBinding',
        'UNK_180a1f6e0': 'ResourceLayout',
        'UNK_180a1f6f0': 'ResourceMemory',
        'UNK_180a1f758': 'ResourceOffset',
        'UNK_180a1f770': 'ResourceAlignment',
        'UNK_180a1f978': 'ResourceAlignment',
        
        # 其他渲染相关
        'UNK_180a1fae8': 'RenderStatistics',
        'UNK_180a1fc70': 'RenderPerformance',
        'UNK_180a1fe08': 'RenderMetrics',
        'UNK_180363750': 'RenderDebug',
        'UNK_180a20298': 'RenderProfiler',
        'UNK_180a201d0': 'RenderTracer',
        'UNK_180a201f8': 'RenderLogger',
        'UNK_180a20248': 'RenderConfig',
        'UNK_180a20260': 'RenderSettings',
        'UNK_180a20278': 'RenderOptions',
        'UNK_180a20448': 'RenderCapabilities',
        'UNK_180a20758': 'RenderLimits',
        'UNK_180a09e08': 'RenderExtensions',
        'UNK_180a20970': 'RenderFeatures',
        
        # 渲染缓存相关
        'UNK_180a205b8': 'CacheHeader',
        'UNK_180a205d0': 'CacheInfo',
        'UNK_180a205f8': 'CacheData',
        'UNK_180a20610': 'CacheEntries',
        'UNK_180a20628': 'CacheSize',
        'UNK_180a20640': 'CacheCapacity',
        'UNK_180a20660': 'CacheCount',
        'UNK_180a20670': 'CacheHits',
        'UNK_180a20688': 'CacheMisses',
        'UNK_180a20698': 'CacheEvictions',
        'UNK_180a206b0': 'CacheFlushes',
        'UNK_180a206c0': 'CacheClears',
        'UNK_180a206d8': 'CacheResets',
        'UNK_180a206f0': 'CacheReloads',
        'UNK_180a20738': 'CacheValidations',
        'UNK_180a20740': 'CacheErrors',
        'UNK_180a0c280': 'CacheWarnings',
        'UNK_180a205b0': 'CacheVersion',
        'UNK_180a205e8': 'CacheTimestamp',
        'UNK_180a205f0': 'CacheChecksum',
        'UNK_180a20720': 'CacheSignature',
        'UNK_180a20710': 'CacheAlgorithm',
        'UNK_180a20748': 'CachePolicy',
        
        # 渲染线程相关
        'UNK_180a20ae0': 'ThreadHeader',
        'UNK_180a20cc0': 'ThreadInfo',
        'UNK_180a20f68': 'ThreadData',
        'UNK_180a20e68': 'ThreadContext',
        'UNK_180a20e13': 'ThreadState',
        'UNK_180a20e90': 'ThreadPriority',
        'UNK_180a20f40': 'ThreadAffinity',
        'UNK_180a210d8': 'ThreadStack',
        'UNK_180a21248': 'ThreadLocal',
        'UNK_180a213f8': 'ThreadShared',
        'UNK_180a213b0': 'ThreadSync',
        'UNK_180a213d8': 'ThreadLock',
        'UNK_180a213c0': 'ThreadMutex',
        'UNK_180a21560': 'ThreadSemaphore',
        'UNK_180a21628': 'ThreadEvent',
        
        # 渲染内存相关
        'UNK_180a2ada8': 'MemoryHeader',
        'UNK_180a21780': 'MemoryInfo',
        'UNK_180a217a0': 'MemoryData',
        'UNK_180a22a30': 'MemoryPool',
        'UNK_180380090': 'MemoryAllocator',
        'UNK_180a217c0': 'MemoryManager',
        'UNK_180a17810': 'MemorySize',
        'UNK_180a17814': 'MemoryAlignment',
        'UNK_180a218e0': 'MemoryUsage',
        'UNK_180380040': 'MemoryTracking',
        'UNK_180380050': 'MemoryDebug',
        'UNK_18037d8a0': 'MemoryStatistics',
        'UNK_18037fff0': 'MemoryMetrics',
        'UNK_180380000': 'MemoryProfiler',
        'UNK_180a21880': 'MemoryMonitor',
        'UNK_180a21950': 'MemoryReporter',
        'UNK_180a21968': 'MemoryLogger',
        'UNK_180a21978': 'MemoryTracer',
        'UNK_180a21988': 'MemoryAnalyzer',
        'UNK_180a21990': 'MemoryOptimizer',
        'UNK_180a219a0': 'MemoryCompactor',
        'UNK_180a219b8': 'MemoryDefragmenter',
        'UNK_180a219c8': 'MemoryCleaner',
        'UNK_18037ffa0': 'MemoryValidator',
        'UNK_18037ffb0': 'MemoryChecker',
        'UNK_180a219e0': 'MemoryVerifier',
        'UNK_180a219f4': 'MemoryAuditor',
        'UNK_180a21a30': 'MemoryInspector',
        'UNK_180a21a40': 'MemoryScanner',
        'UNK_180a21be8': 'MemorySnapshot',
        'UNK_180a21a10': 'MemoryDump',
        'UNK_180a16540': 'MemoryBackup',
        'UNK_180a21a00': 'MemoryRestore',
        'UNK_180a21a48': 'MemoryBackup',
        'UNK_180a21a58': 'MemoryCompression',
        'UNK_180a21a70': 'MemoryEncryption',
        'UNK_180a21a80': 'MemoryChecksum',
        'UNK_180a21a90': 'MemorySignature',
        'UNK_180a21aa8': 'MemoryVersion',
        'UNK_180a21ac8': 'MemoryTimestamp',
        'UNK_180a21ae0': 'MemorySequence',
        'UNK_180a21b00': 'MemoryTransaction',
        'UNK_180a21b18': 'MemoryOperation',
        'UNK_180a21b30': 'MemoryCommand',
        'UNK_180a21b50': 'MemoryInstruction',
        'UNK_180a21b68': 'MemoryRequest',
        'UNK_180a21b78': 'MemoryResponse',
        'UNK_180a21b98': 'MemoryStatus',
        'UNK_180a21bb0': 'MemoryResult',
        'UNK_180a21bc0': 'MemoryError',
        'UNK_180a21aa0': 'MemoryWarning',
        'UNK_180a21b0c': 'MemoryInfo',
        'UNK_180a21b60': 'MemoryDetails',
        'UNK_180a21bd0': 'MemoryProperties',
        'UNK_180a21c30': 'MemoryAttributes',
        'UNK_180a21bf8': 'MemoryCapabilities',
        'UNK_180a21c18': 'MemoryLimits',
        'UNK_180a21c40': 'MemoryConstraints',
        'UNK_180a21c60': 'MemoryRequirements',
        'UNK_180389710': 'MemorySpecifications',
        'UNK_180a1022c': 'MemoryDocumentation',
        
        # 渲染设备相关
        'UNK_180a2aea0': 'DeviceHeader',
        'UNK_180a2af60': 'DeviceInfo',
        'UNK_180396c80': 'DeviceData',
        'UNK_180a21d50': 'DeviceConfig',
        'UNK_180a21d68': 'DeviceProperties',
        'UNK_180a21d98': 'DeviceCapabilities',
        'UNK_180a21dc0': 'DeviceFeatures',
        'UNK_180a21e50': 'DeviceLimits',
        'UNK_180a21f48': 'DeviceMemory',
        'UNK_180a21e98': 'DeviceQueues',
        'UNK_180a1cbf0': 'DeviceExtensions',
        'UNK_180a21fa0': 'DeviceLayers',
        'UNK_180a21fc0': 'DeviceValidation',
        'UNK_180a21fd0': 'DeviceDebug',
        'UNK_180a21fe8': 'DevicePerformance',
        'UNK_180a22000': 'DevicePower',
        'UNK_180a22008': 'DeviceThermal',
        'UNK_180a22018': 'DeviceClock',
        'UNK_180a22028': 'DeviceVoltage',
        'UNK_180a22040': 'DeviceFrequency',
        'UNK_180a22050': 'DeviceBandwidth',
        'UNK_180a22070': 'DeviceLatency',
        'UNK_180a22088': 'DeviceThroughput',
        'UNK_180a22098': 'DeviceUtilization',
        'UNK_180a220a8': 'DeviceLoad',
        'UNK_180a220c8': 'DeviceTemperature',
        'UNK_180a220e0': 'DeviceFan',
        'UNK_180a22100': 'DeviceCooling',
        'UNK_180a22120': 'DevicePowerState',
        'UNK_180a22138': 'DevicePerformanceState',
        'UNK_180a22148': 'DeviceClockState',
        'UNK_180a22160': 'DeviceMemoryState',
        'UNK_180a221c0': 'DeviceQueueState',
        'UNK_180a22180': 'DeviceCommandState',
        'UNK_180a22198': 'DevicePipelineState',
        'UNK_180a221b0': 'DeviceRenderState',
        'UNK_180a221e0': 'DeviceResourceState',
        'UNK_180a221f8': 'DeviceBufferState',
        'UNK_180a22210': 'DeviceTextureState',
        'UNK_180a22228': 'DeviceSamplerState',
        'UNK_180a22240': 'DeviceShaderState',
        'UNK_180a22268': 'DeviceProgramState',
        'UNK_180a22290': 'DevicePipelineState',
        'UNK_180a222b8': 'DeviceRenderPassState',
        'UNK_180a22348': 'DeviceFramebufferState',
        'UNK_180a22368': 'DeviceAttachmentState',
        'UNK_180a222e0': 'DeviceSubpassState',
        'UNK_180a2233c': 'DeviceDependencyState',
        'UNK_180a22380': 'DeviceBarrierState',
        'UNK_180a22394': 'DeviceSynchronizationState',
        'UNK_180a22398': 'DeviceTimelineState',
        'UNK_180a2239c': 'DeviceSemaphoreState',
        'UNK_180a223a8': 'DeviceFenceState',
        'UNK_180a223c8': 'DeviceEventState',
        'UNK_180a223e0': 'DeviceQueryState',
        'UNK_180a22400': 'DeviceDebugState',
        'UNK_180a22418': 'DeviceValidationState',
        'UNK_180a22428': 'DeviceCheckpointState',
        'UNK_180a22438': 'DeviceMarkerState',
        'UNK_180a22450': 'DeviceLabelState',
        'UNK_180a2246c': 'DeviceRegionState',
        'UNK_180a22478': 'DeviceGroupState',
        'UNK_180a22490': 'DeviceMaskState',
        'UNK_180a224a0': 'DeviceIndexState',
        'UNK_180a1cbf8': 'DeviceBindingState',
        'UNK_180a21874': 'DeviceDescriptorState',
        'UNK_180a217e8': 'DeviceSetState',
        'UNK_180a224b8': 'DeviceLayoutState',
        'UNK_180a22798': 'DevicePushConstantState',
        'UNK_180a227b8': 'DeviceSpecializationState',
        'UNK_180a227f8': 'DeviceShaderStageState',
        'UNK_180a22820': 'DeviceVertexInputState',
        'UNK_180a22838': 'DeviceInputAssemblyState',
        'UNK_180a227d8': 'DeviceTessellationState',
        'UNK_180a22870': 'DeviceViewportState',
        'UNK_180a228a0': 'DeviceRasterizationState',
        'UNK_180a228c8': 'DeviceMultisampleState',
        'UNK_180a22858': 'DeviceDepthStencilState',
        'UNK_180a22948': 'DeviceColorBlendState',
        'UNK_180a22ab0': 'DeviceDynamicState',
        'UNK_180a22a98': 'DeviceGraphicsPipelineState',
        'UNK_180a22ac0': 'DeviceComputePipelineState',
        'UNK_180a22ad8': 'DeviceRayTracingPipelineState',
        'UNK_180a22af0': 'DevicePipelineLayoutState',
        'UNK_180a22b10': 'DeviceDescriptorSetLayoutState',
        'UNK_180a22b28': 'DeviceDescriptorPoolState',
        'UNK_180a3cb88': 'DeviceCommandPoolState',
        'UNK_180a3cbe8': 'DeviceCommandBufferState',
        
        # 其他特殊变量
        'UNK_180a12c50': 'SpecialRenderData1',
        'UNK_180a271b0': 'SpecialRenderData2',
        'UNK_180a27220': 'SpecialRenderData3',
        'UNK_180a272b0': 'SpecialRenderData4',
        'UNK_180a272c8': 'SpecialRenderData5',
        'UNK_180a272d8': 'SpecialRenderData6',
        'UNK_180a27318': 'SpecialRenderData7',
        'UNK_180a0af90': 'SpecialRenderData8',
        'UNK_180a27230': 'SpecialRenderData9',
        'UNK_180a27238': 'SpecialRenderData10',
        'UNK_180a27258': 'SpecialRenderData11',
        'UNK_180a27278': 'SpecialRenderData12',
        'UNK_180a27338': 'SpecialRenderData13',
        'UNK_180a27350': 'SpecialRenderData14',
        'UNK_180a27360': 'SpecialRenderData15',
        'UNK_180a27370': 'SpecialRenderData16',
        'UNK_180a27390': 'SpecialRenderData17',
        'UNK_180a273a0': 'SpecialRenderData18',
        
        # 渲染统计相关
        'UNK_180a27bc8': 'RenderStatsHeader',
        'UNK_180a27c28': 'RenderStatsData',
        'UNK_1809952a0': 'RenderStatsCounters',
        'UNK_180995320': 'RenderStatsTimers',
        'UNK_180994d24': 'RenderStatsMarkers',
        'UNK_180995024': 'RenderStatsEvents',
        'UNK_180995028': 'RenderStatsQueries',
        'UNK_180a27cd8': 'RenderStatsProfiler',
        'UNK_180995c00': 'RenderStatsMetrics',
        'UNK_180995c50': 'RenderStatsPerformance',
        'UNK_180995c90': 'RenderStatsAnalysis',
        
        # 渲染坐标相关
        'UNK_180a29654': 'RenderCoordX',
        'UNK_180a29684': 'RenderCoordY',
        'UNK_180a29650': 'RenderCoordZ',
        
        # 特殊内存地址
        'UNK_180a3cb84': 'SpecialMemoryAddress1',
        'UNK_180a063a0': 'SpecialMemoryAddress2',
        'UNK_180a3c3e0': 'SpecialMemoryAddress3',
        'UNK_18098bcb0': 'SpecialMemoryAddress4',
        'UNK_1809fcc58': 'SpecialMemoryAddress5',
        'UNK_18098dfd0': 'SpecialMemoryAddress6',
        'UNK_18098de80': 'SpecialMemoryAddress7'
    }
    return mappings

def apply_variable_replacements(content, mappings):
    """应用变量替换"""
    for old_name, new_name in mappings.items():
        # 只替换完整的变量名，避免部分匹配
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    return content

def main():
    if len(sys.argv) != 2:
        print("用法: python render_beautify.py <文件路径>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    # 读取文件
    content = read_file(file_path)
    if content is None:
        sys.exit(1)
    
    # 创建变量映射
    mappings = create_variable_mappings()
    
    # 应用变量替换
    new_content = apply_variable_replacements(content, mappings)
    
    # 写入文件
    if write_file(file_path, new_content):
        print(f"成功美化文件: {file_path}")
        print(f"替换了 {len(mappings)} 个变量名")
    else:
        sys.exit(1)

if __name__ == "__main__":
    main()