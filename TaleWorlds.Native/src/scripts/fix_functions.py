#!/usr/bin/env python3
"""
批量修复03_rendering.c文件中的函数定义
删除以数字开头、后跟括号的函数定义行
"""

def fix_function_definitions():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c'
    
    # 读取文件
    with open(file_path, 'r', encoding='utf-8') as f:
        lines = f.readlines()
    
    # 处理每一行
    fixed_lines = []
    for line in lines:
        # 跳过以数字开头、后跟括号的行
        if line.strip().match(r'^\d+\([^)]*\)$'):
            continue
        fixed_lines.append(line)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.writelines(fixed_lines)
    
    print(f"修复完成，处理了 {len(lines) - len(fixed_lines)} 个问题行")

if __name__ == '__main__':
    fix_function_definitions()