#!/usr/bin/env python3
"""
美化03_rendering.c文件中的undefined类型
将undefined替换为具体的数据类型，根据函数名称和上下文推断合适的类型
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

def determine_type(function_name):
    """根据函数名称确定合适的类型"""
    # 创建/初始化相关的函数通常返回状态码或指针
    if any(keyword in function_name.lower() for keyword in ['create', 'initialize', 'setup', 'allocate']):
        if 'buffer' in function_name.lower() or 'context' in function_name.lower() or 'resource' in function_name.lower():
            return 'void*'
        return 'int32_t'
    
    # 销毁/释放相关的函数通常返回状态码
    if any(keyword in function_name.lower() for keyword in ['destroy', 'free', 'release', 'cleanup']):
        return 'int32_t'
    
    # 绑定/设置相关的函数通常返回状态码
    if any(keyword in function_name.lower() for keyword in ['bind', 'set', 'enable', 'disable']):
        return 'int32_t'
    
    # 渲染相关的函数通常返回状态码
    if any(keyword in function_name.lower() for keyword in ['render', 'draw', 'execute']):
        return 'int32_t'
    
    # 获取/查询相关的函数可能返回指针或状态码
    if any(keyword in function_name.lower() for keyword in ['get', 'query', 'find']):
        return 'void*'
    
    # 验证/检查相关的函数通常返回布尔值或状态码
    if any(keyword in function_name.lower() for keyword in ['validate', 'check', 'verify']):
        return 'bool'
    
    # 状态/管理器通常是结构体或指针
    if any(keyword in function_name.lower() for keyword in ['state', 'manager', 'handler', 'processor']):
        return 'void*'
    
    # 默认返回状态码
    return 'int32_t'

def beautify_undefined_types(content):
    """将undefined类型替换为具体的C类型"""
    
    # 先处理带数字的undefined类型
    # undefined1 -> uint8_t (1字节)
    content = re.sub(r'\bundefined1\b', 'uint8_t', content)
    
    # undefined2 -> uint16_t (2字节)
    content = re.sub(r'\bundefined2\b', 'uint16_t', content)
    
    # undefined4 -> uint32_t (4字节)
    content = re.sub(r'\bundefined4\b', 'uint32_t', content)
    
    # undefined8 -> uint64_t (8字节)
    content = re.sub(r'\bundefined8\b', 'uint64_t', content)
    
    # 处理纯粹的undefined类型（函数声明）
    pattern = r'undefined\s+([a-zA-Z_][a-zA-Z0-9_]*)\s*;'
    
    def replace_function(match):
        function_name = match.group(1)
        new_type = determine_type(function_name)
        return f'{new_type} {function_name};'
    
    # 替换所有匹配的undefined类型
    content = re.sub(pattern, replace_function, content)
    
    # 更新注释中的返回类型
    comment_pattern = r'@return undefined\s+([^\n]*)'
    content = re.sub(comment_pattern, r'@return int32_t \1', content)
    
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c'
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化undefined类型
    beautified_content = beautify_undefined_types(content)
    
    # 写回文件
    write_file(file_path, beautified_content)
    
    print("完成undefined类型美化")

if __name__ == "__main__":
    main()