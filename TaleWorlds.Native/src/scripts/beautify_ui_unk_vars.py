#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
UI系统UNK变量美化脚本
用于批量替换04_ui_system.c文件中的UNK_变量为语义化名称
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

def replace_unk_variables(content):
    """替换UNK_变量为语义化名称"""
    
    # UI系统UNK变量映射表
    replacements = {
        # 基础UI系统变量
        'UNK_180958a10': 'UISystemUnknownData8',
        'UNK_180958a50': 'UISystemResourceManagerData',
        'UNK_18076804b': 'UISystemStatusFlag1',
        'UNK_180958b20': 'UISystemRenderContextData',
        'UNK_1dd01c85c': 'UISystemByteFlag',
        'UNK_180958ac0': 'UISystemEventDispatcherData',
        'UNK_180958b00': 'UISystemInputHandlerData',
        'UNK_180958b10': 'UISystemAnimationData',
        'UNK_180958ba0': 'UISystemLayoutData',
        'UNK_180958c10': 'UISystemStyleData',
        'UNK_1807693c0': 'UISystemFontData',
        'UNK_180958bf0': 'UISystemTextureData',
        'UNK_180958c88': 'UISystemShaderData',
        'UNK_180958cb0': 'UISystemVertexData',
        'UNK_180958d20': 'UISystemIndexData',
        'UNK_000003b8': 'UISystemMemoryOffset1',
        'UNK_000003c0': 'UISystemMemoryOffset2',
        'UNK_180958d90': 'UISystemWindowData',
        'UNK_180958e20': 'UISystemControlData',
        'UNK_180958fb0': 'UISystemDialogData',
    }
    
    # 执行替换
    for old_name, new_name in replacements.items():
        # 使用正则表达式确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("使用方法: python beautify_ui_unk_vars.py <文件路径>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    # 读取文件
    content = read_file(file_path)
    if content is None:
        sys.exit(1)
    
    # 替换UNK变量
    new_content = replace_unk_variables(content)
    
    # 写入文件
    if write_file(file_path, new_content):
        print(f"成功美化文件: {file_path}")
    else:
        sys.exit(1)

if __name__ == "__main__":
    main()