#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量删除04_ui_system.c文件中的FUN_1806注释行
"""

def remove_all_fun_1806_comments():
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
    
    # 读取文件
    with open(file_path, 'r', encoding='utf-8') as f:
        lines = f.readlines()
    
    deleted_count = 0
    new_lines = []
    
    # 需要删除的行模式
    patterns_to_delete = [
        "*FUN_1806",  # 以 *FUN_1806 开头的行
        "//.*FUN_1806",  # 以 // 开头且包含 FUN_1806 的行
    ]
    
    for line_num, line in enumerate(lines, 1):
        should_delete = False
        
        # 检查是否匹配删除模式
        for pattern in patterns_to_delete:
            if re.search(pattern, line):
                # 排除函数定义和函数调用
                if not re.search(r'FUN_1806[0-9a-fA-F]*\(', line):
                    should_delete = True
                    break
        
        if should_delete:
            deleted_count += 1
            print(f"删除第 {line_num} 行: {line.strip()}")
        else:
            new_lines.append(line)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.writelines(new_lines)
    
    print(f"\n删除完成！共删除了 {deleted_count} 行")
    
    # 统计剩余的FUN_1806行
    remaining_count = 0
    with open(file_path, 'r', encoding='utf-8') as f:
        for line in f:
            if 'FUN_1806' in line:
                remaining_count += 1
    
    print(f"剩余包含FUN_1806的行数: {remaining_count}")
    
    return deleted_count

if __name__ == "__main__":
    import re
    remove_all_fun_1806_comments()