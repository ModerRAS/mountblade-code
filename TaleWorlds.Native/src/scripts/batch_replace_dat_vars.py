#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量替换99_unmatched_functions.c中的DAT_变量
"""

import re

def replace_dat_variables():
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    
    # 读取文件
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义替换映射
    replacements = {
        'DAT_180a00ef8': 'SystemConfigMetadata',
        'DAT_180c8aa50': 'SystemStatusTable',
        'DAT_180a02638': 'SystemStateData',
        'DAT_180a0263c': 'SystemStateFlags',
        'DAT_180a02640': 'SystemStateContext',
        'DAT_180a02644': 'SystemStateProcessor',
        'DAT_180a02648': 'SystemStateQueue',
        'DAT_180a0264c': 'SystemStateHandler',
        'DAT_180a06430': 'SystemStateController',
        'DAT_180c8a9b8': 'MemoryAllocationTable',
        'DAT_180a02fe8': 'MemoryPoolData',
        'DAT_180a035c0': 'MemoryBufferPointer',
        'DAT_180a036e0': 'MemoryAllocationStatus',
        'DAT_180c86970': 'MemoryManagementData',
        'DAT_180a03870': 'MemoryStackPointer',
        'DAT_180a038d8': 'MemoryHeapData',
        'DAT_180a035d0': 'MemoryAllocationTracker',
        'DAT_180c86978': 'MemoryPageTable',
        'DAT_180c8695c': 'MemorySegmentData',
        'DAT_180c86968': 'MemoryAllocationMap',
        'DAT_180a03e88': 'SystemDataTable',
        'DAT_180a03ec0': 'SystemDataBuffer',
        'DAT_180a03f00': 'SystemDataContext',
        'DAT_180a03f58': 'SystemDataProcessor',
        'DAT_18098d7b0': 'SystemDataController',
        'DAT_180a00320': 'SystemDataManager',
        'DAT_180c8aa40': 'NetworkConnectionTable',
    }
    
    # 执行替换
    replaced_count = 0
    for old_name, new_name in replacements.items():
        pattern = r'undefined ' + re.escape(old_name) + r';'
        new_pattern = f'void* {new_name};'
        
        if re.search(pattern, content):
            content = re.sub(pattern, new_pattern, content)
            print(f"替换: {old_name} -> {new_name}")
            replaced_count += 1
    
    # 写回文件
    if replaced_count > 0:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"总共替换了 {replaced_count} 个变量")
    else:
        print("没有找到需要替换的变量")

if __name__ == "__main__":
    replace_dat_variables()