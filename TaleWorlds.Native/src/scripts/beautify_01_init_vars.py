#!/usr/bin/env python3
"""
美化01_initialization.c文件中的UNK_变量和FUN_函数
"""

import re
import os

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def analyze_unk_variables(content):
    """分析UNK_变量的使用模式"""
    # 查找所有UNK_变量
    unk_vars = re.findall(r'&UNK_([0-9a-fA-F]+)', content)
    unk_vars = list(set(unk_vars))  # 去重
    
    print(f"发现 {len(unk_vars)} 个UNK_变量")
    
    # 分析每个变量的使用上下文
    var_mapping = {}
    
    for var in unk_vars:
        # 查找变量的使用模式
        pattern = r'&UNK_' + re.escape(var)
        matches = re.findall(pattern + r'[^,\n)]*', content)
        
        # 根据上下文推断变量用途
        usage_hints = []
        for match in matches:
            if 'strcpy_s' in match:
                usage_hints.append('字符串')
            elif 'ConfigureSystemDataBuffer' in match:
                usage_hints.append('配置缓冲区')
            elif 'InitializeSystemMemoryBuffer' in match:
                usage_hints.append('内存缓冲区')
            elif 'UpdateContextManagerSystem' in match:
                usage_hints.append('上下文管理器')
            elif 'SystemManagerSetFlags' in match:
                usage_hints.append('系统管理器标志')
            elif 'MessageBoxA' in match:
                usage_hints.append('消息框')
            elif 'FUN_' in match:
                usage_hints.append('函数指针')
        
        # 根据使用频率和上下文分配有意义的名称
        if usage_hints:
            most_common = max(set(usage_hints), key=usage_hints.count)
            var_mapping[var] = most_common
        else:
            var_mapping[var] = f'DataArea_{var[:4]}'
    
    return var_mapping

def analyze_fun_functions(content):
    """分析FUN_函数的使用模式"""
    # 查找所有FUN_函数
    fun_funcs = re.findall(r'FUN_([0-9a-fA-F]+)', content)
    fun_funcs = list(set(fun_funcs))  # 去重
    
    print(f"发现 {len(fun_funcs)} 个FUN_函数")
    
    # 分析每个函数的使用模式
    func_mapping = {}
    
    for func in fun_funcs:
        # 查找函数调用的上下文
        pattern = r'FUN_' + re.escape(func) + r'\([^)]*\)'
        matches = re.findall(pattern, content)
        
        # 根据参数推断函数用途
        usage_hints = []
        for match in matches:
            if 'SystemMemoryBlockStorage' in match:
                usage_hints.append('内存块处理')
            elif 'SystemContextManagerPointer' in match:
                usage_hints.append('上下文管理')
            elif 'ConfigureSystemDataBuffer' in match:
                usage_hints.append('数据缓冲区配置')
            elif 'MessageBoxA' in match:
                usage_hints.append('消息框处理')
            elif 'UpdateContextManagerSystem' in match:
                usage_hints.append('系统更新')
        
        # 根据使用频率和上下文分配有意义的名称
        if usage_hints:
            most_common = max(set(usage_hints), key=usage_hints.count)
            func_mapping[func] = most_common
        else:
            func_mapping[func] = f'SystemFunction_{func[:4]}'
    
    return func_mapping

def beautify_01_initialization():
    """美化01_initialization.c文件"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    print("正在读取01_initialization.c文件...")
    content = read_file(file_path)
    
    print("分析UNK_变量...")
    var_mapping = analyze_unk_variables(content)
    
    print("分析FUN_函数...")
    func_mapping = analyze_fun_functions(content)
    
    print("开始替换UNK_变量...")
    for var_addr, var_name in var_mapping.items():
        # 使用PascalCase命名
        new_name = ''.join(word.capitalize() for word in var_name.split('_'))
        old_pattern = f'UNK_{var_addr}'
        new_pattern = f'{new_name}_Data'
        
        content = content.replace(old_pattern, new_pattern)
        print(f"  {old_pattern} -> {new_pattern}")
    
    print("开始替换FUN_函数...")
    for func_addr, func_name in func_mapping.items():
        # 使用PascalCase命名
        new_name = ''.join(word.capitalize() for word in func_name.split('_'))
        old_pattern = f'FUN_{func_addr}'
        new_pattern = f'{new_name}_Function'
        
        content = content.replace(old_pattern, new_pattern)
        print(f"  {old_pattern} -> {new_pattern}")
    
    print("写入美化后的文件...")
    write_file(file_path, content)
    
    print("美化完成！")

if __name__ == "__main__":
    beautify_01_initialization()