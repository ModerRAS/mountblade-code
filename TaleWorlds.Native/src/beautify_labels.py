#!/usr/bin/env python3
"""
批量美化02_core_engine.c文件中的LAB_标签
"""

import re
import sys

def beautify_lab_labels(file_path):
    """美化文件中的LAB_标签"""
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义标签替换映射
    label_replacements = {
        'LAB_180048f62': 'StringValidationComplete',
        'LAB_18005122d': 'CharacterProcessingComplete',
        'LAB_180051f8b': 'BufferProcessingStart',
        'LAB_180051fc9': 'BufferValidationComplete',
        'LAB_180058e00': 'SystemContextLoopContinue',
        'LAB_180058e20': 'SystemContextValidationStart',
        'LAB_180058e74': 'SystemContextValidationComplete',
        'LAB_180048e00': 'SystemContextLoopContinue',
        'LAB_180048e20': 'SystemContextValidationStart',
        'LAB_180048e74': 'SystemContextValidationComplete',
        'LAB_180048db7': 'StringComparisonStart',
        'LAB_180048dba': 'StringComparisonLoop',
        'LAB_180048dd7': 'StringComparisonComplete',
        'LAB_180047f2c': 'TempBufferProcessingComplete',
        'LAB_180047f93': 'EventInitializationComplete'
    }
    
    # 应用替换
    for old_label, new_label in label_replacements.items():
        # 替换goto语句
        content = re.sub(
            rf'goto {old_label};',
            f'goto {new_label}; // 原始标签：{old_label}',
            content
        )
        
        # 替换标签定义
        content = re.sub(
            rf'^{old_label}:',
            f'{new_label}: // 原始标签：{old_label}，现已重命名为{new_label}',
            content,
            flags=re.MULTILINE
        )
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"已成功美化 {len(label_replacements)} 个LAB_标签")

if __name__ == '__main__':
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c'
    beautify_lab_labels(file_path)