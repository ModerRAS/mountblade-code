#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
渲染系统函数美化脚本
为03_rendering.c文件中的函数提供语义化名称
"""

import re
import os

# 定义函数映射
function_mappings = {
    "FUN_180447990": "RenderTargetInitializer",
    "FUN_180447b80": "RenderBufferManager",
    "FUN_180447c00": "RenderStateController",
    "FUN_180447ca0": "RenderTextureHandler",
    "FUN_180447d40": "RenderShaderCompiler",
    "FUN_180447de0": "RenderPipelineConfigurator",
    "FUN_180447e10": "RenderCommandExecutor",
    "FUN_180447e40": "RenderResourceAllocator",
    "FUN_180447f70": "RenderMemoryManager",
    "FUN_180448110": "RenderDeviceInitializer",
    "FUN_180448420": "RenderContextCreator",
    "FUN_180448470": "RenderSwapChainManager",
    "FUN_1804484c0": "RenderCommandQueue",
    "FUN_180448540": "RenderFenceManager",
    "FUN_1804485c0": "RenderDescriptorHeap",
    "FUN_1804489a0": "RenderTargetView",
    "FUN_180448d90": "RenderDepthStencil",
    "FUN_180448df0": "RenderSamplerState",
    "FUN_180448e50": "RenderBlendState",
    "FUN_180448ea0": "RenderRasterizerState",
    "FUN_180448f00": "RenderInputLayout",
    "FUN_180448f50": "RenderVertexShader",
    "FUN_180448fb0": "RenderPixelShader",
    "FUN_180449000": "RenderGeometryShader",
    "FUN_180449070": "RenderComputeShader",
    "FUN_1804491c0": "RenderHullShader",
    "FUN_180449230": "RenderDomainShader",
    "FUN_180449300": "RenderShaderProgram",
    "FUN_1804496f0": "RenderVertexBuffer",
    "FUN_180449780": "RenderIndexBuffer",
    "FUN_180449850": "RenderConstantBuffer",
    "FUN_1804498f0": "RenderStructuredBuffer",
    "FUN_180449930": "RenderByteAddressBuffer",
    "FUN_180449a00": "RenderIndirectBuffer",
    "FUN_180449a80": "RenderTextureBuffer",
    "FUN_180449c00": "RenderTexture1D",
    "FUN_180449d70": "RenderTexture2D",
    "FUN_18044a080": "RenderTexture3D",
    "FUN_18044a3a0": "RenderTextureCube",
    "FUN_18044a590": "RenderTextureArray",
    "FUN_18044a810": "RenderTextureMultiSample",
    "FUN_18044aad0": "RenderRenderTarget",
    "FUN_18044ab80": "RenderDepthTarget",
    "FUN_18044ac20": "RenderStencilTarget",
    "FUN_18044ad90": "RenderSwapChainBuffer",
    "FUN_18044af00": "RenderBackBuffer",
    "FUN_18044afb0": "RenderFrontBuffer",
    "FUN_18044b010": "RenderIntermediateBuffer",
    "FUN_18044b080": "RenderPostProcessBuffer",
    "FUN_18044b110": "RenderShadowBuffer",
    "FUN_18044b1d0": "RenderReflectionBuffer",
    "FUN_18044b280": "RenderRefractionBuffer",
    "FUN_18044b3d0": "RenderAmbientBuffer",
    "FUN_18044b4f0": "RenderDiffuseBuffer",
    "FUN_18044b580": "RenderSpecularBuffer",
    "FUN_18044b610": "RenderNormalBuffer",
    "FUN_18044b6e0": "RenderPositionBuffer",
    "FUN_18044b700": "RenderVelocityBuffer",
    "FUN_18044b7a0": "RenderMaterialBuffer",
    "FUN_18044b910": "RenderLightBuffer",
    "FUN_18044baf0": "RenderParticleBuffer",
    "FUN_18044bc50": "RenderDecalBuffer",
    "FUN_18044be30": "RenderFogBuffer",
    "FUN_18044c0d0": "RenderWaterBuffer"
}

def beautify_rendering_functions():
    """美化渲染系统函数名称"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 替换函数名称
    for old_name, new_name in function_mappings.items():
        # 替换注释中的函数名
        content = re.sub(
            rf'// 函数: undefined {re.escape(old_name)};',
            f'// 函数: undefined {new_name};',
            content
        )
        
        # 替换函数声明
        content = re.sub(
            rf'undefined {re.escape(old_name)};',
            f'undefined {new_name};',
            content
        )
        
        print(f"已替换: {old_name} -> {new_name}")
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("函数美化完成")

if __name__ == "__main__":
    beautify_rendering_functions()