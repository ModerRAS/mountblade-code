#!/usr/bin/env python3
"""
简化版99_unmatched_functions.c文件美化脚本
"""

import re

def process_file(file_path):
    """处理文件，重命名FUN_函数"""
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 创建基本映射表 - 基于常见的函数名模式
    function_mappings = {
        'FUN_1800a0e50': 'StringBufferAppend',
        'FUN_1800a1160': 'StringBufferProcess',
        'FUN_1806277c0': 'BufferResize',
        'FUN_1806281a0': 'DataValidation',
        'FUN_180628320': 'BufferAllocate',
        'FUN_18064e900': 'MemoryCleanup',
        'FUN_1800a990c': 'DataProcessor',
        'FUN_1800a9cf6': 'StateHandler',
        'FUN_1800a9108': 'ControlFlowManager',
        'FUN_1800a90fd': 'ParameterValidator'
    }
    
    # 查找所有FUN_函数
    func_pattern = r'FUN_[0-9a-f]+'
    functions = re.findall(func_pattern, content)
    
    if not functions:
        print("未找到FUN_函数")
        return
    
    # 去重
    unique_functions = list(set(functions))
    print(f"找到 {len(unique_functions)} 个唯一的FUN_函数")
    
    # 创建扩展映射
    for func in unique_functions:
        if func not in function_mappings:
            # 基于函数名后缀创建有意义的名称
            suffix = func[4:]  # 去掉FUN_前缀
            if suffix.startswith('180'):
                function_mappings[func] = f"SystemFunction_{suffix[3:]}"
            else:
                function_mappings[func] = f"GenericFunction_{suffix}"
    
    # 替换函数名
    modified_content = content
    for old_name, new_name in function_mappings.items():
        modified_content = re.sub(rf'\b{old_name}\b', new_name, modified_content)
    
    # 写入文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(modified_content)
    
    print(f"文件处理完成：{file_path}")
    print(f"替换了 {len(function_mappings)} 个函数名")

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    process_file(file_path)