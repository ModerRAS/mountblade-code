#!/usr/bin/env python3
"""
网络系统代码美化脚本
专门用于处理05_networking.c文件中的未美化函数和变量
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

def process_networking_file(content):
    """处理网络系统文件的美化工作"""
    
    # 处理未重命名的函数
    function_replacements = {
        'FUN_18086ab52': 'ProcessNetworkSecurityContextValidation',
        'FUN_18086ad32': 'ValidateNetworkSecurityPacketEx',
        'FUN_18086ad4c': 'ProcessNetworkEncryptionContextEx',
        'FUN_18086ae9c': 'InitializeNetworkSecurityValidationEx',
        'FUN_18086aeab': 'ProcessNetworkSecurityValidationEx',
        'FUN_18086aed0': 'ValidateNetworkSecurityContextEx',
        'FUN_18086af12': 'ProcessNetworkSecurityDataTransferEx',
        'FUN_18086af2f': 'CleanupNetworkSecurityContextEx',
        'FUN_18086ba5c': 'ProcessNetworkConnectionDataValidationEx',
        'FUN_18086ba6b': 'ValidateNetworkConnectionContextEx',
        'FUN_18086c6cf': 'InitializeNetworkConnectionPoolEx',
        'FUN_18086c83f': 'ProcessNetworkConnectionPoolEx',
        'FUN_18086c84e': 'ValidateNetworkConnectionPoolEx',
        'FUN_18086c870': 'CleanupNetworkConnectionPoolEx',
        'FUN_18086c8b2': 'ProcessNetworkConnectionDataTransferEx',
        'FUN_18086c8cf': 'ValidateNetworkConnectionDataTransferEx',
        'FUN_18086ca3f': 'InitializeNetworkConnectionContextEx',
        'FUN_18086ca4e': 'ProcessNetworkConnectionContextEx',
        'FUN_18086ca70': 'ValidateNetworkConnectionContextEx',
        'FUN_18086cab2': 'ProcessNetworkConnectionPacketTransferEx',
        'FUN_18086cacf': 'ValidateNetworkConnectionPacketTransferEx',
        'FUN_18086cc3f': 'InitializeNetworkConnectionSecurityEx',
        'FUN_18086cc4e': 'ProcessNetworkConnectionSecurityEx',
        'FUN_18086cc70': 'ValidateNetworkConnectionSecurityEx',
        'FUN_18086ccaf': 'ProcessNetworkConnectionDataValidation',
        'FUN_18086cccc': 'ValidateNetworkConnectionDataValidation',
        'FUN_18086ce3f': 'InitializeNetworkConnectionBufferEx',
        'FUN_18086ce4e': 'ProcessNetworkConnectionBufferEx',
        'FUN_18086ce70': 'ValidateNetworkConnectionBufferEx',
        'FUN_18086ceaf': 'ProcessNetworkConnectionStreamEx',
        'FUN_18086cecc': 'ValidateNetworkConnectionStreamEx',
        'FUN_18086d03f': 'InitializeNetworkConnectionTransferEx',
        'FUN_18086d04e': 'ProcessNetworkConnectionTransferEx',
        'FUN_18086d070': 'ValidateNetworkConnectionTransferEx',
        'FUN_18086e9b0': 'ProcessNetworkConnectionDataStreamEx',
        'FUN_18086fd60': 'InitializeNetworkConnectionQueueEx',
        'FUN_18086fe50': 'ProcessNetworkConnectionQueueEx',
        'FUN_18086ff40': 'ValidateNetworkConnectionQueueEx',
        'FUN_180870030': 'ProcessNetworkConnectionBufferFinal',
        'FUN_180870120': 'ValidateNetworkConnectionBufferFinal',
        'FUN_1808708c0': 'ClearNetworkDataSizeBufferFinal'
    }
    
    # 处理未重命名的变量
    variable_replacements = {
        'UNK_': 'NetworkData_',
        'DAT_': 'NetworkConfig_',
        'PUVAR': 'NetworkParameter',
        'uVar': 'networkParameter',
        'local_': 'networkLocal_',
        'param_': 'networkParam_',
        'stack_': 'networkStack_',
        'temp_': 'networkTemp_',
        'buffer_': 'networkBuffer_'
    }
    
    # 应用函数替换
    for old_name, new_name in function_replacements.items():
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    # 应用变量替换
    for old_prefix, new_prefix in variable_replacements.items():
        content = re.sub(r'\b' + old_prefix + r'([0-9a-fA-F]+)', new_prefix + r'\1', content)
    
    return content

def add_function_comments(content):
    """为函数添加注释"""
    
    # 为网络相关函数添加标准注释模板
    comment_patterns = {
        r'uint\s+(\w+)\s*\([^)]*\)': r'''/**
 * @brief 网络系统功能函数
 * 
 * 该函数负责处理网络系统中的特定操作
 * 
 * @return 操作结果状态码
 */
uint \1(''',
        
        r'void\s+(\w+)\s*\([^)]*\)': r'''/**
 * @brief 网络系统功能函数
 * 
 * 该函数负责处理网络系统中的特定操作
 * 
 * @return 无返回值
 */
void \1(''',
        
        r'int\s+(\w+)\s*\([^)]*\)': r'''/**
 * @brief 网络系统功能函数
 * 
 * 该函数负责处理网络系统中的特定操作
 * 
 * @return 操作结果，0表示成功
 */
int \1(''',
        
        r'bool\s+(\w+)\s*\([^)]*\)': r'''/**
 * @brief 网络系统功能函数
 * 
 * 该函数负责处理网络系统中的特定操作
 * 
 * @return 操作结果，true表示成功
 */
bool \1('''
    }
    
    # 应用注释模式
    for pattern, replacement in comment_patterns.items():
        # 只为还没有注释的函数添加注释
        lines = content.split('\n')
        new_lines = []
        i = 0
        while i < len(lines):
            line = lines[i]
            if re.search(pattern, line) and (i == 0 or not lines[i-1].strip().startswith('/**')):
                # 添加注释
                new_lines.append(re.sub(pattern, replacement, line))
            else:
                new_lines.append(line)
            i += 1
        content = '\n'.join(new_lines)
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    print("开始处理网络系统文件...")
    
    # 读取文件
    content = read_file(file_path)
    if content is None:
        return 1
    
    # 处理文件
    content = process_networking_file(content)
    content = add_function_comments(content)
    
    # 写入文件
    if write_file(file_path, content):
        print("文件处理完成")
        return 0
    else:
        return 1

if __name__ == '__main__':
    sys.exit(main())