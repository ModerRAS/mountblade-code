#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
美化 undefined7 变量名的脚本
将 undefined7 替换为 SystemMiscData
"""

def beautify_undefined7():
    """美化 undefined7 变量名"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    
    try:
        # 读取文件
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 替换 undefined7 为 SystemMiscData
        content = content.replace('undefined7', 'SystemMiscData')
        
        # 写回文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print("undefined7 变量名美化完成")
        
    except Exception as e:
        print(f"美化过程中出现错误: {e}")

if __name__ == "__main__":
    beautify_undefined7()