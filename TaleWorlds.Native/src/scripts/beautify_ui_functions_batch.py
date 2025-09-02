#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
批量美化UI系统中的FUN_函数名
根据函数的参数和实现模式，为函数赋予语义化的名称
"""

import re
import sys

def analyze_function_signature(signature):
    """分析函数签名，推断其功能"""
    if "undefined1 *systemContext" in signature:
        if "byte *parameterThree" in signature and "byte *parameterFour" in signature:
            return "ProcessImageData"
        elif "longlong parameterTwo" in signature and "byte *parameterThree" in signature:
            return "ProcessUICommand"
    elif "longlong systemContext" in signature:
        if "longlong parameterTwo" in signature:
            if "uint64_t parameterThree" in signature:
                return "UpdateUIState"
            else:
                return "ProcessSystemOperation"
    elif "undefined4 *systemContext" in signature:
        return "ProcessUIControl"
    elif "uint64_t systemContext" in signature:
        return "HandleUIEvent"
    return "UIOperation"

def generate_function_name(original_name, signature):
    """生成语义化的函数名"""
    # 从原始函数名提取地址部分
    address_match = re.search(r'FUN_(180[0-9a-f]+)', original_name)
    if address_match:
        address = address_match.group(1)
        
        # 分析函数功能
        base_name = analyze_function_signature(signature)
        
        # 添加地址后缀以确保唯一性
        suffix = address[-4:]  # 取地址的最后4位作为后缀
        
        return f"{base_name}_{suffix}"
    
    return original_name

def process_file(file_path):
    """处理文件，替换函数名"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 查找所有FUN_函数定义
        function_pattern = r'^void (FUN_180[0-9a-f]+)\(([^)]*)\)'
        matches = re.findall(function_pattern, content, re.MULTILINE)
        
        # 创建替换映射
        replacements = {}
        for func_name, signature in matches:
            new_name = generate_function_name(func_name, signature)
            replacements[func_name] = new_name
            print(f"Renaming: {func_name} -> {new_name}")
        
        # 执行替换
        for old_name, new_name in replacements.items():
            # 替换函数定义
            content = re.sub(
                rf'^void {old_name}\(',
                f'void {new_name}(',
                content,
                flags=re.MULTILINE
            )
            
            # 替换函数调用
            content = re.sub(
                rf'\b{old_name}\(',
                f'{new_name}(',
                content
            )
        
        # 写回文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
            
        print(f"Successfully processed {len(replacements)} functions")
        
    except Exception as e:
        print(f"Error processing file: {e}")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python beautify_ui_functions.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    process_file(file_path)