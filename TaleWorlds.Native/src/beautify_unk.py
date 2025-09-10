#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量美化UNK_变量脚本
将 UNK_180957858 转换为 (void*)0x180957858
"""

import re

def beautify_unk_variables(file_path):
    """美化文件中的UNK_变量"""
    
    # 读取文件
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 使用正则表达式替换UNK_变量
    # 匹配模式：UNK_18095后跟4个十六进制字符
    pattern = r'UNK_18095([0-9a-f]{4})'
    replacement = r'(void*)0x18095\1'
    
    # 执行替换
    beautified_content = re.sub(pattern, replacement, content)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(beautified_content)
    
    print(f"UNK_变量美化完成: {file_path}")

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
    beautify_unk_variables(file_path)