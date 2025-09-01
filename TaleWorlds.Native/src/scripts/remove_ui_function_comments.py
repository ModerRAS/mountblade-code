#!/usr/bin/env python3
import re

def remove_function_comments(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 删除"// 函数: void FUN_"开头的注释行
    pattern = r'^// 函数: void FUN_.*$\n'
    content = re.sub(pattern, '', content, flags=re.MULTILINE)
    
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

if __name__ == '__main__':
    remove_function_comments('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c')