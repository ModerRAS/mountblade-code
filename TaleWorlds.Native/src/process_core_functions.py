#!/usr/bin/env python3
import re
import sys

def beautify_functions(file_path):
    """美化文件中的FUN_函数调用"""
    
    # 函数映射字典
    function_map = {
        'FUN_1801bb3a0': 'ProcessSystemMemoryBlockOperation',
        'FUN_18019c6e0': 'HandleSystemContextMemoryOperation',
        'FUN_1801acb30': 'ReleaseSystemMemoryContext',
        'FUN_1801c1c40': 'ProcessSystemDataBufferOperation',
        'FUN_1801c1af0': 'InitializeSystemDataTemplate',
        'FUN_18019c5b0': 'ProcessSystemMemoryAllocation',
        'FUN_18019cf00': 'HandleSystemBufferPointerOperation',
        'FUN_18019d190': 'ValidateSystemContextMemory',
        'FUN_180199930': 'ProcessSystemCharacterEncoding',
        'FUN_1801b84e0': 'ExecuteSystemMemoryValidation',
        'FUN_1801c1720': 'CleanupSystemMemoryFlag',
        'FUN_1802e5be0': 'ProcessExtendedMemoryOperation',
        'FUN_180316460': 'InitializeSystemMemoryAllocator',
        'FUN_18031a470': 'ConfigureSystemMemoryParameters',
        'FUN_1802c6190': 'ExecuteSystemContextCleanup',
    }
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    original_content = content
    
    # 替换函数调用
    for old_name, new_name in function_map.items():
        # 匹配函数调用模式：FUN_xxxxxxxxx(...)
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 统计替换次数
    replacements_made = 0
    for old_name, new_name in function_map.items():
        old_count = original_content.count(old_name)
        new_count = content.count(new_name)
        if old_count > 0:
            replacements_made += old_count
            print(f"替换 {old_name} -> {new_name}: {old_count} 次")
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    return replacements_made

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
    replacements = beautify_functions(file_path)
    print(f"总共替换了 {replacements} 个函数调用")