#!/usr/bin/env python3
"""
美化06_utilities.c文件中的硬编码偏移量
将硬编码的偏移量替换为已定义的常量
"""

import re

def beautify_hardcoded_offsets():
    """美化硬编码偏移量"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 常见的偏移量映射
    offset_mappings = {
        'ValidatedContextPointer + 0x10': 'ValidatedContextPointer + ObjectContextValidationOffset',
        'ValidatedAdvancedPointer + 0x10': 'ValidatedAdvancedPointer + ObjectContextValidationOffset',
        'CalculatedOffset + 0x10': 'CalculatedOffset + ObjectContextValidationOffset',
        'StackLocation + 0x10': 'StackLocation + ObjectContextValidationOffset',
        'StackPointer + 0x10': 'StackPointer + ObjectContextValidationOffset',
        'OriginalRegisterValue + 0x10': 'OriginalRegisterValue + ObjectContextValidationOffset',
        'queueContext + 0x90': 'queueContext + QueueContextValidationDataOffset',
        'queueContext + 0x50': 'queueContext + QueueContextHeadPointerOffset',
    }
    
    # 应用替换
    for pattern, replacement in offset_mappings.items():
        content = re.sub(pattern, replacement, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("硬编码偏移量美化完成")

if __name__ == "__main__":
    beautify_hardcoded_offsets()