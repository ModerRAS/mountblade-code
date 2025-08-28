#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
简化版批量替换 undefined 类型脚本
专门用于快速处理所有文件
"""

import os
import re
import glob

def replace_undefined_in_file(file_path):
    """替换单个文件中的 undefined 类型"""
    try:
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        
        original_content = content
        
        # 简化的替换规则
        replacements = [
            (r'\bundefined1\b', 'int8_t'),
            (r'\bundefined2\b', 'int16_t'),
            (r'\bundefined4\b', 'int32_t'),
            (r'\bundefined8\b', 'uint64_t'),
            (r'\bundefined\s*\*\b', 'void*'),
            (r'\bundefined\b\s*\*', 'void*'),
            (r'\bundefined\b(?=\s*[);,])', 'void'),
            (r'\bundefined\b(?=\s+[a-zA-Z_][a-zA-Z0-9_]*)', 'void'),
            (r'\bundefined\b$', 'void'),
            (r'\bundefined\b', 'void')
        ]
        
        # 应用替换规则
        for pattern, replacement in replacements:
            content = re.sub(pattern, replacement, content)
        
        # 如果有变化，写回文件
        if content != original_content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            return True, len(re.findall(r'undefined', original_content))
        
        return False, 0
        
    except Exception as e:
        print(f"处理文件 {file_path} 时出错: {e}")
        return False, 0

def main():
    """主函数"""
    print("开始快速批量替换 undefined 类型...")
    
    # 查找所有C文件
    c_files = []
    for root, dirs, files in os.walk('pretty'):
        for file in files:
            if file.endswith('.c'):
                c_files.append(os.path.join(root, file))
    
    total_files = len(c_files)
    print(f"发现 {total_files} 个C文件")
    
    # 处理文件
    processed_count = 0
    total_replacements = 0
    
    for i, file_path in enumerate(c_files, 1):
        if i % 50 == 0:
            print(f"进度: {i}/{total_files}")
        
        processed, replacements = replace_undefined_in_file(file_path)
        if processed:
            processed_count += 1
            total_replacements += replacements
    
    print(f"\n处理完成！")
    print(f"处理文件数: {processed_count}")
    print(f"总替换次数: {total_replacements}")
    
    # 验证结果
    remaining_count = 0
    for file_path in c_files:
        try:
            with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
                remaining_count += content.count('undefined')
        except Exception:
            pass
    
    print(f"剩余 undefined 类型数量: {remaining_count}")
    
    return {
        'processed_files': processed_count,
        'total_replacements': total_replacements,
        'remaining_count': remaining_count
    }

if __name__ == "__main__":
    result = main()
    print(f"\n最终结果:")
    print(f"- 处理文件: {result['processed_files']}")
    print(f"- 替换次数: {result['total_replacements']}")
    print(f"- 剩余数量: {result['remaining_count']}")