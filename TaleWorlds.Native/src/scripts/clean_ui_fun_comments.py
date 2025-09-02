#!/usr/bin/env python3
import re

def clean_fun_comments(file_path):
    """清理文件中的FUN_1806注释行"""
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 统计删除的行数
    lines = content.split('\n')
    cleaned_lines = []
    deleted_count = 0
    
    for line in lines:
        if '*FUN_1806' in line and '：' in line:
            deleted_count += 1
            continue
        cleaned_lines.append(line)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write('\n'.join(cleaned_lines))
    
    return deleted_count

if __name__ == '__main__':
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c'
    deleted = clean_fun_comments(file_path)
    print(f"已删除 {deleted} 行FUN_1806注释")