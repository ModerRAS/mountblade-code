#!/usr/bin/env python3
"""
美化网络模块中的LAB_标签
将LAB_1808469dd这样的标签转换为语义化的标签名
"""

import re
import random

def generate_label_name(address):
    """根据地址生成语义化的标签名"""
    # 根据地址的不同范围生成不同的标签名
    if address.startswith('180846'):
        return f'NetworkConnectionCheck_{address[6:]}'
    elif address.startswith('180847'):
        return f'NetworkDataProcessing_{address[6:]}'
    elif address.startswith('180848'):
        return f'NetworkTransfer_{address[6:]}'
    elif address.startswith('180849'):
        return f'NetworkValidation_{address[6:]}'
    elif address.startswith('18084a'):
        return f'NetworkSecurity_{address[6:]}'
    elif address.startswith('18084b'):
        return f'NetworkTimeout_{address[6:]}'
    elif address.startswith('18084c'):
        return f'NetworkBuffer_{address[6:]}'
    elif address.startswith('18084d'):
        return f'NetworkContext_{address[6:]}'
    elif address.startswith('18084e'):
        return f'NetworkOperation_{address[6:]}'
    elif address.startswith('18084f'):
        return f'NetworkStatus_{address[6:]}'
    elif address.startswith('180850'):
        return f'NetworkSession_{address[6:]}'
    elif address.startswith('180851'):
        return f'NetworkProtocol_{address[6:]}'
    elif address.startswith('180852'):
        return f'NetworkPacket_{address[6:]}'
    elif address.startswith('180853'):
        return f'NetworkHandler_{address[6:]}'
    elif address.startswith('180854'):
        return f'NetworkFlow_{address[6:]}'
    elif address.startswith('180855'):
        return f'NetworkCleanup_{address[6:]}'
    else:
        return f'NetworkControl_{address[6:]}'

def beautify_networking_file():
    """美化网络模块文件"""
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    # 读取文件内容
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找所有LAB_标签
    lab_pattern = r'LAB_([0-9a-fA-F]+)'
    lab_matches = re.findall(lab_pattern, content)
    
    # 创建替换映射
    replacement_map = {}
    for match in set(lab_matches):
        old_label = f'LAB_{match}'
        new_label = generate_label_name(match)
        replacement_map[old_label] = new_label
    
    # 执行替换
    for old_label, new_label in replacement_map.items():
        content = content.replace(old_label, new_label)
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"替换了 {len(replacement_map)} 个LAB_标签")

if __name__ == '__main__':
    beautify_networking_file()