#!/usr/bin/env python3
"""
清理06_utilities.c文件中的原始函数名注释
"""

import re

def clean_original_function_names():
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 删除包含原始函数名的行
    pattern = r'.*@remark 原始函数名：Unwind_[0-9a-f]*.*\n'
    content = re.sub(pattern, '', content)
    
    # 删除单独的原始函数名行
    pattern2 = r'.*原始函数名：Unwind_[0-9a-f]*.*\n'
    content = re.sub(pattern2, '', content)
    
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("已清理原始函数名注释")

if __name__ == "__main__":
    clean_original_function_names()