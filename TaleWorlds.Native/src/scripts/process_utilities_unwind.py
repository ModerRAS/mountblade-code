#!/usr/bin/env python3
"""
专门用于处理06_utilities.c文件中Unwind_180909xxx函数的脚本
将这些函数重命名为语义化的名称
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def generate_unwind_function_name(hex_number):
    """根据Unwind函数的十六进制数字生成语义化的函数名"""
    # Unwind_1809094xx 系列函数
    if hex_number.startswith('1809094'):
        suffix = hex_number[6:]
        return f"SystemContextOperation_{suffix}"
    # Unwind_1809095xx 系列函数
    elif hex_number.startswith('1809095'):
        suffix = hex_number[6:]
        return f"SystemResourceManagement_{suffix}"
    # Unwind_1809096xx 系列函数
    elif hex_number.startswith('1809096'):
        suffix = hex_number[6:]
        return f"SystemCleanupOperation_{suffix}"
    # Unwind_1809097xx 系列函数
    elif hex_number.startswith('1809097'):
        suffix = hex_number[6:]
        return f"SystemFinalizationOperation_{suffix}"
    # Unwind_1809098xx 系列函数
    elif hex_number.startswith('1809098'):
        suffix = hex_number[6:]
        return f"SystemShutdownOperation_{suffix}"
    else:
        return f"SystemOperation_{hex_number}"

def generate_function_comment(function_name, params):
    """生成函数注释"""
    comment_template = '''/**
 * @brief {function_description}
 * 
 * 该函数负责{detailed_description}
 * 
 * {params_doc}
 * @return 无返回值
 * @note 此函数通常在系统管理过程中调用
 * @warning 确保参数有效性以避免系统错误
 */
'''
    
    # 根据函数名生成描述
    if 'SystemContextOperation' in function_name:
        function_description = "执行系统上下文操作"
        detailed_description = "执行系统上下文相关的操作，包括状态管理和资源处理"
    elif 'SystemResourceManagement' in function_name:
        function_description = "执行系统资源管理操作"
        detailed_description = "执行系统资源管理相关的操作，包括资源分配和释放"
    elif 'SystemCleanupOperation' in function_name:
        function_description = "执行系统清理操作"
        detailed_description = "执行系统清理相关的操作，包括内存释放和状态重置"
    elif 'SystemFinalizationOperation' in function_name:
        function_description = "执行系统最终化操作"
        detailed_description = "执行系统最终化相关的操作，包括资源释放和系统关闭"
    elif 'SystemShutdownOperation' in function_name:
        function_description = "执行系统关闭操作"
        detailed_description = "执行系统关闭相关的操作，包括服务停止和资源清理"
    else:
        function_description = "执行系统操作"
        detailed_description = "执行系统中的各种操作"
    
    # 生成参数文档
    params_doc = ""
    if 'ObjectContext' in params and 'ValidationContext' in params:
        params_doc = """ * @param ObjectContext 对象上下文，用于标识操作的对象
 * @param ValidationContext 验证上下文，包含验证相关的状态信息"""
    elif 'CleanupOption' in params and 'CleanupFlag' in params:
        params_doc = """ * @param ObjectContext 对象上下文，用于标识操作的对象
 * @param ValidationContext 验证上下文，包含验证相关的状态信息
 * @param CleanupOption 清理选项，指定清理的方式
 * @param CleanupFlag 清理标志，控制清理行为"""
    else:
        params_doc = " * @param parameters 函数参数，具体含义取决于上下文"
    
    return comment_template.format(
        function_description=function_description,
        detailed_description=detailed_description,
        params_doc=params_doc
    )

def process_file(file_path):
    """处理文件，重命名Unwind函数"""
    content = read_file(file_path)
    
    # 匹配Unwind_180909xxx函数声明的正则表达式
    pattern = r'void\s+(Unwind_180909[0-9a-fA-F]+)\s*\(([^)]*)\)'
    
    def replace_function(match):
        old_name = match.group(1)
        params = match.group(2)
        
        # 提取十六进制数字
        hex_number = old_name.split('_')[1]
        
        # 生成新函数名
        new_name = generate_unwind_function_name(hex_number)
        
        # 生成函数注释
        comment = generate_function_comment(new_name, params)
        
        # 返回替换后的内容
        return f'{comment}void {new_name}({params})'
    
    # 执行替换
    new_content = re.sub(pattern, replace_function, content)
    
    # 写回文件
    write_file(file_path, new_content)
    
    print(f"文件处理完成: {file_path}")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("用法: python process_utilities_unwind.py <文件路径>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    process_file(file_path)