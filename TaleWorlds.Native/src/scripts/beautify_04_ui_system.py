#!/usr/bin/env python3
"""
美化04_ui_system.c文件中的变量名
替换十六进制变量名为语义化名称
"""

import re

def beautify_ui_system_variables():
    """美化UI系统文件中的变量名"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量名映射
    variable_mapping = {
        'UISystemMemoryOffsetTable2A0': 'UISystemTextureBufferOffset',
        'UISystemMemoryOffsetTable300': 'UISystemShaderBufferOffset',
        'UISystemMemoryOffsetTable5C0': 'UISystemFrameBufferOffset',
        'UISystemMemoryOffsetTable6C0': 'UISystemStencilBufferOffset',
        'UISystemMemoryOffsetTable880': 'UISystemDepthBufferOffset',
        'UISystemMemoryOffsetTableD80': 'UISystemColorBufferOffset',
        'UISystemMemoryOffsetTableDE0': 'UISystemAlphaBufferOffset',
        'UISystemMemoryOffsetTableE90': 'UISystemNormalBufferOffset',
        'UISystemMemoryOffsetTableFA0': 'UISystemPositionBufferOffset',
        'UISystemMemoryOffsetTable9D0': 'UISystemTangentBufferOffset',
        'UISystemMemoryOffsetTable080': 'UISystemUVBufferOffset',
        'UISystemMemoryOffsetTable440': 'UISystemBoneBufferOffset',
        'UISystemMemoryOffsetTable7B0': 'UISystemAnimationBufferOffset',
        'UISystemMemoryOffsetTableBC0': 'UISystemLightBufferOffset',
        'UISystemMemoryOffsetTable190': 'UISystemShadowBufferOffset',
        'UISystemMemoryOffsetTable5D0': 'UISystemReflectionBufferOffset',
        'UISystemMemoryOffsetTable945': 'UISystemFogBufferOffset',
        'UISystemMemoryOffsetTableB22': 'UISystemWeatherBufferOffset',
        'UISystemMemoryOffsetTableF34': 'UISystemTimeBufferOffset',
        'UISystemMemoryOffsetTableFF0': 'UISystemCameraBufferOffset',
        'UISystemMemoryOffsetTable630': 'UISystemProjectionBufferOffset',
        'UISystemMemoryOffsetTableBC6': 'UISystemViewBufferOffset',
        'UISystemMemoryOffsetTableEB4': 'UISystemWorldBufferOffset',
        'UISystemMemoryOffsetTable470': 'UISystemModelBufferOffset',
        'UISystemMemoryOffsetTable4E0': 'UISystemInstanceBufferOffset',
        'UISystemMemoryOffsetTable550': 'UISystemMaterialBufferOffset',
        'UISystemMemoryOffsetTable5E0': 'UISystemTextureOffset',
        'UISystemMemoryOffsetTable670': 'UISystemSamplerOffset',
        'UISystemMemoryOffsetTable6E0': 'UISystemConstantOffset',
        'UISystemMemoryOffsetTable750': 'UISystemAttributeOffset',
        'UISystemMemoryOffsetTable7C0': 'UISystemVaryingOffset',
        'UISystemMemoryOffsetTable850': 'UISystemUniformOffset',
        'UISystemMemoryOffsetTable8E0': 'UISystemVertexOffset',
        'UISystemMemoryOffsetTable120': 'UISystemFragmentOffset',
        'UISystemMemoryOffsetTableDCF': 'UISystemGeometryOffset',
        'UISystemMemoryOffsetTable5D0': 'UISystemTessellationOffset',
        'UISystemMemoryOffsetTable945': 'UISystemComputeOffset',
        'UISystemMemoryOffsetTableB22': 'UISystemMeshOffset',
        'UISystemMemoryOffsetTableF34': 'UISystemParticleOffset',
        'UISystemMemoryOffsetTableFF0': 'UISystemPostProcessOffset',
        'UISystemMemoryOffsetTable630': 'UISystemLightingOffset',
        'UISystemMemoryOffsetTableBC6': 'UISystemShadowMappingOffset',
        'UISystemMemoryOffsetTableEB4': 'UISystemReflectionOffset',
        'UISystemMemoryOffsetTable470': 'UISystemAmbientOcclusionOffset',
        'UISystemMemoryOffsetTable4E0': 'UISystemGlobalIlluminationOffset',
        'UISystemMemoryOffsetTable550': 'UISystemAntiAliasingOffset',
        'UISystemMemoryOffsetTable5E0': 'UISystemDepthOfFieldOffset',
        'UISystemMemoryOffsetTable670': 'UISystemMotionBlurOffset',
        'UISystemMemoryOffsetTable6E0': 'UISystemBloomOffset',
        'UISystemMemoryOffsetTable750': 'UISystemTonemappingOffset',
        'UISystemMemoryOffsetTable7C0': 'UISystemColorGradingOffset',
        'UISystemMemoryOffsetTable850': 'UISystemVignetteOffset',
        'UISystemMemoryOffsetTable8E0': 'UISystemChromaticAberrationOffset'
    }
    
    # 替换变量名
    for old_name, new_name in variable_mapping.items():
        content = content.replace(f'void* {old_name};', f'void* {new_name};')
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量名美化完成")

if __name__ == "__main__":
    beautify_ui_system_variables()