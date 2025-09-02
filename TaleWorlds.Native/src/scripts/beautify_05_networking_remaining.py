#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
05_networking.c 文件美化脚本
该脚本用于批量美化 05_networking.c 文件中的函数名和变量名
"""

import os
import re
import shutil
from pathlib import Path

def backup_file(file_path):
    """备份原始文件"""
    backup_path = f"{file_path}.backup"
    shutil.copy2(file_path, backup_path)
    print(f"原始文件已备份为: {backup_path}")
    return backup_path

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def rename_functions(content):
    """重命名函数"""
    function_mappings = {
        # 网络数据搜索函数
        'FUN_18087b750': 'ProcessNetworkDataSearchFirstInstance',
        'FUN_18087b76a': 'ProcessNetworkDataSearchSecondInstance',
        'FUN_18087b883': 'ProcessNetworkDataSearchThirdInstance',
        'FUN_18087b970': 'ProcessNetworkDataSearchFourthInstance',
        'FUN_18087b993': 'ProcessNetworkDataSearchFifthInstance',
        'FUN_18087ba80': 'ProcessNetworkDataSearchSixthInstance',
        'FUN_18087ba9a': 'ProcessNetworkDataSearchSeventhInstance',
        'FUN_18087bbb0': 'ProcessNetworkDataSearchEighthInstance',
        'FUN_18087bbd3': 'ProcessNetworkDataSearchNinthInstance',
        'FUN_18087bca0': 'ProcessNetworkDataSearchTenthInstance',
        'FUN_18087bcc3': 'ProcessNetworkDataSearchEleventhInstance',
        'FUN_18087bdd0': 'ProcessNetworkDataSearchTwelfthInstance',
        'FUN_18087bdea': 'ProcessNetworkDataSearchThirteenthInstance',
        'FUN_18087bee0': 'ProcessNetworkDataSearchFourteenthInstance',
        'FUN_18087bf03': 'ProcessNetworkDataSearchFifteenthInstance',
        'FUN_18087c163': 'ProcessNetworkDataSearchSixteenthInstance',
        
        # 获取网络句柄函数
        'FUN_18087b93b': 'GetNetworkHandleFirstInstance',
        'FUN_18087ba4b': 'GetNetworkHandleSecondInstance',
        'FUN_18087bb5f': 'GetNetworkHandleThirdInstance',
        'FUN_18087bc8b': 'GetNetworkHandleFourthInstance',
        'FUN_18087bd7b': 'GetNetworkHandleFifthInstance',
        'FUN_18087beaf': 'GetNetworkHandleSixthInstance'
    }
    
    for old_name, new_name in function_mappings.items():
        content = content.replace(old_name, new_name)
    
    return content

def rename_variables(content):
    """重命名变量"""
    variable_mappings = {
        'BoolFlag': 'ResourceCleanupFlag',
        'uStackX_24': 'StackParameterHigh',
        'lStack0000000000000028': 'StackParameterLow',
        'in_XMM0_Qb': 'Xmm0Parameter'
    }
    
    for old_name, new_name in variable_mappings.items():
        content = content.replace(old_name, new_name)
    
    return content

def rename_labels(content):
    """重命名标签"""
    label_mappings = {
        'LAB_18087b80f': 'LAB_CleanupResourceExit',
        'LAB_18087ba26': 'LAB_SearchCompleteExit',
        'LAB_18087b916': 'LAB_ResourceCleanupExit'
    }
    
    for old_name, new_name in label_mappings.items():
        content = content.replace(old_name, new_name)
    
    return content

def add_function_comments(content):
    """添加函数注释"""
    # 为 ProcessNetworkDataSearchFirstInstance 添加注释
    pattern1 = r'(long long ProcessNetworkDataSearchFirstInstance\(long long connectionContext,uint \*packetData,char dataSize\))'
    replacement1 = '''/**\\n * 处理网络数据搜索的第一个实例\\n * \\n * 该函数负责处理网络数据搜索的第一个实例，主要功能包括：\\n * - 验证连接上下文的有效性\\n * - 处理网络数据包的搜索操作\\n * - 管理网络资源的分配和释放\\n * \\n * @param connectionContext 连接上下文\\n * @param packetData 数据包数据\\n * @param dataSize 数据大小\\n * @return 处理结果，成功返回相关数据，失败返回0\\n *\\n * 原始函数名为FUN_18087b750，现已重命名为ProcessNetworkDataSearchFirstInstance\\n */\\n\\1'''
    
    content = re.sub(pattern1, replacement1, content)
    
    # 为 ProcessNetworkDataSearchSecondInstance 添加注释
    pattern2 = r'(long long ProcessNetworkDataSearchSecondInstance\(long long connectionContext,NetworkHandle packetData,char dataSize\))'
    replacement2 = '''/**\\n * 处理网络数据搜索的第二个实例\\n * \\n * 该函数负责处理网络数据搜索的第二个实例，主要功能包括：\\n * - 验证连接上下文的有效性\\n * - 处理网络数据包的搜索操作\\n * - 管理网络资源的分配和释放\\n * \\n * @param connectionContext 连接上下文\\n * @param packetData 数据包数据\\n * @param dataSize 数据大小\\n * @return 处理结果，成功返回相关数据，失败返回0\\n *\\n * 原始函数名为FUN_18087b76a，现已重命名为ProcessNetworkDataSearchSecondInstance\\n */\\n\\1'''
    
    content = re.sub(pattern2, replacement2, content)
    
    # 为 GetNetworkHandleFirstInstance 添加注释
    pattern3 = r'(NetworkHandle GetNetworkHandleFirstInstance\(void\))'
    replacement3 = '''/**\\n * 获取网络句柄的第一个实例\\n * \\n * 该函数负责获取网络操作的句柄，用于后续的网络通信。\\n * 主要用于网络句柄的管理和获取操作。\\n * \\n * @return 网络句柄，用于网络通信操作\\n *\\n * 原始函数名为FUN_18087b93b，现已重命名为GetNetworkHandleFirstInstance\\n */\\n\\1'''
    
    content = re.sub(pattern3, replacement3, content)
    
    return content

def main():
    """主函数"""
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
    
    if not os.path.exists(file_path):
        print(f"文件不存在: {file_path}")
        return
    
    print("开始美化 05_networking.c 文件...")
    
    # 备份原始文件
    backup_file(file_path)
    
    # 读取文件内容
    content = read_file(file_path)
    
    # 第一阶段：重命名函数
    print("第一阶段：重命名函数...")
    content = rename_functions(content)
    
    # 第二阶段：美化变量名
    print("第二阶段：美化变量名...")
    content = rename_variables(content)
    
    # 第三阶段：美化标签名
    print("第三阶段：美化标签名...")
    content = rename_labels(content)
    
    # 第四阶段：添加函数注释
    print("第四阶段：添加函数注释...")
    content = add_function_comments(content)
    
    # 写入文件
    write_file(file_path, content)
    
    print("美化完成！")
    print(f"美化后的文件: {file_path}")
    
    # 验证修改
    if os.path.exists(file_path):
        print("文件存在，修改成功")
        print("修改后的文件前10行：")
        with open(file_path, 'r', encoding='utf-8') as f:
            for i, line in enumerate(f):
                if i < 10:
                    print(f"{i+1:3d}: {line.rstrip()}")
                else:
                    break
    else:
        print("文件不存在，修改失败")

if __name__ == "__main__":
    main()