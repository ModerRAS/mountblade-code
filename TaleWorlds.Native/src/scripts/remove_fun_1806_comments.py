#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
删除04_ui_system.c文件中的FUN_1806注释行
只删除注释行，保留函数调用和函数定义
"""

import re

def remove_fun_1806_comments(file_path):
    """
    删除文件中包含FUN_1806的注释行，但保留函数调用和函数定义
    """
    with open(file_path, 'r', encoding='utf-8') as f:
        lines = f.readlines()
    
    deleted_count = 0
    new_lines = []
    
    for line in lines:
        # 跳过空行
        stripped_line = line.strip()
        
        # 检查是否是需要删除的注释行
        should_delete = False
        
        # 情况1：以 *FUN_1806 开头的行
        if stripped_line.startswith('*FUN_1806'):
            should_delete = True
        
        # 情况2：以 // 开头且包含 FUN_1806 的行
        elif stripped_line.startswith('//') and 'FUN_1806' in stripped_line:
            # 排除函数定义
            if not any(pattern in stripped_line for pattern in [
                'void FUN_1806', 'int FUN_1806', 'longlong FUN_1806', 
                'ulonglong FUN_1806', 'uint FUN_1806'
            ]):
                should_delete = True
        
        # 情况3：包含 *FUN_1806 的注释行
        elif '*FUN_1806' in line and not 'FUN_1806(' in line:
            should_delete = True
        
        if should_delete:
            deleted_count += 1
            print(f"删除行: {line.strip()}")
        else:
            new_lines.append(line)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.writelines(new_lines)
    
    return deleted_count

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
    
    print("开始删除FUN_1806注释行...")
    deleted_count = remove_fun_1806_comments(file_path)
    print(f"删除完成！共删除了 {deleted_count} 行")
    
    # 统计剩余的FUN_1806行
    with open(file_path, 'r', encoding='utf-8') as f:
        remaining_lines = [line for line in f if 'FUN_1806' in line]
    
    print(f"剩余包含FUN_1806的行数: {len(remaining_lines)}")
    
    if len(remaining_lines) > 0:
        print("\n剩余的FUN_1806行（应该是函数调用）:")
        for i, line in enumerate(remaining_lines[:10]):  # 显示前10行
            print(f"{i+1}: {line.strip()}")
        if len(remaining_lines) > 10:
            print(f"... 还有 {len(remaining_lines) - 10} 行")