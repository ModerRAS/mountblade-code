#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量处理03_rendering.c文件中的undefined标识符
"""

import re

def process_undefined_functions():
    """处理文件中的undefined函数声明"""
    
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    
    # 读取文件
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 匹配函数声明模式：undefined FunctionName;
    pattern = r'undefined\s+([a-zA-Z_][a-zA-Z0-9_]*)\s*;'
    
    def replace_function(match):
        function_name = match.group(1)
        return f'uint32_t {function_name};'
    
    # 替换所有匹配的函数声明
    content = re.sub(pattern, replace_function, content)
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("批量处理undefined函数声明完成！")
    
    # 验证结果
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    remaining = re.findall(pattern, content)
    print(f"剩余的undefined函数声明数量：{len(remaining)}")

if __name__ == "__main__":
    process_undefined_functions()