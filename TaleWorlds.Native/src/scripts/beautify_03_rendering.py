#!/usr/bin/env python3
"""
03_rendering.c 文件美化脚本
重命名函数和变量，使其符合语义化命名规则
"""

import re
import os
import shutil

def backup_file(file_path):
    """备份原文件"""
    backup_path = file_path + ".backup"
    shutil.copy2(file_path, backup_path)
    print(f"已备份原文件到: {backup_path}")
    return backup_path

def beautify_rendering_file():
    """美化03_rendering.c文件"""
    
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    
    if not os.path.exists(file_path):
        print(f"文件不存在: {file_path}")
        return False
    
    # 备份原文件
    backup_file(file_path)
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    
    original_content = content
    
    print("开始美化 03_rendering.c 文件...")
    
    # 定义重命名规则
    # 函数重命名
    function_renames = {
        # 渲染系统初始化相关
        'FUN_1802b6e50': 'ProcessRenderBufferData',
        'FUN_180627be0': 'CopyRenderContextData',
        'FUN_18023fa30': 'TransferRenderData',
        'FUN_18062b1e0': 'AllocateRenderResource',
        'FUN_18023fe10': 'GetResourceManager',
        'FUN_1802416d0': 'InitializeRenderSegment',
        'FUN_18025a7b0': 'SetupRenderPropertyTable',
        'FUN_180271cf0': 'ProcessRenderContextTransfer',
        'FUN_1808fc050': 'CalculateRenderChecksum',
        'FUN_180639bf0': 'UpdateRenderProperty',
        'FUN_180272d60': 'ConfigureRenderObject',
        'FUN_180639ec0': 'SetRenderDataValue',
        'FUN_18025a940': 'FinalizeRenderProperty',
        
        # 渲染管线相关
        'FUN_18044d7c0': 'InitializeVertexShader',
        'FUN_18044dbf0': 'InitializePixelShader',
        'FUN_18044e040': 'InitializeGeometryShader',
        'FUN_18044e230': 'InitializeComputeShader',
        'FUN_18044e250': 'InitializeHullShader',
        'FUN_18044e260': 'InitializeDomainShader',
        'FUN_18044e270': 'SetupRasterizerState',
        'FUN_18044e2a0': 'SetupBlendState',
        'FUN_18044e320': 'SetupDepthStencilState',
        'FUN_18044e330': 'CreateVertexBuffer',
        'FUN_18044e340': 'CreateIndexBuffer',
        'FUN_18044f4b0': 'CreateConstantBuffer',
        'FUN_18044f4f0': 'CreateShaderProgram',
        'FUN_18044f510': 'LinkShaderProgram',
        'FUN_18044f530': 'ValidateShaderProgram',
        'FUN_18044f580': 'CreateTexture',
        'FUN_18044f5d0': 'CreateSampler',
        'FUN_18044f5f0': 'CreateRenderTarget',
        'FUN_18044f610': 'CreateDepthStencil',
        'FUN_18044f630': 'CreateRenderPass',
        'FUN_18044f640': 'CreateFramebuffer',
        'FUN_18044f660': 'SetupRenderPipeline',
        'FUN_18044f690': 'ConfigureRenderPipeline',
        'FUN_18044f6b0': 'InitializeRenderPipeline',
        'FUN_18044f6e0': 'ExecuteRenderPass',
        'FUN_18044f750': 'SubmitRenderCommand',
        'FUN_18044f940': 'PresentFrame',
        'FUN_18044f960': 'ResizeRenderTarget',
        'FUN_18044f980': 'UpdateRenderState',
        'FUN_18044f9a0': 'BindRenderResource',
        'FUN_18044f9c0': 'UnbindRenderResource',
        'FUN_18044f9e0': 'FlushRenderQueue',
        'FUN_18044faf0': 'SynchronizeRenderDevice',
        'FUN_18044fb20': 'GetRenderDeviceInfo',
        'FUN_18044fb40': 'GetRenderContextInfo',
        'FUN_18044fb60': 'GetRenderResourceInfo',
        'FUN_18044fb80': 'GetRenderTextureInfo',
        'FUN_18044fba0': 'GetRenderBufferInfo',
        'FUN_18044fbc0': 'GetRenderShaderInfo',
        'FUN_18044fbe0': 'GetRenderPipelineInfo',
        'FUN_18044fc00': 'GetRenderStateInfo',
        'FUN_18044fc20': 'GetRenderFormatInfo',
        'FUN_18044fc40': 'GetRenderMemoryInfo',
        'FUN_18044fc60': 'GetRenderPerformanceInfo',
        'FUN_18044fc80': 'GetRenderErrorInfo',
        'FUN_18044fca0': 'GetRenderWarningInfo',
        'FUN_18044fcc0': 'GetRenderDebugInfo',
        'FUN_18044fce0': 'GetRenderStatisticInfo',
        'FUN_18044fd00': 'GetRenderProfileInfo',
    }
    
    # 变量重命名
    variable_renames = {
        # 渲染状态变量
        'UNK_180d48ec8': 'GlobalRenderState',
        'UNK_18098dfd0': 'RenderPropertyTable',
        'UNK_18098de80': 'RenderObjectContext',
        'UNK_180c8ed18': 'RenderResourcePool',
        'UNK_180bfbb58': 'VertexShaderCache',
        'UNK_180bfbb68': 'PixelShaderCache',
        'UNK_180bfbb98': 'GeometryShaderCache',
        'UNK_180bfbba8': 'ComputeShaderCache',
        'UNK_180c95f00': 'TextureResourceTable',
        'UNK_180c95f78': 'BufferResourceTable',
        'UNK_180c95f98': 'ShaderResourceTable',
        'UNK_180c961b8': 'PipelineResourceTable',
        'UNK_180c92518': 'RenderStateTable',
        'UNK_180c92d18': 'VertexFormatTable',
        'UNK_180c92d1a': 'PixelFormatTable',
        'UNK_180c92d1c': 'RenderFormatTable',
        'UNK_180c92d28': 'DepthFormatTable',
        'UNK_180c95bb0': 'RenderDebugFlag',
        
        # 渲染数据变量
        'uVar1': 'renderIndex',
        'uVar2': 'renderCount',
        'uVar3': 'renderOffset',
        'uVar4': 'renderSize',
        'uVar5': 'renderFlags',
        'uVar6': 'renderType',
        'uVar7': 'renderMode',
        'uVar8': 'renderFormat',
        'uVar9': 'renderStage',
        'uVar10': 'renderPass',
        
        # 上下文变量
        'iVar1': 'contextIndex',
        'iVar2': 'contextCount',
        'iVar3': 'contextOffset',
        'iVar4': 'contextSize',
        'iVar5': 'contextFlags',
        'iVar6': 'contextType',
        'iVar7': 'contextMode',
        'iVar8': 'contextFormat',
        'iVar9': 'contextStage',
        'iVar10': 'contextPass',
        
        # 局部变量
        'local_10': 'localRenderState',
        'local_18': 'localContextData',
        'local_20': 'localVertexBuffer',
        'local_28': 'localIndexBuffer',
        'local_30': 'localConstantBuffer',
        'local_38': 'localTextureData',
        'local_40': 'localSamplerData',
        'local_48': 'localRenderTarget',
        'local_50': 'localDepthStencil',
        'local_58': 'localShaderProgram',
        'local_60': 'localPipelineState',
        'local_68': 'localRenderPass',
        'local_70': 'localFramebuffer',
        'local_78': 'localCommandList',
        'local_80': 'localDescriptorSet',
        'local_88': 'localDescriptorPool',
    }
    
    # 数据类型重命名
    type_renames = {
        'undefined1': 'uint8_t',
        'undefined2': 'uint16_t',
        'undefined4': 'uint32_t',
        'undefined8': 'uint64_t',
        'undefined': 'void',
    }
    
    # 应用重命名
    print("应用函数重命名...")
    for old_name, new_name in function_renames.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
        print(f"  {old_name} → {new_name}")
    
    print("\n应用变量重命名...")
    for old_name, new_name in variable_renames.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
        print(f"  {old_name} → {new_name}")
    
    print("\n应用数据类型重命名...")
    for old_name, new_name in type_renames.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
        print(f"  {old_name} → {new_name}")
    
    # 写入修改后的内容
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"\n美化完成！修改后的文件已保存到: {file_path}")
    
    # 统计修改的行数
    original_lines = original_content.split('\n')
    modified_lines = content.split('\n')
    changed_lines = sum(1 for orig, mod in zip(original_lines, modified_lines) if orig != mod)
    
    print(f"总共修改了 {changed_lines} 行")
    
    return True

if __name__ == "__main__":
    beautify_rendering_file()