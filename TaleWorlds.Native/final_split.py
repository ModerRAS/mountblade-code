#!/usr/bin/env python3
"""
最终拆分脚本，处理剩余的大文件
"""

import re
import os

def final_split():
    output_dir = "/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/src"
    max_size_kb = 30  # 30KB限制
    
    # 找到需要进一步拆分的大文件
    large_files = []
    for filename in os.listdir(output_dir):
        if filename.endswith('.c'):
            filepath = os.path.join(output_dir, filename)
            size_kb = os.path.getsize(filepath) / 1024
            if size_kb > max_size_kb:
                large_files.append((filename, size_kb))
    
    print(f"找到 {len(large_files)} 个需要进一步拆分的大文件:")
    for filename, size_kb in large_files:
        print(f"  {filename}: {size_kb:.1f}KB")
    
    total_new_files = 0
    
    for filename, size_kb in large_files:
        filepath = os.path.join(output_dir, filename)
        print(f"\n处理文件: {filename} ({size_kb:.1f}KB)")
        
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
                new_filename = f"{base_name}_sub{file_num:03d}.c"
                new_filepath = os.path.join(output_dir, new_filename)
                
                with open(new_filepath, 'w', encoding='utf-8') as f:
                    f.write("#include \"TaleWorlds.Native.Split.h\"\n\n")
                    f.write(f"// {new_filename} - {functions_in_file} 个函数\n\n")
                    f.write(current_content)
                
                actual_size = os.path.getsize(new_filepath)
                print(f"  创建 {new_filename}: {functions_in_file} 个函数, {actual_size/1024:.1f}KB")
                
                total_new_files += 1
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
            new_filename = f"{base_name}_sub{file_num:03d}.c"
            new_filepath = os.path.join(output_dir, new_filename)
            
            with open(new_filepath, 'w', encoding='utf-8') as f:
                f.write("#include \"TaleWorlds.Native.Split.h\"\n\n")
                f.write(f"// {new_filename} - {functions_in_file} 个函数\n\n")
                f.write(current_content)
            
            actual_size = os.path.getsize(new_filepath)
            print(f"  创建 {new_filename}: {functions_in_file} 个函数, {actual_size/1024:.1f}KB")
            
            total_new_files += 1
        
        # 删除原始文件
        os.remove(filepath)
        print(f"  删除原始文件: {filename}")
    
    print(f"\n最终拆分完成！")
    print(f"总共创建了 {total_new_files} 个新文件")
    
    # 更新主头文件
    update_final_header(output_dir)

def update_final_header(output_dir):
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
        f.write("// 拆分后的函数文件 (30KB大小限制)\n")
        
        for filename in c_files:
            f.write(f"// #include \"{filename}\"\n")
        
        f.write("\n#endif // TALEWORLDS_NATIVE_SPLIT_H\n")
    
    print(f"更新主头文件完成，包含 {len(c_files)} 个文件")

if __name__ == "__main__":
    final_split()