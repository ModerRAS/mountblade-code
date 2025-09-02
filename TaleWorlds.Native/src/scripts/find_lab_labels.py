#!/usr/bin/env python3
"""
查找01_initialization.c文件中所有剩余的LAB_180xxxxx标签
"""

import re
import sys
from collections import defaultdict

def find_lab_labels(file_path):
    """查找文件中所有的LAB标签"""
    with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
        lines = f.readlines()
    
    lab_labels = []
    lab_pattern = re.compile(r'LAB_180[0-9a-f]{5}\b')
    
    for i, line in enumerate(lines, 1):
        matches = lab_pattern.findall(line)
        for match in matches:
            # 获取上下文
            start_line = max(0, i - 3)
            end_line = min(len(lines), i + 2)
            context = ''.join(lines[start_line:end_line])
            
            lab_labels.append({
                'line': i,
                'label': match,
                'content': line.strip(),
                'context': context.strip()
            })
    
    return lab_labels

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    print(f"正在分析文件: {file_path}")
    print("=" * 80)
    
    lab_labels = find_lab_labels(file_path)
    
    if not lab_labels:
        print("没有找到任何LAB_180xxxxx标签")
        return
    
    print(f"总共找到 {len(lab_labels)} 个LAB标签\n")
    
    # 按行号排序
    lab_labels.sort(key=lambda x: x['line'])
    
    # 统计每个标签出现的次数
    label_counts = defaultdict(int)
    for lab in lab_labels:
        label_counts[lab['label']] += 1
    
    print("标签统计:")
    print("-" * 40)
    for label, count in sorted(label_counts.items()):
        print(f"{label}: {count} 次")
    
    print("\n详细列表:")
    print("=" * 80)
    
    for i, lab in enumerate(lab_labels, 1):
        print(f"{i}. 行号: {lab['line']}")
        print(f"   标签: {lab['label']}")
        print(f"   内容: {lab['content']}")
        print(f"   上下文:")
        # 格式化上下文，添加行号
        context_lines = lab['context'].split('\n')
        for j, ctx_line in enumerate(context_lines):
            ctx_line_num = lab['line'] - 3 + j
            if ctx_line_num > 0:
                print(f"     {ctx_line_num}: {ctx_line}")
        print("-" * 40)

if __name__ == "__main__":
    main()