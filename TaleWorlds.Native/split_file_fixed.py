#!/usr/bin/env python3
"""
修复版的TaleWorlds.Native.dll.c文件拆分脚本
正确处理函数实现代码，不仅仅是函数声明
"""

import re
import os

def split_c_file_fixed():
    input_file = "/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/TaleWorlds.Native.dll.c"
    output_dir = "/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/src"
    
    print("开始读取原始文件...")
    # 读取原始文件
    with open(input_file, 'r', encoding='utf-8') as f:
        lines = f.readlines()
    
    print(f"原始文件有 {len(lines)} 行")
    
    # 移除开头的#include行
    if lines[0].startswith('#include'):
        lines = lines[1:]
    
    # 分析文件结构
    data_section = []
    function_sections = []
    
    current_function = None
    current_function_lines = []
    
    print("分析文件结构...")
    
    for line in lines:
        stripped = line.strip()
        
        # 处理数据定义部分
        if stripped.startswith('DAT_') or stripped.startswith('UNK_'):
            if current_function is not None:
                # 结束当前函数
                function_sections.append((current_function, current_function_lines))
                current_function = None
                current_function_lines = []
            data_section.append(line)
        
        # 处理函数定义
        elif stripped.startswith('void FUN_') or stripped.startswith('undefined FUN_'):
            if current_function is not None:
                # 保存前一个函数
                function_sections.append((current_function, current_function_lines))
            
            current_function = stripped
            current_function_lines = [line]
        
        # 处理函数体内容
        elif current_function is not None:
            current_function_lines.append(line)
        
        # 处理其他内容（可能是全局变量或其他声明）
        elif stripped and not stripped.startswith('//'):
            # 如果有其他内容，添加到数据部分
            data_section.append(line)
    
    # 保存最后一个函数
    if current_function is not None:
        function_sections.append((current_function, current_function_lines))
    
    print(f"找到 {len(data_section)} 行数据定义")
    print(f"找到 {len(function_sections)} 个函数")
    
    # 创建数据定义文件
    data_file = os.path.join(output_dir, "00_data_definitions.h")
    with open(data_file, 'w', encoding='utf-8') as f:
        f.write("#ifndef DATA_DEFINITIONS_H\n")
        f.write("#define DATA_DEFINITIONS_H\n\n")
        f.write("// 数据定义 - 从原始文件中提取\n")
        for line in data_section:
            f.write(line)
        f.write("\n#endif // DATA_DEFINITIONS_H\n")
    
    # 定义拆分规则 - 按地址范围分组
    split_rules = [
        ("01_initialization.c", r"FUN_1800[2-7]"),
        ("02_core_engine.c", r"FUN_18008|FUN_18009|FUN_1800[1-9][0-9]|FUN_1801[0-9]|FUN_1802[0-2]"),
        ("03_rendering.c", r"FUN_1802[7-9]|FUN_180[3-6][0-9]"),
        ("04_ui_system.c", r"FUN_1806[5-9]|FUN_180[7-8][0-9]|FUN_1808[0-4]"),
        ("05_networking.c", r"FUN_1808[4-9]"),
        ("06_utilities.c", r"FUN_18089|FUN_1809[0-4]"),
        ("07_other_functions.c", r"FUN_1809[5-9a-f]")
    ]
    
    # 创建include头文件
    include_file = os.path.join(output_dir, "TaleWorlds.Native.Split.h")
    with open(include_file, 'w', encoding='utf-8') as f:
        f.write("#ifndef TALEWORLDS_NATIVE_SPLIT_H\n")
        f.write("#define TALEWORLDS_NATIVE_SPLIT_H\n\n")
        f.write("#include \"TaleWorlds.Native.dll.h\"\n")
        f.write("#include \"00_data_definitions.h\"\n\n")
        f.write("// 函数声明文件\n")
        for filename, pattern in split_rules:
            f.write(f"// extern void {filename.replace('.c', '_')}();\n")
        f.write("\n#endif // TALEWORLDS_NATIVE_SPLIT_H\n")
    
    # 按规则拆分函数
    total_split = 0
    for filename, pattern in split_rules:
        matched_functions = []
        
        for func_name, func_lines in function_sections:
            if re.search(pattern, func_name):
                matched_functions.append((func_name, func_lines))
        
        if matched_functions:
            output_file = os.path.join(output_dir, filename)
            with open(output_file, 'w', encoding='utf-8') as f:
                f.write(f"#include \"TaleWorlds.Native.Split.h\"\n\n")
                f.write(f"// {filename} - {len(matched_functions)} 个函数\n\n")
                
                for func_name, func_lines in matched_functions:
                    f.write(f"// 函数: {func_name}\n")
                    for line in func_lines:
                        f.write(line)
                    f.write("\n")  # 函数间分隔
            
            total_lines = sum(len(func_lines) for _, func_lines in matched_functions)
            print(f"创建 {filename}: {len(matched_functions)} 个函数, {total_lines} 行代码")
            total_split += len(matched_functions)
        else:
            print(f"警告: {filename} 没有匹配到函数")
    
    # 处理未分类的函数
    all_matched_funcs = set()
    for _, pattern in split_rules:
        for func_name, func_lines in function_sections:
            if re.search(pattern, func_name):
                all_matched_funcs.add(func_name)
    
    unmatched_functions = [(func_name, func_lines) for func_name, func_lines in function_sections 
                          if func_name not in all_matched_funcs]
    
    if unmatched_functions:
        output_file = os.path.join(output_dir, "99_unmatched_functions.c")
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write("#include \"TaleWorlds.Native.Split.h\"\n\n")
            f.write("// 未分类函数\n\n")
            
            for func_name, func_lines in unmatched_functions:
                f.write(f"// 函数: {func_name}\n")
                for line in func_lines:
                    f.write(line)
                f.write("\n")
        
        total_lines = sum(len(func_lines) for _, func_lines in unmatched_functions)
        print(f"创建 99_unmatched_functions.c: {len(unmatched_functions)} 个函数, {total_lines} 行代码")
        total_split += len(unmatched_functions)
    
    print(f"\n拆分完成！文件保存在: {output_dir}")
    print(f"原始函数总数: {len(function_sections)}")
    print(f"拆分函数总数: {total_split}")
    print(f"数据定义行数: {len(data_section)}")

if __name__ == "__main__":
    split_c_file_fixed()