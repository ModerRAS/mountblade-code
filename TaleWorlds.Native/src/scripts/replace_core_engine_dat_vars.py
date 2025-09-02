#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量替换02_core_engine.c文件中的DAT_变量为语义化名称
"""

import re

# 替换映射
REPLACEMENTS = {
    'DAT_18098d698': 'SystemInitializationStatusTable',
    '_DAT_180c86878': '_SystemMemoryBaseAddress',
    'DAT_180be0000': 'SystemDataBaseAddress',
    '_DAT_180c868f8': '_SystemPrimaryDataPointer',
    '_DAT_180c8aa50': '_SystemFloatTableAddress',
    '_DAT_180c868c8': '_SystemSecondaryDataPointer',
    'DAT_180c82862': 'SystemCharacterTableAddress',
    'DAT_180c8ed80': 'SystemEventTemplateData',
    '_DAT_180c8aa08': '_SystemMemoryAddressMask',
    '_DAT_180c8a988': '_SystemBufferAllocationStatus',
    '_DAT_180c86908': '_SystemMemoryManagementTable',
    'DAT_180c8ecee': 'SystemInitializationStatusFlag',
    'DAT_180d49420': 'SystemInputDataBuffer',
    '_DAT_180d4943c': '_SystemInputDataProcessor',
}

def process_file(file_path):
    """处理文件，替换所有DAT_变量"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        original_content = content
        replacements_made = {}
        
        # 执行替换
        for old_name, new_name in REPLACEMENTS.items():
            # 使用正则表达式确保只替换完整的变量名
            pattern = r'\b' + re.escape(old_name) + r'\b'
            new_content = re.sub(pattern, new_name, content)
            
            if new_content != content:
                count = len(re.findall(pattern, original_content))
                replacements_made[old_name] = count
                content = new_content
        
        # 如果有替换，写回文件
        if replacements_made:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            
            print(f"成功处理文件: {file_path}")
            print("完成的替换:")
            for old_name, count in replacements_made.items():
                print(f"  {old_name} → {REPLACEMENTS[old_name]} ({count} 次)")
        else:
            print(f"没有找到需要替换的变量: {file_path}")
            
    except Exception as e:
        print(f"处理文件时出错: {e}")

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
    process_file(file_path)