#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量重命名UI系统中的UNK_变量
根据上下文分析，这些变量主要位于渲染系统数据表区域
"""

import re
import sys

def rename_ui_unk_variables(content):
    """重命名UI系统中的UNK_变量"""
    
    # UI系统渲染数据表区域的变量映射
    # 根据上下文分析，这些变量可能用于渲染状态管理
    variable_mappings = {
        'UNK_18094d880': 'UISystemRenderStateFlags',
        'UNK_18094da20': 'UISystemRenderBufferPointer',
        'UNK_18094db40': 'UISystemRenderTextureHandle',
        'UNK_18094db90': 'UISystemRenderShaderProgram',
        'UNK_18094dba0': 'UISystemRenderVertexPointer',
        'UNK_18094d8b8': 'UISystemRenderIndexPointer',
        'UNK_18094d9d0': 'UISystemRenderUniformBuffer',
        'UNK_18094dd88': 'UISystemRenderFrameBuffer',
        'UNK_18094dee0': 'UISystemRenderDepthBuffer',
        'UNK_18094df30': 'UISystemRenderStencilBuffer',
        'UNK_18094df50': 'UISystemRenderColorBuffer',
        'UNK_18094dbe8': 'UISystemRenderViewportWidth',
        'UNK_18094dd38': 'UISystemRenderViewportHeight',
        'UNK_18094e138': 'UISystemRenderProjectionMatrix',
        'UNK_18094e280': 'UISystemRenderModelMatrix',
        'UNK_18094e2d0': 'UISystemRenderViewMatrix',
        'UNK_18094e2f0': 'UISystemRenderTransformMatrix',
        'UNK_18094dfa8': 'UISystemRenderNormalMatrix',
        'UNK_18094e0e8': 'UISystemRenderClipPlane',
        'UNK_1806f0f60': 'UISystemRenderLightPosition',
        'UNK_1806f1a70': 'UISystemRenderLightColor',
        'UNK_18094e3c0': 'UISystemRenderAmbientLight',
        'UNK_18094e3d0': 'UISystemRenderDiffuseLight',
        'UNK_18094e3e0': 'UISystemRenderSpecularLight',
        'UNK_18094e3e8': 'UISystemRenderShininess',
        'UNK_18094e3f8': 'UISystemRenderOpacity',
        'UNK_18094e408': 'UISystemRenderBlendMode',
        'UNK_18094e480': 'UISystemRenderDepthTest'
    }
    
    # 应用重命名
    for old_name, new_name in variable_mappings.items():
        # 使用正则表达式确保只匹配完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("用法: python3 batch_rename_ui_unk_vars.py <文件路径>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    try:
        # 读取文件
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 应用重命名
        modified_content = rename_ui_unk_variables(content)
        
        # 写回文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(modified_content)
        
        print(f"成功重命名 {file_path} 中的UNK_变量")
        
    except Exception as e:
        print(f"处理文件时发生错误: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()