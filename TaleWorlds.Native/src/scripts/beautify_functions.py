#!/usr/bin/env python3
"""
美化03_rendering.c文件中的FUN_函数名
将逆向工程产生的FUN_函数名替换为语义化的名称
"""

import re
import sys

def read_file(filepath):
    """读取文件内容"""
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        return f.read()

def write_file(filepath, content):
    """写入文件内容"""
    with open(filepath, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_functions(content):
    """美化函数名"""
    
    # 函数名映射表
    function_mappings = {
        'FUN_180454230': 'UpdateRenderObjectTransform',
        'FUN_180454300': 'ValidateRenderObjectState',
        'FUN_1804543f0': 'ResetRenderObjectProperties',
        'FUN_180454d00': 'CalculateRenderBoundingBox',
        'FUN_180454d80': 'UpdateRenderVisibility',
        'FUN_180454ea0': 'ApplyRenderMaterial',
        'FUN_180454ff0': 'SetRenderShaderParameters',
        'FUN_180455090': 'ConfigureRenderTexture',
        'FUN_180455250': 'UpdateRenderLighting',
        'FUN_180455340': 'ProcessRenderShadows',
        'FUN_180455430': 'ApplyRenderPostEffects',
        'FUN_1804555a0': 'UpdateRenderCamera',
        'FUN_1804557b0': 'ConfigureRenderViewport',
        'FUN_180455980': 'SetRenderScissorRect',
        'FUN_1804559d0': 'UpdateRenderClipping',
        'FUN_1804354c0': 'InitializeRenderBuffer',
        'FUN_1804355b0': 'CreateRenderTexture',
        'FUN_180435630': 'DestroyRenderTexture',
        'FUN_180435690': 'BindRenderTexture',
        'FUN_1804357a0': 'UpdateRenderTextureData',
        'FUN_180435860': 'GenerateRenderMipmaps',
        'FUN_1804359d0': 'SetRenderTextureFilter',
        'FUN_180435a80': 'SetRenderTextureWrap',
        'FUN_180435d10': 'CreateRenderShader',
        'FUN_180435e20': 'CompileRenderShader',
        'FUN_180435f40': 'LinkRenderShaderProgram',
        'FUN_180435f90': 'ValidateRenderShader',
        'FUN_180435ff0': 'UseRenderShaderProgram',
        'FUN_180436030': 'SetRenderShaderUniform',
        'FUN_180436160': 'GetRenderShaderLocation',
        'FUN_1804362a0': 'CreateRenderBuffer',
        'FUN_1804369d0': 'BindRenderBuffer',
        'FUN_180436a00': 'UnbindRenderBuffer',
        'FUN_180436a50': 'UpdateRenderBufferData',
        'FUN_180436ae0': 'GetRenderBufferData',
        'FUN_180436bb0': 'DeleteRenderBuffer',
        'FUN_180436bf0': 'CreateRenderVertexArray',
        'FUN_180436c30': 'BindRenderVertexArray',
        'FUN_180436d00': 'UnbindRenderVertexArray',
        'FUN_180436da0': 'DeleteRenderVertexArray',
        'FUN_180436f20': 'EnableRenderAttribute',
        'FUN_180436fd0': 'DisableRenderAttribute',
        'FUN_180437050': 'SetRenderAttributePointer',
        'FUN_180437110': 'DrawRenderArrays',
        'FUN_180437290': 'DrawRenderElements',
        'FUN_1804372e0': 'DrawRenderInstanced',
        'FUN_180437320': 'MultiDrawRenderArrays',
        'FUN_1804373a0': 'MultiDrawRenderElements',
        'FUN_180437460': 'ClearRenderBuffer',
        'FUN_1804374c0': 'SetRenderClearColor',
        'FUN_180437560': 'SetRenderClearDepth',
        'FUN_1804375f0': 'SetRenderClearStencil',
        'FUN_180437680': 'EnableRenderCapability',
        'FUN_1804377b0': 'DisableRenderCapability',
        'FUN_1804378e0': 'GetRenderError',
        'FUN_18031c260': 'InitializeRenderContext',
        'FUN_18031c300': 'CreateRenderDevice',
        'FUN_180317e00': 'DestroyRenderDevice',
        'FUN_18031ccb0': 'GetRenderDeviceInfo',
        'FUN_18031d520': 'SetRenderDisplayMode',
        'FUN_1803216f0': 'CreateRenderSwapChain',
        'FUN_18033d370': 'PresentRenderFrame',
        'FUN_180321570': 'ResizeRenderBuffers',
        'FUN_18033d250': 'SetRenderVSync',
        'FUN_18033d080': 'GetRenderFrameRate',
        'FUN_18033d170': 'SetRenderFrameRate',
        'FUN_18033ced0': 'BeginRenderFrame',
        'FUN_18033cd80': 'EndRenderFrame',
        'FUN_18033cc90': 'FlushRenderCommands',
        'FUN_180360210': 'CreateRenderPipeline',
        'FUN_180380510': 'SetRenderPipelineState',
        'FUN_1803805e0': 'GetRenderPipelineState',
        'FUN_180380430': 'CreateRenderRenderPass',
        'FUN_1803802e0': 'BeginRenderPass',
        'FUN_1803800d0': 'EndRenderPass',
        'FUN_180380200': 'NextRenderSubpass',
        'FUN_18037ac70': 'SetRenderViewport',
        'FUN_18037ad00': 'SetRenderScissor',
        'FUN_180388290': 'SetRenderLineWidth',
        'FUN_180387ed0': 'SetRenderPointSize',
        'FUN_180388040': 'EnableRenderBlend',
        'FUN_180388120': 'DisableRenderBlend',
        'FUN_1803896b0': 'SetRenderBlendFunc',
        'FUN_18038a340': 'SetRenderBlendEquation',
        'FUN_18038a630': 'SetColorRenderMask',
        'FUN_1804069d0': 'EnableRenderDepthTest',
        'FUN_180407960': 'DisableRenderDepthTest',
        'FUN_18041b4d0': 'SetRenderDepthFunc',
        'FUN_1802719da': 'ProcessRenderObjectProperties',
        'FUN_1802719f1': 'UpdateRenderObjectState',
        'FUN_180271b17': 'InitializeRenderSystem',
        'FUN_180271bcb': 'ShutdownRenderSystem'
    }
    
    # 替换函数名
    for old_name, new_name in function_mappings.items():
        # 替换函数定义
        content = re.sub(rf'\b{old_name}\b', new_name, content)
        # 替换函数调用
        content = re.sub(rf'\b{old_name}\(', f'{new_name}(', content)
    
    return content

def main():
    """主函数"""
    filepath = '/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c'
    
    print("开始美化03_rendering.c文件中的函数名...")
    
    # 读取文件
    content = read_file(filepath)
    
    # 美化函数名
    content = beautify_functions(content)
    
    # 写入文件
    write_file(filepath, content)
    
    print("函数名美化完成！")

if __name__ == '__main__':
    main()