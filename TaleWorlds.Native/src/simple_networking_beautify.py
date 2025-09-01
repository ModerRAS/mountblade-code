#!/usr/bin/env python3
"""
简化版网络模块美化脚本
只美化关键变量和函数名
"""

import re

def simple_beautify():
    """简化版美化"""
    with open('05_networking.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 基本变量重命名
    replacements = [
        (r'\bunaff_R14\b', 'resourceManager'),
        (r'\bunaff_RDI\b', 'connectionHandle'),
        (r'\bnetworkConnectionHandle\b', 'connectionContext'),
        (r'\bpnetworkPointer2\b', 'networkResourcePointer'),
        (r'\bnetworkStatus4\b', 'resourceCleanupStatus'),
        (r'\buVar6\b', 'networkStatusFlags'),
        (r'\btertiaryNetworkFlag\b', 'connectionValidationFlag'),
        (r'\bnetworkPointer1\b', 'networkContextData'),
        (r'\bnetworkPointer5\b', 'networkDataPointer'),
        (r'\bpnetworkHandle7\b', 'networkHandlePointer'),
    ]
    
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    with open('05_networking.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("简化版美化完成")

if __name__ == "__main__":
    simple_beautify()