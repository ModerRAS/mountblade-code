#!/usr/bin/env python3
"""
批量渲染系统美化脚本
用于完成03_rendering.c文件中剩余的UNK_变量名和FUN_函数名替换
"""

import re

def batch_replace_unk_variables():
    """批量替换UNK_变量"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    
    # 剩余的UNK_变量映射
    replacements = [
        ('UNK_18044f610', 'RenderContextResourceInstance'),
        ('UNK_18044f630', 'RenderParametersResourceInstance'),
        ('UNK_18044f640', 'RenderDeviceResourceInstance'),
        ('UNK_18044f660', 'RenderPropertiesResourceInstance'),
        ('UNK_18044f690', 'RenderLockResourceInstance'),
        ('UNK_18044f6b0', 'RenderViewportResourceInstance'),
        ('UNK_18044f6e0', 'CommandBufferResourceInstance'),
        ('UNK_18044f750', 'CommandBufferInitResourceInstance'),
        ('UNK_18044f940', 'CommandBufferResetResourceInstance'),
        ('UNK_18044f960', 'CommandSubmitResourceInstance'),
        ('UNK_18044f980', 'CommandQueueFlushResourceInstance'),
        ('UNK_18044f9a0', 'CommandWaitResourceInstance'),
        ('UNK_18044f9c0', 'CommandPoolResourceInstance'),
        ('UNK_18044f9e0', 'CommandPoolDestroyResourceInstance'),
        ('UNK_18044faf0', 'CommandBufferAllocateResourceInstance'),
        ('UNK_18044fb20', 'CommandBufferFreeResourceInstance'),
        ('UNK_18044fb40', 'CommandRecordingBeginResourceInstance'),
        ('UNK_18044fb60', 'CommandRecordingEndResourceInstance'),
        ('UNK_18044fb80', 'CommandBufferStateResetResourceInstance'),
        ('UNK_18044fba0', 'CommandBufferFlagsResourceInstance'),
        ('UNK_18044fbc0', 'CommandBufferOneTimeResourceInstance'),
        ('UNK_18044fbe0', 'RenderPassBeginResourceInstance'),
        ('UNK_18044fc00', 'RenderPassEndResourceInstance'),
        ('UNK_18044fc20', 'PipelineBindResourceInstance'),
        ('UNK_18044fc40', 'VertexBufferBindResourceInstance'),
        ('UNK_18044fc60', 'PipelineInitResourceInstance'),
        ('UNK_18044fc80', 'ShaderResourceBindResourceInstance'),
        ('UNK_18044fca0', 'DrawParametersResourceInstance'),
        ('UNK_18044fcc0', 'DrawCallResourceInstance'),
        ('UNK_18044fce0', 'DrawExecuteResourceInstance'),
        ('UNK_18044fd00', 'IndexedDrawExecuteResourceInstance'),
        ('UNK_18044fd20', 'InstancedDrawExecuteResourceInstance'),
        ('UNK_18044fd40', 'RenderStateSetupResourceInstance'),
        ('UNK_18044fd60', 'RenderStateSetResourceInstance'),
        ('UNK_18044fd80', 'RenderStateGetResourceInstance'),
        ('UNK_18044fda0', 'RenderStateUpdateResourceInstance'),
        ('UNK_18044fdc0', 'RenderStateResetResourceInstance'),
        ('UNK_18044fde0', 'RenderStateFlushResourceInstance'),
        ('UNK_18044fe00', 'RenderStateClearResourceInstance'),
        ('UNK_18044fe20', 'RenderStateApplyResourceInstance'),
        ('UNK_18044fe40', 'DeviceInitResourceInstance'),
        ('UNK_18044fe60', 'SwapChainCreateResourceInstance'),
        ('UNK_18044fe80', 'CommandQueueSetupResourceInstance'),
        ('UNK_18044fe90', 'RenderTargetsCreateResourceInstance'),
        ('UNK_18044fea0', 'PipelineConfigureResourceInstance'),
        ('UNK_18044fee0', 'RenderFunctionResourceInstance'),
        ('UNK_18044ff00', 'RenderFunction2ResourceInstance'),
        ('UNK_18044ff20', 'UniformUpdateResourceInstance'),
        ('UNK_18044ff40', 'TargetClearResourceInstance'),
        ('UNK_18044ff60', 'RootConstantSetResourceInstance'),
        ('UNK_18044ff80', 'RootConstantsSetResourceInstance')
    ]
    
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 执行替换
    for old_name, new_name in replacements:
        # 替换 undefined UNK_xxxxx; 形式
        pattern = rf'undefined\s+{old_name};'
        content = re.sub(pattern, f'undefined {new_name};', content)
        
        # 替换其他地方引用的 UNK_xxxxx
        pattern = rf'\b{old_name}\b'
        content = re.sub(pattern, new_name, content)
        
        print(f"已替换: {old_name} -> {new_name}")
    
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"UNK_变量替换完成！共替换了 {len(replacements)} 个变量")

def batch_replace_fun_functions():
    """批量替换FUN_函数"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    
    # FUN_函数映射
    replacements = [
        ('FUN_1804462a0', 'ProcessRenderFunction'),
        ('FUN_1804462e0', 'SetupRenderConfiguration'),
        ('FUN_180446430', 'ConfigureRenderSettings'),
        ('FUN_180446480', 'InitializeRenderComponents'),
        ('FUN_180446610', 'SetupRenderPipeline'),
        ('FUN_180446650', 'ConfigureRenderBuffers'),
        ('FUN_180446690', 'SetupRenderShaders'),
        ('FUN_180446760', 'ConfigureRenderTextures'),
        ('FUN_180446810', 'SetupRenderTargets'),
        ('FUN_180446960', 'InitializeRenderState'),
        ('FUN_180446a60', 'SetupRenderViewport'),
        ('FUN_180446b20', 'ConfigureRenderDepth'),
        ('FUN_180446ba0', 'SetupRenderStencil'),
        ('FUN_180446ca0', 'ConfigureRenderBlend'),
        ('FUN_180446d20', 'SetupRenderRasterizer'),
        ('FUN_180446dc0', 'InitializeRenderResources'),
        ('FUN_180446e70', 'ConfigureRenderMemory'),
        ('FUN_180446f00', 'SetupRenderThreads'),
        ('FUN_180446fa0', 'ConfigureRenderSync'),
        ('FUN_180446fd0', 'InitializeRenderCommands'),
        ('FUN_180447030', 'SetupRenderQueue'),
        ('FUN_1804470d0', 'ConfigureRenderFence'),
        ('FUN_180447120', 'InitializeRenderBuffers'),
        ('FUN_1804471a0', 'SetupRenderTextures'),
        ('FUN_180447220', 'ConfigureRenderSamplers'),
        ('FUN_1804472c0', 'InitializeRenderShaders'),
        ('FUN_180447320', 'SetupRenderPrograms'),
        ('FUN_180447710', 'ProcessRenderData'),
        ('FUN_1804477f0', 'SetupRenderPipeline2'),
        ('FUN_180447850', 'ConfigureRenderState'),
        ('FUN_180447990', 'InitializeRenderContext'),
        ('FUN_180447b80', 'SetupRenderDevice'),
        ('FUN_180447c00', 'ConfigureRenderSwapChain'),
        ('FUN_180447ca0', 'InitializeRenderTargets'),
        ('FUN_180447d40', 'SetupRenderCommandList'),
        ('FUN_180447de0', 'ConfigureRenderResources'),
        ('FUN_180447e10', 'InitializeRenderMemory'),
        ('FUN_180447e40', 'SetupRenderAllocator'),
        ('FUN_180447f70', 'ConfigureRenderThreads'),
        ('FUN_180448110', 'InitializeRenderSync'),
        ('FUN_180448420', 'ProcessRenderCommands'),
        ('FUN_180448470', 'SetupRenderQueue2'),
        ('FUN_1804484c0', 'ConfigureRenderFence2'),
        ('FUN_180448540', 'InitializeRenderBuffers2'),
        ('FUN_1804485c0', 'SetupRenderTextures2'),
        ('FUN_1804489a0', 'ConfigureRenderSamplers2'),
        ('FUN_180448d90', 'InitializeRenderShaders2'),
        ('FUN_180448df0', 'SetupRenderPrograms2'),
        ('FUN_180448e50', 'ConfigureRenderPipeline2'),
        ('FUN_180448ea0', 'InitializeRenderState2'),
        ('FUN_180448f00', 'SetupRenderViewport2'),
        ('FUN_180448f50', 'ConfigureRenderDepth2'),
        ('FUN_180448fb0', 'SetupRenderStencil2'),
        ('FUN_180449000', 'ConfigureRenderBlend2'),
        ('FUN_180449070', 'SetupRenderRasterizer2'),
        ('FUN_1804491c0', 'InitializeRenderResources2'),
        ('FUN_180449230', 'ConfigureRenderMemory2'),
        ('FUN_180449300', 'SetupRenderThreads2'),
        ('FUN_1804496f0', 'InitializeRenderSync2'),
        ('FUN_180449780', 'ProcessRenderCommands2'),
        ('FUN_180449850', 'SetupRenderQueue3'),
        ('FUN_1804498f0', 'ConfigureRenderFence3'),
        ('FUN_180449930', 'InitializeRenderBuffers3'),
        ('FUN_180449a00', 'SetupRenderTextures3'),
        ('FUN_180449a80', 'ConfigureRenderSamplers3'),
        ('FUN_180449c00', 'InitializeRenderShaders3'),
        ('FUN_180449d70', 'SetupRenderPrograms3'),
        ('FUN_18044a080', 'ConfigureRenderPipeline3'),
        ('FUN_18044a3a0', 'InitializeRenderState3'),
        ('FUN_18044a590', 'SetupRenderViewport3'),
        ('FUN_18044a810', 'ConfigureRenderDepth3'),
        ('FUN_18044aad0', 'SetupRenderStencil3'),
        ('FUN_18044ab80', 'ConfigureRenderBlend3'),
        ('FUN_18044ac20', 'SetupRenderRasterizer3'),
        ('FUN_18044ad90', 'InitializeRenderResources3'),
        ('FUN_18044af00', 'ConfigureRenderMemory3'),
        ('FUN_18044afb0', 'SetupRenderThreads3'),
        ('FUN_18044b010', 'InitializeRenderSync3'),
        ('FUN_18044b080', 'ProcessRenderCommands3'),
        ('FUN_18044b110', 'SetupRenderQueue4'),
        ('FUN_18044b1d0', 'ConfigureRenderFence4'),
        ('FUN_18044b280', 'InitializeRenderBuffers4'),
        ('FUN_18044b3d0', 'SetupRenderTextures4'),
        ('FUN_18044b4f0', 'ConfigureRenderSamplers4'),
        ('FUN_18044b580', 'InitializeRenderShaders4'),
        ('FUN_18044b610', 'SetupRenderPrograms4'),
        ('FUN_18044b6e0', 'ConfigureRenderPipeline4'),
        ('FUN_18044b700', 'InitializeRenderState4'),
        ('FUN_18044b7a0', 'SetupRenderViewport4'),
        ('FUN_18044b910', 'ConfigureRenderDepth4'),
        ('FUN_18044baf0', 'SetupRenderStencil4'),
        ('FUN_18044bc50', 'ConfigureRenderBlend4'),
        ('FUN_18044be30', 'SetupRenderRasterizer4'),
        ('FUN_18044c0d0', 'InitializeRenderResources4'),
        ('FUN_18044c190', 'ConfigureRenderMemory4'),
        ('FUN_18044c420', 'SetupRenderThreads4'),
        ('FUN_18044c840', 'InitializeRenderSync4'),
        ('FUN_18044c9c0', 'ProcessRenderCommands4'),
        ('FUN_18044cb80', 'SetupRenderQueue5'),
        ('FUN_18044cd30', 'ConfigureRenderFence5'),
        ('FUN_18044ce10', 'InitializeRenderBuffers5'),
        ('FUN_18044cf20', 'SetupRenderTextures5'),
        ('FUN_18044d0b0', 'ConfigureRenderSamplers5'),
        ('FUN_18044d0f0', 'InitializeRenderShaders5'),
        ('FUN_18044d130', 'SetupRenderPrograms5'),
        ('FUN_18044d2d0', 'ConfigureRenderPipeline5'),
        ('FUN_18044d340', 'InitializeRenderState5'),
        ('FUN_18044d450', 'SetupRenderViewport5'),
        ('FUN_18044d630', 'ConfigureRenderDepth5'),
        ('FUN_18044d660', 'SetupRenderStencil5'),
        ('FUN_18044d6f0', 'ConfigureRenderBlend5'),
        ('FUN_18044d720', 'SetupRenderRasterizer5'),
        ('FUN_18044d740', 'InitializeRenderResources5'),
        ('FUN_18044d760', 'ConfigureRenderMemory5'),
        ('FUN_18044d780', 'SetupRenderThreads5'),
        ('FUN_18044d7a0', 'InitializeRenderSync5'),
        ('FUN_18044d7c0', 'ProcessRenderCommands5'),
        ('FUN_18044dbf0', 'SetupRenderQueue6'),
        ('FUN_18044e040', 'ConfigureRenderFence6'),
        ('FUN_18044e230', 'InitializeRenderBuffers6'),
        ('FUN_18044e250', 'SetupRenderTextures6'),
        ('FUN_18044e260', 'ConfigureRenderSamplers6'),
        ('FUN_18044e270', 'InitializeRenderShaders6'),
        ('FUN_18044e2a0', 'SetupRenderPrograms6'),
        ('FUN_18044e320', 'ConfigureRenderPipeline6'),
        ('FUN_18044e330', 'InitializeRenderState6'),
        ('FUN_18044e340', 'SetupRenderViewport6'),
        ('FUN_18044e360', 'ConfigureRenderDepth6'),
        ('FUN_18044e380', 'SetupRenderStencil6'),
        ('FUN_18044e390', 'ConfigureRenderBlend6'),
        ('FUN_18044e610', 'SetupRenderRasterizer6'),
        ('FUN_18044e640', 'InitializeRenderResources6')
    ]
    
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 执行替换
    for old_name, new_name in replacements:
        # 替换函数声明
        pattern = rf'undefined\s+{old_name};'
        content = re.sub(pattern, f'undefined {new_name};', content)
        
        # 替换函数调用
        pattern = rf'\b{old_name}\b'
        content = re.sub(pattern, new_name, content)
        
        # 替换注释中的函数名
        pattern = rf'// 函数:\s+undefined\s+{old_name};'
        content = re.sub(pattern, f'// 函数: undefined {new_name};', content)
        
        print(f"已替换: {old_name} -> {new_name}")
    
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"FUN_函数替换完成！共替换了 {len(replacements)} 个函数")

if __name__ == "__main__":
    print("开始批量替换UNK_变量...")
    batch_replace_unk_variables()
    
    print("\n开始批量替换FUN_函数...")
    batch_replace_fun_functions()
    
    print("\n所有替换完成！")