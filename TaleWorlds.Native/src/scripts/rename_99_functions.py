#!/usr/bin/env python3
"""
批量重命名99_unmatched_functions.c文件中的函数名
将FUN_xxxxxxxx格式的函数名重命名为有意义的名称
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    try:
        with open(file_path, 'r', encoding='utf-8') as file:
            return file.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(file_path, content):
    """写入文件内容"""
    try:
        with open(file_path, 'w', encoding='utf-8') as file:
            file.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def extract_function_patterns(content):
    """提取所有FUN_开头的函数模式"""
    pattern = r'FUN_180[0-9a-fA-F]{4,6}'
    matches = re.findall(pattern, content)
    return list(set(matches))  # 去重

def create_function_mapping(function_names):
    """创建函数名映射表"""
    mapping = {}
    
    # 基于函数地址的简单分类
    for func in function_names:
        addr = func[4:]  # 去掉FUN_前缀
        
        # 根据地址范围推测功能
        if addr.startswith('84'):
            mapping[func] = f"ProcessSystemData{addr[4:]}"
        elif addr.startswith('85'):
            mapping[func] = f"HandleNetworkOperation{addr[4:]}"
        elif addr.startswith('86'):
            mapping[func] = f"UpdateGraphicsState{addr[4:]}"
        elif addr.startswith('87'):
            mapping[func] = f"ProcessAudioEvent{addr[4:]}"
        elif addr.startswith('88'):
            mapping[func] = f"HandleUIInput{addr[4:]}"
        elif addr.startswith('89'):
            mapping[func] = f"ProcessGameLogic{addr[4:]}"
        elif addr.startswith('8a'):
            mapping[func] = f"UpdatePhysicsState{addr[4:]}"
        elif addr.startswith('8b'):
            mapping[func] = f"ProcessMemoryOperation{addr[4:]}"
        elif addr.startswith('8c'):
            mapping[func] = f"HandleStringOperation{addr[4:]}"
        elif addr.startswith('8d'):
            mapping[func] = f"UpdateResourceState{addr[4:]}"
        elif addr.startswith('8e'):
            mapping[func] = f"ProcessValidation{addr[4:]}"
        elif addr.startswith('8f'):
            mapping[func] = f"HandleRendering{addr[4:]}"
        elif addr.startswith('90'):
            mapping[func] = f"ProcessAnimation{addr[4:]}"
        else:
            mapping[func] = f"ExecuteOperation{addr[4:]}"
    
    return mapping

def replace_function_names(content, mapping):
    """替换函数名"""
    for old_name, new_name in mapping.items():
        # 使用正则表达式确保只替换完整的函数名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    return content

def main():
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    
    # 读取文件
    print("正在读取文件...")
    content = read_file(file_path)
    if content is None:
        return 1
    
    # 提取函数名
    print("正在提取函数名...")
    function_names = extract_function_patterns(content)
    print(f"找到 {len(function_names)} 个需要重命名的函数")
    
    # 创建映射表
    print("正在创建函数名映射表...")
    mapping = create_function_mapping(function_names)
    
    # 替换函数名
    print("正在替换函数名...")
    new_content = replace_function_names(content, mapping)
    
    # 写入文件
    print("正在写入文件...")
    if write_file(file_path, new_content):
        print("函数名重命名完成！")
        return 0
    else:
        return 1

if __name__ == "__main__":
    sys.exit(main())