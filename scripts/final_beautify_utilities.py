#!/usr/bin/env python3
"""
06_utilities.c文件最终美化脚本
清理所有剩余的重复代码段和函数定义
"""

import re

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def clean_remaining_duplicates(content):
    """清理剩余的重复代码段"""
    lines = content.split('\n')
    cleaned_lines = []
    i = 0
    
    while i < len(lines):
        line = lines[i]
        
        # 跳过不属于任何函数的重复代码段
        if line.strip().startswith('if ((int)utility_result != UTILITY_ZERO) {') and i > 300:
            # 找到这个代码段的结束
            brace_count = 0
            j = i
            while j < len(lines):
                if '{' in lines[j]:
                    brace_count += 1
                if '}' in lines[j]:
                    brace_count -= 1
                    if brace_count == 0:
                        break
                j += 1
            
            print(f"跳过重复代码段：行 {i+1} 到 {j+1}")
            i = j + 1
            continue
        
        # 检查是否是重复的函数定义
        if line.strip().startswith('/**') and i + 1 < len(lines):
            next_line = lines[i + 1]
            if 'uint64 utility_resource_data_processor(void)' in next_line:
                # 检查是否已经存在这个函数
                function_exists = False
                for existing_line in cleaned_lines:
                    if 'uint64 utility_resource_data_processor(void)' in existing_line:
                        function_exists = True
                        break
                
                if function_exists:
                    # 找到函数结束位置
                    brace_count = 0
                    j = i + 1
                    while j < len(lines):
                        if '{' in lines[j]:
                            brace_count += 1
                        if '}' in lines[j]:
                            brace_count -= 1
                            if brace_count == 0:
                                break
                        j += 1
                    
                    print(f"跳过重复函数：行 {i+1} 到 {j+1}")
                    i = j + 1
                    continue
        
        cleaned_lines.append(line)
        i += 1
    
    return '\n'.join(cleaned_lines)

def add_function_documentation(content):
    """为剩余函数添加更好的文档注释"""
    # 为简化函数添加更详细的文档
    lines = content.split('\n')
    
    for i, line in enumerate(lines):
        if 'uint32 utility_get_memory_usage(void)' in line:
            # 更新文档注释
            lines[i-1] = '/**'
            lines[i] = ' * @brief 获取内存使用情况 - 监控系统内存使用状态'
            lines[i+1] = ' *'
            lines[i+2] = ' * 该函数用于获取当前系统的内存使用情况，'
            lines[i+3] = ' * 包括内存分配统计、内存使用率计算和内存泄漏检测。'
            lines[i+4] = ' *'
            lines[i+5] = ' * @return uint32 内存使用状态码，0表示正常，非0表示错误状态'
            lines[i+6] = ' */'
            
        elif 'uint64 utility_context_manager(void)' in line:
            # 更新文档注释
            lines[i-1] = '/**'
            lines[i] = ' * @brief 上下文管理器 - 管理系统资源上下文'
            lines[i+1] = ' *'
            lines[i+2] = ' * 该函数负责管理系统资源上下文，包括：'
            lines[i+3] = ' * - 上下文初始化和验证'
            lines[i+4] = ' * - 资源句柄管理'
            lines[i+5] = ' * - 上下文状态监控'
            lines[i+6] = ' *'
            lines[i+7] = ' * @return uint64 上下文管理结果状态码，0表示成功，非0表示失败'
            lines[i+8] = ' */'
    
    return '\n'.join(lines)

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    print("开始最终美化 06_utilities.c 文件...")
    
    # 读取文件
    content = read_file(file_path)
    
    # 清理剩余的重复代码段
    content = clean_remaining_duplicates(content)
    
    # 添加更好的函数文档
    content = add_function_documentation(content)
    
    # 写入文件
    write_file(file_path, content)
    
    print("文件最终美化完成！")

if __name__ == '__main__':
    main()