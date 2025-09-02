#!/usr/bin/env python3
"""
变量名美化脚本
用于将00_data_definitions.h中的param_1等变量名替换为语义化名称
"""

import re

def rename_variables():
    """重命名变量"""
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 替换规则
    replacements = [
        (r'param_1', 'EngineContext'),
        (r'param_2', 'SecondaryParameter'),
        (r'param_3', 'TertiaryParameter'),
        (r'local_[0-9a-f]{8}', 'LocalVariable'),
        (r'var_[0-9a-f]{8}', 'Variable'),
        (r'unk_[0-9a-f]{8}', 'UnknownData'),
    ]
    
    # 应用替换
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量名替换完成")

if __name__ == "__main__":
    rename_variables()