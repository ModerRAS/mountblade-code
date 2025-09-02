#!/usr/bin/env python3

# 临时脚本：清理04_ui_system.c文件中的"// 函数: undefined"注释

import re

def clean_ui_system_file():
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
    
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 删除所有的"// 函数: undefined"注释行
    cleaned_content = re.sub(r'// 函数: undefined.*\n', '', content)
    
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(cleaned_content)
    
    print("已清理04_ui_system.c文件中的undefined注释")

if __name__ == "__main__":
    clean_ui_system_file()