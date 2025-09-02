#!/usr/bin/env python3
"""
处理networking.c文件中剩余的LabelLocation标签
"""

import re
import os

def process_remaining_labels():
    """处理剩余的LabelLocation标签"""
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    # 读取文件内容
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找所有LabelLocation标签
    label_location_pattern = r'LabelLocation([0-9a-fA-F]+)'
    matches = re.findall(label_location_pattern, content)
    
    if not matches:
        print("没有找到LabelLocation标签")
        return
    
    print(f"找到 {len(set(matches))} 个唯一的LabelLocation标签")
    
    # 创建替换映射
    replacement_map = {}
    for match in set(matches):
        old_label = f'LabelLocation{match}'
        
        # 根据地址确定语义化名称
        if match == '180847c35':
            new_label = 'NetworkDataProcessingExit'
        elif match == '180847bfb':
            new_label = 'NetworkValidationFlagSet'
        else:
            # 默认命名规则
            if match.startswith('180847'):
                new_label = f'NetworkDataProcessing_{match[6:]}'
            elif match.startswith('180848'):
                new_label = f'NetworkTransfer_{match[6:]}'
            elif match.startswith('180849'):
                new_label = f'NetworkValidation_{match[6:]}'
            else:
                new_label = f'NetworkControl_{match[6:]}'
        
        replacement_map[old_label] = new_label
        print(f"  {old_label} → {new_label}")
    
    # 执行替换
    for old_label, new_label in replacement_map.items():
        content = content.replace(old_label, new_label)
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"成功替换 {len(replacement_map)} 个LabelLocation标签")

if __name__ == '__main__':
    process_remaining_labels()