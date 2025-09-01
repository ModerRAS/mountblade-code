#!/usr/bin/env python3
import re

def cleanup_duplicate_functions():
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 匹配重复的函数声明模式
    pattern = r'(\n\s+)void\s+(\w+)\s*\(\s*\);\s*\n(/\*\*.*?\*/\s*\n\s*void\s+\2\s*\(\s*\);)'
    
    def replace_duplicate(match):
        # 只保留带注释的版本
        return match.group(1) + match.group(3)
    
    # 替换所有重复的函数声明
    content = re.sub(pattern, replace_duplicate, content, flags=re.DOTALL)
    
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("清理重复函数声明完成")

if __name__ == "__main__":
    cleanup_duplicate_functions()