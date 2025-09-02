#!/usr/bin/env python3
"""
UI系统Stack变量美化脚本
用于批量替换逆向工程生成的Stack变量名为语义化名称
"""

import re
import sys

def beautify_stack_variables(content):
    """美化Stack变量名"""
    
    # Stack变量映射表
    stack_mappings = {
        # 通用Stack变量
        r'uStack_([0-9a-f]+)': r'unsignedValue_\1',
        r'lStack_([0-9a-f]+)': r'longValue_\1',
        r'puStack_([0-9a-f]+)': r'pointerUnsigned_\1',
        r'pcStack_([0-9a-f]+)': r'charPointer_\1',
        r'auStack_([0-9a-f]+)': r'arrayUnsigned_\1',
        r'acStack_([0-9a-f]+)': r'arrayChar_\1',
        r'Stack_([0-9a-f]+)': r'stackVariable_\1',
        r'iStack_([0-9a-f]+)': r'integerValue_\1',
        r'fStack_([0-9a-f]+)': r'floatValue_\1',
        r'dStack_([0-9a-f]+)': r'doubleValue_\1',
        r'afStack_([0-9a-f]+)': r'arrayFloat_\1',
        r'adStack_([0-9a-f]+)': r'arrayDouble_\1',
        r'piStack_([0-9a-f]+)': r'pointerInteger_\1',
        r'pfStack_([0-9a-f]+)': r'pointerFloat_\1',
        r'pdStack_([0-9a-f]+)': r'pointerDouble_\1',
        r'plStack_([0-9a-f]+)': r'pointerLong_\1',
        r'pStack_([0-9a-f]+)': r'pointerValue_\1',
        r'usStack_([0-9a-f]+)': r'unsignedShort_\1',
        r'ucStack_([0-9a-f]+)': r'unsignedChar_\1',
        r'sStack_([0-9a-f]+)': r'shortValue_\1',
        r'cStack_([0-9a-f]+)': r'charValue_\1',
        r'bStack_([0-9a-f]+)': r'booleanValue_\1',
        r'uiStack_([0-9a-f]+)': r'unsignedInteger_\1',
        r'ulStack_([0-9a-f]+)': r'unsignedLong_\1',
        r'ullStack_([0-9a-f]+)': r'unsignedLongLong_\1',
        r'llStack_([0-9a-f]+)': r'longLongValue_\1',
        r'ldStack_([0-9a-f]+)': r'longDouble_\1',
        r'pldStack_([0-9a-f]+)': r'pointerLongDouble_\1',
        r'pllStack_([0-9a-f]+)': r'pointerLongLong_\1',
        r'pullStack_([0-9a-f]+)': r'pointerUnsignedLongLong_\1',
        r'pusStack_([0-9a-f]+)': r'pointerUnsignedShort_\1',
        r'pucStack_([0-9a-f]+)': r'pointerUnsignedChar_\1',
        r'psStack_([0-9a-f]+)': r'pointerShort_\1',
        r'pbStack_([0-9a-f]+)': r'pointerBoolean_\1',
        r'puiStack_([0-9a-f]+)': r'pointerUnsignedInteger_\1',
        r'pulStack_([0-9a-f]+)': r'pointerUnsignedLong_\1',
    }
    
    # 应用替换规则
    for pattern, replacement in stack_mappings.items():
        content = re.sub(pattern, replacement, content)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("Usage: python3 beautify_ui_stack_variables.py <input_file>")
        sys.exit(1)
    
    input_file = sys.argv[1]
    
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 美化Stack变量
        beautified_content = beautify_stack_variables(content)
        
        # 写回文件
        with open(input_file, 'w', encoding='utf-8') as f:
            f.write(beautified_content)
        
        print(f"Stack变量美化完成: {input_file}")
        
    except Exception as e:
        print(f"处理文件时出错: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()