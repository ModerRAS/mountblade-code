#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
美化06_utilities.c文件中的硬编码地址和魔法数字
"""

import re
import sys

def analyze_hex_addresses(file_path):
    """分析文件中的硬编码十六进制地址"""
    hex_patterns = [
        r'0x[0-9a-fA-F]{8}',  # 32位地址
        r'-0x[0-9a-fA-F]{8}', # 负32位地址
        r'0x[0-9a-fA-F]{7}',  # 较短的地址
        r'-0x[0-9a-fA-F]{7}', # 负的较短地址
        r'\+ 0x[0-9a-fA-F]{1,6}', # 正偏移
        r'- 0x[0-9a-fA-F]{1,6}', # 负偏移
    ]
    
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    addresses = {}
    for pattern in hex_patterns:
        matches = re.findall(pattern, content)
        for addr in matches:
            if addr not in addresses:
                addresses[addr] = 0
            addresses[addr] += 1
    
    return addresses

def analyze_magic_numbers(file_path):
    """分析文件中的魔法数字"""
    magic_patterns = [
        r'\b\d+\s*\+\s*\'\\x[0-9a-fA-F]{2}\'',  # 数字加字符常量
        r'\'\\x[0-9a-fA-F]{2}\'',  # 字符常量
        r'\b\d{6,}\b',  # 大数字
        r'\b0x[0-9a-fA-F]{2}\b',  # 8位十六进制
        r'\b0x[0-9a-fA-F]{4}\b',  # 16位十六进制
    ]
    
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    magic_numbers = {}
    for pattern in magic_patterns:
        matches = re.findall(pattern, content)
        for num in matches:
            if num not in magic_numbers:
                magic_numbers[num] = 0
            magic_numbers[num] += 1
    
    return magic_numbers

def generate_beautification_suggestions():
    """生成美化建议"""
    suggestions = {
        # 硬编码地址建议
        '0x180985054': 'SystemResourceBaseAddress',
        '0x180c4f450': 'SystemSecurityContextBaseAddress',
        '-0x565dff77': 'SystemContextValidationMask',
        '0x565dff77': 'SystemContextValidationValue',
        
        # 偏移量建议
        '0x50': 'ResourcePrimaryOffset',
        '0x54': 'ResourceSecondaryOffset', 
        '0x58': 'ResourceTertiaryOffset',
        '0x60': 'ResourceQuaternaryOffset',
        '0x68': 'ResourceQuinaryOffset',
        '0x6c': 'ResourceSenaryOffset',
        '0x70': 'ResourceSeptenaryOffset',
        '0x74': 'ResourceOctonaryOffset',
        '0x5c': 'ResourceAlternateOffset',
        
        # 魔法数字建议
        "'\\x01'": 'StatusFlagActive',
        "'\\x02'": 'StatusFlagInactive', 
        "'\\x06'": 'StatusFlagPending',
        "'\\x18'": 'StatusOffsetConstant",
        
        # 校验值建议
        '0x42464542': 'ChecksumSeedBEFB',
        '0x42495645': 'ChecksumSeedBIVE',
        '0x42495053': 'ChecksumSeedBTIPS',
        '0x42464553': 'ChecksumSeedBFES',
        '0x42494157': 'ChecksumSeedBIWS',
        '0x42494645': 'ChecksumSeedBIFE',
    }
    
    return suggestions

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    print("分析06_utilities.c文件中的硬编码地址和魔法数字...")
    print("=" * 60)
    
    # 分析硬编码地址
    print("\n硬编码地址分析:")
    addresses = analyze_hex_addresses(file_path)
    for addr, count in sorted(addresses.items(), key=lambda x: x[1], reverse=True):
        if count > 5:  # 只显示出现次数较多的
            print(f"  {addr}: {count} 次")
    
    # 分析魔法数字
    print("\n魔法数字分析:")
    magic_numbers = analyze_magic_numbers(file_path)
    for num, count in sorted(magic_numbers.items(), key=lambda x: x[1], reverse=True):
        if count > 3:  # 只显示出现次数较多的
            print(f"  {num}: {count} 次")
    
    # 生成美化建议
    print("\n美化建议:")
    suggestions = generate_beautification_suggestions()
    for old_name, new_name in suggestions.items():
        print(f"  {old_name} -> {new_name}")

if __name__ == "__main__":
    main()