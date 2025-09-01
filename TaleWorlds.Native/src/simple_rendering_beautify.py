#!/usr/bin/env python3
"""
简单的渲染系统函数美化脚本
"""

import re

def read_file(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(filepath, content):
    with open(filepath, 'w', encoding='utf-8') as f:
        f.write(content)

def simple_beautify(content):
    """简单的美化函数"""
    
    # 基本函数映射
    simple_mappings = {
        'FUN_180442720': 'CreateSamplerState',
        'FUN_180442950': 'CreateDepthStencilBuffer',
        'FUN_1804429f0': 'CreateRenderPass',
        'FUN_180442b30': 'SetupVertexLayout',
        'FUN_180442d10': 'SetPrimitiveTopology',
        'FUN_180442e00': 'CreateRasterizerState',
        'FUN_180443000': 'CreateDepthStencilState',
        'FUN_180443080': 'CreateBlendState',
    }
    
    # 应用重命名
    for old_name, new_name in simple_mappings.items():
        # 替换函数声明
        content = re.sub(r'undefined ' + re.escape(old_name) + r';', 
                        'undefined ' + new_name + ';', content)
        # 替换函数调用
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    
    return content

def main():
    filepath = '/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c'
    
    print("开始简单美化...")
    content = read_file(filepath)
    content = simple_beautify(content)
    write_file(filepath, content)
    print("简单美化完成！")

if __name__ == '__main__':
    main()