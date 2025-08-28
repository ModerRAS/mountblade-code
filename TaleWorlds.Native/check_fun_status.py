#!/usr/bin/env python3
import os
import re
import sys
from pathlib import Path

def check_file_status(file_path):
    """检查单个文件的FUN_函数状态"""
    try:
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        
        # 查找所有FUN_函数
        fun_matches = re.findall(r'FUN_[0-9a-f]{8}', content)
        
        if not fun_matches:
            return "no_fun_functions"
        
        # 查找#define定义
        defines = re.findall(r'^\s*#define\s+\w+\s+(FUN_[0-9a-f]{8})', content, re.MULTILINE)
        define_set = set(defines)
        
        # 查找实际调用（非#define中的FUN_函数）
        actual_calls = []
        for match in fun_matches:
            if match not in define_set:
                # 检查是否在注释中
                lines = content.split('\n')
                for i, line in enumerate(lines):
                    if match in line and not line.strip().startswith('//') and not line.strip().startswith('/*'):
                        # 更精确的检查
                        if re.search(r'\b' + match + r'\b', line) and not re.search(r'//.*' + match, line):
                            actual_calls.append(match)
                            break
        
        if actual_calls:
            return f"has_actual_calls ({len(set(actual_calls))} unique)"
        else:
            return "only_defines"
            
    except Exception as e:
        return f"error: {e}"

def main():
    pretty_dir = Path("pretty")
    
    if not pretty_dir.exists():
        print("错误：找不到pretty目录")
        return
    
    files_with_fun = []
    files_with_actual_calls = []
    files_with_only_defines = []
    
    print("正在检查FUN_函数状态...")
    print("=" * 60)
    
    for c_file in pretty_dir.rglob("*.c"):
        status = check_file_status(c_file)
        
        if status != "no_fun_functions":
            files_with_fun.append(str(c_file))
            
            if status.startswith("has_actual_calls"):
                files_with_actual_calls.append((str(c_file), status))
            elif status == "only_defines":
                files_with_only_defines.append(str(c_file))
    
    print(f"总文件数: {len(list(pretty_dir.rglob('*.c')))}")
    print(f"包含FUN_函数的文件数: {len(files_with_fun)}")
    print(f"只有#define定义的文件数: {len(files_with_only_defines)}")
    print(f"包含实际调用的文件数: {len(files_with_actual_calls)}")
    print("=" * 60)
    
    if files_with_actual_calls:
        print(f"需要处理的文件 ({len(files_with_actual_calls)} 个):")
        print("-" * 40)
        for i, (file_path, status) in enumerate(files_with_actual_calls[:10]):
            print(f"{i+1:2d}. {file_path}")
            print(f"     状态: {status}")
        print()
        
        if len(files_with_actual_calls) > 10:
            print(f"... 还有 {len(files_with_actual_calls) - 10} 个文件需要处理")
    
    if files_with_only_defines:
        print(f"只有#define定义的文件 ({len(files_with_only_defines)} 个):")
        print("-" * 40)
        for i, file_path in enumerate(files_with_only_defines[:10]):
            print(f"{i+1:2d}. {file_path}")
        print()
        
        if len(files_with_only_defines) > 10:
            print(f"... 还有 {len(files_with_only_defines) - 10} 个文件")

if __name__ == "__main__":
    main()
