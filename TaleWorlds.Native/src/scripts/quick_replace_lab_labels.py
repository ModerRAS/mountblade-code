#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
快速替换02_core_engine.c中的LAB_标签名
"""

def replace_lab_labels():
    """替换LAB_标签名"""
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 常见LAB_标签替换
    lab_replacements = {
        'LAB_180054d28': 'ProcessDataBufferLoop',
        'LAB_180054d57': 'ProcessCharacterDataComplete',
        'LAB_180043e47': 'ValidateNodeSuccess',
        'LAB_180044db8': 'SystemInfoStackOverflow',
        'LAB_180044faf': 'MemoryAllocatorCheck',
        'LAB_180044ee3': 'OperationResultCheck',
        'LAB_180044f8f': 'MemoryAllocatorComplete'
    }
    
    # 执行替换
    for old_label, new_label in lab_replacements.items():
        # 替换标签定义
        content = content.replace(f'{old_label}:', f'{new_label}:')
        # 替换goto语句
        content = content.replace(f'goto {old_label}', f'goto {new_label}')
        print(f"替换: {old_label} -> {new_label}")
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("LAB_标签替换完成!")

if __name__ == '__main__':
    replace_lab_labels()