#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
渲染系统文件美化脚本 - 最终版本
专门用于处理03_rendering.c文件中的FUN_和UNK_标识符
"""

import re
import os

def beautify_rendering_functions():
    """美化渲染系统函数和变量名"""
    
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    
    if not os.path.exists(file_path):
        print(f"文件不存在: {file_path}")
        return False
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    
    print("开始美化 03_rendering.c 文件...")
    
    # 函数名映射 - 渲染缓冲区管理
    function_mappings = {
        'FUN_180453e40': 'InitializeRenderBufferPool',
        'FUN_180453f70': 'CreateRenderBufferInstance',
        'FUN_180453f90': 'DestroyRenderBufferInstance',
        'FUN_180454070': 'ConfigureRenderBufferFormat',
        'FUN_1804541a0': 'AllocateRenderBufferMemory',
        'FUN_180454230': 'UpdateRenderBufferData',
        'FUN_180454300': 'BindRenderBufferToPipeline',
        'FUN_1804543f0': 'ValidateRenderBufferState',
        
        # 渲染纹理管理
        'FUN_180454d00': 'InitializeRenderTextureManager',
        'FUN_180454d80': 'CreateRenderTextureInstance',
        'FUN_180454ea0': 'LoadRenderTextureData',
        'FUN_180454ff0': 'DestroyRenderTextureInstance',
        'FUN_180455090': 'ConfigureRenderTextureParameters',
        'FUN_180455250': 'ApplyRenderTextureFilter',
        'FUN_180455340': 'GenerateRenderTextureMipmaps',
        'FUN_180455430': 'ValidateRenderTextureFormat',
        
        # 渲染采样器管理
        'FUN_1804555a0': 'InitializeRenderSampler',
        'FUN_1804557b0': 'CreateRenderSamplerInstance',
        'FUN_180455980': 'ConfigureRenderSamplerState',
        'FUN_1804559d0': 'ApplyRenderSamplerFilter',
        
        # 渲染管线管理
        'FUN_1804354c0': 'InitializeRenderPipelineState',
        'FUN_1804355b0': 'CreateRenderPipelineInstance',
        'FUN_180435630': 'ConfigureRenderPipelineStages',
        'FUN_180435690': 'SetRenderShaderStage',
        'FUN_1804357a0': 'ConfigureRenderRasterizerState',
        'FUN_180435860': 'SetRenderBlendState',
        'FUN_1804359d0': 'ConfigureRenderDepthStencil',
        'FUN_180435a80': 'SetRenderOutputTargets',
        'FUN_180435d10': 'ValidateRenderPipelineConfig',
        'FUN_180435e20': 'ApplyRenderPipelineState',
        'FUN_180435f40': 'ResetRenderPipelineState',
        
        # 渲染命令列表管理
        'FUN_180435f90': 'GetRenderPipelineStatus',
        'FUN_180435ff0': 'InitializeRenderCommandList',
        'FUN_180436030': 'CreateRenderCommandInstance',
        'FUN_180436160': 'BeginRenderCommandRecording',
        'FUN_1804362a0': 'EndRenderCommandRecording',
        'FUN_1804369d0': 'ExecuteRenderCommandList',
        'FUN_180436a00': 'ResetRenderCommandAllocator',
        'FUN_180436a50': 'CloseRenderCommandList',
        'FUN_180436ae0': 'ValidateRenderCommandState',
        'FUN_180436bb0': 'SubmitRenderCommands',
        'FUN_180436bf0': 'WaitForRenderCommandCompletion',
        
        # 渲染同步对象管理
        'FUN_180436c30': 'InitializeRenderSyncObjects',
        'FUN_180436d00': 'CreateRenderFenceInstance',
        'FUN_180436da0': 'SignalRenderFence',
        'FUN_180436f20': 'WaitForRenderFence',
        'FUN_180436fd0': 'GetRenderFenceStatus',
        
        # 渲染查询系统
        'FUN_180437050': 'InitializeRenderQuerySystem',
        'FUN_180437110': 'CreateRenderQueryInstance',
        'FUN_180437290': 'BeginRenderQuery',
        'FUN_1804372e0': 'EndRenderQuery',
        'FUN_180437320': 'GetRenderQueryData',
        'FUN_1804373a0': 'ValidateRenderQueryResults',
        'FUN_180437460': 'ResetRenderQueryState',
        'FUN_1804374c0': 'DestroyRenderQueryInstance',
        
        # 渲染内存管理
        'FUN_180437560': 'InitializeRenderMemoryManager',
        'FUN_1804375f0': 'AllocateRenderMemory',
        'FUN_180437680': 'FreeRenderMemory',
        'FUN_1804377b0': 'DefragmentRenderMemory',
        'FUN_1804378e0': 'GetRenderMemoryStats',
        
        # 渲染描述符堆管理
        'FUN_18031c260': 'InitializeRenderDescriptorHeap',
        'FUN_18031c300': 'CreateRenderDescriptorInstance',
        'FUN_180317e00': 'AllocateRenderDescriptor',
        'FUN_18031ccb0': 'UpdateRenderDescriptorData',
        'FUN_18031d520': 'FreeRenderDescriptor',
        
        # 渲染资源视图管理
        'FUN_1803216f0': 'InitializeRenderResourceView',
        'FUN_18033d370': 'CreateRenderResourceViewInstance',
        'FUN_180321570': 'ConfigureRenderResourceView',
        'FUN_18033d250': 'SetRenderResourceViewFormat',
        'FUN_18033d080': 'InitializeRenderTargetView',
        'FUN_18033d170': 'CreateRenderTargetInstance',
        'FUN_18033ced0': 'ConfigureRenderTargetParameters',
        'FUN_18033cd80': 'InitializeDepthStencilView',
        'FUN_18033cc90': 'CreateDepthStencilInstance',
        
        # 渲染交换链管理
        'FUN_180360210': 'InitializeRenderSwapChain',
        
        # 渲染帧缓冲区管理
        'FUN_180380510': 'InitializeRenderFrameBuffer',
        'FUN_1803805e0': 'ConfigureRenderFrameBuffer',
        'FUN_180380430': 'CreateRenderFrameBufferInstance',
        'FUN_1803802e0': 'BindRenderFrameBuffer',
        
        # 渲染视口和裁剪管理
        'FUN_1803800d0': 'InitializeRenderViewport',
        'FUN_180380200': 'SetRenderViewportParameters',
        'FUN_18037ac70': 'InitializeRenderScissorRect',
        'FUN_18037ad00': 'SetRenderScissorParameters'
    }
    
    # 应用函数名映射
    print("应用函数重命名...")
    rename_count = 0
    for old_name, new_name in function_mappings.items():
        # 计算替换次数
        old_count = content.count(old_name)
        if old_count > 0:
            content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
            rename_count += old_count
            print(f"  {old_name} → {new_name} (替换 {old_count} 次)")
    
    # 写入修改后的内容
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"\n美化完成！总共替换了 {rename_count} 处")
    print(f"修改后的文件已保存到: {file_path}")
    
    return True

if __name__ == '__main__':
    beautify_rendering_functions()