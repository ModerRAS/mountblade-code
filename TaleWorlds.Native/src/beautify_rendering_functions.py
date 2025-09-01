#!/usr/bin/env python3
"""
批量美化03_rendering.c文件中的FUN_函数
"""

import re
import sys

def read_file(filename):
    with open(filename, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(filename, content):
    with open(filename, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_functions(content):
    # 函数重命名映射
    function_mapping = {
        'FUN_180440350': 'InitializeRenderPipelineShaders',
        'FUN_1804403d0': 'ConfigureRenderPipelineTextures',
        'FUN_1804404b0': 'SetupRenderPipelineOutput',
        'FUN_180440560': 'InitializeRenderPipelineCache',
        'FUN_1804405e0': 'ConfigureRenderPipelineBlending',
        'FUN_180440660': 'InitializeRenderPipelineRasterization',
        'FUN_180440750': 'SetupRenderPipelineDepthTest',
        'FUN_180440910': 'ConfigureVertexShader',
        'FUN_180440aa0': 'SetupPixelShader',
        'FUN_180440cb0': 'InitializeGeometryShader',
        'FUN_180440d20': 'ConfigureRenderTarget',
        'FUN_180440d90': 'InitializeShaderCompiler',
        'FUN_180440e00': 'SetupTextureSampler',
        'FUN_180440e70': 'ConfigureDepthTest',
        'FUN_180440f30': 'InitializeStencilBuffer',
        'FUN_180441070': 'SetupBlendMode',
        'FUN_1804410a0': 'ConfigureRasterizerState',
        'FUN_180441110': 'InitializeVertexBuffer',
        'FUN_180441180': 'CreateIndexBuffer',
        'FUN_180441260': 'SetupConstantBuffer',
        'FUN_180441420': 'InitializeRenderPass',
        'FUN_1804414d0': 'ConfigureRenderViewport',
        'FUN_1804415d0': 'SetupRenderScissor',
        'FUN_180441640': 'InitializeRenderBlending',
        'FUN_180441730': 'ConfigureRenderDepth',
        'FUN_1804417b0': 'SetupRenderStencil',
        'FUN_180441830': 'ConfigureRenderCulling',
        'FUN_180441890': 'InitializeRenderShaders',
        'FUN_1804418e0': 'CreateRenderTexture',
        'FUN_180441910': 'SetupRenderTextureSampler',
        'FUN_180441950': 'ConfigureRenderTextureFilter',
        'FUN_180441a00': 'SetRenderTextureAddressMode',
        'FUN_180441c50': 'GenerateRenderTextureMipmap',
        'FUN_180441cc0': 'CompressRenderTexture',
        'FUN_180441dd0': 'DecompressRenderTexture',
        'FUN_180441e10': 'CreateRenderBuffer',
        'FUN_180441e50': 'ValidateRenderFormat',
        'FUN_180441e90': 'GetRenderResourceReference',
        'FUN_180441f60': 'InitializeRenderingDevice',
        'FUN_180441fc0': 'CreateRenderingContext',
        'FUN_180442020': 'ConfigureRenderingPipeline',
        'FUN_1804420c0': 'ProcessRenderObjectState',
        'FUN_180442180': 'SetupRenderMaterialProperties',
        'FUN_1804422a0': 'ConfigureRenderTransform',
        'FUN_180442370': 'InitializeRenderLighting',
        'FUN_180442450': 'SetupRenderCamera',
        'FUN_1804424d0': 'ConfigureRenderViewport',
        'FUN_180442560': 'SetupRenderScissor',
        'FUN_180442670': 'InitializeRenderBlending',
        'FUN_180442720': 'ConfigureRenderDepth',
        'FUN_180442860': 'SetupRenderStencil',
        'FUN_180442950': 'ConfigureRenderCulling',
        'FUN_1804429f0': 'InitializeRenderShaders',
        'FUN_180442b30': 'CreateRenderTextureView',
        'FUN_180442d10': 'UpdateRenderTextureMipmap',
        'FUN_180442e00': 'BindRenderTextureToShader',
        'FUN_180443000': 'SetRenderTextureFilterMode',
        'FUN_180443080': 'SetRenderTextureAddressMode',
        'FUN_1804431c0': 'GenerateRenderTextureMipmap',
        'FUN_180443320': 'CompressRenderTexture',
        'FUN_180443510': 'DecompressRenderTexture',
        'FUN_180443630': 'CreateRenderBufferInstance',
        'FUN_180443680': 'ValidateRenderFormatCompatibility',
        'FUN_180443700': 'GetRenderingResourceReference',
        'FUN_180443770': 'InitializeRenderingDevice',
        'FUN_180443820': 'CreateRenderingContext',
        'FUN_180443930': 'ConfigureRenderingPipeline',
        'FUN_180443a40': 'ProcessRenderObjectState',
        'FUN_180443aa0': 'SetupRenderMaterialProperties',
        'FUN_180443b00': 'ConfigureRenderTransform',
        'FUN_180443b40': 'InitializeRenderLighting',
        'FUN_180443b80': 'SetupRenderCamera',
        'FUN_180443d10': 'ConfigureRenderViewport',
        'FUN_180443d70': 'SetupRenderScissor',
        'FUN_180443df0': 'InitializeRenderBlending',
        'FUN_180443f80': 'ConfigureRenderDepth',
        'FUN_180443ff0': 'SetupRenderStencil',
        'FUN_180444030': 'ConfigureRenderCulling',
        'FUN_180444070': 'InitializeRenderShaders',
        'FUN_180444100': 'CreateRenderTexture',
        'FUN_180444200': 'SetupRenderTextureSampler',
        'FUN_180444280': 'ConfigureRenderTextureFilter',
        'FUN_1804442c0': 'SetRenderTextureAddressMode',
        'FUN_180444370': 'GenerateRenderTextureMipmap',
        'FUN_1804443c0': 'CompressRenderTexture',
        'FUN_180444410': 'DecompressRenderTexture',
        'FUN_1804445b0': 'CreateRenderBuffer',
        'FUN_180444600': 'ValidateRenderFormat',
        'FUN_180444700': 'GetRenderResourceReference',
        'FUN_1804447c0': 'InitializeRenderingDevice',
        'FUN_1804448a0': 'CreateRenderingContext',
        'FUN_1804449a0': 'ConfigureRenderingPipeline',
        'FUN_180444a20': 'ProcessRenderObjectState',
        'FUN_180444b70': 'SetupRenderMaterialProperties',
        'FUN_180444dd0': 'ConfigureRenderTransform',
        'FUN_180444e90': 'InitializeRenderLighting',
        'FUN_180445060': 'SetupRenderCamera',
        'FUN_180445110': 'ConfigureRenderViewport',
        'FUN_180445180': 'SetupRenderScissor',
        'FUN_180445390': 'InitializeRenderBlending',
        'FUN_180445480': 'ConfigureRenderDepth',
        'FUN_180445570': 'SetupRenderStencil',
        'FUN_180445680': 'ConfigureRenderCulling',
        'FUN_1804457b0': 'InitializeRenderShaders',
        'FUN_180445870': 'CreateRenderTexture',
        'FUN_180445970': 'SetupRenderTextureSampler',
        'FUN_180445a80': 'ConfigureRenderTextureFilter',
        'FUN_180445cd0': 'SetRenderTextureAddressMode',
        'FUN_180445dc0': 'GenerateRenderTextureMipmap',
        'FUN_180445eb0': 'CompressRenderTexture',
        'FUN_180445fd0': 'DecompressRenderTexture',
        'FUN_180446010': 'CreateRenderBuffer',
        'FUN_180446080': 'ValidateRenderFormat',
        'FUN_1804460c0': 'GetRenderResourceReference',
        'FUN_1804460f0': 'InitializeRenderingDevice',
        'FUN_180446120': 'CreateRenderingContext',
        'FUN_180446160': 'ConfigureRenderingPipeline',
        'FUN_1804461b0': 'ProcessRenderObjectState',
        'FUN_1804462a0': 'SetupRenderMaterialProperties',
        'FUN_1804462e0': 'ConfigureRenderTransform',
        'FUN_180446320': 'InitializeRenderLighting',
        'FUN_180446370': 'SetupRenderCamera',
        'FUN_180446430': 'ConfigureRenderViewport',
        'FUN_180446480': 'SetupRenderScissor',
        'FUN_180446610': 'InitializeRenderBlending',
        'FUN_180446650': 'ConfigureRenderDepth',
        'FUN_180446690': 'SetupRenderStencil',
        'FUN_180446760': 'ConfigureRenderCulling',
        'FUN_180446430': 'SetComputeRoot32BitConstant',
        'FUN_180446480': 'SetGraphicsRoot32BitConstants',
    }
    
    # 参数重命名映射
    param_mapping = {
        'objectState': 'renderContext',
        'contextData': 'renderData',
        'param_3': 'textureData',
        'cVar1': 'isValid',
        'uStack': 'stackParam',
        'puStack': 'ptrStackParam',
    }
    
    # 替换函数名
    for old_name, new_name in function_mapping.items():
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    # 替换参数名
    for old_name, new_name in param_mapping.items():
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    return content

if __name__ == "__main__":
    filename = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    content = read_file(filename)
    beautified_content = beautify_functions(content)
    write_file(filename, beautified_content)
    print("函数美化完成")