#!/usr/bin/env python3
"""
批量重命名渲染系统中的UNK_变量为语义化名称
"""

import re
import sys

def replace_unk_variables(content):
    """替换UNK_变量为语义化名称"""
    
    # 渲染状态相关的变量
    replacements = {
        # 渲染管线状态
        'UNK_180446530': 'RenderPipelineState',
        'UNK_180446550': 'RenderBlendState',
        'UNK_180446560': 'RenderDepthState',
        'UNK_1804465b0': 'RenderStencilState',
        'UNK_180446600': 'RenderRasterState',
        'UNK_180446900': 'RenderSampleState',
        'UNK_180446940': 'RenderTargetConfig',
        'UNK_180446950': 'ViewportConfiguration',
        'UNK_1804469d0': 'ScissorRectState',
        'UNK_1804469e0': 'CullModeState',
        'UNK_180446a20': 'FillModeState',
        'UNK_180446a40': 'MultisampleState',
        'UNK_180446b10': 'AlphaToCoverageState',
        'UNK_180446e00': 'IndependentBlendState',
        'UNK_180446e10': 'LogicOpState',
        'UNK_180446e20': 'ColorWriteMask',
        'UNK_180446e30': 'BlendFactorState',
        'UNK_180446e50': 'DepthBoundsState',
        'UNK_180446e60': 'StencilRefState',
        'UNK_180446f90': 'DepthFuncState',
        'UNK_180447010': 'StencilFuncState',
        'UNK_180447020': 'StencilOpState',
        'UNK_1804470c0': 'ConservativeRasterState',
        'UNK_180447110': 'DepthBiasState',
        'UNK_1804473a0': 'SlopeScaledDepthBias',
        'UNK_1804475b0': 'DepthClipEnable',
        'UNK_180447c80': 'FrontCounterClockwise',
        'UNK_180447c90': 'AntialiasedLineEnable',
        'UNK_180447d20': 'MultisampleEnable',
        'UNK_180447d30': 'ForcedSampleCount',
        'UNK_180447dc0': 'RenderTargetCount',
        'UNK_1804482a0': 'SampleMask',
        'UNK_1804482b0': 'PrimitiveTopology',
        'UNK_1804482e0': 'IndexBufferCut',
        'UNK_180448370': 'InstanceDataStepRate',
        'UNK_180448400': 'VertexDataStepRate',
        'UNK_180448410': 'VertexBufferBinding',
        'UNK_1804497e0': 'InputLayoutState',
        'UNK_180449820': 'VertexAttributeState',
        'UNK_180449830': 'VertexBindingState',
        'UNK_180449840': 'VertexDivisorState',
        'UNK_180449920': 'VertexStreamState',
        'UNK_180449be0': 'VertexInstanceRate',
        'UNK_180449bf0': 'VertexInstanceData',
        'UNK_18044a390': 'VertexStreamFrequency',
        'UNK_18044a7c0': 'VertexStreamData',
        'UNK_18044a7d0': 'VertexStreamOffset',
        'UNK_18044a7e0': 'VertexStreamStride',
        'UNK_18044a7f0': 'VertexStreamFormat',
        'UNK_18044a800': 'VertexStreamClass',
        'UNK_18044e270': 'RenderStateValidation',
        'UNK_18044e2a0': 'RenderOperationValidation',
        'UNK_18044e320': 'RenderSynchronizationState',
        'UNK_18044e330': 'RenderPerformanceMetrics',
        'UNK_18044e340': 'RenderStateResetFlag',
    }
    
    # 执行替换
    for old_name, new_name in replacements.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("Usage: python rename_rendering_variables.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 替换变量名
        new_content = replace_unk_variables(content)
        
        # 写回文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(new_content)
        
        print(f"Successfully replaced UNK variables in {file_path}")
        
    except Exception as e:
        print(f"Error processing file: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()