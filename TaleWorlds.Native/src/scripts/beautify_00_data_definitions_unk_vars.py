#!/usr/bin/env python3
"""
批量替换00_data_definitions.h文件中的UNK_变量名为语义化名称
"""

import re
import os

def generate_network_config_name(address):
    """为网络配置相关的地址生成语义化名称"""
    base_name = "NetworkConfigValidationParameter"
    # 根据地址后缀生成不同的参数名称
    suffix = address[-3:]  # 取最后3位作为后缀
    return f"{base_name}{suffix}"

def generate_system_config_name(address):
    """为系统配置相关的地址生成语义化名称"""
    base_name = "SystemConfigurationParameter"
    suffix = address[-3:]
    return f"{base_name}{suffix}"

def generate_memory_config_name(address):
    """为内存配置相关的地址生成语义化名称"""
    base_name = "MemoryConfigParameter"
    suffix = address[-3:]
    return f"{base_name}{suffix}"

def beautify_unk_variables():
    """美化UNK_变量名"""
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"
    
    # 读取文件内容
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找所有UNK_变量并创建替换映射
    unk_pattern = r'UNK_180([a-f0-9]+)'
    unk_matches = re.findall(unk_pattern, content)
    
    # 创建替换映射，避免重复
    replacement_map = {}
    
    for match in unk_matches:
        full_match = f'UNK_180{match}'
        if full_match not in replacement_map:
            # 根据地址范围判断变量类型
            address = match.lower()
            if 'a3' in address:  # 网络配置相关
                replacement_map[full_match] = generate_network_config_name(address)
            elif '64' in address:  # 系统配置相关
                replacement_map[full_match] = generate_system_config_name(address)
            elif '9f' in address:  # 内存配置相关
                replacement_map[full_match] = generate_memory_config_name(address)
            else:
                # 默认使用通用命名
                replacement_map[full_match] = f"SystemParameter{address[-3:]}"
    
    # 应用替换
    for old_name, new_name in replacement_map.items():
        content = content.replace(old_name, new_name)
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"替换完成，共替换了 {len(replacement_map)} 个变量名")
    print("替换映射:")
    for old, new in list(replacement_map.items())[:10]:  # 显示前10个
        print(f"  {old} -> {new}")
    if len(replacement_map) > 10:
        print(f"  ... 还有 {len(replacement_map) - 10} 个变量")

if __name__ == "__main__":
    beautify_unk_variables()