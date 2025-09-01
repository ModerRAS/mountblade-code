#!/usr/bin/env python3
"""
99_unmatched_functions.c 美化脚本
重命名FUN_函数和UNK_变量为语义化名称
"""

import re
import sys
import os

def extract_function_names(file_path):
    """提取文件中的FUN_函数名称"""
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找所有FUN_函数
    fun_pattern = r'FUN_([0-9a-fA-F]+)'
    fun_matches = re.findall(fun_pattern, content)
    
    # 查找所有UNK_变量
    unk_pattern = r'UNK_([0-9a-fA-F]+)'
    unk_matches = re.findall(unk_pattern, content)
    
    return set(fun_matches), set(unk_matches)

def generate_function_name(address):
    """根据地址生成语义化函数名"""
    # 简单的语义化命名规则
    if address.startswith('1800'):
        return f'InitializeSystemFunction_{address[-4:]}'
    elif address.startswith('1801'):
        return f'MemoryManagerFunction_{address[-4:]}'
    elif address.startswith('1802'):
        return f'NetworkHandlerFunction_{address[-4:]}'
    elif address.startswith('1803'):
        return f'RenderingSystemFunction_{address[-4:]}'
    elif address.startswith('1804'):
        return f'AudioSystemFunction_{address[-4:]}'
    elif address.startswith('1805'):
        return f'InputSystemFunction_{address[-4:]}'
    elif address.startswith('1806'):
        return f'PhysicsSystemFunction_{address[-4:]}'
    elif address.startswith('1807'):
        return f'AnimationSystemFunction_{address[-4:]}'
    elif address.startswith('1808'):
        return f'FileSystemFunction_{address[-4:]}'
    elif address.startswith('1809'):
        return f'DatabaseSystemFunction_{address[-4:]}'
    elif address.startswith('180a'):
        return f'UserInterfaceFunction_{address[-4:]}'
    elif address.startswith('180b'):
        return f'ScriptingSystemFunction_{address[-4:]}'
    elif address.startswith('180c'):
        return f'MultiplayerSystemFunction_{address[-4:]}'
    elif address.startswith('180d'):
        return f'UtilitySystemFunction_{address[-4:]}'
    else:
        return f'GenericSystemFunction_{address[-4:]}'

def generate_variable_name(address):
    """根据地址生成语义化变量名"""
    # 简单的语义化命名规则
    if address.startswith('1800'):
        return f'InitializationSystemVariable_{address[-4:]}'
    elif address.startswith('1801'):
        return f'MemoryManagementVariable_{address[-4:]}'
    elif address.startswith('1802'):
        return f'NetworkHandlerVariable_{address[-4:]}'
    elif address.startswith('1803'):
        return f'RenderingSystemVariable_{address[-4:]}'
    elif address.startswith('1804'):
        return f'AudioSystemVariable_{address[-4:]}'
    elif address.startswith('1805'):
        return f'InputSystemVariable_{address[-4:]}'
    elif address.startswith('1806'):
        return f'PhysicsSystemVariable_{address[-4:]}'
    elif address.startswith('1807'):
        return f'AnimationSystemVariable_{address[-4:]}'
    elif address.startswith('1808'):
        return f'FileSystemVariable_{address[-4:]}'
    elif address.startswith('1809'):
        return f'DatabaseSystemVariable_{address[-4:]}'
    elif address.startswith('180a'):
        return f'UserInterfaceVariable_{address[-4:]}'
    elif address.startswith('180b'):
        return f'ScriptingSystemVariable_{address[-4:]}'
    elif address.startswith('180c'):
        return f'MultiplayerSystemVariable_{address[-4:]}'
    elif address.startswith('180d'):
        return f'UtilitySystemVariable_{address[-4:]}'
    else:
        return f'GenericSystemVariable_{address[-4:]}'

def beautify_file(file_path):
    """美化文件中的函数和变量名"""
    # 提取函数和变量名称
    fun_addresses, unk_addresses = extract_function_names(file_path)
    
    # 创建替换映射
    function_map = {}
    variable_map = {}
    
    for address in fun_addresses:
        old_name = f'FUN_{address}'
        new_name = generate_function_name(address)
        function_map[old_name] = new_name
    
    for address in unk_addresses:
        old_name = f'UNK_{address}'
        new_name = generate_variable_name(address)
        variable_map[old_name] = new_name
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 替换函数名
    for old_name, new_name in function_map.items():
        content = content.replace(old_name, new_name)
    
    # 替换变量名
    for old_name, new_name in variable_map.items():
        content = content.replace(old_name, new_name)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    return len(function_map), len(variable_map)

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c'
    
    print(f"开始美化文件: {file_path}")
    
    # 执行美化
    fun_count, unk_count = beautify_file(file_path)
    
    print(f"替换完成:")
    print(f"  - 函数名替换: {fun_count} 个")
    print(f"  - 变量名替换: {unk_count} 个")

if __name__ == "__main__":
    main()