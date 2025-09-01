#!/usr/bin/env python3
"""
渲染系统代码美化脚本
用于美化03_rendering.c文件中的函数名和变量名
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

def beautify_function_names(content):
    """美化函数名"""
    # 函数名映射表
    function_mappings = {
        'FUN_180271bcb': 'InitializeRenderingBuffer',
        'FUN_180271c54': 'ProcessRenderingData',
        'FUN_180271ca1': 'UpdateRenderingState',
        'FUN_180271cc9': 'ValidateRenderingContext',
        'FUN_180271cf0': 'SetRenderingParameters',
        'FUN_1802722e0': 'ConfigureRenderingPipeline',
        'FUN_180272b60': 'ExecuteRenderingCommand',
        'FUN_180272bd0': 'CreateRenderTarget',
        'FUN_180272d60': 'BindRenderResources',
        'FUN_180272e40': 'SetViewportDimensions',
        'FUN_180272ef0': 'UpdateProjectionMatrix',
        'FUN_180273150': 'DrawPrimitive',
        'FUN_1802732b0': 'DrawIndexedPrimitive',
        'FUN_180273460': 'ClearRenderTargets',
        'FUN_1802734d0': 'PresentFrame',
        'FUN_180273870': 'CreateVertexBuffer',
        'FUN_180273980': 'CreateIndexBuffer',
        'FUN_180274220': 'CreateTexture2D',
        'FUN_180274c70': 'CreateShaderResource',
        'FUN_180275730': 'CreateSamplerState',
        'FUN_1802758c0': 'CreateBlendState',
        'FUN_1802758eb': 'CreateDepthStencilState',
        'FUN_180275944': 'CreateRasterizerState',
        'FUN_180275a60': 'CreateInputLayout',
        'FUN_180275cf0': 'CompileVertexShader',
        'FUN_180275e10': 'CompilePixelShader',
        'FUN_180276610': 'CreateVertexShader',
        'FUN_1802768b0': 'CreatePixelShader',
        'FUN_180276ad4': 'SetVertexShader',
        'FUN_180276ade': 'SetPixelShader',
        'FUN_180276eef': 'ResetRenderState',
        'FUN_180276f1a': 'FlushCommandQueue',
        'FUN_180276f30': 'ExecuteCommandList',
        'FUN_180276f8c': 'CreateCommandList',
        'FUN_180276fad': 'CreateCommandAllocator',
        'FUN_180277019': 'CreateFence',
        'FUN_180277036': 'SignalFence',
        'FUN_180277068': 'WaitForFence',
        'FUN_18027708e': 'CreateSwapChain',
        'FUN_180277326': 'ResizeSwapChain',
        'FUN_18027733a': 'PresentSwapChain',
        'FUN_180277360': 'SetFullscreenState',
        'FUN_180277690': 'CreateRenderTargetView',
        'FUN_1802776ad': 'CreateDepthStencilView',
        'FUN_1802777dd': 'CreateShaderResourceView',
        'FUN_1802777f0': 'CreateUnorderedAccessView',
        'FUN_180277a20': 'CreateConstantBuffer',
        'FUN_180277b50': 'UpdateConstantBuffer',
        'FUN_180277e30': 'MapBufferResource',
        'FUN_180277e52': 'UnmapBufferResource',
        'FUN_180277f3a': 'CopyBufferRegion',
        'FUN_180277f50': 'CopyTextureRegion',
        'FUN_180277f79': 'ResolveSubresource',
        'FUN_180278261': 'GenerateMipmaps',
        'FUN_180278270': 'UpdateTextureData',
        'FUN_1802786d0': 'CreateTexture2DArray',
        'FUN_180278870': 'CreateTexture3D',
        'FUN_180279640': 'CreateTextureCube',
        'FUN_18027a810': 'CreateTexture2DMS',
        'FUN_18027b5d0': 'CreateBuffer',
        'FUN_18027ba80': 'CreateStructuredBuffer',
        'FUN_18027d420': 'CreateByteAddressBuffer',
        'FUN_18027d880': 'CreateIndirectBuffer',
        'FUN_18027dc40': 'DrawInstanced',
        'FUN_18027dd70': 'DrawIndexedInstanced',
        'FUN_18027f4d0': 'DrawAuto',
        'FUN_18027f4f0': 'Dispatch',
        'FUN_18027f510': 'DispatchIndirect',
        'FUN_180280600': 'SetPipelineState',
        'FUN_180280a9f': 'SetGraphicsRootSignature',
        'FUN_180280ad0': 'SetComputeRootSignature',
        'FUN_180281020': 'SetGraphicsRootDescriptorTable',
        'FUN_180281040': 'SetComputeRootDescriptorTable',
        'FUN_18028106c': 'SetGraphicsRoot32BitConstant',
        'FUN_180281080': 'SetComputeRoot32BitConstant',
        'FUN_180281770': 'SetGraphicsRoot32BitConstants',
        'FUN_180281e80': 'SetComputeRoot32BitConstants',
        'FUN_1802820ec': 'SetGraphicsRootConstantBufferView',
        'FUN_180282110': 'SetComputeRootConstantBufferView',
        'FUN_1802829c0': 'SetGraphicsRootShaderResourceView',
        'FUN_180282be0': 'SetComputeRootShaderResourceView',
        'FUN_180282e00': 'SetGraphicsRootUnorderedAccessView',
        'FUN_180283420': 'SetComputeRootUnorderedAccessView',
        'FUN_180283cb0': 'IASetVertexBuffers',
        'FUN_180283e70': 'IASetIndexBuffer',
        'FUN_180284030': 'IASetInputLayout',
        'FUN_180284120': 'IASetPrimitiveTopology',
        'FUN_180284143': 'VSSetShaderResources',
        'FUN_1802841c0': 'VSSetSamplers',
        'FUN_1802841d0': 'VSSetConstantBuffers',
        'FUN_180284240': 'VSSetShader',
        'FUN_1802842e0': 'PSSetShaderResources',
        'FUN_180284500': 'PSSetSamplers',
        'FUN_180284580': 'PSSetConstantBuffers',
        'FUN_1802845f6': 'PSSetShader',
        'FUN_1802846c0': 'GSSetShaderResources',
        'FUN_180284720': 'GSSetSamplers',
        'FUN_180284780': 'GSSetConstantBuffers',
        'FUN_180284cf0': 'GSSetShader',
        'FUN_180284de0': 'CSSetShaderResources',
        'FUN_180284f90': 'CSSetSamplers',
        'FUN_180285040': 'CSSetConstantBuffers',
        'FUN_180285060': 'CSSetShader',
        'FUN_180285080': 'CSSetUnorderedAccessViews',
        'FUN_180285190': 'OMSetRenderTargets',
        'FUN_180285410': 'OMSetRenderTargetsAndUnorderedAccessViews',
        'FUN_180285760': 'OMSetBlendState',
        'FUN_180285cf0': 'OMSetDepthStencilState',
        'FUN_1802864f0': 'RSSetViewports',
        'FUN_180286514': 'RSSetScissorRects',
        'FUN_180286a98': 'RSSetState',
        'FUN_180286e40': 'SOSetTargets',
        'FUN_180287020': 'DrawIndexedInstancedIndirect',
        'FUN_1802874c0': 'ExecuteIndirect',
        'FUN_180287610': 'SetPredication',
        'FUN_180287ed0': 'CheckMultisampleQualityLevels',
        'FUN_180288040': 'CheckFormatSupport',
        'FUN_180288f30': 'CreateQuery',
        'FUN_180289f50': 'CreatePredicate',
        'FUN_18028a660': 'CreateCounter',
        'FUN_18028a686': 'SetQueryData',
        'FUN_18028a841': 'BeginQuery',
        'FUN_18028a850': 'EndQuery',
        'FUN_18028a8b0': 'BeginPredicate',
        'FUN_18028a95c': 'EndPredicate',
        'FUN_18028aaf0': 'SetMarker',
        'FUN_18028b091': 'SetRenderTargets',
        'FUN_18028b0d2': 'ClearDepthStencilView',
        'FUN_18028d290': 'ClearRenderTargetView',
        'FUN_18028d617': 'ClearUnorderedAccessViewUint',
        'FUN_18028d61f': 'ClearUnorderedAccessViewFloat',
        'FUN_18028d680': 'DiscardResource',
        'FUN_18028e537': 'GenerateMips',
        'FUN_18028e569': 'UpdateSubresource',
        'FUN_18028e62b': 'UpdateSubresource1',
        'FUN_18028e67f': 'CopySubresourceRegion',
        'FUN_18028e684': 'CopyResource',
        'FUN_18028e689': 'ResolveSubresource',
        'FUN_18028e690': 'CopyStructureCount',
        'FUN_18028e702': 'CreateTexture2D',
        'FUN_18028ecb8': 'CreateTexture2D1',
        'FUN_18028ecde': 'CreateTexture3D1',
        'FUN_18028ece4': 'CreateBuffer1',
        'FUN_18028eda3': 'CreateShaderResourceView1',
        'FUN_18028f0ac': 'CreateRenderTargetView1',
        'FUN_18028f0f0': 'CreateDepthStencilView1',
        'FUN_18028f13b': 'CreateUnorderedAccessView1',
        'FUN_18028f180': 'CreateQuery1',
        'FUN_18028f18f': 'CreatePredicate1',
        'FUN_18028f34c': 'CreateCounter1',
        'FUN_18028f499': 'CheckFeatureSupport',
        'FUN_18028f4a1': 'GetPrivateData',
        'FUN_18028f4d4': 'SetPrivateData',
        'FUN_18028f5d1': 'SetPrivateDataInterface',
        'FUN_18028f5ec': 'GetFeatureLevel',
        'FUN_18028f5ed': 'GetCreationFlags',
        'FUN_18028f5ee': 'GetDeviceRemovedReason',
        'FUN_18028f5ef': 'GetExceptionMode',
        'FUN_18028f5f0': 'SetExceptionMode',
    }
    
    # 应用函数名替换
    for old_name, new_name in function_mappings.items():
        # 替换函数声明
        content = re.sub(rf'\b{old_name}\b', new_name, content)
        # 替换函数调用
        content = re.sub(rf'\b{old_name}\b', new_name, content)
    
    return content

def beautify_variable_names(content):
    """美化变量名"""
    # 变量名映射表
    variable_mappings = {
        'uVar1': 'byteValue',
        'uVar2': 'dwordValue',
        'lVar3': 'longValue1',
        'lVar4': 'longValue2',
        'puVar5': 'bytePointer',
        'puVar6': 'dwordPointer',
        'piVar7': 'intPointer',
        'unaff_RBX': 'registerRBX',
        'iVar8': 'intValue1',
        'unaff_RBP': 'registerRBP',
        'iVar9': 'intValue2',
        'unaff_RDI': 'registerRDI',
        'DAT_': 'Data_',
        'UNK_': 'Unknown_',
    }
    
    # 应用变量名替换
    for old_name, new_name in variable_mappings.items():
        content = re.sub(rf'\b{old_name}\b', new_name, content)
    
    return content

def add_function_comments(content):
    """为函数添加文档注释"""
    # 函数注释映射表
    function_comments = {
        'InitializeRenderingBuffer': {
            'brief': '初始化渲染缓冲区',
            'detail': '初始化渲染系统所需的缓冲区，包括顶点缓冲区、索引缓冲区等'
        },
        'ProcessRenderingData': {
            'brief': '处理渲染数据',
            'detail': '处理渲染所需的数据，包括顶点数据、纹理数据等'
        },
        'UpdateRenderingState': {
            'brief': '更新渲染状态',
            'detail': '更新渲染系统的状态，包括渲染管线状态、混合状态等'
        },
        'ValidateRenderingContext': {
            'brief': '验证渲染上下文',
            'detail': '验证渲染上下文是否有效，确保渲染操作可以正常进行'
        },
        'SetRenderingParameters': {
            'brief': '设置渲染参数',
            'detail': '设置渲染系统的各种参数，包括视口、裁剪等'
        },
    }
    
    # 为函数添加注释
    lines = content.split('\n')
    i = 0
    while i < len(lines):
        line = lines[i]
        # 查找函数定义
        match = re.search(r'void\s+(\w+)\s*\(', line)
        if match:
            func_name = match.group(1)
            if func_name in function_comments:
                comment = function_comments[func_name]
                # 插入注释
                comment_lines = [
                    '/**',
                    f' * @brief {comment["brief"]}',
                    f' * ',
                    f' * {comment["detail"]}',
                    ' */',
                ]
                # 在函数定义前插入注释
                for j, comment_line in enumerate(comment_lines):
                    lines.insert(i + j, comment_line)
                i += len(comment_lines)
        i += 1
    
    return '\n'.join(lines)

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c'
    
    # 读取文件
    content = read_file(file_path)
    if content is None:
        return
    
    # 美化函数名
    print("正在美化函数名...")
    content = beautify_function_names(content)
    
    # 美化变量名
    print("正在美化变量名...")
    content = beautify_variable_names(content)
    
    # 添加函数注释
    print("正在添加函数注释...")
    content = add_function_comments(content)
    
    # 写入文件
    if write_file(file_path, content):
        print("文件美化完成")
    else:
        print("文件美化失败")

if __name__ == '__main__':
    main()