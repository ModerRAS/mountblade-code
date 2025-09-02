#!/usr/bin/env python3
"""
批量重命名网络模块中的UNK_变量
将UNK_变量替换为语义化的名称
"""

import re
import sys

def replace_unk_variables():
    """替换UNK_变量为语义化名称"""
    
    # 定义变量映射关系
    variable_mappings = {
        'UNK_180982588': 'NetworkConnectionTemplate',
        'UNK_180982608': 'NetworkSecurityTemplate',
        'UNK_180982f38': 'NetworkPacketBufferTemplate',
        'UNK_1809830b8': 'NetworkDataBufferTemplate',
        'UNK_180983238': 'NetworkConnectionContextTemplate',
        'UNK_1809832b8': 'NetworkSecurityContextTemplate',
        'UNK_1809834f8': 'NetworkAuthenticationTemplate',
        'UNK_180983588': 'NetworkProtocolTemplate',
        'UNK_1809839d8': 'NetworkTransferTemplate',
        'UNK_1809841e0': 'NetworkEncryptionTemplate',
        'UNK_180984358': 'NetworkCompressionTemplate',
        'UNK_1809843d0': 'NetworkValidationTemplate',
        'UNK_180986350': 'NetworkConnectionPoolTemplate',
        'UNK_180986370': 'NetworkConnectionHandleTemplate',
        'UNK_1809863f8': 'NetworkDataTransferTemplate',
        'UNK_180986408': 'NetworkContextTemplate',
        'UNK_180986470': 'NetworkPacketTransferTemplate',
        'UNK_1809864dc': 'NetworkStatusTemplate',
        'UNK_1809864e0': 'NetworkErrorCodeTemplate',
        'UNK_180986508': 'NetworkValidationContextTemplate',
        'UNK_1809868b0': 'NetworkConfigurationTemplate'
    }
    
    # 读取文件
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        original_content = content
        
        # 执行替换
        for old_name, new_name in variable_mappings.items():
            content = content.replace(f'&{old_name}', f'&{new_name}')
            content = content.replace(old_name, new_name)
        
        # 如果有变化，写回文件
        if content != original_content:
            with open(input_file, 'w', encoding='utf-8') as f:
                f.write(content)
            
            print("成功替换UNK_变量为语义化名称")
            print("替换的变量包括:")
            for old, new in variable_mappings.items():
                print(f"  {old} -> {new}")
        else:
            print("未找到需要替换的UNK_变量")
            
    except FileNotFoundError:
        print(f"错误：找不到文件 {input_file}")
    except Exception as e:
        print(f"处理文件时发生错误：{e}")

if __name__ == "__main__":
    replace_unk_variables()