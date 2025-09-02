#!/usr/bin/env python3
"""
删除04_ui_system.c文件中的重复变量声明
"""

def remove_duplicate_declarations():
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
    output_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c.tmp"
    
    with open(input_file, 'r', encoding='utf-8') as f:
        lines = f.readlines()
    
    # 找到重复块的开始和结束
    duplicate_start = None
    duplicate_end = None
    
    for i, line in enumerate(lines):
        if "UI系统动态函数指针变量 - 用于运行时函数调度" in line:
            if duplicate_start is None:
                duplicate_start = i
            else:
                duplicate_end = i
                break
    
    if duplicate_start is not None and duplicate_end is not None:
        # 删除重复的块
        new_lines = lines[:duplicate_start] + lines[duplicate_end:]
        
        with open(output_file, 'w', encoding='utf-8') as f:
            f.writelines(new_lines)
        
        print(f"删除了从第{duplicate_start+1}行到第{duplicate_end}行的重复声明")
        return True
    else:
        print("未找到重复的声明块")
        return False

if __name__ == "__main__":
    remove_duplicate_declarations()