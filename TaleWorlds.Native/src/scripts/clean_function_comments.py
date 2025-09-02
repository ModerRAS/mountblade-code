#!/usr/bin/env python3
"""
清理01_initialization.c文件中的函数注释
将注释中的FUN_函数名替换为美化后的函数名
"""

import re
import sys

def clean_function_comments():
    """清理函数注释中的FUN_函数名"""
    
    # 读取文件
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 查找所有包含FUN_的函数注释行并替换
        # 匹配模式：// 函数: [返回类型] FUN_[地址](参数列表)
        pattern = r'// 函数: (.*?FUN_180[0-9a-fA-F]{4,5}\(.*\))'
        
        def replace_function_comment(match):
            # 提取完整的函数签名
            full_signature = match.group(1)
            # 提取FUN_函数名
            fun_match = re.search(r'FUN_180[0-9a-fA-F]{4,5}', full_signature)
            if fun_match:
                fun_name = fun_match.group(0)
                # 查找函数定义中的美化后名称
                # 在文件中查找该函数的实际定义
                function_pattern = rf'void {fun_name}\(|char {fun_name}\(|int {fun_name}\(|uint {fun_name}\(|ulong {fun_name}\(|long long {fun_name}\(|uint8_t {fun_name}\(|uint32_t {fun_name}\('
                function_match = re.search(function_pattern, content)
                if function_match:
                    # 提取美化后的函数名
                    beautified_name = function_match.group(0).split('(')[0].split()[-1]
                    # 替换FUN_函数名为美化后的名称
                    new_signature = full_signature.replace(fun_name, beautified_name)
                    return f'// 函数: {new_signature}'
            
            return match.group(0)
        
        # 执行替换
        content = re.sub(pattern, replace_function_comment, content)
        
        # 写入文件
        with open(input_file, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print("成功清理函数注释")
        
    except Exception as e:
        print(f"处理文件时出错: {e}")
        sys.exit(1)

if __name__ == "__main__":
    clean_function_comments()