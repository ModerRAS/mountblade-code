#!/usr/bin/env python3
"""
简单拆分99_unmatched_functions.c文件
按函数数量平均分配到多个文件中
"""

import re
import os

def simple_split_unmatched():
    input_file = "/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    output_dir = "/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/src"
    
    print("开始读取99_unmatched_functions.c文件...")
    
    # 读取文件
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 按函数分割
    functions = re.split(r'(?=^// 函数:)', content, flags=re.MULTILINE)
    
    # 移除空的开头部分
    if functions[0].strip() == '':
        functions = functions[1:]
    
    print(f"找到 {len(functions)} 个函数")
    
    # 计算每个文件应该包含的函数数量
    functions_per_file = 500  # 每个文件约500个函数
    num_files = (len(functions) + functions_per_file - 1) // functions_per_file
    
    print(f"将拆分为 {num_files} 个文件，每个文件约 {functions_per_file} 个函数")
    
    # 删除现有的99_*.c文件（除了已经拆分的小文件）
    existing_files = [f for f in os.listdir(output_dir) if f.startswith('99_') and f.endswith('.c')]
    for file in existing_files:
        file_path = os.path.join(output_dir, file)
        if os.path.getsize(file_path) > 100000:  # 删除大于100KB的文件
            os.remove(file_path)
            print(f"删除现有大文件: {file}")
    
    # 创建新的拆分文件
    for i in range(num_files):
        start_idx = i * functions_per_file
        end_idx = min((i + 1) * functions_per_file, len(functions))
        
        file_functions = functions[start_idx:end_idx]
        filename = f"99_part_{i+1:02d}.c"
        
        output_file = os.path.join(output_dir, filename)
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write("#include \"TaleWorlds.Native.Split.h\"\n\n")
            f.write(f"// {filename} - {len(file_functions)} 个函数\n\n")
            
            for func_content in file_functions:
                f.write(func_content)
                f.write("\n")  # 函数间分隔
        
        total_lines = sum(len(func.split('\n')) for func in file_functions)
        file_size = os.path.getsize(output_file)
        print(f"创建 {filename}: {len(file_functions)} 个函数, {total_lines} 行代码, {file_size/1024/1024:.1f}MB")
    
    print(f"\n拆分完成！")
    print(f"原始函数总数: {len(functions)}")
    print(f"拆分文件数: {num_files}")
    
    # 删除原始的大文件
    if os.path.exists(input_file):
        print(f"删除原始文件: {input_file}")
        os.remove(input_file)
    
    # 更新主头文件
    update_main_header_simple(output_dir, num_files)

def update_main_header_simple(output_dir, num_files):
    """更新主头文件"""
    header_file = os.path.join(output_dir, "TaleWorlds.Native.Split.h")
    
    with open(header_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 移除旧的99_*.c引用
    content = re.sub(r'// #include "99_[^"]*\.c"\n', '', content)
    
    # 添加新的文件引用
    new_includes = ""
    for i in range(num_files):
        filename = f"99_part_{i+1:02d}.c"
        new_includes += f"// #include \"{filename}\"\n"
    
    # 在适当位置插入新的引用
    if "06_utilities.c" in content:
        content = re.sub(
            r'(/include "06_utilities\.c"\n)',
            r'\1\n' + new_includes,
            content
        )
    else:
        content += "\n" + new_includes
    
    with open(header_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("更新主头文件完成")

if __name__ == "__main__":
    simple_split_unmatched()