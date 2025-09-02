#!/usr/bin/env python3
"""
批量重命名99_unmatched_functions.c中的函数名
"""

def rename_functions():
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 函数重命名映射
    function_map = {
        'FUN_180049b30': 'AllocateMemoryContext',
        'FUN_18062b8b0': 'ReallocateMemoryBuffer',
        'FUN_180242760': 'ProcessNetworkDataStream'
    }
    
    # 执行替换
    for old_name, new_name in function_map.items():
        content = content.replace(old_name, new_name)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("函数重命名完成")

if __name__ == '__main__':
    rename_functions()