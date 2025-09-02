#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量替换Unwind函数名的脚本
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(file_path, content):
    """写入文件内容"""
    try:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def replace_unwind_functions(content):
    """替换Unwind函数名"""
    
    # Unwind函数名映射表
    unwind_mappings = {
        'Unwind_180904fe0': 'ProcessResourceCleanupValidation',
        'Unwind_180904ff0': 'ExecuteResourceValidation',
        'Unwind_180905000': 'ValidateResourceIntegrity',
        'Unwind_180905010': 'CheckResourceStatus',
        'Unwind_180905020': 'PerformResourceCleanup',
        'Unwind_180905030': 'InitializeResourceHandler',
        'Unwind_180905040': 'ExecuteResourceHandlerCleanup',
        'Unwind_180905050': 'ValidateResourceHandler',
        'Unwind_180905060': 'CheckResourceHandlerContext',
        'Unwind_180905070': 'ProcessResourceHandlerStatus',
        'Unwind_180905080': 'ValidateResourceHandlerData',
        'Unwind_180905090': 'ExecuteResourceHandlerOperations',
        'Unwind_1809050c0': 'InitializeSystemResources',
        'Unwind_1809050d0': 'ValidateSystemResources',
        'Unwind_1809050e0': 'ProcessSystemResourceOperations',
        'Unwind_1809050f0': 'ExecuteSystemResourceCleanup',
        'Unwind_180905100': 'ValidateSystemResourceIntegrity',
        'Unwind_180905110': 'PerformSystemResourceCleanup',
        'Unwind_180905120': 'ExecuteSystemResourceOperations',
        'Unwind_180905130': 'CheckSystemResourceStatus',
    }
    
    # 应用函数名替换
    for old_name, new_name in unwind_mappings.items():
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    print("开始读取 06_utilities.c 文件...")
    content = read_file(file_path)
    
    if content is None:
        print("读取文件失败，退出")
        return
    
    print("开始替换Unwind函数名...")
    beautified_content = replace_unwind_functions(content)
    
    print("写入替换后的代码...")
    if write_file(file_path, beautified_content):
        print("Unwind函数名替换完成！")
    else:
        print("写入文件失败")

if __name__ == "__main__":
    main()