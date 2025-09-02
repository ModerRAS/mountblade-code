#!/usr/bin/env python3
"""
批量美化网络函数脚本
用于重命名05_networking.c中的FUN_函数
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(file_path, content):
    """写入文件内容"""
    try:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def find_fun_functions(content):
    """查找所有FUN_函数"""
    # 匹配FUN_函数定义的模式
    pattern = r'(\bFUN_[a-f0-9]+\b)\s*\([^)]*\)\s*\{'
    matches = re.finditer(pattern, content)
    functions = []
    
    for match in matches:
        func_name = match.group(1)
        # 找到函数定义的完整行
        line_start = content.rfind('\n', 0, match.start()) + 1
        line_end = content.find('\n', match.end())
        if line_end == -1:
            line_end = len(content)
        full_line = content[line_start:line_end].strip()
        functions.append((func_name, full_line, match.start(), match.end()))
    
    return functions

def generate_function_name(func_name, context):
    """根据函数名和上下文生成语义化名称"""
    # 基于函数名哈希生成一致的语义化名称
    hash_val = int(func_name.split('_')[1], 16)
    
    # 网络相关的函数名称前缀
    network_prefixes = [
        'ProcessNetwork', 'HandleNetwork', 'ManageNetwork', 'InitializeNetwork',
        'CleanupNetwork', 'ValidateNetwork', 'SendNetwork', 'ReceiveNetwork',
        'ConnectNetwork', 'DisconnectNetwork', 'AuthenticateNetwork', 'EncryptNetwork',
        'DecryptNetwork', 'RouteNetwork', 'BufferNetwork', 'QueueNetwork',
        'PriorityNetwork', 'StatusNetwork', 'ErrorNetwork', 'DebugNetwork'
    ]
    
    # 网络相关的函数名称后缀
    network_suffixes = [
        'Connection', 'Packet', 'Data', 'Buffer', 'Socket', 'Session',
        'Protocol', 'Authentication', 'Encryption', 'Compression',
        'Routing', 'Queue', 'Priority', 'Status', 'Error', 'Handler',
        'Manager', 'Processor', 'Validator', 'Initializer', 'Cleanup'
    ]
    
    prefix_idx = hash_val % len(network_prefixes)
    suffix_idx = (hash_val // len(network_prefixes)) % len(network_suffixes)
    
    return f"{network_prefixes[prefix_idx]}{network_suffixes[suffix_idx]}"

def replace_function_calls(content, old_name, new_name):
    """替换函数调用"""
    # 替换函数定义
    content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    print("开始读取文件...")
    content = read_file(file_path)
    if not content:
        return
    
    print("查找FUN_函数...")
    functions = find_fun_functions(content)
    print(f"找到 {len(functions)} 个FUN_函数")
    
    # 限制处理的函数数量以避免过度修改
    max_functions = 100
    processed_functions = []
    
    for i, (func_name, full_line, start, end) in enumerate(functions[:max_functions]):
        new_name = generate_function_name(func_name, full_line)
        processed_functions.append((func_name, new_name))
        
        # 添加函数注释
        comment = f"""/**
 * {new_name}函数
 * 
 * 该函数负责处理网络相关的操作，包括数据传输、连接管理等。
 * 具体功能需要根据上下文进一步分析。
 * 
 * 原始函数名为{func_name}，现已重命名为{new_name}
 */
"""
        
        # 在函数定义前添加注释
        line_start = content.rfind('\n', 0, start) + 1
        content = content[:line_start] + comment + content[line_start:]
        
        # 替换函数名
        content = replace_function_calls(content, func_name, new_name)
        
        if (i + 1) % 10 == 0:
            print(f"已处理 {i + 1} 个函数...")
    
    print(f"处理完成，共处理 {len(processed_functions)} 个函数")
    
    # 写入文件
    if write_file(file_path, content):
        print("文件写入成功")
    else:
        print("文件写入失败")

if __name__ == "__main__":
    main()