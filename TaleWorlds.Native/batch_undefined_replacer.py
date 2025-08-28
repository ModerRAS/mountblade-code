#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量 undefined 类型替换脚本
使用正则表达式进行全局替换
"""

import re
import os

def process_file_with_regex(file_path):
    """使用正则表达式处理文件"""
    try:
        # 读取文件
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        
        # 统计原始数量
        original_count = len(re.findall(r'\bundefined\b', content))
        if original_count == 0:
            return 0
        
        print(f"处理文件: {file_path} (发现 {original_count} 个undefined)")
        
        # 替换规则
        patterns = [
            # 函数参数中的 undefined8
            (r'\bundefined8\s+param_(\d+)', r'uint64_t param_\1'),
            # 函数参数中的 undefined4
            (r'\bundefined4\s+param_(\d+)', r'int32_t param_\1'),
            # 函数参数中的 undefined2
            (r'\bundefined2\s+param_(\d+)', r'int16_t param_\1'),
            # 函数参数中的 undefined1
            (r'\bundefined1\s+param_(\d+)', r'int8_t param_\1'),
            
            # 函数返回值中的 undefined8
            (r'^\s*undefined8\s+', 'uint64_t '),
            # 函数返回值中的 undefined4
            (r'^\s*undefined4\s+', 'int32_t '),
            # 函数返回值中的 undefined2
            (r'^\s*undefined2\s+', 'int16_t '),
            # 函数返回值中的 undefined1
            (r'^\s*undefined1\s+', 'int8_t '),
            
            # 指针类型
            (r'\bundefined\s*\*', 'void*'),
            (r'\bundefined8\s*\*', 'uint64_t*'),
            (r'\bundefined4\s*\*', 'int32_t*'),
            
            # 变量声明
            (r'\bundefined8\s+(\w+)', r'uint64_t \1'),
            (r'\bundefined4\s+(\w+)', r'int32_t \1'),
            (r'\bundefined2\s+(\w+)', r'int16_t \1'),
            (r'\bundefined1\s+(\w+)', r'int8_t \1'),
            
            # 其他情况
            (r'\bundefined\b', 'void')
        ]
        
        total_replacements = 0
        for pattern, replacement in patterns:
            matches = re.findall(pattern, content, re.MULTILINE)
            if matches:
                content = re.sub(pattern, replacement, content, flags=re.MULTILINE)
                total_replacements += len(matches)
        
        # 写回文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        # 统计剩余数量
        remaining_count = len(re.findall(r'\bundefined\b', content))
        print(f"  替换 {total_replacements} 处，剩余 {remaining_count} 处")
        
        return total_replacements
        
    except Exception as e:
        print(f"处理文件 {file_path} 时出错: {e}")
        return 0

def main():
    """主函数"""
    print("=== 批量 undefined 类型替换 ===")
    
    # 需要处理的文件列表
    target_files = [
        'TaleWorlds.Native.dll.h',
        'src/00_data_definitions.h',
        'pretty/00/00_data_definitions.h'
    ]
    
    # 查找其他包含undefined的文件
    for root, dirs, files in os.walk('.'):
        for file in files:
            if file.endswith('.c') or file.endswith('.h'):
                file_path = os.path.join(root, file)
                if file_path not in target_files:
                    try:
                        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                            content = f.read()
                            if 'undefined' in content:
                                target_files.append(file_path)
                    except:
                        continue
    
    print(f"发现 {len(target_files)} 个需要处理的文件")
    
    total_replacements = 0
    processed_files = 0
    
    for file_path in target_files:
        if os.path.exists(file_path):
            replacements = process_file_with_regex(file_path)
            if replacements > 0:
                processed_files += 1
                total_replacements += replacements
    
    print(f"\n处理完成:")
    print(f"- 处理文件数: {processed_files}")
    print(f"- 总替换次数: {total_replacements}")
    
    # 验证结果
    remaining_total = 0
    for file_path in target_files:
        if os.path.exists(file_path):
            try:
                with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                    content = f.read()
                    count = len(re.findall(r'\bundefined\b', content))
                    remaining_total += count
            except:
                pass
    
    print(f"- 剩余undefined数量: {remaining_total}")

if __name__ == "__main__":
    main()