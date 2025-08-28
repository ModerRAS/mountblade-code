#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
最终 undefined 类型清理脚本
处理剩余的 42 个文件中的 26164 个 undefined 类型实例
"""

import os
import re
import sys
from pathlib import Path
from typing import Dict, List, Tuple, Optional

def create_backup(file_path: str) -> bool:
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

def analyze_undefined_context(content: str) -> Dict[str, List[Tuple[int, str]]]:
    """分析 undefined 类型的上下文"""
    contexts = {
        'function_params': [],
        'function_return': [],
        'variable_decl': [],
        'struct_field': [],
        'array_element': [],
        'pointer_type': [],
        'global_var': [],
        'other': []
    }
    
    lines = content.split('\n')
    for i, line in enumerate(lines, 1):
        if 'undefined' in line:
            # 函数参数中的 undefined
            if re.search(r'\w+\s*\([^)]*\bundefined[^)]*\)', line):
                contexts['function_params'].append((i, line.strip()))
            # 函数返回值中的 undefined
            elif re.search(r'\bundefined\s+\w+\s*\(', line):
                contexts['function_return'].append((i, line.strip()))
            # 变量声明中的 undefined
            elif re.search(r'\bundefined\s+\w+\s*[=;]', line):
                contexts['variable_decl'].append((i, line.strip()))
            # 结构体字段中的 undefined
            elif re.search(r'\bundefined\s+\w+\s*;', line) and 'struct' in line:
                contexts['struct_field'].append((i, line.strip()))
            # 数组元素中的 undefined
            elif re.search(r'\bundefined\d*\s*\[', line):
                contexts['array_element'].append((i, line.strip()))
            # 指针类型的 undefined
            elif re.search(r'\bundefined\s*\*', line):
                contexts['pointer_type'].append((i, line.strip()))
            # 全局变量
            elif re.search(r'^\s*\bundefined\s+\w+', line):
                contexts['global_var'].append((i, line.strip()))
            else:
                contexts['other'].append((i, line.strip()))
    
    return contexts

def smart_replace_undefined(content: str, file_path: str) -> Tuple[str, int]:
    """智能替换 undefined 类型"""
    original_content = content
    total_replacements = 0
    
    # 特殊文件处理规则
    if 'TaleWorlds.Native.dll.h' in file_path:
        # DLL头文件特殊处理
        replacements = [
            # 函数参数 - 64位数据
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
    elif '00_data_definitions.h' in file_path:
        # 数据定义文件特殊处理
        replacements = [
            # 函数参数
            (r'\bundefined8\s+param_(\d+)', r'uint64_t param_\1'),
            (r'\bundefined4\s+param_(\d+)', r'int32_t param_\1'),
            
            # 局部变量
            (r'\bundefined8\s+(\w+)', r'uint64_t \1'),
            (r'\bundefined4\s+(\w+)', r'int32_t \1'),
            (r'\bundefined2\s+(\w+)', r'int16_t \1'),
            (r'\bundefined1\s+(\w+)', r'int8_t \1'),
            
            # 特殊寄存器变量
            (r'\bundefined\s+in_(\w+)', r'uint64_t in_\1'),
            
            # 其他
            (r'\bundefined\b', 'void')
        ]
    elif '.c' in file_path:
        # C文件处理
        replacements = [
            # 指针变量
            (r'\bundefined\s*\*(\w+)', r'void* \1'),
            (r'(\w+)\s*\*\s*undefined(\w+)', r'\1* undefined\2'),
            
            # 数据类型
            (r'\bundefined8\b', 'uint64_t'),
            (r'\bundefined4\b', 'int32_t'),
            (r'\bundefined2\b', 'int16_t'),
            (r'\bundefined1\b', 'int8_t'),
            
            # 数组类型
            (r'\bundefined(\d+)\s*\[', r'uint64_t ['),
            
            # 函数参数
            (r'\bundefined8\s+param_(\d+)', r'uint64_t param_\1'),
            (r'\bundefined4\s+param_(\d+)', r'int32_t param_\1'),
            
            # 普通变量
            (r'\bundefined\s+(\w+)', r'void* \1'),
            
            # 其他 undefined
            (r'\bundefined\b', 'void')
        ]
    else:
        # 默认处理规则
        replacements = [
            # 按大小处理
            (r'\bundefined8\b', 'uint64_t'),
            (r'\bundefined4\b', 'int32_t'),
            (r'\bundefined2\b', 'int16_t'),
            (r'\bundefined1\b', 'int8_t'),
            
            # 指针类型
            (r'\bundefined\s*\*', 'void*'),
            
            # 变量声明
            (r'\bundefined\s+(\w+)', r'void* \1'),
            
            # 其他
            (r'\bundefined\b', 'void')
        ]
    
    # 应用替换规则
    for pattern, replacement in replacements:
        matches = re.findall(pattern, content, re.MULTILINE)
        if matches:
            content = re.sub(pattern, replacement, content, flags=re.MULTILINE)
            total_replacements += len(matches)
    
    return content, total_replacements

def process_file(file_path: str, create_backups: bool = True) -> Tuple[bool, int]:
    """处理单个文件"""
    try:
        # 创建备份
        if create_backups and not create_backup(file_path):
            return False, 0
        
        # 读取文件
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        
        # 统计原始undefined数量
        original_count = len(re.findall(r'\bundefined\b', content))
        
        if original_count == 0:
            return False, 0
        
        # 分析上下文（用于调试）
        if original_count > 100:
            contexts = analyze_undefined_context(content)
            print(f"  文件分析: {original_count} 个undefined类型")
            for context_type, items in contexts.items():
                if items:
                    print(f"    {context_type}: {len(items)} 处")
        
        # 执行智能替换
        new_content, replacements = smart_replace_undefined(content, file_path)
        
        if replacements > 0:
            # 写回文件
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(new_content)
            
            # 统计替换后剩余的undefined数量
            remaining_count = len(re.findall(r'\bundefined\b', new_content))
            
            return True, replacements
        
        return False, 0
        
    except Exception as e:
        print(f"处理文件 {file_path} 时出错: {e}")
        return False, 0

def get_target_files() -> List[str]:
    """获取需要处理的文件列表"""
    target_files = []
    
    # 主要目标文件
    high_priority = [
        'TaleWorlds.Native.dll.h',
        'src/00_data_definitions.h',
        'pretty/00/00_data_definitions.h'
    ]
    
    for file_path in high_priority:
        if os.path.exists(file_path):
            target_files.append(file_path)
    
    # 查找所有包含undefined的C文件
    for root, dirs, files in os.walk('.'):
        for file in files:
            if file.endswith('.c') or file.endswith('.h'):
                file_path = os.path.join(root, file)
                try:
                    with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                        content = f.read()
                        if 'undefined' in content and file_path not in target_files:
                            target_files.append(file_path)
                except Exception:
                    continue
    
    return target_files

def main():
    """主函数"""
    print("=== 最终 undefined 类型清理任务 ===")
    print()
    
    # 获取目标文件
    target_files = get_target_files()
    total_files = len(target_files)
    
    print(f"发现 {total_files} 个需要处理的文件")
    print()
    
    # 统计信息
    processed_files = 0
    total_replacements = 0
    error_files = []
    results = []
    
    # 处理每个文件
    for i, file_path in enumerate(target_files, 1):
        print(f"处理文件 {i}/{total_files}: {file_path}")
        
        processed, replacements = process_file(file_path, create_backups=False)
        
        if processed:
            processed_files += 1
            total_replacements += replacements
            print(f"  ✓ 已处理，替换 {replacements} 处")
            results.append((file_path, replacements))
        else:
            print(f"  - 无需替换或处理失败")
    
    # 输出统计信息
    print()
    print("=== 处理结果统计 ===")
    print(f"扫描文件总数: {total_files}")
    print(f"成功处理文件数: {processed_files}")
    print(f"总替换次数: {total_replacements}")
    
    # 显示处理详情
    if results:
        print(f"\n处理详情 (替换数量 > 10 的文件):")
        for file_path, replacements in sorted(results, key=lambda x: x[1], reverse=True):
            if replacements > 10:
                print(f"  {file_path}: {replacements} 次")
    
    # 验证结果
    remaining_count = 0
    remaining_files = []
    
    for file_path in target_files:
        try:
            with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
                count = len(re.findall(r'\bundefined\b', content))
                if count > 0:
                    remaining_count += count
                    remaining_files.append((file_path, count))
        except Exception as e:
            error_files.append((file_path, str(e)))
    
    print(f"\n剩余 undefined 类型数量: {remaining_count}")
    
    if remaining_count > 0:
        print(f"\n剩余的 undefined 类型分布:")
        for file_path, count in remaining_files[:10]:
            print(f"  {file_path}: {count}")
        
        if len(remaining_files) > 10:
            print(f"  ... 还有 {len(remaining_files) - 10} 个文件")
    
    if error_files:
        print(f"\n处理出错的文件 ({len(error_files)} 个):")
        for file_path, error in error_files:
            print(f"  {file_path}: {error}")
    
    print()
    print("=== 任务完成 ===")
    
    # 返回处理结果
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
    
    # 生成处理报告
    report_content = f"""# Undefined 类型清理报告

## 处理统计
- 扫描文件总数: {result['total_files']}
- 成功处理文件数: {result['processed_files']}
- 总替换次数: {result['total_replacements']}
- 剩余 undefined 类型数量: {result['remaining_count']}
- 成功率: {result['success_rate']:.1f}%

## 处理时间
{os.popen('date').read().strip()}

## 主要处理文件
"""
    
    if result['total_replacements'] > 0:
        report_content += "\n处理完成的主要文件：\n"
        # 这里可以添加更多详情
    
    with open('undefined_cleanup_report.md', 'w', encoding='utf-8') as f:
        f.write(report_content)
    
    print(f"\n详细报告已保存到: undefined_cleanup_report.md")