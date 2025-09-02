#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
UI系统UNK变量批量美化脚本
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
    
    # UI系统UNK变量映射表（按顺序）
    replacements = [
        ('UNK_180958cb0', 'UISystemUnknownData21'),
        ('UNK_180958d20', 'UISystemUnknownData22'),
        ('UNK_000003b8', 'UISystemUnknownData23'),
        ('UNK_000003c0', 'UISystemUnknownData24'),
        ('UNK_180958d90', 'UISystemUnknownData25'),
        ('UNK_180958e20', 'UISystemUnknownData26'),
        ('UNK_180958fb0', 'UISystemUnknownData27'),
        ('UNK_180770640', 'UISystemUnknownData28'),
        ('UNK_180958ec0', 'UISystemUnknownData29'),
        ('UNK_180958f10', 'UISystemUnknownData30'),
        ('UNK_180958f68', 'UISystemUnknownData31'),
        ('UNK_1809590c0', 'UISystemUnknownData32'),
        ('UNK_180747d60', 'UISystemUnknownData33'),
        ('UNK_1807868c0', 'UISystemUnknownData34'),
        ('UNK_180786c90', 'UISystemUnknownData35'),
        ('UNK_180788fc0', 'UISystemUnknownData36'),
    ]
    
    # 执行替换
    for old_name, new_name in replacements:
        # 使用正则表达式确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("使用方法: python batch_replace_ui_unk_vars.py <文件路径>")
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