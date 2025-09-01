#!/usr/bin/env python3
import re

def clean_duplicate_declarations(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 匹配重复的函数声明模式
    pattern = r'(\s+)void\s+(\w+)\s*\(\s*\)\s*;\s*\n\s*/\*\*.*?\*/\s*\n\s*void\s+\2\s*\(\s*\)\s*;'
    
    # 替换为只保留带注释的函数定义
    replacement = r'\1/**\n * @brief \2\n * \n * 该函数负责\2相关的操作\n */\nvoid \2(void);'
    
    # 执行替换
    cleaned_content = re.sub(pattern, replacement, content, flags=re.DOTALL)
    
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(cleaned_content)

if __name__ == "__main__":
    clean_duplicate_declarations("TaleWorlds.Native/src/06_utilities.c")