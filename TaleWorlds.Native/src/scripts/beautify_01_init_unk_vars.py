#!/usr/bin/env python3
"""
美化01_initialization.c文件中的UNK_变量
将UNK_变量重命名为有意义的名称
"""

import re

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def rename_unk_variables(content):
    """重命名UNK_变量"""
    
    # UNK_变量重命名映射
    # 基于变量的用途和上下文进行命名
    replacements = {
        'UNK_1809fec50': 'SystemContextManagerConfig',
        'UNK_1809fed10': 'SystemContextManagerData',
        'UNK_1809fed78': 'SystemContextManagerStatus',
        'UNK_1809fed40': 'SystemContextManagerControl',
        'UNK_1809feda8': 'SystemResourceDataTable',
        'UNK_1809feec8': 'SystemMemoryAllocationTable',
        'UNK_1809feeb8': 'SystemMemoryReferenceTable'
    }
    
    # 执行替换
    for old_name, new_name in replacements.items():
        content = content.replace(f'&{old_name}', f'&{new_name}')
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    # 读取文件
    content = read_file(file_path)
    
    # 重命名UNK_变量
    content = rename_unk_variables(content)
    
    # 写入文件
    write_file(file_path, content)
    
    print("UNK_变量重命名完成")

if __name__ == "__main__":
    main()