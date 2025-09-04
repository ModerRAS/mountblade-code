#!/usr/bin/env python3
"""
批量美化99_unmatched_functions.c文件中的LAB_标签
"""

import re
import sys
from label_mappings import create_label_mappings

def process_lab_labels(filename):
    """处理文件中的LAB_标签"""
    
    print(f"开始处理文件: {filename}")
    
    # 读取文件
    with open(filename, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 获取标签映射
    label_mappings = create_label_mappings()
    
    # 统计处理数量
    goto_count = 0
    label_count = 0
    
    # 处理goto语句
    for old_label, new_label in label_mappings.items():
        # 替换goto语句
        old_pattern = rf'goto {old_label}'
        new_pattern = f'goto {new_label}'
        
        if old_pattern in content:
            content = content.replace(old_pattern, new_pattern)
            goto_count += 1
            print(f"替换goto: {old_label} -> {new_label}")
        
        # 替换标签定义
        old_def_pattern = rf'{old_label}:'
        new_def_pattern = f'{new_label}:'
        
        if old_def_pattern in content:
            content = content.replace(old_def_pattern, new_def_pattern)
            label_count += 1
            print(f"替换标签定义: {old_label} -> {new_label}")
    
    # 写回文件
    with open(filename, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"处理完成:")
    print(f"  - 替换了 {goto_count} 个goto语句")
    print(f"  - 替换了 {label_count} 个标签定义")
    print(f"  - 总共处理了 {len(label_mappings)} 个标签映射")

if __name__ == '__main__':
    filename = '/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c'
    process_lab_labels(filename)