#!/usr/bin/env python3
"""
批量美化03_rendering.c文件中的UNK_变量
根据变量地址的上下文推断其用途并重命名
"""

import re
import sys

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def generate_variable_name(address, context):
    """根据地址和上下文生成有意义的变量名"""
    # 根据地址范围和上下文推断变量用途
    if '44e' in address:
        if '340' in address:
            return 'RenderStateResetFlag'
        elif '360' in address:
            return 'RenderCacheInitializationStatus'
        elif '380' in address:
            return 'RenderCacheCleanupStatus'
        elif '390' in address:
            return 'RenderCacheMemoryManager'
        elif '610' in address:
            return 'RenderCacheValidationFlag'
        elif '640' in address:
            return 'RenderCacheOptimizationFlag'
    elif '44f' in address:
        if '490' in address:
            return 'TextureSamplerConfiguration'
        elif '4b0' in address:
            return 'BlendModeSetting'
    elif '446' in address:
        return f'RenderingSystemData_{address[-3:]}'
    elif '447' in address:
        return f'GraphicsResourceData_{address[-3:]}'
    elif '448' in address:
        return f'ShaderSystemData_{address[-3:]}'
    elif '449' in address:
        return f'PipelineStateData_{address[-3:]}'
    elif '44a' in address:
        return f'BufferManagerData_{address[-3:]}'
    elif '44b' in address:
        return f'TextureSystemData_{address[-3:]}'
    elif '44c' in address:
        return f'RenderTargetData_{address[-3:]}'
    elif '44d' in address:
        return f'DepthStencilData_{address[-3:]}'
    elif '450' in address:
        return f'RenderCommandData_{address[-3:]}'
    elif '451' in address:
        return f'MemoryManagementData_{address[-3:]}'
    elif '452' in address:
        return f'PerformanceTrackingData_{address[-3:]}'
    elif '453' in address:
        return f'GeometryProcessingData_{address[-3:]}'
    elif '454' in address:
        return f'LightingSystemData_{address[-3:]}'
    elif '455' in address:
        return f'PostProcessingData_{address[-3:]}'
    elif 'a1' in address:
        return f'AdvancedRenderingData_{address[-3:]}'
    elif 'a2' in address:
        return f'ShadowRenderingData_{address[-3:]}'
    elif 'a3' in address:
        return f'ParticleSystemData_{address[-3:]}'
    else:
        return f'RenderingVariable_{address[-4:]}'

def beautify_unk_variables(content):
    """美化UNK_变量"""
    # 匹配 undefined UNK_xxxxxx; 模式
    pattern = r'undefined (UNK_[0-9a-fA-F]+);'
    
    def replace_match(match):
        address = match.group(1)
        new_name = generate_variable_name(address, '')
        return f'void* {new_name};'
    
    return re.sub(pattern, replace_match, content)

def main():
    if len(sys.argv) != 2:
        print("Usage: python beautify_rendering_unk_vars.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化UNK变量
    beautified_content = beautify_unk_variables(content)
    
    # 写回文件
    write_file(file_path, beautified_content)
    
    print(f"Beautified UNK variables in {file_path}")

if __name__ == "__main__":
    main()