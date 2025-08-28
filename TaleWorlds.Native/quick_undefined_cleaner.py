#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
快速 undefined 类型清理脚本
专门处理主要的 undefined 类型问题
"""

import os
import re
import sys
from pathlib import Path

def create_backup(file_path):
    """创建文件备份"""
    backup_path = file_path + '.backup'
    try:
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as src:
            with open(backup_path, 'w', encoding='utf-8') as dst:
                dst.write(src.read())
        return True
    except Exception as e:
        print(f"创建备份失败 {file_path}: {e}")
        return False

def process_file_quick(file_path):
    """快速处理单个文件"""
    try:
        # 创建备份
        if not create_backup(file_path):
            return False, 0
        
        # 读取文件
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        
        # 统计原始undefined数量
        original_count = len(re.findall(r'\bundefined\b', content))
        
        if original_count == 0:
            return False, 0
        
        print(f"  发现 {original_count} 个undefined类型")
        
        # 快速替换规则
        replacements = [
            # 最常见的模式：函数参数
            (r'\bundefined8\s+param_(\d+)', r'uint64_t param_\1'),
            (r'\bundefined4\s+param_(\d+)', r'int32_t param_\1'),
            (r'\bundefined2\s+param_(\d+)', r'int16_t param_\1'),
            (r'\bundefined1\s+param_(\d+)', r'int8_t param_\1'),
            
            # 函数返回值
            (r'^\s*undefined8\s+', 'uint64_t '),
            (r'^\s*undefined4\s+', 'int32_t '),
            (r'^\s*undefined2\s+', 'int16_t '),
            (r'^\s*undefined1\s+', 'int8_t '),
            
            # 变量声明
            (r'\bundefined8\s+(\w+)', r'uint64_t \1'),
            (r'\bundefined4\s+(\w+)', r'int32_t \1'),
            (r'\bundefined2\s+(\w+)', r'int16_t \1'),
            (r'\bundefined1\s+(\w+)', r'int8_t \1'),
            
            # 指针类型
            (r'\bundefined\s*\*', 'void*'),
            (r'\bundefined8\s*\*', 'uint64_t*'),
            (r'\bundefined4\s*\*', 'int32_t*'),
            
            # 其他 undefined
            (r'\bundefined\b', 'void')
        ]
        
        total_replacements = 0
        # 应用替换规则
        for pattern, replacement in replacements:
            matches = re.findall(pattern, content, re.MULTILINE)
            if matches:
                content = re.sub(pattern, replacement, content, flags=re.MULTILINE)
                total_replacements += len(matches)
        
        if total_replacements > 0:
            # 写回文件
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            
            # 统计替换后剩余的undefined数量
            remaining_count = len(re.findall(r'\bundefined\b', content))
            
            print(f"  ✓ 替换 {total_replacements} 处，剩余 {remaining_count} 处")
            return True, total_replacements
        
        return False, 0
        
    except Exception as e:
        print(f"处理文件 {file_path} 时出错: {e}")
        return False, 0

def main():
    """主函数"""
    print("=== 快速 undefined 类型清理 ===")
    print()
    
    # 主要目标文件
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
                    except Exception:
                        continue
    
    total_files = len(target_files)
    print(f"发现 {total_files} 个需要处理的文件")
    print()
    
    # 处理每个文件
    processed_files = 0
    total_replacements = 0
    
    for i, file_path in enumerate(target_files, 1):
        if os.path.exists(file_path):
            print(f"处理文件 {i}/{total_files}: {file_path}")
            
            processed, replacements = process_file_quick(file_path)
            
            if processed:
                processed_files += 1
                total_replacements += replacements
        else:
            print(f"跳过文件 {i}/{total_files}: {file_path} (不存在)")
    
    # 输出统计信息
    print()
    print("=== 处理结果统计 ===")
    print(f"扫描文件总数: {total_files}")
    print(f"成功处理文件数: {processed_files}")
    print(f"总替换次数: {total_replacements}")
    
    # 验证结果
    remaining_count = 0
    remaining_files = []
    
    for file_path in target_files:
        if os.path.exists(file_path):
            try:
                with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                    content = f.read()
                    count = len(re.findall(r'\bundefined\b', content))
                    if count > 0:
                        remaining_count += count
                        remaining_files.append((file_path, count))
            except Exception as e:
                print(f"验证文件 {file_path} 时出错: {e}")
    
    print(f"剩余 undefined 类型数量: {remaining_count}")
    
    if remaining_count > 0:
        print(f"\n剩余的 undefined 类型分布:")
        for file_path, count in remaining_files[:10]:
            print(f"  {file_path}: {count}")
        
        if len(remaining_files) > 10:
            print(f"  ... 还有 {len(remaining_files) - 10} 个文件")
    
    print()
    print("=== 任务完成 ===")
    
    return {
        'total_files': total_files,
        'processed_files': processed_files,
        'total_replacements': total_replacements,
        'remaining_count': remaining_count,
        'success_rate': (processed_files / total_files * 100) if total_files > 0 else 0
    }

if __name__ == "__main__":
    result = main()
    
    # 输出最终结果
    print(f"\n最终结果:")
    print(f"- 成功率: {result['success_rate']:.1f}%")
    print(f"- 总替换: {result['total_replacements']} 次")
    print(f"- 剩余: {result['remaining_count']} 个undefined类型")