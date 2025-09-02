#!/usr/bin/env python3
"""
最终处理networking.c文件中的所有标签
"""

import re
import os

def finalize_networking_labels():
    """最终处理所有标签"""
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    # 读取文件内容
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 最终的标签替换映射
    final_replacements = {
        'LabelLocation180847c35': 'NetworkDataProcessingExit',
        'LabelLocation180847bfb': 'NetworkValidationFlagSet',
    }
    
    # 应用替换
    original_content = content
    for old_label, new_label in final_replacements.items():
        content = content.replace(old_label, new_label)
    
    # 检查是否有变化
    if content != original_content:
        # 写回文件
        with open(input_file, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print("最终标签替换完成")
        print("替换的标签:")
        for old_label, new_label in final_replacements.items():
            print(f"  {old_label} → {new_label}")
    else:
        print("没有需要替换的标签")
    
    # 验证结果
    print("\n验证结果:")
    remaining_labels = re.findall(r'LabelLocation[0-9a-fA-F]+', content)
    if remaining_labels:
        print(f"仍有 {len(remaining_labels)} 个LabelLocation标签未处理:")
        for label in set(remaining_labels):
            print(f"  {label}")
    else:
        print("✓ 所有LabelLocation标签已处理完成")
    
    # 检查是否有语义化标签
    semantic_labels = re.findall(r'[A-Z][a-zA-Z]*Failed|[A-Z][a-zA-Z]*Check|[A-Z][a-zA-Z]*Exit', content)
    if semantic_labels:
        print(f"\n✓ 发现 {len(set(semantic_labels))} 个语义化标签:")
        for label in sorted(set(semantic_labels))[:10]:  # 显示前10个
            print(f"  {label}")

if __name__ == '__main__':
    finalize_networking_labels()