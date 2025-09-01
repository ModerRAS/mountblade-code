#!/usr/bin/env python3
"""
网络系统函数重命名脚本
用于美化05_networking.c文件中的未命名函数
"""

import re
import os

def beautify_networking_functions():
    """美化网络系统函数"""
    
    # 读取文件
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return False
    
    # 定义函数重命名映射
    function_mappings = {
        'FUN_180876d54': 'ProcessNetworkSecurityValidation',
        'FUN_180876d27': 'ValidateNetworkConnectionState',
        'FUN_18087920b': 'InitializeNetworkConnectionContext',
        'FUN_18088b503': 'ProcessNetworkDataEncryption',
        'FUN_180895b89': 'HandleNetworkConnectionTimeout',
        'FUN_1808974f4': 'ValidateNetworkPacketHeader',
        'FUN_180897b16': 'ProcessNetworkConnectionQueue',
        'FUN_180897b0e': 'HandleNetworkConnectionError',
        'FUN_180897afe': 'CleanupNetworkConnectionResources'
    }
    
    # 应用函数重命名
    original_content = content
    for old_name, new_name in function_mappings.items():
        # 替换函数定义
        content = re.sub(rf'\b{old_name}\b', new_name, content)
    
    # 检查是否有修改
    if content != original_content:
        # 写入文件
        try:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            print("函数重命名完成")
            return True
        except Exception as e:
            print(f"写入文件失败: {e}")
            return False
    else:
        print("没有找到需要重命名的函数")
        return False

if __name__ == "__main__":
    beautify_networking_functions()