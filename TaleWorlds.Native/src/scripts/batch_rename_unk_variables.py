#!/usr/bin/env python3
"""
批量美化UNK_变量的脚本
用于将剩余的UNK_变量重命名为有意义的名称
"""

import re
import sys

def generate_systematic_names(base_name, count):
    """生成系统化的变量名"""
    names = []
    suffixes = [
        'Extended', 'Primary', 'Secondary', 'Tertiary', 'Quaternary', 'Quinary',
        'Senary', 'Septenary', 'Octonary', 'Nonary', 'Denary', 'Undenary',
        'Duodenary', 'Tredecenary', 'Quattuordecenary', 'Quindecenary',
        'Sexdecenary', 'Septendecenary', 'Octodecenary', 'Novemdecenary',
        'Vigesimal', 'Unvigesimal', 'Duovigesimal', 'Trevigesimal',
        'Quattuorvigesimal', 'Quinvigesimal', 'Sexvigesimal', 'Septenvigesimal',
        'Octovigesimal', 'Novemvigesimal', 'Trigesimal'
    ]
    
    for i in range(count):
        if i < len(suffixes):
            names.append(f"{base_name}{suffixes[i]}")
        else:
            names.append(f"{base_name}Index{i}")
    
    return names

def process_file(file_path):
    """处理文件中的UNK_变量"""
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找所有的UNK_变量
    unk_pattern = r'undefined UNK_180a[0-9a-f]+;'
    unk_matches = re.findall(unk_pattern, content)
    
    if not unk_matches:
        print("没有找到UNK_变量")
        return
    
    print(f"找到 {len(unk_matches)} 个UNK_变量")
    
    # 按地址排序
    unk_matches.sort()
    
    # 分组处理
    categories = [
        'SystemConfiguration',
        'SystemNetwork',
        'SystemMemory',
        'SystemResource',
        'SystemEvent',
        'SystemThread',
        'SystemProcess',
        'SystemSecurity',
        'SystemValidation',
        'SystemManagement',
        'SystemControl',
        'SystemMonitor',
        'SystemLogger',
        'SystemDebugger',
        'SystemProfiler',
        'SystemOptimizer',
        'SystemAnalyzer',
        'SystemInspector',
        'SystemValidator',
        'SystemChecker'
    ]
    
    category_index = 0
    category_count = 0
    max_per_category = 30
    
    replacements = []
    
    for i, unk_match in enumerate(unk_matches):
        if category_count >= max_per_category:
            category_index = (category_index + 1) % len(categories)
            category_count = 0
        
        category_name = categories[category_index]
        suffix_num = category_count + 1
        
        if suffix_num == 1:
            new_name = f"undefined {category_name};"
        elif suffix_num == 2:
            new_name = f"undefined {category_name}Manager;"
        elif suffix_num == 3:
            new_name = f"undefined {category_name}Buffer;"
        elif suffix_num == 4:
            new_name = f"undefined {category_name}Cache;"
        elif suffix_num == 5:
            new_name = f"undefined {category_name}Pool;"
        else:
            new_name = f"undefined {category_name}Data{suffix_num-5};"
        
        replacements.append((unk_match, new_name))
        category_count += 1
        
        if len(replacements) >= 100:  # 每次处理100个
            break
    
    # 应用替换
    for old, new in replacements:
        content = content.replace(old, new)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"已处理 {len(replacements)} 个UNK_变量")

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    process_file(file_path)