#!/usr/bin/env python3
"""
更新01_initialization.c中的函数注释
将注释中的FUN_函数名更新为已美化的函数名
"""

import re

def update_function_comments():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    # 读取文件
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 更新函数注释映射
    comment_updates = {
        'FUN_18006da50': 'ProcessSystemResourceDataC',
        'FUN_18006dc10': 'CleanupSystemResourceDataB', 
        'FUN_18006e5d0': 'CleanupSystemResourceArray',
        'FUN_18006e640': 'ValidateSystemResourceArray',
        'FUN_18006edf0': 'InitializeSystemResourceManagerEx',
        'FUN_18006ef80': 'CleanupSystemResourceArrayEx',
        'FUN_18006efc0': 'InitializeSystemResourceManagerEx2'
    }
    
    # 更新注释
    for old_name, new_name in comment_updates.items():
        # 更新函数声明注释
        content = re.sub(
            rf'// 函数:\s*void\s+{old_name}',
            f'// 函数: void {new_name}',
            content
        )
    
    # 写入文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("函数注释更新完成")

if __name__ == "__main__":
    update_function_comments()