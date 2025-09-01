#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
渲染变量名美化脚本
用于将03_rendering.c中的UNK_变量和undefined类型变量替换为有意义的名称
"""

import re
import sys

def render_variable_replacement():
    """替换渲染文件中的变量名"""
    
    # 读取源文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # UNK_变量替换映射 (基于上下文推断)
    unk_replacements = {
        'UNK_18044e270': 'RenderStateApplicationFlag',
        'UNK_18044e2a0': 'RenderValidationStatus',
        'UNK_18044e320': 'RenderSynchronizationFlag',
        'UNK_18044e330': 'PerformanceStatsBuffer',
        'UNK_18044e340': 'RenderStateResetFlag',
        'UNK_18044f4b0': 'BlendModeConfiguration',
        'UNK_18044f4c0': 'DepthStencilConfiguration',
        'UNK_18044f4d0': 'RasterizerConfiguration',
        'UNK_18044f4e0': 'TextureFilterConfiguration',
        'UNK_18044f4f0': 'ViewportConfiguration',
        'UNK_18044f500': 'ScissorConfiguration',
        'UNK_18044f510': 'CullingConfiguration',
        'UNK_18044f520': 'ClipPlaneConfiguration',
        'UNK_18044f530': 'MultiSampleConfiguration',
        'UNK_18044f540': 'OcclusionQueryConfiguration',
        'UNK_18044f550': 'StreamOutputConfiguration',
        'UNK_18044f560': 'GeometryShaderConfiguration',
        'UNK_18044f570': 'TessellationConfiguration',
        'UNK_18044f580': 'ComputeShaderConfiguration',
        'UNK_18044f590': 'HullShaderConfiguration',
        'UNK_18044f5a0': 'DomainShaderConfiguration',
    }
    
    # 通用UNK_变量替换
    def replace_unk_vars(match):
        var_name = match.group(0)
        # 如果有具体的映射，使用映射的名称
        if var_name in unk_replacements:
            return unk_replacements[var_name]
        # 否则根据UNK_后面的数字生成有意义的名称
        hex_part = var_name[4:]  # 去掉UNK_
        if hex_part.startswith('180'):
            return f'RenderSystemConfig{hex_part[3:]}'
        elif hex_part.startswith('181'):
            return f'RenderBufferConfig{hex_part[3:]}'
        elif hex_part.startswith('182'):
            return f'RenderTextureConfig{hex_part[3:]}'
        elif hex_part.startswith('183'):
            return f'RenderShaderConfig{hex_part[3:]}'
        elif hex_part.startswith('184'):
            return f'RenderPipelineConfig{hex_part[3:]}'
        else:
            return f'RenderVariable{hex_part}'
    
    # 替换UNK_变量
    content = re.sub(r'UNK_[0-9a-fA-F]+', replace_unk_vars, content)
    
    # 替换undefined类型变量
    def replace_undefined_vars(match):
        # 获取变量名
        var_decl = match.group(0)
        var_name = var_decl.split()[-1]
        
        # 根据变量名的上下文推断类型
        if 'Configuration' in var_name or 'Config' in var_name:
            return f'void* {var_name}'
        elif 'Manager' in var_name:
            return f'void* {var_name}'
        elif 'Buffer' in var_name:
            return f'void* {var_name}'
        elif 'Texture' in var_name:
            return f'void* {var_name}'
        elif 'Shader' in var_name:
            return f'void* {var_name}'
        elif 'State' in var_name:
            return f'uint32_t {var_name}'
        elif 'Flag' in var_name:
            return f'uint32_t {var_name}'
        elif 'Status' in var_name:
            return f'uint32_t {var_name}'
        elif 'Count' in var_name:
            return f'uint32_t {var_name}'
        elif 'Index' in var_name:
            return f'uint32_t {var_name}'
        elif 'Offset' in var_name:
            return f'uint32_t {var_name}'
        elif 'Size' in var_name:
            return f'uint32_t {var_name}'
        else:
            return f'void* {var_name}'
    
    # 替换undefined变量声明
    content = re.sub(r'undefined\s+(\w+)', replace_undefined_vars, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量名美化完成")

if __name__ == '__main__':
    render_variable_replacement()