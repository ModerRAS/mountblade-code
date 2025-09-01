#!/usr/bin/env python3
"""
更新99_unmatched_functions.c文件中的函数调用
将FUN_函数调用更新为新的语义化函数名
"""

import re

def update_function_calls():
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    
    # 函数名映射
    function_mapping = {
        "FUN_1800a4010": "CreateResourceWithFlags",
        "FUN_1800a43c0": "InitializeResourceHandle",
        "FUN_1800a4c50": "SetupResourceParameters",
        "FUN_1800a5110": "ProcessResourceData",
        "FUN_1800a5810": "LoadResourceWithOptions",
        "FUN_1800a5f50": "CleanupResourceContext",
        "FUN_1800a5f90": "ReleaseResourceMemory",
        "FUN_1800a5fc0": "ValidateResourceState",
        "FUN_1800a6011": "InitializeSystemComponents",
        "FUN_1800a609a": "CleanupSystemComponents"
    }
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 更新函数调用
    for old_name, new_name in function_mapping.items():
        # 匹配函数调用模式
        pattern = r'\b' + re.escape(old_name) + r'\('
        replacement = new_name + '('
        
        # 统计替换次数
        count_before = len(re.findall(pattern, content))
        content = re.sub(pattern, replacement, content)
        count_after = len(re.findall(pattern, content))
        
        if count_before > 0:
            print(f"更新函数调用: {old_name} -> {new_name} (替换了 {count_before - count_after} 处)")
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("函数调用更新完成！")

if __name__ == "__main__":
    update_function_calls()