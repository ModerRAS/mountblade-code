#!/usr/bin/env python3
"""
拆分TaleWorlds.Native.dll.c文件的脚本
按地址范围将大文件拆分为多个小文件
"""

import re
import os

def split_c_file():
    input_file = "/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/TaleWorlds.Native.dll.c"
    output_dir = "/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/src"
    
    # 读取原始文件
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 移除开头的#include行
    lines = content.split('\n')
    if lines[0].startswith('#include'):
        lines = lines[1:]
    
    # 合并为一个字符串以便处理
    content = '\n'.join(lines)
    
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
    
    # 提取数据定义
    data_definitions = []
    function_definitions = []
    
    # 分离数据定义和函数定义
    for line in lines:
        if line.strip().startswith('DAT_') or line.strip().startswith('UNK_'):
            data_definitions.append(line)
        elif line.strip().startswith('FUN_'):
            function_definitions.append(line)
    
    # 创建数据定义文件
    data_file = os.path.join(output_dir, "00_data_definitions.h")
    with open(data_file, 'w', encoding='utf-8') as f:
        f.write("#ifndef DATA_DEFINITIONS_H\n")
        f.write("#define DATA_DEFINITIONS_H\n\n")
        f.write("// 数据定义 - 从原始文件中提取\n")
        for line in data_definitions:
            f.write(line + "\n")
        f.write("\n#endif // DATA_DEFINITIONS_H\n")
    
    # 创建include头文件
    include_file = os.path.join(output_dir, "TaleWorlds.Native.Split.h")
    with open(include_file, 'w', encoding='utf-8') as f:
        f.write("#ifndef TALEWORLDS_NATIVE_SPLIT_H\n")
        f.write("#define TALEWORLDS_NATIVE_SPLIT_H\n\n")
        f.write("#include \"TaleWorlds.Native.dll.h\"\n")
        f.write("#include \"00_data_definitions.h\"\n\n")
        for filename, pattern in split_rules:
            f.write(f"#include \"{filename}\"\n")
        f.write("\n#endif // TALEWORLDS_NATIVE_SPLIT_H\n")
    
    # 按规则拆分函数
    for filename, pattern in split_rules:
        matched_functions = []
        
        for line in function_definitions:
            if re.search(pattern, line):
                matched_functions.append(line)
        
        if matched_functions:
            output_file = os.path.join(output_dir, filename)
            with open(output_file, 'w', encoding='utf-8') as f:
                f.write(f"#include \"TaleWorlds.Native.Split.h\"\n\n")
                f.write(f"// {filename} - {len(matched_functions)} 个函数\n\n")
                for func in matched_functions:
                    f.write(func + "\n")
            
            print(f"创建 {filename}: {len(matched_functions)} 个函数")
        else:
            print(f"警告: {filename} 没有匹配到函数")
    
    # 处理未分类的函数
    all_matched = set()
    for _, pattern in split_rules:
        for line in function_definitions:
            if re.search(pattern, line):
                all_matched.add(line)
    
    unmatched = [line for line in function_definitions if line not in all_matched]
    
    if unmatched:
        output_file = os.path.join(output_dir, "99_unmatched_functions.c")
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write("#include \"TaleWorlds.Native.Split.h\"\n\n")
            f.write("// 未分类函数\n\n")
            for func in unmatched:
                f.write(func + "\n")
        
        print(f"创建 99_unmatched_functions.c: {len(unmatched)} 个函数")
    
    print(f"\n拆分完成！文件保存在: {output_dir}")
    print(f"原始函数总数: {len(function_definitions)}")
    print(f"数据定义总数: {len(data_definitions)}")

if __name__ == "__main__":
    split_c_file()