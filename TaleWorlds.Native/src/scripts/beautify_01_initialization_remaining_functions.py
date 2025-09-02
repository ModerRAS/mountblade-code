#!/usr/bin/env python3
"""
01_initialization.c 函数名美化脚本
将剩余的FUN_函数名替换为语义化名称
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

def create_function_mapping():
    """创建函数名映射字典"""
    return {
        'FUN_18006da50': 'ProcessSystemResourceManagerWithValidation',
        'FUN_18006dc10': 'ValidateSystemResourceManagerConfiguration',
        'FUN_18006e5d0': 'InitializeSystemResourceManagerSecurity',
        'FUN_18006e640': 'ConfigureSystemResourceManagerSettings',
        'FUN_18006edf0': 'ProcessSystemResourceManagerConfigurationData',
        'FUN_18006ef80': 'ValidateSystemResourceManagerParameters',
        'FUN_18006efc0': 'ConfigureSystemResourceManagerParameters',
        'FUN_180072000': 'InitializeSystemResourceManagerExtended',
        'FUN_180073930': 'ProcessSystemResourceManagerExtendedConfiguration',
        'FUN_180073e0b': 'ValidateSystemResourceManagerSecurityParameters'
    }

def extract_function_definitions(content):
    """提取函数定义"""
    # 匹配函数定义模式
    pattern = r'void\s+(FUN_[0-9a-fA-F]+)\s*\('
    return re.findall(pattern, content)

def beautify_function_names(content, mapping):
    """美化函数名"""
    for old_name, new_name in mapping.items():
        # 替换函数定义
        content = re.sub(rf'\bvoid\s+{old_name}\s*\(', f'void {new_name}(', content)
        # 替换函数调用
        content = re.sub(rf'\b{old_name}\s*\(', f'{new_name}(', content)
        # 替换注释中的函数名
        content = re.sub(rf'\b{old_name}\b', new_name, content)
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    # 读取文件
    content = read_file(file_path)
    if content is None:
        return False
    
    # 提取需要美化的函数名
    function_defs = extract_function_definitions(content)
    print(f"发现 {len(function_defs)} 个需要美化的函数定义:")
    for func in function_defs:
        print(f"  - {func}")
    
    # 创建映射并美化
    mapping = create_function_mapping()
    beautified_content = beautify_function_names(content, mapping)
    
    # 写入文件
    if write_file(file_path, beautified_content):
        print("函数名美化完成")
        return True
    else:
        return False

if __name__ == "__main__":
    main()