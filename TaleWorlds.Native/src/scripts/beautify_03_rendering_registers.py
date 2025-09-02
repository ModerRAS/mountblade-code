#!/usr/bin/env python3
"""
美化03_rendering.c文件中的逆向工程生成代码
替换unaff_变量名和FUN_函数名为语义化名称
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

def beautify_rendering_code(content):
    """美化渲染代码中的逆向工程生成名称"""
    
    # 替换unaff_寄存器变量为语义化名称
    register_replacements = {
        'unaff_RAX': 'RegisterRAX',
        'unaff_RBX': 'RegisterRBX',
        'unaff_RCX': 'RegisterRCX',
        'unaff_RDX': 'RegisterRDX',
        'unaff_RSI': 'RegisterRSI',
        'unaff_RDI': 'RegisterRDI',
        'unaff_RBP': 'RegisterRBP',
        'unaff_RSP': 'RegisterRSP',
        'unaff_R8': 'RegisterR8',
        'unaff_R9': 'RegisterR9',
        'unaff_R10': 'RegisterR10',
        'unaff_R11': 'RegisterR11',
        'unaff_R12': 'RegisterR12',
        'unaff_R13': 'RegisterR13',
        'unaff_R14': 'RegisterR14',
        'unaff_R15': 'RegisterR15',
        'unaff_XMM0': 'RegisterXMM0',
        'unaff_XMM1': 'RegisterXMM1',
        'unaff_XMM2': 'RegisterXMM2',
        'unaff_XMM3': 'RegisterXMM3',
        'unaff_XMM4': 'RegisterXMM4',
        'unaff_XMM5': 'RegisterXMM5',
        'unaff_XMM6': 'RegisterXMM6',
        'unaff_XMM7': 'RegisterXMM7',
        'unaff_XMM8': 'RegisterXMM8',
        'unaff_XMM9': 'RegisterXMM9',
        'unaff_XMM10': 'RegisterXMM10',
        'unaff_XMM11': 'RegisterXMM11',
        'unaff_XMM12': 'RegisterXMM12',
        'unaff_XMM13': 'RegisterXMM13',
        'unaff_XMM14': 'RegisterXMM14',
        'unaff_XMM15': 'RegisterXMM15',
    }
    
    # 替换FUN_函数名为语义化名称（基于已有模式）
    function_replacements = {
        'FUN_180454070': 'ProcessRenderGeometryData',
        'FUN_1804541a0': 'ValidateRenderBufferFormat',
        'FUN_180454230': 'OptimizeRenderMemoryUsage',
        'FUN_180454300': 'UpdateRenderTextureData',
        'FUN_180435860': 'InitializeRenderPipeline',
        'FUN_1804359d0': 'CreateRenderCommandBuffer',
        'FUN_180435a80': 'ExecuteRenderCommandList',
        'FUN_180435d10': 'FlushRenderCommandQueue',
        'FUN_180435e20': 'ResetRenderCommandBuffer',
        'FUN_180360210': 'ProcessRenderVertexData',
        'FUN_180380510': 'ProcessRenderIndexData',
        'FUN_1803805e0': 'ValidateRenderMeshData',
        'FUN_180380430': 'OptimizeRenderMeshTopology',
        'FUN_1803802e0': 'CalculateRenderBoundingBox',
        'FUN_1803800d0': 'UpdateRenderBoundingSphere',
        'FUN_180380200': 'ProcessRenderMaterialData',
        'FUN_18038a340': 'InitializeRenderTexture',
        'FUN_18038a630': 'CreateRenderTextureView',
        'FUN_1804069d0': 'UpdateRenderSamplerState',
        'FUN_180407960': 'ProcessRenderLightData',
    }
    
    # 应用寄存器变量替换
    for old_name, new_name in register_replacements.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    # 应用函数名替换
    for old_name, new_name in function_replacements.items():
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c'
    
    print("开始美化03_rendering.c文件...")
    
    # 读取文件
    content = read_file(file_path)
    if content is None:
        return 1
    
    # 美化代码
    beautified_content = beautify_rendering_code(content)
    
    # 写入文件
    if write_file(file_path, beautified_content):
        print("文件美化完成！")
        return 0
    else:
        return 1

if __name__ == "__main__":
    sys.exit(main())