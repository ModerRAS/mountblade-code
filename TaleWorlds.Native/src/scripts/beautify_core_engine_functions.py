#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
核心引擎函数美化脚本
用于批量替换02_core_engine.c文件中的FUN_函数名为有意义的名称
"""

import re
import sys

def analyze_function_context(file_path, line_num):
    """分析函数上下文以确定其功能"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            lines = f.readlines()
        
        # 获取函数定义周围的上下文
        start_line = max(0, line_num - 10)
        end_line = min(len(lines), line_num + 20)
        context = lines[start_line:end_line]
        
        context_text = ''.join(context)
        
        # 根据上下文判断函数功能
        if 'mutex' in context_text.lower():
            return 'Mutex'
        elif 'thread' in context_text.lower():
            return 'Thread'
        elif 'memory' in context_text.lower():
            return 'Memory'
        elif 'event' in context_text.lower():
            return 'Event'
        elif 'system' in context_text.lower():
            return 'System'
        elif 'buffer' in context_text.lower():
            return 'Buffer'
        elif 'config' in context_text.lower():
            return 'Config'
        elif 'initialize' in context_text.lower():
            return 'Initialize'
        elif 'cleanup' in context_text.lower():
            return 'Cleanup'
        elif 'process' in context_text.lower():
            return 'Process'
        elif 'handler' in context_text.lower():
            return 'Handler'
        elif 'manager' in context_text.lower():
            return 'Manager'
        elif 'checker' in context_text.lower():
            return 'Checker'
        elif 'validator' in context_text.lower():
            return 'Validator'
        elif 'allocator' in context_text.lower():
            return 'Allocator'
        elif 'deallocator' in context_text.lower():
            return 'Deallocator'
        else:
            return 'Function'
    
    except Exception as e:
        print(f"分析函数上下文时出错: {e}")
        return 'Function'

def generate_function_name(base_name, index):
    """生成唯一的函数名"""
    return f"CoreEngine{base_name}{index:04d}"

def process_file(file_path):
    """处理文件中的FUN_函数"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 查找所有FUN_函数
        fun_pattern = r'FUN_1800([0-9a-f]{4})'
        matches = list(re.finditer(fun_pattern, content))
        
        # 统计每个功能类型的函数数量
        function_counters = {}
        replacements = {}
        
        print(f"找到 {len(matches)} 个FUN_函数需要处理")
        
        # 分析每个函数并生成替换名称
        for match in matches:
            line_num = content[:match.start()].count('\n') + 1
            func_type = analyze_function_context(file_path, line_num)
            
            if func_type not in function_counters:
                function_counters[func_type] = 0
            
            function_counters[func_type] += 1
            new_name = generate_function_name(func_type, function_counters[func_type])
            
            replacements[match.group(0)] = new_name
            print(f"行 {line_num}: {match.group(0)} -> {new_name}")
        
        # 执行替换
        for old_name, new_name in replacements.items():
            content = content.replace(old_name, new_name)
        
        # 写回文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"处理完成！共替换了 {len(replacements)} 个函数名")
        
        # 输出统计信息
        print("\n函数类型统计:")
        for func_type, count in function_counters.items():
            print(f"  {func_type}: {count} 个")
        
    except Exception as e:
        print(f"处理文件时出错: {e}")
        sys.exit(1)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("用法: python beautify_core_engine_functions.py <文件路径>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    process_file(file_path)