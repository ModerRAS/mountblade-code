#!/usr/bin/env python3
"""
精细化拆分脚本，将所有大文件拆分为60KB以内的小文件
"""

import re
import os

def split_all_large_files():
    output_dir = "/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/src"
    max_size_kb = 30  # 30KB限制
    
    # 需要拆分的大文件列表
    large_files = [
        "01_initialization.c",      # 1.7MB
        "02_core_engine.c",         # 7.7MB
        "03_rendering.c",           # 20MB
        "04_ui_system.c",           # 12MB
        "05_networking.c",         # 3.2MB
        "06_utilities.c",           # 2.0MB
        "99_part_01.c",             # 1.8MB
        "99_part_02.c",             # 1.5MB
        "99_part_03.c",             # 2.6MB
        "99_part_04.c",             # 2.2MB
        "99_part_05.c",             # 1.7MB
        "99_part_06.c",             # 2.1MB
        "99_part_07.c",             # 1.9MB
        "99_part_08.c",             # 2.1MB
        "99_part_09.c",             # 2.5MB
        "99_part_10.c",             # 1.9MB
        "99_part_11.c",             # 2.1MB
        "99_part_12.c",             # 2.5MB
        "99_part_13.c",             # 2.2MB
        "99_part_14.c",             # 4.6MB
    ]
    
    total_files_created = 0
    
    for filename in large_files:
        filepath = os.path.join(output_dir, filename)
        if not os.path.exists(filepath):
            continue
            
        print(f"\n处理文件: {filename}")
        
        # 读取文件
        with open(filepath, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 按函数分割
        functions = re.split(r'(?=^// 函数:)', content, flags=re.MULTILINE)
        
        # 移除空的开头部分
        if functions and functions[0].strip() == '':
            functions = functions[1:]
        
        print(f"  找到 {len(functions)} 个函数")
        
        # 计算目标文件大小
        target_size_bytes = max_size_kb * 1024
        
        # 创建拆分文件
        file_num = 1
        current_content = ""
        current_size = 0
        functions_in_file = 0
        
        # 提取基础文件名
        base_name = filename.replace('.c', '')
        
        for i, func_content in enumerate(functions):
            func_size = len(func_content.encode('utf-8'))
            
            # 如果添加这个函数会超过大小限制，并且当前文件已经有函数，则保存当前文件
            if current_size + func_size > target_size_bytes and current_content:
                # 创建新文件
                new_filename = f"{base_name}_part{file_num:03d}.c"
                new_filepath = os.path.join(output_dir, new_filename)
                
                with open(new_filepath, 'w', encoding='utf-8') as f:
                    f.write("#include \"TaleWorlds.Native.Split.h\"\n\n")
                    f.write(f"// {new_filename} - {functions_in_file} 个函数\n\n")
                    f.write(current_content)
                
                actual_size = os.path.getsize(new_filepath)
                print(f"  创建 {new_filename}: {functions_in_file} 个函数, {actual_size/1024:.1f}KB")
                
                total_files_created += 1
                file_num += 1
                
                # 重置当前文件
                current_content = func_content + "\n"
                current_size = func_size
                functions_in_file = 1
            else:
                # 添加到当前文件
                current_content += func_content + "\n"
                current_size += func_size + 1  # +1 for newline
                functions_in_file += 1
        
        # 保存最后一个文件
        if current_content:
            new_filename = f"{base_name}_part{file_num:03d}.c"
            new_filepath = os.path.join(output_dir, new_filename)
            
            with open(new_filepath, 'w', encoding='utf-8') as f:
                f.write("#include \"TaleWorlds.Native.Split.h\"\n\n")
                f.write(f"// {new_filename} - {functions_in_file} 个函数\n\n")
                f.write(current_content)
            
            actual_size = os.path.getsize(new_filepath)
            print(f"  创建 {new_filename}: {functions_in_file} 个函数, {actual_size/1024:.1f}KB")
            
            total_files_created += 1
        
        # 删除原始文件
        os.remove(filepath)
        print(f"  删除原始文件: {filename}")
    
    print(f"\n总共创建了 {total_files_created} 个文件")
    
    # 更新主头文件
    update_header_for_fine_split(output_dir)
    
def update_header_for_fine_split(output_dir):
    """更新主头文件"""
    header_file = os.path.join(output_dir, "TaleWorlds.Native.Split.h")
    
    # 获取所有.c文件
    c_files = [f for f in os.listdir(output_dir) if f.endswith('.c') and f != 'TaleWorlds.Native.Split.h']
    c_files.sort()
    
    with open(header_file, 'w', encoding='utf-8') as f:
        f.write("#ifndef TALEWORLDS_NATIVE_SPLIT_H\n")
        f.write("#define TALEWORLDS_NATIVE_SPLIT_H\n\n")
        f.write("#include \"TaleWorlds.Native.dll.h\"\n")
        f.write("#include \"00_data_definitions.h\"\n\n")
        f.write("// 拆分后的函数文件 (按60KB大小限制)\n")
        
        for filename in c_files:
            f.write(f"// #include \"{filename}\"\n")
        
        f.write("\n#endif // TALEWORLDS_NATIVE_SPLIT_H\n")
    
    print(f"更新主头文件完成，包含 {len(c_files)} 个文件")

if __name__ == "__main__":
    split_all_large_files()