#!/usr/bin/env python3
"""
美化99_unmatched_functions.c文件中的变量名
主要针对MemoryAllocationOperation函数的变量进行重命名
"""

import re
import sys

def beautify_memory_allocation_operation(content):
    """美化MemoryAllocationOperation函数的变量名"""
    
    # 函数开始的标志
    function_start = "longlong *\nMemoryAllocationOperation"
    function_end = "return xmlElementContext;\n}"
    
    # 找到函数的位置
    start_idx = content.find(function_start)
    if start_idx == -1:
        return content
    
    end_idx = content.find(function_end, start_idx)
    if end_idx == -1:
        return content
    
    # 提取整个函数
    function_content = content[start_idx:end_idx + len(function_end)]
    
    # 变量重命名映射
    variable_mapping = {
        "uVar4": "loopCounter",
        "plVar6": "stringBufferPointer",
        "lVar7": "stringBufferData",
        "plStack_58": "tempStringBuffer",
        "lStack_50": "tempStringBufferData",
        "auStack_48": "memoryAllocationBuffer",
        "tempBufferHandle": "memoryHandle",
        "stringBufferHandle": "defaultStringBuffer",
        "stringBufferData": "defaultStringBufferData",
        "pcontextOffset": "contextPointer"
    }
    
    # 替换变量名（只替换局部变量，不替换函数参数）
    for old_name, new_name in variable_mapping.items():
        # 只替换函数内部的变量声明和使用
        pattern = r'\b' + re.escape(old_name) + r'\b'
        function_content = re.sub(pattern, new_name, function_content)
    
    # 替换十六进制值为更具描述性的常量
    hex_replacements = {
        "0x3c": "<",
        "0x3f": "?",
        "0x78": "x",
        "0x6d": "m",
        "0x6c": "l",
        "0x3e": ">"
    }
    
    for hex_val, char_val in hex_replacements.items():
        # 只替换StringBufferAppendOperation调用中的十六进制值
        pattern = r'StringBufferAppendOperation\([^,]+,\s*' + re.escape(hex_val) + r'\)'
        replacement = f'StringBufferAppendOperation({{"{"}}1}}, {char_val})'
        function_content = re.sub(pattern, replacement, function_content)
    
    # 替换内存地址为描述性名称
    address_replacements = {
        "0x180d48d24": "SystemDefaultStringAddress"
    }
    
    for address, name in address_replacements.items():
        function_content = function_content.replace(address, name)
    
    # 重新组装内容
    new_content = content[:start_idx] + function_content + content[end_idx + len(function_end):]
    
    return new_content

def main():
    """主函数"""
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    
    try:
        # 读取文件
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 美化代码
        beautified_content = beautify_memory_allocation_operation(content)
        
        # 写回文件
        with open(input_file, 'w', encoding='utf-8') as f:
            f.write(beautified_content)
        
        print("美化完成: MemoryAllocationOperation函数的变量名已更新")
        
    except Exception as e:
        print(f"处理文件时出错: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()