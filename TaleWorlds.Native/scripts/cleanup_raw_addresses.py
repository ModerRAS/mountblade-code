#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
清理原始地址标记的脚本
功能：
1. 查找所有包含原始_DAT_和_UNK_地址的文件
2. 为这些文件添加全局常量头文件
3. 替换原始地址为有意义的宏定义
"""

import os
import re
import glob
from pathlib import Path

def find_files_with_raw_addresses(root_dir):
    """查找包含原始地址的文件"""
    raw_address_pattern = r'_DAT_[0-9a-f]|_UNK_[0-9a-f]'
    files_with_raw_addresses = []
    
    for file_path in glob.glob(os.path.join(root_dir, "**", "*.c"), recursive=True):
        if "original" in file_path:
            continue
            
        try:
            with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
                if re.search(raw_address_pattern, content):
                    files_with_raw_addresses.append(file_path)
        except Exception as e:
            print(f"读取文件错误 {file_path}: {e}")
    
    return files_with_raw_addresses

def add_include_if_needed(file_path, include_line):
    """为文件添加头文件包含"""
    try:
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        
        # 检查是否已经包含
        if "global_constants.h" in content:
            return False
        
        # 找到第一个include之后的位置
        lines = content.split('\n')
        insert_index = -1
        
        for i, line in enumerate(lines):
            if line.strip().startswith('#include'):
                insert_index = i + 1
            elif line.strip() and not line.strip().startswith('#include'):
                break
        
        if insert_index >= 0:
            lines.insert(insert_index, include_line)
            new_content = '\n'.join(lines)
            
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(new_content)
            return True
    
    except Exception as e:
        print(f"处理文件错误 {file_path}: {e}")
    
    return False

def replace_raw_addresses(file_path):
    """替换原始地址"""
    try:
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        
        original_content = content
        
        # 替换常见的原始地址
        replacements = [
            # 安全cookie
            (r'_DAT_180bf00a8', 'GET_SECURITY_COOKIE()'),
            
            # 系统控制块相关
            (r'_DAT_180be12f0', 'SYSTEM_MAIN_CONTROL_BLOCK'),
            (r'\*\(uint64_t \*\)\(_DAT_180be12f0 \+ 0x1a0\)', 'GET_SYSTEM_MEMORY_ALLOCATOR()'),
            (r'\*\(byte \*\)\(_DAT_180be12f0 \+ 0x10\)', '((uint8_t*)SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_CONTROL_FLAG_OFFSET)'),
            
            # 系统状态管理
            (r'_DAT_180c8a9b0', 'SYSTEM_DATA_MANAGER_A'),
            (r'_DAT_180c8a9a8', 'SYSTEM_DATA_MANAGER_B'),
            (r'_DAT_180c86920', 'SYSTEM_STATE_MANAGER'),
            
            # 系统计数器
            (r'_DAT_180c8ed60', 'SYSTEM_FILE_COUNTER_ADDR'),
            (r'_DAT_180c8ed64', 'SYSTEM_HANDLE_COUNTER_ADDR'),
            
            # 系统对象管理
            (r'_UNK_180957f70', 'SYSTEM_OBJECT_MANAGER_ADDR'),
            
            # 数据管理器状态访问
            (r'\*\(int \*\)\(_DAT_180c8a9b0 \+ 0x3a8\)', '((int32_t*)(SYSTEM_DATA_MANAGER_A + SYSTEM_STATE_OFFSET))'),
        ]
        
        for pattern, replacement in replacements:
            content = re.sub(pattern, replacement, content)
        
        # 如果内容有变化，则写回文件
        if content != original_content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            return True
    
    except Exception as e:
        print(f"替换地址错误 {file_path}: {e}")
    
    return False

def main():
    """主函数"""
    root_dir = "/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native"
    
    print("开始清理原始地址标记...")
    
    # 查找包含原始地址的文件
    files_with_raw_addresses = find_files_with_raw_addresses(root_dir)
    print(f"找到 {len(files_with_raw_addresses)} 个包含原始地址的文件")
    
    # 处理每个文件
    processed_files = 0
    for file_path in files_with_raw_addresses:
        print(f"处理文件: {file_path}")
        
        # 添加头文件包含
        relative_path = os.path.relpath(file_path, root_dir)
        include_level = "../" * (relative_path.count('/') - 1)
        include_line = f'#include "{include_level}include/global_constants.h"'
        
        if add_include_if_needed(file_path, include_line):
            print(f"  添加头文件包含")
        
        # 替换原始地址
        if replace_raw_addresses(file_path):
            print(f"  替换原始地址")
            processed_files += 1
    
    print(f"处理完成！共处理 {processed_files} 个文件")

if __name__ == "__main__":
    main()