#!/usr/bin/env python3
"""
美化01_initialization.c文件中的UNK_变量
根据变量的使用模式为其分配合适的语义化名称
"""

import re
import sys

def analyze_unk_variables(file_path):
    """分析UNK_变量的使用模式"""
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找所有UNK_变量
    unk_pattern = r'UNK_180[0-9a-f]{5}'
    unk_vars = set(re.findall(unk_pattern, content))
    
    # 分析每个变量的使用上下文
    var_analysis = {}
    for var in unk_vars:
        # 查找变量的使用上下文
        contexts = re.findall(r'.{0,50}' + re.escape(var) + r'.{0,50}', content)
        var_analysis[var] = contexts
    
    return var_analysis

def generate_replacements(var_analysis):
    """根据分析生成替换映射"""
    replacements = {}
    
    # 根据地址范围和使用模式推断变量类型
    for var, contexts in var_analysis.items():
        addr = int(var[4:], 16)  # 提取地址部分
        
        # 根据地址范围和使用模式分类
        if any('strcpy_s' in ctx for ctx in contexts):
            # 字符串相关
            replacements[var] = f"SystemString{addr & 0xfff:03x}"
        elif any('SystemResourcePointer' in ctx for ctx in contexts):
            # 系统资源相关
            replacements[var] = f"SystemResource{addr & 0xfff:03x}"
        elif any('ConfigureSystemDataBuffer' in ctx for ctx in contexts):
            # 数据缓冲区配置相关
            replacements[var] = f"DataBufferConfig{addr & 0xfff:03x}"
        elif any('FUN_18005d3a0' in ctx for ctx in contexts):
            # 特定函数调用相关
            replacements[var] = f"SystemConfig{addr & 0xfff:03x}"
        elif any('pointerToUnsigned16' in ctx for ctx in contexts):
            # 无符号16位指针相关
            replacements[var] = f"Unsigned16Data{addr & 0xfff:03x}"
        else:
            # 默认分类
            replacements[var] = f"SystemData{addr & 0xfff:03x}"
    
    return replacements

def apply_replacements(file_path, replacements):
    """应用替换"""
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 按地址排序，确保替换的一致性
    sorted_replacements = sorted(replacements.items(), key=lambda x: x[0], reverse=True)
    
    for old_name, new_name in sorted_replacements:
        content = content.replace(old_name, new_name)
    
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    return len(sorted_replacements)

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    print("分析UNK_变量...")
    var_analysis = analyze_unk_variables(file_path)
    
    print(f"发现 {len(var_analysis)} 个UNK_变量")
    
    print("生成替换映射...")
    replacements = generate_replacements(var_analysis)
    
    print("应用替换...")
    count = apply_replacements(file_path, replacements)
    
    print(f"完成！替换了 {count} 个变量")

if __name__ == "__main__":
    main()