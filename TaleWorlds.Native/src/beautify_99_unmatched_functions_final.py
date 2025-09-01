#!/usr/bin/env python3
"""
美化99_unmatched_functions.c中的FUN_函数
这个脚本将重命名函数声明和定义，并为它们添加有意义的名称
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

def generate_function_name(address):
    """根据函数地址生成有意义的函数名"""
    # 根据地址范围推断函数类型
    if address.startswith('1800'):
        return f"SystemFunction_{address[4:]}"
    elif address.startswith('1801'):
        return f"CoreFunction_{address[4:]}"
    elif address.startswith('1802'):
        return f"UtilityFunction_{address[4:]}"
    elif address.startswith('1803'):
        return f"MemoryFunction_{address[4:]}"
    elif address.startswith('1804'):
        return f"RenderFunction_{address[4:]}"
    elif address.startswith('1805'):
        return f"NetworkFunction_{address[4:]}"
    elif address.startswith('1806'):
        return f"GameFunction_{address[4:]}"
    elif address.startswith('1807'):
        return f"AudioFunction_{address[4:]}"
    elif address.startswith('1808'):
        return f"UIFunction_{address[4:]}"
    else:
        return f"UnknownFunction_{address[4:]}"

def process_undefined_declarations(content):
    """处理undefined函数声明"""
    # 匹配 undefined FUN_xxxxxx;
    pattern = r'undefined (FUN_[0-9a-f]+);'
    
    def replace_declaration(match):
        func_name = match.group(1)
        new_name = generate_function_name(func_name[4:])  # 去掉FUN_前缀
        
        # 创建注释
        comment = f"/**\n * @brief {new_name}\n * \n * 未分类函数，地址：{func_name}\n * 需要根据具体实现进一步分析其功能\n */"
        
        return f"{comment}\nundefined {func_name};"
    
    return re.sub(pattern, replace_declaration, content)

def process_function_definitions(content):
    """处理函数定义"""
    # 匹配 void FUN_xxxxxx(...) 或者 其他返回类型的函数定义
    pattern = r'^(void|undefined|longlong|int|char|bool|float|ulonglong|undefined8|undefined4|undefined1|byte|code) (FUN_[0-9a-f]+)\(([^)]*)\)'
    
    def replace_definition(match):
        return_type = match.group(1)
        func_name = match.group(2)
        params = match.group(3)
        new_name = generate_function_name(func_name[4:])  # 去掉FUN_前缀
        
        # 创建注释
        comment = f"/**\n * @brief {new_name}\n * \n * 未分类函数，地址：{func_name}\n * 需要根据具体实现进一步分析其功能\n * \n * @param {params.replace(',', '\n * @param ')}\n * @return {return_type}\n */"
        
        return f"{comment}\n{return_type} {func_name}({params})"
    
    # 需要处理多行函数定义
    lines = content.split('\n')
    result_lines = []
    i = 0
    
    while i < len(lines):
        line = lines[i].strip()
        
        # 检查是否是函数定义开始
        if re.match(r'^(void|undefined|longlong|int|char|bool|float|ulonglong|undefined8|undefined4|undefined1|byte|code) (FUN_[0-9a-f]+)\(', line):
            # 收集完整的函数签名（可能跨多行）
            full_signature = line
            j = i + 1
            
            # 继续收集直到找到右括号
            while j < len(lines) and ')' not in full_signature:
                full_signature += ' ' + lines[j].strip()
                j += 1
            
            # 如果找到了右括号，添加函数体开始的大括号
            if j < len(lines) and '{' in lines[j]:
                full_signature += ' {'
                i = j
            
            # 应用替换
            new_signature = re.sub(pattern, replace_definition, full_signature)
            result_lines.append(new_signature)
        else:
            result_lines.append(lines[i])
        
        i += 1
    
    return '\n'.join(result_lines)

def process_function_calls(content):
    """处理函数调用"""
    # 匹配 FUN_xxxxxx( 调用
    pattern = r'FUN_([0-9a-f]+)\('
    
    def replace_call(match):
        address = match.group(1)
        new_name = generate_function_name(address)
        return f"{new_name}("
    
    return re.sub(pattern, replace_call, content)

def process_goto_statements(content):
    """处理goto语句"""
    # 匹配 goto FUN_xxxxxx;
    pattern = r'goto (FUN_[0-9a-f]+);'
    
    def replace_goto(match):
        label_name = match.group(1)
        new_name = generate_function_name(label_name[4:])  # 去掉FUN_前缀
        return f"goto {label_name};  // {new_name}"
    
    return re.sub(pattern, replace_goto, content)

def process_labels(content):
    """处理标签定义"""
    # 匹配 FUN_xxxxxx:
    pattern = r'^(FUN_[0-9a-f]+):'
    
    def replace_label(match):
        label_name = match.group(1)
        new_name = generate_function_name(label_name[4:])  # 去掉FUN_前缀
        return f"{label_name}:  // {new_name}"
    
    return re.sub(pattern, replace_label, content, flags=re.MULTILINE)

def main():
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    
    print("开始处理99_unmatched_functions.c文件...")
    
    # 读取文件
    content = read_file(input_file)
    
    # 处理各种FUN_函数相关的内容
    print("处理undefined函数声明...")
    content = process_undefined_declarations(content)
    
    print("处理函数定义...")
    content = process_function_definitions(content)
    
    print("处理函数调用...")
    content = process_function_calls(content)
    
    print("处理goto语句...")
    content = process_goto_statements(content)
    
    print("处理标签定义...")
    content = process_labels(content)
    
    # 写回文件
    print("写入文件...")
    write_file(input_file, content)
    
    print("处理完成！")

if __name__ == "__main__":
    main()