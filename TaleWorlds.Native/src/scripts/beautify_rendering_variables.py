#!/usr/bin/env python3
"""
美化渲染系统变量名脚本
将UNK_180xxxxx格式的变量名替换为语义化名称
"""

import re
import sys

def main():
    # 读取源文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量名映射规则
    # 根据地址范围和上下文推断变量用途
    variable_mappings = {
        # 渲染命令相关状态
        'UNK_18044f980': 'CommandQueueFlushStatus',
        'UNK_18044f9a0': 'CommandWaitStatus',
        'UNK_18044f9c0': 'CommandPoolCreationStatus',
        'UNK_18044f9e0': 'CommandPoolDestructionStatus',
        'UNK_18044faf0': 'CommandBufferAllocationStatus',
        'UNK_18044fb20': 'CommandBufferFreeStatus',
        'UNK_18044fb40': 'CommandRecordingStatus',
        'UNK_18044fb60': 'CommandRecordingEndStatus',
        'UNK_18044fb80': 'CommandBufferResetStatus',
        'UNK_18044fba0': 'CommandBufferFlagStatus',
        'UNK_18044fbc0': 'OneTimeCommandExecutionStatus',
        'UNK_18044fbe0': 'RenderPassBeginStatus',
        'UNK_18044fc00': 'RenderPassEndStatus',
        'UNK_18044fc20': 'PipelineBindStatus',
        'UNK_18044fc40': 'VertexBufferBindStatus',
        'UNK_18044fc60': 'PipelineInitializationStatus',
        'UNK_18044fc80': 'ShaderResourceBindStatus',
        'UNK_18044fca0': 'DrawParameterStatus',
        'UNK_18044fce0': 'DrawCallExecutionStatus',
        'UNK_18044fd00': 'IndexedDrawCallStatus',
        'UNK_18044fd20': 'InstancedDrawCallStatus',
        'UNK_18044fd40': 'RenderStateSetupStatus',
        'UNK_18044fd60': 'RenderContextCreationStatus',
        'UNK_18044fd80': 'RenderDeviceInitializationStatus',
        'UNK_18044fda0': 'RenderPipelineSetupStatus',
        'UNK_18044fdc0': 'RenderTargetCreationStatus',
        'UNK_18044fde0': 'DepthBufferCreationStatus',
        'UNK_18044fe00': 'VertexBufferCreationStatus',
        'UNK_18044fe20': 'IndexBufferCreationStatus',
        'UNK_18044fe40': 'RenderContextExStatus',
        'UNK_18044fe60': 'RenderDeviceExStatus',
        'UNK_18044fe80': 'RenderPipelineExStatus',
        'UNK_18044fe90': 'RenderTargetViewStatus',
        'UNK_18044fea0': 'DepthBufferViewStatus',
        'UNK_18044fee0': 'VertexBufferExStatus',
        'UNK_18044ff00': 'IndexBufferExStatus',
        'UNK_18044ff20': 'UniformUpdateStatus',
        'UNK_18044ff40': 'TargetClearStatus',
        'UNK_18044ff60': 'ComputeRootConstantStatus',
        'UNK_18044ff80': 'GraphicsRootConstantStatus',
        'UNK_180450350': 'ColorPropertyStatus',
        'UNK_180450a00': 'PipelineStateInitializationStatus',
        'UNK_180450b90': 'TargetViewCreationStatus',
        'UNK_1804512e0': 'DepthStencilSetStatus',
        'UNK_1804517b0': 'BlendSetStatus',
        'UNK_1804518e0': 'RasterizerSetStatus',
        'UNK_1804518f0': 'VertexBufferCreationStatus2',
        'UNK_180451900': 'VertexBufferConfigurationStatus',
        'UNK_180451920': 'VertexBufferLayoutStatus',
        'UNK_180451930': 'IndexBufferCreationStatus2',
        'UNK_180451940': 'ConstantBufferCreationStatus',
        'UNK_180451970': 'ShaderResourceViewCreationStatus',
        'UNK_180451990': 'ObjectStateInitializationStatus',
        'UNK_1804519b0': 'TextureSamplerSetStatus',
        'UNK_180451c70': 'BufferResourceCreationStatus',
        'UNK_180451c80': 'VertexBufferCreationStatus3',
        'UNK_180451c90': 'IndexBufferCreationStatus3',
        
        # 渲染数据结构
        'UNK_18044d7c0': 'RenderConfigurationData',
        'UNK_18044dbf0': 'RenderDeviceData',
        'UNK_18044e040': 'RenderContextData',
        'UNK_18044e230': 'RenderPipelineData',
        'UNK_18044e250': 'RenderShaderData',
        'UNK_18044e260': 'RenderBufferData',
        'UNK_18044e270': 'RenderTargetData',
        'UNK_18044e2a0': 'RenderTextureData',
        'UNK_18044e320': 'RenderSamplerData',
        'UNK_18044e330': 'RenderStateData',
        'UNK_18044e340': 'RenderCommandData',
        'UNK_18044f4b0': 'RenderViewportData',
        'UNK_18044f4f0': 'RenderScissorData',
        'UNK_18044f510': 'RenderBlendData',
        'UNK_18044f530': 'RenderDepthData',
        'UNK_18044f580': 'RenderStencilData',
        'UNK_18044f5d0': 'RenderRasterizerData',
        'UNK_18044f5f0': 'RenderVertexData',
        'UNK_18044f610': 'RenderContextInitStatus',
        'UNK_18044f630': 'RenderParameterSetupStatus',
        'UNK_18044f640': 'RenderDeviceCreationStatus',
        'UNK_18044f660': 'RenderPropertyConfigStatus',
        'UNK_180452530': 'RenderMemoryData',
        'UNK_180452550': 'RenderPerformanceData',
        'UNK_1804525c0': 'RenderStatisticsData',
        'UNK_1804525e0': 'PropertyInitializationStatus',
        'UNK_180453480': 'PropertyToggleStatus',
        'UNK_180453730': 'ContextOffsetExtractorStatus',
        'UNK_180453f10': 'AlternateOffsetExtractorStatus',
        'UNK_180453f30': 'RenderCleanupStatus',
        'UNK_180453f50': 'ContextProcessorStatus',
        'UNK_180454160': 'PropertySetAStatus',
        'UNK_180454170': 'PropertySetBStatus',
        'UNK_180454180': 'QueryExecutorStatus',
        'UNK_180454350': 'ObjectStateProcessorStatus',
        'UNK_180454370': 'ContextDataProcessorStatus',
        'UNK_1804543a0': 'BaseOffsetCreatorStatus',
        'UNK_180454ce0': 'ContextManagerStatus',
        'UNK_180454d60': 'ContextExtractorStatus',
        'UNK_180454e80': 'ParameterProcessorStatus',
        'UNK_180455060': 'ResourceProcessorStatus',
        'UNK_180455780': 'BufferManagerStatus',
        'UNK_180455820': 'StateControllerStatus',
        'UNK_180455880': 'TextureHandlerStatus',
        'UNK_1804558c0': 'ShaderCompilerStatus',
        'UNK_180455900': 'PipelineConfiguratorStatus',
        'UNK_180455920': 'PipelineConfigData',
        'UNK_180455930': 'ResourceAllocatorStatus',
        'UNK_180455940': 'MemoryManagerStatus',
        'UNK_180455960': 'DeviceInitializerStatus',
        'UNK_180a1a8c0': 'GlobalRenderStateData',
        'UNK_180a1a8d8': 'RenderContextPointer',
        'UNK_180a1a940': 'RenderDevicePointer',
        'UNK_180a1a918': 'RenderPipelinePointer',
        'UNK_180a1a8f0': 'RenderShaderPointer',
        'UNK_180a1a960': 'RenderBufferPointer',
        'UNK_180a1a988': 'RenderTargetPointer',
        'UNK_180a1a9b0': 'RenderTexturePointer',
        'UNK_180a1a9d8': 'RenderSamplerPointer',
        'UNK_180a1aa20': 'RenderStatePointer',
        'UNK_180a1aa38': 'RenderCommandPointer',
        'UNK_180a1aa70': 'RenderViewportPointer',
        'UNK_180a1aa00': 'RenderScissorPointer',
        'UNK_180a1aa98': 'RenderBlendPointer',
        'UNK_180a1aab8': 'RenderDepthPointer',
        'UNK_180a1aad8': 'RenderStencilPointer',
        'UNK_180a1aaf8': 'RenderRasterizerPointer',
        'UNK_180a1ab48': 'RenderVertexPointer',
    }
    
    # 执行替换
    for old_name, new_name in variable_mappings.items():
        # 只替换变量声明，不替换函数调用中的引用
        content = re.sub(rf'\bundefined {old_name};', f'undefined {new_name};', content)
        content = re.sub(rf'\bvoid\* {old_name};', f'void* {new_name};', content)
        content = re.sub(rf'\b{old_name}\b', new_name, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"成功替换了 {len(variable_mappings)} 个变量名")

if __name__ == "__main__":
    main()