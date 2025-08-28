#!/usr/bin/env python3
"""
批量修复 undefined 类型的脚本
将各种 undefined 类型替换为合适的 C 类型
"""

import os
import re
from pathlib import Path

# 类型映射表
TYPE_MAPPING = {
    'undefined': 'uint8_t',      # 默认映射到 uint8_t
    'undefined1': 'uint8_t',     # 1字节 -> uint8_t
    'undefined2': 'uint16_t',    # 2字节 -> uint16_t
    'undefined4': 'uint32_t',    # 4字节 -> uint32_t
    'undefined8': 'uint64_t',    # 8字节 -> uint64_t
    'undefined5': 'uint8_t',     # 特殊情况，可能是位域或对齐
}

def fix_undefined_types_in_file(file_path):
    """修复单个文件中的 undefined 类型"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        original_content = content
        changes_made = False
        
        # 处理每种 undefined 类型
        for undefined_type, correct_type in TYPE_MAPPING.items():
            # 匹配变量声明或类型转换中的 undefined 类型
            # 例如：undefined var1; 或 (undefined)expression
            pattern = r'\b' + re.escape(undefined_type) + r'\b(?!\s*\*)'
            
            def replace_match(match):
                nonlocal changes_made
                changes_made = True
                return correct_type
            
            content = re.sub(pattern, replace_match, content)
        
        # 如果有修改，保存文件
        if changes_made:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            return True
        else:
            return False
            
    except Exception as e:
        print(f"处理文件 {file_path} 时出错: {e}")
        return False

def process_directory(directory):
    """处理目录中的所有 C 文件"""
    directory = Path(directory)
    c_files = list(directory.glob('**/*.c'))
    
    total_files = len(c_files)
    modified_files = 0
    
    print(f"开始处理 {total_files} 个 C 文件...")
    
    for file_path in c_files:
        if fix_undefined_types_in_file(file_path):
            modified_files += 1
            print(f"已修改: {file_path}")
    
    print(f"处理完成! 共修改 {modified_files}/{total_files} 个文件")
    return modified_files

def main():
    """主函数"""
    # 设置要处理的目录
    target_dir = "/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/pretty"
    
    if not os.path.exists(target_dir):
        print(f"目录不存在: {target_dir}")
        return
    
    # 处理目录
    modified_count = process_directory(target_dir)
    
    print(f"\n批量修复完成! 共修复了 {modified_count} 个文件中的 undefined 类型")

if __name__ == "__main__":
    main()