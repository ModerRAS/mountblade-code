#!/usr/bin/env python3
"""
批量清理重复函数声明脚本
专门处理06_utilities.c文件中的重复函数声明问题

原实现问题：
- 文件中存在大量重复的函数声明
- 每个函数都有裸声明和带文档注释的声明两个版本

简化实现：
- 读取文件内容
- 识别所有void functionName(void)格式的函数声明
- 保留带文档注释的版本，删除裸声明
- 确保文件结构完整性
"""

import re
import sys

def clean_duplicate_functions(file_path):
    """清理重复的函数声明"""
    print(f"正在处理文件: {file_path}")
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        lines = f.readlines()
    
    # 函数声明模式
    function_pattern = r'^\s*void\s+([a-zA-Z_][a-zA-Z0-9_]*)\s*\(\s*void\s*\)\s*;'
    
    # 记录已经处理过的函数
    processed_functions = set()
    new_lines = []
    skip_next = False
    
    i = 0
    while i < len(lines):
        line = lines[i].strip()
        
        # 检查是否是函数声明
        match = re.match(function_pattern, lines[i])
        if match:
            func_name = match.group(1)
            
            # 检查下一行是否是文档注释开始
            if i + 1 < len(lines) and '/**' in lines[i + 1]:
                # 这是带文档的声明，保留
                new_lines.append(lines[i])
                processed_functions.add(func_name)
                skip_next = False
            elif func_name in processed_functions:
                # 这是重复的裸声明，跳过
                print(f"  跳过重复声明: {func_name}")
                skip_next = False
            else:
                # 这是第一次出现的裸声明，检查后面是否有带文档的版本
                has_doc_version = False
                for j in range(i + 1, min(i + 10, len(lines))):
                    if func_name in lines[j] and '/**' in lines[j]:
                        has_doc_version = True
                        break
                
                if has_doc_version:
                    # 后面有带文档的版本，跳过这个裸声明
                    print(f"  跳过裸声明(后面有文档版本): {func_name}")
                    skip_next = False
                else:
                    # 没有文档版本，保留这个声明
                    new_lines.append(lines[i])
                    processed_functions.add(func_name)
                    skip_next = False
        else:
            # 非函数声明行，直接保留
            if not skip_next:
                new_lines.append(lines[i])
        
        i += 1
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.writelines(new_lines)
    
    print(f"处理完成，已清理重复函数声明")

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
    clean_duplicate_functions(file_path)