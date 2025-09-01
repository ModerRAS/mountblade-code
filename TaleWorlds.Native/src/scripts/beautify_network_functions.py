#!/usr/bin/env python3
"""
网络函数美化脚本
用于批量重命名05_networking.c文件中的FUN_函数
"""

import re
import sys

def read_file(filename):
    """读取文件内容"""
    try:
        with open(filename, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(filename, content):
    """写入文件内容"""
    try:
        with open(filename, 'w', encoding='utf-8') as f:
            f.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def extract_function_addresses(content):
    """提取所有FUN_函数的地址"""
    pattern = r'FUN_(180[0-9a-fA-F]{5})'
    matches = re.findall(pattern, content)
    return list(set(matches))  # 去重

def create_function_mapping():
    """创建函数名映射"""
    return {
        '1808741f0': 'FindAvailableNetworkResource',
        '180898a50': 'ValidateNetworkPacketMatch',
        '1808c5500': 'ProcessNetworkConnectionValidation',
        '180861ef0': 'CloseNetworkConnection',
        '1808538a0': 'ProcessNetworkConnectionValidation',
        '1808d71b0': 'ProcessNetworkPacket',
        '1808c7d50': 'GetNetworkConnectionHandle',
        '180740b40': 'ProcessNetworkConnectionRequest'
    }

def replace_functions(content, mapping):
    """替换函数名"""
    for address, new_name in mapping.items():
        # 替换函数定义
        content = re.sub(
            r'FUN_' + address + r'\b',
            new_name,
            content
        )
    return content

def add_function_comments(content, mapping):
    """为函数添加注释"""
    lines = content.split('\n')
    result_lines = []
    
    i = 0
    while i < len(lines):
        line = lines[i]
        
        # 检查是否是函数定义行
        for address, new_name in mapping.items():
            if f'FUN_{address}' in line:
                # 添加函数注释
                comment_lines = [
                    '/**',
                    f' * 网络处理函数',
                    ' * ',
                    ' * 该函数处理网络相关操作。',
                    ' * ',
                    f' * 原始函数名为FUN_{address}，现已重命名为{new_name}',
                    ' */'
                ]
                
                # 在函数定义前插入注释
                result_lines.extend(comment_lines)
                result_lines.append(line.replace(f'FUN_{address}', new_name))
                i += 1
                break
        else:
            result_lines.append(line)
            i += 1
    
    return '\n'.join(result_lines)

def main():
    """主函数"""
    filename = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    # 读取文件
    content = read_file(filename)
    if not content:
        return
    
    # 创建函数映射
    mapping = create_function_mapping()
    
    # 替换函数名
    content = replace_functions(content, mapping)
    
    # 写入文件
    if write_file(filename, content):
        print("函数美化完成")
    else:
        print("函数美化失败")

if __name__ == '__main__':
    main()