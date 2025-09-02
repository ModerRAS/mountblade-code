#!/usr/bin/env python3
"""
美化01_initialization.c文件中的逆向工程名称
替换FUN_和LAB_标签为语义化名称
"""

import re

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_labels(content):
    """美化标签名称"""
    # 替换GOTO标签
    label_mappings = {
        'FUN_180077ef9': 'SystemSecurityValidationFailed',
        'LAB_180077847': 'SystemResourceValidationPoint',
        'LAB_180077879': 'SystemResourceProcessingComplete',
        'FUN_180083390': 'SystemMemoryAllocationCallback',
        'FUN_180082e70': 'SystemThreadPrimaryCallback',
        'FUN_180082da0': 'SystemThreadSecondaryCallback',
    }
    
    for old_name, new_name in label_mappings.items():
        content = content.replace(f'goto {old_name}', f'goto {new_name}')
        content = content.replace(f'{old_name}:', f'{new_name}:')
        content = content.replace(f'= {old_name}', f'= {new_name}')
    
    return content

def beautify_variables(content):
    """美化变量名称"""
    # 替换一些不清晰的变量名
    variable_mappings = {
        'plStack_b8': 'SystemContextPointer',
        'plStack_c0': 'SystemResourceManagerPointer',
        'plongValue40': 'SystemResourceValue',
        'plStack_68': 'SystemOperationStack',
        'plStack_88': 'SystemCleanupStack',
        'psystemMemoryOffset': 'SystemMemoryOffset',
        'plStack_80': 'SystemSecondaryStack',
        'plStack_a8': 'SystemCallbackStack',
        'aplStack_58': 'SystemCallbackArray',
        'aplStack_78': 'SystemResourceArray',
        'PrimaryResourcePointer0': 'SystemResourcePrimary',
        'PrimaryResourcePointer1': 'SystemResourceSecondary',
        'PrimaryResourcePointer2': 'SystemResourceTertiary',
        'lStack_78': 'SystemContextValue',
        'bStack_70': 'SystemContextFlag',
    }
    
    for old_name, new_name in variable_mappings.items():
        # 使用正则表达式确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化标签
    content = beautify_labels(content)
    
    # 美化变量
    content = beautify_variables(content)
    
    # 写回文件
    write_file(file_path, content)
    
    print("01_initialization.c 美化完成")

if __name__ == '__main__':
    main()