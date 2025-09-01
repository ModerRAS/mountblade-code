#!/usr/bin/env python3
"""
清理重复函数声明脚本 - 简化版本
"""

import re

def clean_duplicate_functions():
    """清理重复函数声明"""
    input_file = "06_utilities.c"
    output_file = "06_utilities_cleaned.c"
    
    try:
        # 读取文件
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        print(f"读取文件: {input_file}")
        print(f"文件大小: {len(content)} 字符")
        
        # 提取函数声明
        function_pattern = r'^\s*([a-zA-Z_][a-zA-Z0-9_]*\s+[a-zA-Z_][a-zA-Z0-9_]*\s*\([^;]*\)\s*;)'
        
        signatures = []
        lines = content.split('\n')
        
        for line_num, line in enumerate(lines, 1):
            match = re.match(function_pattern, line)
            if match:
                full_declaration = match.group(1).strip()
                func_name_match = re.search(r'([a-zA-Z_][a-zA-Z0-9_]*)\s*\([^)]*\)', full_declaration)
                if func_name_match:
                    func_name = func_name_match.group(1)
                    signatures.append((line_num, full_declaration, func_name))
        
        print(f"检测到 {len(signatures)} 个函数声明")
        
        # 找出重复的函数
        function_occurrences = {}
        for line_num, full_declaration, func_name in signatures:
            if func_name not in function_occurrences:
                function_occurrences[func_name] = []
            function_occurrences[func_name].append(line_num)
        
        duplicates = {func: lines for func, lines in function_occurrences.items() if len(lines) > 1}
        
        print(f"发现 {len(duplicates)} 个重复的函数声明:")
        for func_name, lines in duplicates.items():
            print(f"  {func_name}: 出现在行 {lines}")
        
        # 清理重复声明
        lines_to_remove = set()
        for func_name, lines in duplicates.items():
            lines_to_remove.update(lines[1:])
        
        # 生成清理后的内容
        cleaned_lines = []
        for line_num, line in enumerate(lines, 1):
            if line_num not in lines_to_remove:
                cleaned_lines.append(line)
        
        cleaned_content = '\n'.join(cleaned_lines)
        
        # 写入清理后的文件
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write(cleaned_content)
        
        print(f"清理完成，结果保存到: {output_file}")
        
    except Exception as e:
        print(f"处理文件时出错: {e}")

if __name__ == "__main__":
    clean_duplicate_functions()