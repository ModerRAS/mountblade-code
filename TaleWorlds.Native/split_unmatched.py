#!/usr/bin/env python3
"""
进一步拆分99_unmatched_functions.c文件
将其拆分为更小的文件，每个文件约100-200个函数
"""

import re
import os

def split_unmatched_functions():
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
    
    # 定义更细化的拆分规则
    split_rules = [
        ("99_01_game_logic.c", r"FUN_1800[ab]"),        # 游戏逻辑相关
        ("99_02_memory_system.c", r"FUN_1800[cd]"),     # 内存系统相关
        ("99_03_math_utilities.c", r"FUN_1800[ef]"),    # 数学工具相关
        ("99_04_file_system.c", r"FUN_1801[012]"),      # 文件系统相关
        ("99_05_string_processing.c", r"FUN_1801[345]"), # 字符串处理相关
        ("99_06_data_structures.c", r"FUN_1801[6789]"), # 数据结构相关
        ("99_07_input_system.c", r"FUN_1802[0123]"),    # 输入系统相关
        ("99_08_audio_system.c", r"FUN_1802[45]"),      # 音频系统相关
        ("99_09_physics_system.c", r"FUN_1802[6]"),     # 物理系统相关
        ("99_10_animation.c", r"FUN_1802[3-9]"),       # 动画系统相关
        ("99_11_ai_system.c", r"FUN_1803[0-4]"),       # AI系统相关
        ("99_12_scripting.c", r"FUN_1803[5-9]"),       # 脚本系统相关
        ("99_13_network_lowlevel.c", r"FUN_1804[0-4]"), # 底层网络相关
        ("99_14_graphics_utils.c", r"FUN_1804[5-9]"),   # 图形工具相关
        ("99_15_platform_specific.c", r"FUN_1805[0-4]"), # 平台特定相关
        ("99_16_debug_tools.c", r"FUN_1805[5-9]"),     # 调试工具相关
        ("99_17_performance.c", r"FUN_1806[0-4]"),     # 性能相关
        ("99_18_system_utils.c", r"FUN_1806[5-9]"),    # 系统工具相关
        ("99_19_remaining.c", r"FUN_180[7-9a-f]")      # 剩余函数
    ]
    
    # 创建拆分后的文件
    total_split = 0
    for filename, pattern in split_rules:
        matched_functions = []
        
        for func_content in functions:
            # 提取函数名
            func_name_match = re.search(r'// 函数: (.*);', func_content)
            if func_name_match:
                func_name = func_name_match.group(1)
                if re.search(pattern, func_name):
                    matched_functions.append(func_content)
        
        if matched_functions:
            output_file = os.path.join(output_dir, filename)
            with open(output_file, 'w', encoding='utf-8') as f:
                f.write("#include \"TaleWorlds.Native.Split.h\"\n\n")
                f.write(f"// {filename} - {len(matched_functions)} 个函数\n\n")
                
                for func_content in matched_functions:
                    f.write(func_content)
                    f.write("\n")  # 函数间分隔
            
            total_lines = sum(len(func.split('\n')) for func in matched_functions)
            print(f"创建 {filename}: {len(matched_functions)} 个函数, {total_lines} 行代码")
            total_split += len(matched_functions)
        else:
            print(f"警告: {filename} 没有匹配到函数")
    
    # 处理未分类的函数
    all_matched_funcs = set()
    for _, pattern in split_rules:
        for func_content in functions:
            func_name_match = re.search(r'// 函数: (.*);', func_content)
            if func_name_match:
                func_name = func_name_match.group(1)
                if re.search(pattern, func_name):
                    all_matched_funcs.add(func_name)
    
    unmatched_functions = []
    for func_content in functions:
        func_name_match = re.search(r'// 函数: (.*);', func_content)
        if func_name_match:
            func_name = func_name_match.group(1)
            if func_name not in all_matched_funcs:
                unmatched_functions.append(func_content)
    
    if unmatched_functions:
        output_file = os.path.join(output_dir, "99_20_final_unmatched.c")
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write("#include \"TaleWorlds.Native.Split.h\"\n\n")
            f.write("// 最终未分类函数\n\n")
            
            for func_content in unmatched_functions:
                f.write(func_content)
                f.write("\n")
        
        total_lines = sum(len(func.split('\n')) for func in unmatched_functions)
        print(f"创建 99_20_final_unmatched.c: {len(unmatched_functions)} 个函数, {total_lines} 行代码")
        total_split += len(unmatched_functions)
    
    print(f"\n拆分完成！")
    print(f"原始函数总数: {len(functions)}")
    print(f"拆分函数总数: {total_split}")
    
    # 删除原始的大文件
    print(f"删除原始文件: {input_file}")
    os.remove(input_file)
    
    # 更新主头文件
    update_main_header(output_dir, split_rules)
    
def update_main_header(output_dir, split_rules):
    """更新主头文件，移除对99_unmatched_functions.c的引用"""
    header_file = os.path.join(output_dir, "TaleWorlds.Native.Split.h")
    
    with open(header_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 移除对99_unmatched_functions.c的引用
    content = content.replace("// #include \"99_unmatched_functions.c\"", "")
    
    # 添加新的文件引用
    new_includes = "\n".join([f"// #include \"{filename}\"" for filename, _ in split_rules])
    new_includes += "\n// #include \"99_20_final_unmatched.c\"\n"
    
    # 在适当位置插入新的引用
    content = re.sub(
        r"// #include \"99_unmatched_functions\.c\"",
        new_includes,
        content
    )
    
    with open(header_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("更新主头文件完成")

if __name__ == "__main__":
    split_unmatched_functions()