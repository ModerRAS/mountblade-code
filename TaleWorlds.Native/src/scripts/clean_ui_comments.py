#!/usr/bin/env python3
import re
import sys

def clean_ui_comments():
    """清理UI系统文件中的FUN_函数注释"""
    with open('04_ui_system.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 清理FUN_函数注释
    content = re.sub(r'// 函数: void FUN_1806[0-9a-f]+.*\n', '', content)
    
    with open('04_ui_system.c', 'w', encoding='utf-8') as f:
        f.write(content)

if __name__ == '__main__':
    clean_ui_comments()