#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
网络模块LAB标签美化脚本
用于将05_networking.c文件中的LAB_标签替换为有意义的标签名
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

def analyze_lab_labels(content):
    """分析LAB标签的上下文并生成替换映射"""
    # 查找所有LAB标签
    lab_pattern = r'LAB_([0-9a-fA-F]{8})'
    lab_matches = re.findall(lab_pattern, content)
    
    # 创建替换映射
    replacement_map = {}
    
    # 根据地址范围和上下文给标签起有意义的名字
    for lab_addr in lab_matches:
        addr_int = int(lab_addr, 16)
        
        # 根据地址范围判断功能模块
        if 0x180856000 <= addr_int <= 0x180857000:
            replacement_map[f'LAB_{lab_addr}'] = f'NetworkConnectionHandler_{lab_addr}'
        elif 0x180857000 <= addr_int <= 0x180858000:
            replacement_map[f'LAB_{lab_addr}'] = f'NetworkDataProcessor_{lab_addr}'
        elif 0x180858000 <= addr_int <= 0x180859000:
            replacement_map[f'LAB_{lab_addr}'] = f'NetworkPacketValidator_{lab_addr}'
        elif 0x180859000 <= addr_int <= 0x18085a000:
            replacement_map[f'LAB_{lab_addr}'] = f'NetworkErrorHandler_{lab_addr}'
        else:
            replacement_map[f'LAB_{lab_addr}'] = f'NetworkControlFlow_{lab_addr}'
    
    return replacement_map

def replace_lab_labels(content, replacement_map):
    """替换LAB标签"""
    for old_label, new_label in replacement_map.items():
        # 替换goto语句
        content = re.sub(rf'\bgoto {old_label}\b', f'goto {new_label}', content)
        # 替换标签定义
        content = re.sub(rf'^{old_label}:', f'{new_label}:', content, flags=re.MULTILINE)
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    # 读取文件
    content = read_file(file_path)
    if content is None:
        return 1
    
    # 分析LAB标签
    replacement_map = analyze_lab_labels(content)
    
    # 替换标签
    new_content = replace_lab_labels(content, replacement_map)
    
    # 写入文件
    if write_file(file_path, new_content):
        print(f"成功美化 {len(replacement_map)} 个LAB标签")
        return 0
    else:
        return 1

if __name__ == '__main__':
    sys.exit(main())