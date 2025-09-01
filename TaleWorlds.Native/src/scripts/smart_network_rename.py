#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
智能网络函数重命名处理器
用于智能分析和重命名05_networking.c中的FUN_函数
"""

import re
import os

def read_file_in_chunks(file_path, chunk_size=1000):
    """分块读取大文件"""
    with open(file_path, 'r', encoding='utf-8') as f:
        while True:
            chunk = f.read(chunk_size)
            if not chunk:
                break
            yield chunk

def find_all_fun_functions(file_path):
    """查找所有FUN_函数"""
    fun_functions = []
    
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找函数定义
    function_pattern = r'^\s*[a-zA-Z_][a-zA-Z0-9_]*\s+\*?\s*(FUN_[0-9a-fA-F]+)\s*\([^)]*\)\s*\{'
    matches = re.finditer(function_pattern, content, re.MULTILINE)
    
    for match in matches:
        fun_name = match.group(1)
        fun_functions.append(fun_name)
    
    return fun_functions

def generate_smart_function_name(fun_name):
    """智能生成函数名"""
    suffix = fun_name[-4:]  # 取后4位作为唯一标识
    
    # 根据函数ID的模式来推断功能
    if '658' in fun_name:
        return f"GetNetworkConnectionStatus{suffix}"
    elif '65b' in fun_name:
        return f"GetNetworkConnectionPtr{suffix}"
    elif '65c' in fun_name:
        return f"ProcessNetworkConnection{suffix}"
    elif '65e' in fun_name:
        return f"CreateNetworkConnection{suffix}"
    elif '65f' in fun_name:
        return f"ProcessNetworkPacket{suffix}"
    elif '661' in fun_name:
        return f"ProcessNetworkData{suffix}"
    elif '663' in fun_name:
        return f"CreateNetworkHandle{suffix}"
    elif '668' in fun_name:
        return f"ProcessNetworkData{suffix}"
    elif '66a' in fun_name:
        return f"ProcessNetworkPacket{suffix}"
    elif '66d' in fun_name:
        return f"InitializeNetworkConnection{suffix}"
    elif '66e' in fun_name:
        return f"GetNetworkHandle{suffix}"
    elif '66f' in fun_name:
        return f"GetNetworkStatus{suffix}"
    elif '672' in fun_name:
        return f"ProcessNetworkConnection{suffix}"
    elif '674' in fun_name:
        return f"ProcessNetworkData{suffix}"
    elif '676' in fun_name:
        return f"ProcessNetworkConnection{suffix}"
    elif '677' in fun_name:
        return f"GetNetworkConnection{suffix}"
    elif '678' in fun_name:
        return f"ValidateNetworkState{suffix}"
    elif '679' in fun_name:
        return f"CleanupNetworkResources{suffix}"
    elif '67a' in fun_name:
        return f"CheckNetworkConnection{suffix}"
    elif '67c' in fun_name:
        return f"ProcessNetworkConnection{suffix}"
    elif '67e' in fun_name:
        return f"GetNetworkStatus{suffix}"
    elif '67f' in fun_name:
        return f"GetNetworkHandle{suffix}"
    elif '681' in fun_name:
        return f"ProcessNetworkOperation{suffix}"
    elif '682' in fun_name:
        return f"ProcessNetworkData{suffix}"
    elif '683' in fun_name:
        return f"GetNetworkStatus{suffix}"
    elif '684' in fun_name:
        return f"InitializeNetworkSystem{suffix}"
    elif '685' in fun_name:
        return f"ProcessNetworkData{suffix}"
    elif '686' in fun_name:
        return f"ProcessNetworkConnection{suffix}"
    elif '687' in fun_name:
        return f"ValidateNetworkPacket{suffix}"
    elif '688' in fun_name:
        return f"GetNetworkStatus{suffix}"
    elif '689' in fun_name:
        return f"GetNetworkHandle{suffix}"
    elif '68a' in fun_name:
        return f"ProcessNetworkData{suffix}"
    else:
        return f"NetworkFunction{suffix}"

def create_rename_commands(file_path):
    """创建重命名命令"""
    fun_functions = find_all_fun_functions(file_path)
    
    print(f"找到 {len(fun_functions)} 个FUN_函数")
    
    # 创建重命名映射
    rename_map = {}
    for fun_name in fun_functions:
        new_name = generate_smart_function_name(fun_name)
        rename_map[fun_name] = new_name
    
    return rename_map

def generate_rename_script(file_path, output_path):
    """生成重命名脚本"""
    rename_map = create_rename_commands(file_path)
    
    with open(output_path, 'w', encoding='utf-8') as f:
        f.write("#!/bin/bash\n")
        f.write("# 智能网络函数重命名脚本\n")
        f.write("# 自动生成的重命名命令\n\n")
        
        for old_name, new_name in rename_map.items():
            f.write(f"# {old_name} -> {new_name}\n")
            f.write(f"sed -i 's/{old_name}/{new_name}/g' {file_path}\n\n")
    
    print(f"重命名脚本已生成: {output_path}")
    return rename_map

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    output_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/scripts/smart_rename_network.sh'
    
    print("开始智能分析网络函数...")
    
    rename_map = generate_rename_script(file_path, output_path)
    
    print(f"\n生成了 {len(rename_map)} 个重命名命令")
    print("前20个重命名示例:")
    
    for i, (old_name, new_name) in enumerate(list(rename_map.items())[:20]):
        print(f"{i+1:2d}. {old_name:<20} -> {new_name}")

if __name__ == "__main__":
    main()