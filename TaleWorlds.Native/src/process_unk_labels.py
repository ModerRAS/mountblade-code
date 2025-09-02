#!/usr/bin/env python3
"""
批量替换00_data_definitions.h文件中的UNK_标签为语义化变量名
"""

import re
import os

def process_file(file_path):
    """处理文件，替换UNK_标签"""
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 收集所有UNK_180a3xxxx地址
    unk_pattern = r'UNK_180a3([0-9a-f]{4})'
    unk_matches = re.findall(unk_pattern, content)
    
    # 获取唯一地址并按数值排序
    unique_addresses = sorted(set(unk_matches), key=lambda x: int(x, 16))
    
    print(f"找到 {len(unique_addresses)} 个唯一的UNK_180a3xxxx地址")
    
    # 创建替换映射
    replacements = {}
    for i, addr in enumerate(unique_addresses):
        unk_label = f'UNK_180a3{addr}'
        param_name = f'NetworkConfigValidationParameter{55 + i}'  # 从55开始
        replacements[unk_label] = param_name
    
    # 执行替换
    for unk_label, param_name in replacements.items():
        # 只替换在函数调用中的UNK_标签，避免替换注释或其他地方的内容
        pattern = r'&' + re.escape(unk_label) + r'\b'
        content = re.sub(pattern, f'&{param_name}', content)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"成功替换了 {len(replacements)} 个UNK_标签")
    return len(replacements)

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"
    
    if os.path.exists(file_path):
        count = process_file(file_path)
        print(f"处理完成，共替换了 {count} 个UNK_标签")
    else:
        print(f"文件不存在: {file_path}")