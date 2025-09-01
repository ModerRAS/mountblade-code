#!/usr/bin/env python3
"""
批量重命名FUN_函数并添加文档注释的脚本
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

def find_fun_functions(content):
    """找到所有FUN_函数"""
    # 匹配函数定义的模式
    pattern = r'// 函数: (void|int|long long|void\*|uint8_t\*|ulong long\*|undefined\*\*|long long\*\*) FUN_[0-9a-fA-F]{8}\([^)]*\)'
    matches = re.findall(pattern, content)
    return matches

def generate_function_name(original_signature):
    """根据函数签名生成语义化名称"""
    # 提取函数参数信息
    if 'void*' in original_signature and 'param_1' in original_signature:
        if 'param_2' in original_signature and 'param_3' in original_signature and 'param_4' in original_signature:
            return "ExecuteSystemFourParameterOperation"
        elif 'param_2' in original_signature and 'param_3' in original_signature:
            return "ExecuteSystemThreeParameterOperation"
        elif 'param_2' in original_signature:
            return "ExecuteSystemTwoParameterOperation"
        else:
            return "ExecuteSystemSingleParameterOperation"
    elif 'long long' in original_signature and 'param_1' in original_signature:
        if 'param_2' in original_signature:
            return "ProcessSystemTwoLongOperation"
        else:
            return "ProcessSystemSingleLongOperation"
    elif 'uint32_t' in original_signature:
        return "ProcessSystemUint32Operation"
    elif 'uint8_t' in original_signature:
        return "ProcessSystemUint8Operation"
    elif 'void' in original_signature and '(' in original_signature and ')' in original_signature:
        # 检查是否是无参数函数
        if 'param_' not in original_signature:
            return "ExecuteSystemVoidOperation"
    
    # 默认名称
    return "ExecuteSystemOperation"

def generate_documentation(function_name, original_signature):
    """生成函数文档注释"""
    # 解析参数
    params = []
    if 'param_1' in original_signature:
        params.append("param_1 主操作参数")
    if 'param_2' in original_signature:
        params.append("param_2 辅助操作参数")
    if 'param_3' in original_signature:
        params.append("param_3 配置参数")
    if 'param_4' in original_signature:
        params.append("param_4 扩展参数")
    
    param_docs = "\n * @param " + "\n * @param ".join(params) if params else ""
    
    doc_template = f"""/**
 * @brief 执行系统操作
 * 
 * 该函数负责执行系统级别的操作，处理相应的参数并完成指定的功能。
 * 这是系统初始化和管理的重要组成部分。
 * 
{param_docs}
 * 
 * @note 这是系统操作的核心函数
 */"""
    
    return doc_template

def process_functions(content):
    """处理所有FUN_函数"""
    # 匹配完整的函数定义
    pattern = r'(// 函数: (void|int|long long|void\*|uint8_t\*|ulong long\*|undefined\*\*|long long\*\*) FUN_[0-9a-fA-F]{{8}}\([^)]*\)\n)(void|int|long long|void\*|uint8_t\*|ulong long\*|undefined\*\*|long long\*\*) FUN_[0-9a-fA-F]{{8}}\([^)]*\)'
    
    def replace_function(match):
        comment_line = match.group(1)
        return_type = match.group(2)
        
        # 生成新的函数名
        new_name = generate_function_name(comment_line)
        
        # 生成文档注释
        doc_comment = generate_documentation(new_name, comment_line)
        
        # 构建新的函数定义
        new_definition = f"{comment_line}{doc_comment}\n{return_type} {new_name}"
        
        return new_definition
    
    # 替换所有匹配的函数
    new_content = re.sub(pattern, replace_function, content)
    
    return new_content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("Usage: python rename_fun_functions.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    print(f"Processing file: {file_path}")
    
    # 读取文件
    content = read_file(file_path)
    
    # 处理函数
    new_content = process_functions(content)
    
    # 写入文件
    write_file(file_path, new_content)
    
    print("Processing completed!")

if __name__ == "__main__":
    main()