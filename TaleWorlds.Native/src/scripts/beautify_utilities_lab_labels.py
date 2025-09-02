#!/usr/bin/env python3
"""
美化06_utilities.c文件中的LAB_标签
将逆向工程产生的LAB_标签替换为语义化名称
"""

import re
import os

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def find_lab_labels(content):
    """查找所有的LAB_标签"""
    pattern = r'LAB_180[a-f0-9]+'
    return re.findall(pattern, content)

def create_lab_replacements(content):
    """创建LAB_标签的替换映射"""
    replacements = {}
    
    # 根据上下文分析LAB_标签的用途
    lines = content.split('\n')
    
    for line_num, line in enumerate(lines):
        if 'LAB_180' in line:
            # 查找LAB_标签
            lab_match = re.search(r'LAB_180[a-f0-9]+', line)
            if lab_match:
                lab_label = lab_match.group(0)
                
                # 根据上下文判断标签用途
                if 'goto LAB_180' in line:
                    # 这是跳转目标，需要查看标签定义处的上下文
                    context = get_label_context(lines, line_num, lab_label)
                    replacement = generate_semantic_name(lab_label, context)
                    replacements[lab_label] = replacement
    
    return replacements

def get_label_context(lines, current_line, lab_label):
    """获取标签的上下文信息"""
    # 查找标签定义
    label_line = -1
    for i, line in enumerate(lines):
        if line.strip().endswith(':') and lab_label in line:
            label_line = i
            break
    
    if label_line == -1:
        return "unknown"
    
    # 获取标签前后的上下文
    start_line = max(0, label_line - 5)
    end_line = min(len(lines), label_line + 5)
    context_lines = lines[start_line:end_line]
    
    return '\n'.join(context_lines)

def generate_semantic_name(lab_label, context):
    """根据上下文生成语义化名称"""
    # 分析上下文中的关键词
    if 'validation' in context.lower() or 'validate' in context.lower():
        return f"ValidationFailed_{lab_label[-4:]}"
    elif 'error' in context.lower():
        return f"ErrorHandler_{lab_label[-4:]}"
    elif 'cleanup' in context.lower():
        return f"CleanupHandler_{lab_label[-4:]}"
    elif 'success' in context.lower():
        return f"SuccessHandler_{lab_label[-4:]}"
    elif 'loop' in context.lower():
        return f"LoopHandler_{lab_label[-4:]}"
    elif 'check' in context.lower():
        return f"CheckHandler_{lab_label[-4:]}"
    elif 'resource' in context.lower():
        return f"ResourceHandler_{lab_label[-4:]}"
    elif 'memory' in context.lower():
        return f"MemoryHandler_{lab_label[-4:]}"
    elif 'register' in context.lower():
        return f"RegisterHandler_{lab_label[-4:]}"
    elif 'security' in context.lower():
        return f"SecurityHandler_{lab_label[-4:]}"
    elif 'process' in context.lower():
        return f"ProcessHandler_{lab_label[-4:]}"
    elif 'system' in context.lower():
        return f"SystemHandler_{lab_label[-4:]}"
    elif 'initialize' in context.lower():
        return f"InitializeHandler_{lab_label[-4:]}"
    elif 'execute' in context.lower():
        return f"ExecuteHandler_{lab_label[-4:]}"
    elif 'return' in context.lower():
        return f"ReturnHandler_{lab_label[-4:]}"
    elif 'exit' in context.lower():
        return f"ExitHandler_{lab_label[-4:]}"
    elif 'continue' in context.lower():
        return f"ContinueHandler_{lab_label[-4:]}"
    elif 'break' in context.lower():
        return f"BreakHandler_{lab_label[-4:]}"
    else:
        return f"Handler_{lab_label[-4:]}"

def replace_lab_labels(content, replacements):
    """替换LAB_标签"""
    for old_label, new_label in replacements.items():
        content = content.replace(old_label, new_label)
    return content

def main():
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
    
    # 读取文件
    content = read_file(file_path)
    
    # 查找所有LAB_标签
    lab_labels = find_lab_labels(content)
    print(f"找到 {len(lab_labels)} 个LAB_标签")
    
    # 创建替换映射
    replacements = create_lab_replacements(content)
    print(f"生成 {len(replacements)} 个替换映射")
    
    # 显示前10个替换示例
    print("\n替换示例:")
    for i, (old, new) in enumerate(list(replacements.items())[:10]):
        print(f"  {old} -> {new}")
    
    # 执行替换
    new_content = replace_lab_labels(content, replacements)
    
    # 写入文件
    write_file(file_path, new_content)
    print(f"\n完成LAB_标签替换，共替换 {len(replacements)} 个标签")

if __name__ == "__main__":
    main()