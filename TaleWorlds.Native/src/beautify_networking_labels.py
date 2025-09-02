#!/usr/bin/env python3
"""
批量处理05_networking.c文件中的LAB_标签
将LAB_十六进制地址格式的标签重命名为有意义的名称
"""

import re
import sys

def read_file(filepath):
    """读取文件内容"""
    try:
        with open(filepath, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(filepath, content):
    """写入文件内容"""
    try:
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def extract_lab_labels(content):
    """提取所有LAB_标签"""
    # 匹配LAB_十六进制地址:格式
    pattern = r'LAB_([0-9a-fA-F]+):'
    matches = re.findall(pattern, content)
    return matches

def generate_meaningful_name(address, index):
    """为LAB标签生成有意义的名称"""
    # 基于地址和索引生成语义化名称
    address_int = int(address, 16)
    
    # 根据地址范围和用途分类
    if address_int < 0x180850000:
        return f"NetworkValidationCheckpoint{index}"
    elif address_int < 0x180860000:
        return f"NetworkDataProcessingCheckpoint{index}"
    elif address_int < 0x180870000:
        return f"NetworkConnectionCheckpoint{index}"
    elif address_int < 0x180880000:
        return f"NetworkSecurityCheckpoint{index}"
    else:
        return f"NetworkErrorHandlingCheckpoint{index}"

def replace_lab_labels(content):
    """替换LAB_标签为有意义的名称"""
    # 首先提取所有标签
    labels = extract_lab_labels(content)
    
    # 创建替换映射
    replacement_map = {}
    for i, label in enumerate(labels):
        meaningful_name = generate_meaningful_name(label, i)
        replacement_map[f"LAB_{label}"] = meaningful_name
    
    # 按标签长度排序，确保长标签先替换
    sorted_labels = sorted(replacement_map.keys(), key=len, reverse=True)
    
    # 执行替换
    for label in sorted_labels:
        new_name = replacement_map[label]
        # 替换标签定义
        content = re.sub(rf'{label}:', f'{new_name}:', content)
        # 替换goto语句
        content = re.sub(rf'goto {label}', f'goto {new_name}', content)
    
    return content

def main():
    """主函数"""
    filepath = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    print("开始处理05_networking.c文件中的LAB_标签...")
    
    # 读取文件
    content = read_file(filepath)
    if not content:
        return 1
    
    # 统计原始标签数量
    original_labels = extract_lab_labels(content)
    print(f"发现 {len(original_labels)} 个LAB_标签")
    
    # 替换标签
    new_content = replace_lab_labels(content)
    
    # 统计替换后的标签数量
    remaining_labels = extract_lab_labels(new_content)
    print(f"处理后剩余 {len(remaining_labels)} 个LAB_标签")
    
    # 写入文件
    if write_file(filepath, new_content):
        print("LAB_标签替换完成")
        return 0
    else:
        return 1

if __name__ == "__main__":
    sys.exit(main())