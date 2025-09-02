#!/usr/bin/env python3
"""
网络函数重命名脚本
用于批量重命名05_networking.c文件中的函数名
"""

import os
import re
from pathlib import Path

def rename_functions_in_file():
    """重命名文件中的函数名"""
    
    # 文件路径
    file_path = Path("/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c")
    
    # 函数名映射字典
    function_mapping = {
        'FUN_180895210': 'InitializeNetworkConnectionContext',
        'FUN_180895236': 'GetNetworkConnectionHandle',
        'FUN_180895345': 'ValidateNetworkConnectionStatus',
        'FUN_180895bb0': 'ProcessNetworkPacketData',
        'FUN_180895c60': 'HandleNetworkConnectionRequest',
        'FUN_180895c8b': 'SendNetworkPacketData',
        'FUN_180895cf1': 'ReceiveNetworkPacketData',
        'FUN_180895d16': 'CloseNetworkConnection',
        'FUN_180895d30': 'CreateNetworkSocket',
        'FUN_180895d62': 'BindNetworkSocket',
        'FUN_180895d9c': 'ListenNetworkSocket',
        'FUN_180895f44': 'AcceptNetworkConnection',
        'FUN_180896027': 'ConnectNetworkSocket',
        'FUN_180896040': 'SendNetworkData',
        'FUN_180896064': 'ReceiveNetworkData',
        'FUN_18089611f': 'GetNetworkSocketAddress',
        'FUN_180896800': 'SetNetworkSocketOptions',
        'FUN_180896c10': 'GetNetworkSocketStatus',
        'FUN_1808974f4': 'InitializeNetworkSecurity',
        'FUN_180897560': 'ValidateNetworkSecurity',
        'FUN_1808b6e80': 'ProcessNetworkConnectionBuffer',
        'FUN_1808dec80': 'GetNetworkContextStatus',
        'FUN_18088ac50': 'ProcessNetworkPacket',
        'FUN_18084ec60': 'ValidateNetworkConnection',
        'FUN_180853000': 'ProcessNetworkValidation',
        'FUN_1808c17c0': 'IterateNetworkContext',
        'FUN_18088fb40': 'CheckNetworkTimeout',
        'FUN_18085ff30': 'GetNetworkFlags',
        'FUN_1808c7b30': 'HandleNetworkOperation',
        'FUN_1808c7dc0': 'InitializeNetworkOperation',
        'FUN_1808d7020': 'CleanupNetworkContext',
        'FUN_180875fc0': 'ProcessNetworkHandle',
        'FUN_180894dd0': 'GetNetworkPrimaryStatus',
        'FUN_1808bdd90': 'ValidateNetworkHandle',
        'FUN_1808c44f0': 'GetNetworkValidationResult',
        'FUN_18088c7c0': 'ProcessNetworkBuffer',
        'FUN_18088ca20': 'InitializeNetworkBuffer',
        'FUN_18088f530': 'SendNetworkPacket',
        'FUN_180895130': 'ValidateNetworkContext',
        'FUN_180896c60': 'ProcessNetworkContextData',
        'FUN_1808ac750': 'HandleNetworkAuthentication',
        'FUN_1808b0010': 'ProcessNetworkSecurity',
        'FUN_180899040': 'GetNetworkSecurityStatus',
        'FUN_1808aff40': 'ValidateNetworkPacket'
    }
    
    # 检查文件是否存在
    if not file_path.exists():
        print(f"错误：文件 {file_path} 不存在")
        return False
    
    # 读取文件内容
    try:
        with open(file_path, 'r', encoding='utf-8') as file:
            content = file.read()
    except Exception as e:
        print(f"读取文件时出错：{e}")
        return False
    
    # 统计替换次数
    total_replacements = 0
    original_content = content
    
    # 执行替换
    for old_name, new_name in function_mapping.items():
        # 使用正则表达式进行精确匹配
        pattern = r'\b' + re.escape(old_name) + r'\b'
        matches = re.findall(pattern, content)
        if matches:
            content = re.sub(pattern, new_name, content)
            replacement_count = len(matches)
            total_replacements += replacement_count
            print(f"替换函数名: {old_name} -> {new_name} (替换次数: {replacement_count})")
    
    # 检查是否有替换发生
    if total_replacements == 0:
        print("警告：没有找到需要替换的函数名")
        return True
    
    # 写入文件
    try:
        with open(file_path, 'w', encoding='utf-8') as file:
            file.write(content)
        print(f"成功重命名 {total_replacements} 个函数名")
        return True
    except Exception as e:
        print(f"写入文件时出错：{e}")
        return False

def main():
    """主函数"""
    print("开始执行网络函数重命名脚本...")
    
    # 执行重命名
    success = rename_functions_in_file()
    
    if success:
        print("脚本执行完成")
        
        # 脚本执行完成后删除自己
        try:
            script_path = Path(__file__)
            script_path.unlink()
            print(f"脚本已自动删除: {script_path}")
        except Exception as e:
            print(f"删除脚本时出错：{e}")
    else:
        print("脚本执行失败")

if __name__ == "__main__":
    main()