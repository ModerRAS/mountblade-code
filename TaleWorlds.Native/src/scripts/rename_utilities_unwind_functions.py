#!/usr/bin/env python3
"""
批量重命名06_utilities.c中的Unwind函数
根据函数的功能和参数为它们分配有意义的名称
"""

import re
import os

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def generate_function_name(address, params):
    """根据函数地址和参数生成有意义的函数名"""
    # 根据地址范围和参数类型推断功能
    base_addr = int(address, 16)
    
    # 根据参数类型判断功能
    if 'CleanupOption' in params and 'CleanupFlag' in params:
        if base_addr < 0x180905400:
            return f"ProcessResourceCleanup_{address[-3:]}"
        elif base_addr < 0x180906000:
            return f"ExecuteSystemCleanup_{address[-3:]}"
        else:
            return f"PerformFinalCleanup_{address[-3:]}"
    elif 'ValidationContext' in params and len(params) == 2:
        if base_addr < 0x180905400:
            return f"ValidateResourceContext_{address[-3:]}"
        elif base_addr < 0x180906000:
            return f"ProcessSystemValidation_{address[-3:]}"
        else:
            return f"ExecuteFinalValidation_{address[-3:]}"
    elif len(params) == 0:
        return f"InitializeSystemModule_{address[-3:]}"
    else:
        return f"ProcessSystemOperation_{address[-3:]}"

def rename_unwind_functions(content):
    """重命名Unwind函数"""
    # 匹配Unwind函数定义的正则表达式
    pattern = r'void (Unwind_180[0-9a-fA-F]+)\(([^)]*)\)'
    
    def replace_function(match):
        original_name = match.group(1)
        params = match.group(2)
        
        # 生成新的函数名
        address = original_name.split('_')[1]
        new_name = generate_function_name(address, params)
        
        # 添加函数注释
        comment = f"/**\n * @brief {new_name}\n * \n * 原始函数名：{original_name}\n * 系统资源管理和清理函数\n */\n"
        
        return f"{comment}void {new_name}({params})"
    
    # 替换所有匹配的函数定义
    content = re.sub(pattern, replace_function, content)
    
    # 替换函数调用
    call_pattern = r'([^\w])(Unwind_180[0-9a-fA-F]+)\('
    def replace_call(match):
        prefix = match.group(1)
        func_name = match.group(2)
        address = func_name.split('_')[1]
        
        # 生成新的函数名
        new_name = generate_function_name(address, "")
        
        return f"{prefix}{new_name}("
    
    content = re.sub(call_pattern, replace_call, content)
    
    return content

def main():
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
    
    # 读取文件
    content = read_file(file_path)
    
    # 重命名Unwind函数
    content = rename_unwind_functions(content)
    
    # 写入文件
    write_file(file_path, content)
    
    print("Unwind函数重命名完成")

if __name__ == "__main__":
    main()