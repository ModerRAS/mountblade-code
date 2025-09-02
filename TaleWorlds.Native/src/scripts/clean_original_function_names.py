#!/usr/bin/env python3
"""
清理01_initialization.c文件中的原始函数名注释
"""

def clean_original_function_names():
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 移除原始函数名注释行
    lines = content.split('\n')
    cleaned_lines = []
    
    for line in lines:
        # 跳过包含"原始函数名："的行
        if "原始函数名：" in line:
            continue
        # 跳过包含"*FUN_"的行（这些是原始函数名引用）
        if "*FUN_" in line:
            continue
        # 跳过包含"FUN_180"的行（这些是原始函数名引用）
        if "FUN_180" in line and not line.strip().startswith('//'):
            continue
        cleaned_lines.append(line)
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write('\n'.join(cleaned_lines))
    
    print(f"已清理 {input_file} 中的原始函数名注释")

if __name__ == "__main__":
    clean_original_function_names()