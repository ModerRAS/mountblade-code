#!/usr/bin/env python3
"""
03_rendering.c 文件美化脚本
分析文件中的函数和变量，进行语义化重命名
"""

import re
import os

def analyze_rendering_file():
    """分析03_rendering.c文件，识别需要重命名的函数和变量"""
    
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    
    if not os.path.exists(file_path):
        print(f"文件不存在: {file_path}")
        return
    
    with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    
    # 识别需要重命名的模式
    patterns = {
        'FUN_180': re.compile(r'FUN_180([0-9a-f]+)'),
        'UNK_180': re.compile(r'UNK_180([0-9a-f]+)'),
        'undefined': re.compile(r'undefined([0-9]+)'),
        'uVar': re.compile(r'uVar([0-9]+)'),
        'local': re.compile(r'local([0-9]+)'),
        'DAT_180': re.compile(r'DAT_180([0-9a-f]+)'),
        'param': re.compile(r'param([0-9]+)'),
        'iVar': re.compile(r'iVar([0-9]+)'),
        'lVar': re.compile(r'lVar([0-9]+)'),
        'fVar': re.compile(r'fVar([0-9]+)'),
        'bVar': re.compile(r'bVar([0-9]+)'),
        'cVar': re.compile(r'cVar([0-9]+)'),
        'sVar': re.compile(r'sVar([0-9]+)'),
    }
    
    # 统计各种模式的数量
    stats = {}
    for pattern_name, pattern in patterns.items():
        matches = pattern.findall(content)
        stats[pattern_name] = len(matches)
        if matches:
            print(f"{pattern_name}: {len(matches)} 个匹配")
            # 显示前10个匹配
            for i, match in enumerate(matches[:10]):
                print(f"  {i+1}. {pattern_name}_{match}")
            if len(matches) > 10:
                print(f"  ... 还有 {len(matches) - 10} 个")
            print()
    
    # 识别函数定义
    function_patterns = {
        'void_functions': re.compile(r'void\s+([a-zA-Z_][a-zA-Z0-9_]*)\s*\([^)]*\)\s*;'),
        'int_functions': re.compile(r'int\s+([a-zA-Z_][a-zA-Z0-9_]*)\s*\([^)]*\)\s*;'),
        'uint_functions': re.compile(r'uint[0-9]*_t\s+([a-zA-Z_][a-zA-Z0-9_]*)\s*\([^)]*\)\s*;'),
        'other_functions': re.compile(r'[a-zA-Z_][a-zA-Z0-9_]*\s+[a-zA-Z_][a-zA-Z0-9_]*\s*\([^)]*\)\s*;'),
    }
    
    print("=== 函数定义统计 ===")
    for func_type, pattern in function_patterns.items():
        matches = pattern.findall(content)
        unique_matches = set(matches)
        print(f"{func_type}: {len(unique_matches)} 个唯一函数")
        for func in sorted(list(unique_matches))[:10]:
            print(f"  {func}")
        if len(unique_matches) > 10:
            print(f"  ... 还有 {len(unique_matches) - 10} 个")
        print()
    
    # 识别变量定义
    variable_patterns = {
        'global_vars': re.compile(r'^([a-zA-Z_][a-zA-Z0-9_]*)\s+[a-zA-Z_][a-zA-Z0-9_]*\s*;', re.MULTILINE),
        'undefined_vars': re.compile(r'undefined[0-9]+\s+([a-zA-Z_][a-zA-Z0-9_]*)\s*;'),
        'typed_vars': re.compile(r'^(int|uint|longlong|float|char|void\*)\s+([a-zA-Z_][a-zA-Z0-9_]*)\s*;', re.MULTILINE),
    }
    
    print("=== 变量定义统计 ===")
    for var_type, pattern in variable_patterns.items():
        matches = pattern.findall(content)
        if var_type in ['global_vars', 'typed_vars']:
            # 这些模式返回元组，需要处理
            if isinstance(matches[0], tuple) if matches else False:
                matches = [m[0] if isinstance(m, tuple) and len(m) > 0 else m for m in matches]
        unique_matches = set(matches)
        print(f"{var_type}: {len(unique_matches)} 个唯一变量")
        for var in sorted(list(unique_matches))[:15]:
            print(f"  {var}")
        if len(unique_matches) > 15:
            print(f"  ... 还有 {len(unique_matches) - 15} 个")
        print()
    
    return stats

if __name__ == "__main__":
    analyze_rendering_file()