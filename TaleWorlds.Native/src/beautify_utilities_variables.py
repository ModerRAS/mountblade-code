#!/usr/bin/env python3
"""
美化06_utilities.c文件中的变量名
将数字化的变量名转换为更具语义的名称
"""

import re

def beautify_variables():
    """美化变量名"""
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 美化SystemConfigEntry变量
    for i in range(1, 16):
        old_name = f'SystemConfigEntry{i:02d}'
        new_name = f'SystemConfigurationEntry{i:02d}'
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    # 美化SystemEventHandler变量
    for i in range(1, 101):
        old_name = f'SystemEventHandler{i:02d}'
        new_name = f'SystemEventHandlerSlot{i:02d}'
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    # 美化SystemEventManager变量
    for i in range(1, 51):
        old_name = f'SystemEventManager{i:02d}'
        new_name = f'SystemEventManagerSlot{i:02d}'
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    # 美化SystemVariable变量
    for i in range(1, 24):
        old_name = f'SystemVariable{i:02d}'
        new_name = f'SystemGlobalVariable{i:02d}'
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    # 美化MemoryManagementBlock变量
    for i in range(1, 43):
        old_name = f'MemoryManagementBlock{i}'
        new_name = f'MemoryManagementBlock{i:02d}'
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    # 美化SystemConfigurationBlock变量
    for i in range(1, 40):
        old_name = f'SystemConfigurationBlock{i}'
        new_name = f'SystemConfigurationBlock{i:02d}'
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    # 美化MemoryBuffer变量
    for i in range(1, 134):
        old_name = f'MemoryBuffer{i:03d}'
        new_name = f'MemoryPoolBuffer{i:03d}'
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    # 美化SystemBuffer变量
    for i in range(1, 8):
        old_name = f'SystemBuffer{i:03d}'
        new_name = f'SystemDataBuffer{i:03d}'
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量名美化完成")

if __name__ == '__main__':
    beautify_variables()