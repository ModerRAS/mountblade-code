#!/usr/bin/env python3
"""
99_unmatched_functions.c 文件的美化脚本
重命名 FUN_ 函数为有意义的名称
"""

import re
import sys

def analyze_function_context(content, func_name):
    """分析函数上下文，确定函数功能"""
    # 查找函数调用的上下文
    pattern = rf'({func_name}\([^)]*\))'
    matches = re.findall(pattern, content)
    
    if not matches:
        return None
    
    # 分析函数调用模式
    contexts = []
    for match in matches:
        # 获取函数调用的前后文
        start_pos = content.find(match)
        if start_pos == -1:
            continue
            
        # 获取前后各100个字符的上下文
        context_start = max(0, start_pos - 100)
        context_end = min(len(content), start_pos + len(match) + 100)
        context = content[context_start:context_end]
        contexts.append(context)
    
    # 根据上下文推断函数功能
    func_name_lower = func_name.lower()
    
    # 内存操作相关
    if any(keyword in ' '.join(contexts).lower() for keyword in ['memcpy', 'malloc', 'free', 'memory', 'buffer']):
        if 'alloc' in func_name_lower or 'malloc' in ' '.join(contexts).lower():
            return f"MemoryAllocate_{func_name[4:]}"
        elif 'free' in func_name_lower or 'dealloc' in ' '.join(contexts).lower():
            return f"MemoryFree_{func_name[4:]}"
        elif 'copy' in func_name_lower or 'memcpy' in ' '.join(contexts).lower():
            return f"MemoryCopy_{func_name[4:]}"
        else:
            return f"MemoryOperation_{func_name[4:]}"
    
    # 字符串操作相关
    elif any(keyword in ' '.join(contexts).lower() for keyword in ['string', 'str', 'char', 'text']):
        return f"StringOperation_{func_name[4:]}"
    
    # 网络操作相关
    elif any(keyword in ' '.join(contexts).lower() for keyword in ['network', 'socket', 'connect', 'send', 'recv']):
        return f"NetworkOperation_{func_name[4:]}"
    
    # 文件操作相关
    elif any(keyword in ' '.join(contexts).lower() for keyword in ['file', 'read', 'write', 'open', 'close']):
        return f"FileOperation_{func_name[4:]}"
    
    # 数学运算相关
    elif any(keyword in ' '.join(contexts).lower() for keyword in ['math', 'calc', 'compute', 'add', 'sub', 'mul', 'div']):
        return f"MathOperation_{func_name[4:]}"
    
    # 默认命名
    return f"Function_{func_name[4:]}"

def process_file(file_path):
    """处理文件，重命名FUN_函数"""
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找所有FUN_函数
    func_pattern = r'FUN_[0-9a-f]+'
    functions = re.findall(func_pattern, content)
    
    if not functions:
        print("未找到FUN_函数")
        return
    
    # 去重并创建映射表
    unique_functions = list(set(functions))
    print(f"找到 {len(unique_functions)} 个唯一的FUN_函数")
    
    # 创建函数名映射
    function_map = {}
    for func in unique_functions:
        new_name = analyze_function_context(content, func)
        function_map[func] = new_name
        print(f"{func} -> {new_name}")
    
    # 替换函数名
    modified_content = content
    for old_name, new_name in function_map.items():
        # 只替换完整的函数名，避免替换部分匹配
        modified_content = re.sub(rf'\b{old_name}\b', new_name, modified_content)
    
    # 写入文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(modified_content)
    
    print(f"文件处理完成：{file_path}")

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    process_file(file_path)