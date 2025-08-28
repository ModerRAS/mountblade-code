#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量替换 undefined 类型的完整解决方案
用于完成代码美化任务
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

def replace_undefined_in_content(content):
    """在内容中替换 undefined 类型"""
    original_content = content
    
    # 替换规则 - 按优先级排序
    replacements = [
        # 精确匹配带数字的undefined类型
        (r'\bundefined1\b', 'int8_t'),
        (r'\bundefined2\b', 'int16_t'),
        (r'\bundefined4\b', 'int32_t'),
        (r'\bundefined8\b', 'uint64_t'),
        
        # 处理指针类型
        (r'\bundefined\s*\*\b', 'void*'),
        (r'\bundefined\b\s*\*', 'void*'),
        
        # 处理行尾的undefined
        (r'\bundefined\b\s*$', 'void'),
        
        # 处理参数列表中的undefined
        (r'\bundefined\b(?=\s*[),])', 'void'),
        
        # 处理变量声明中的undefined
        (r'\bundefined\b(?=\s+[a-zA-Z_][a-zA-Z0-9_]*)', 'void'),
        
        # 处理全局变量声明
        (r'^\s*undefined\s+([a-zA-Z_][a-zA-Z0-9_]*)', 'void* \\1'),
        
        # 最后处理单独的undefined
        (r'\bundefined\b', 'void')
    ]
    
    # 应用替换规则
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content, flags=re.MULTILINE)
    
    return content, content != original_content

def process_file(file_path, create_backups=True):
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
        
        # 执行替换
        new_content, changed = replace_undefined_in_content(content)
        
        if changed:
            # 写回文件
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(new_content)
            
            # 统计替换后剩余的undefined数量
            remaining_count = len(re.findall(r'\bundefined\b', new_content))
            replaced_count = original_count - remaining_count
            
            return True, replaced_count
        
        return False, 0
        
    except Exception as e:
        print(f"处理文件 {file_path} 时出错: {e}")
        return False, 0

def main():
    """主函数"""
    print("=== 批量替换 undefined 类型任务 ===")
    print()
    
    # 统计信息
    total_files = 0
    processed_files = 0
    total_replacements = 0
    error_files = []
    
    # 查找所有C文件
    c_files = []
    for root, dirs, files in os.walk('pretty'):
        for file in files:
            if file.endswith('.c'):
                c_files.append(os.path.join(root, file))
    
    total_files = len(c_files)
    print(f"发现 {total_files} 个C文件")
    
    # 处理每个文件
    for i, file_path in enumerate(c_files, 1):
        print(f"处理文件 {i}/{total_files}: {file_path}")
        
        processed, replacements = process_file(file_path, create_backups=False)
        
        if processed:
            processed_files += 1
            total_replacements += replacements
            print(f"  ✓ 已处理，替换 {replacements} 处")
        elif replacements > 0:
            print(f"  - 无需替换")
        else:
            print(f"  - 无undefined类型")
    
    # 输出统计信息
    print()
    print("=== 处理结果统计 ===")
    print(f"扫描文件总数: {total_files}")
    print(f"处理文件数: {processed_files}")
    print(f"总替换次数: {total_replacements}")
    
    # 验证结果
    remaining_count = 0
    remaining_files = []
    
    for file_path in c_files:
        try:
            with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
                count = len(re.findall(r'\bundefined\b', content))
                if count > 0:
                    remaining_count += count
                    remaining_files.append((file_path, count))
        except Exception as e:
            error_files.append((file_path, str(e)))
    
    print(f"剩余 undefined 类型数量: {remaining_count}")
    
    if remaining_count > 0:
        print(f"\n剩余的 undefined 类型分布 (前10个):")
        for file_path, count in remaining_files[:10]:
            print(f"  {file_path}: {count}")
        
        if len(remaining_files) > 10:
            print(f"  ... 还有 {len(remaining_files) - 10} 个文件")
    
    if error_files:
        print(f"\n处理出错的文件 ({len(error_files)} 个):")
        for file_path, error in error_files[:5]:
            print(f"  {file_path}: {error}")
        
        if len(error_files) > 5:
            print(f"  ... 还有 {len(error_files) - 5} 个文件")
    
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