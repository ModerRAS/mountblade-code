#!/usr/bin/env python3
"""
分析02_core_engine.c文件中的FUN_函数，为重命名提供上下文信息
"""

import re
import os

def analyze_fun_functions(file_path):
    """分析文件中的FUN_函数"""
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 查找所有FUN_函数定义
    fun_pattern = r'^(.*?)(FUN_[0-9a-fA-F]{8})\s*\((.*?)\)\s*(?:\n|$)'
    matches = re.findall(fun_pattern, content, re.MULTILINE)
    
    # 查找函数调用
    call_pattern = r'FUN_[0-9a-fA-F]{8}'
    calls = re.findall(call_pattern, content)
    
    # 统计函数调用次数
    call_counts = {}
    for call in calls:
        call_counts[call] = call_counts.get(call, 0) + 1
    
    # 分析每个函数的上下文
    functions_info = []
    for prefix, fun_name, params in matches:
        # 查找函数在文件中的位置
        fun_pos = content.find(fun_name)
        if fun_pos == -1:
            continue
            
        # 获取函数周围的上下文
        start_pos = max(0, fun_pos - 200)
        end_pos = min(len(content), fun_pos + 500)
        context = content[start_pos:end_pos]
        
        # 查找中文注释
        chinese_comments = re.findall(r'//[\s]*[\u4e00-\u9fff].*?$', context, re.MULTILINE)
        
        # 分析参数类型
        param_types = []
        if params.strip():
            for param in params.split(','):
                param = param.strip()
                if 'param_' in param:
                    param_type = 'unknown'
                    if 'longlong' in param:
                        param_type = 'longlong'
                    elif 'uint64_t' in param:
                        param_type = 'uint64_t'
                    elif 'void' in param:
                        param_type = 'void'
                    elif 'float' in param:
                        param_type = 'float'
                    elif 'char' in param:
                        param_type = 'char'
                    elif 'int' in param:
                        param_type = 'int'
                    param_types.append(param_type)
        
        functions_info.append({
            'name': fun_name,
            'params': params,
            'param_types': param_types,
            'call_count': call_counts.get(fun_name, 0),
            'context': context,
            'chinese_comments': chinese_comments
        })
    
    return functions_info

def generate_suggestions(functions_info):
    """基于函数上下文生成命名建议"""
    suggestions = {}
    
    for func in functions_info:
        fun_name = func['name']
        context = func['context']
        params = func['params']
        call_count = func['call_count']
        
        # 基于上下文分析函数功能
        suggestion = None
        
        # 检查是否是内存相关函数
        if 'MemoryPool' in context or 'BufferAllocate' in context or 'MemoryStack' in context:
            if 'param_1' in params and 'param_2' in params:
                suggestion = 'MemoryPoolAllocate'
            elif 'Free' in context or 'Release' in context:
                suggestion = 'MemoryPoolRelease'
            else:
                suggestion = 'MemoryPoolManager'
        
        # 检查是否是系统初始化函数
        elif 'Initialize' in context or 'SystemContext' in context:
            suggestion = 'SystemInitialize'
        
        # 检查是否是渲染相关函数
        elif 'Render' in context or 'Draw' in context:
            suggestion = 'RenderProcess'
        
        # 检查是否是事件处理函数
        elif 'Event' in context or 'Process' in context:
            suggestion = 'EventProcess'
        
        # 检查是否是数据传输函数
        elif 'DataBuffer' in context or 'Copy' in context:
            if 'param_1' in params and 'param_2' in params:
                suggestion = 'DataBufferCopy'
            else:
                suggestion = 'DataBufferProcess'
        
        # 检查是否是配置相关函数
        elif 'Config' in context or 'Setup' in context:
            suggestion = 'ConfigurationSetup'
        
        # 检查是否是状态管理函数
        elif 'State' in context or 'Status' in context:
            suggestion = 'StateManager'
        
        # 基于调用次数判断重要性
        if call_count > 10:
            if suggestion:
                suggestion = suggestion.replace('Process', 'Manager')
            else:
                suggestion = 'CoreSystemManager'
        
        # 如果没有找到明确的模式，使用通用名称
        if not suggestion:
            if 'void' in params or not params.strip():
                suggestion = 'SystemExecute'
            else:
                suggestion = 'DataProcessor'
        
        suggestions[fun_name] = suggestion
    
    return suggestions

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
    
    print("正在分析FUN_函数...")
    functions_info = analyze_fun_functions(file_path)
    
    print(f"找到 {len(functions_info)} 个FUN_函数")
    
    print("\n生成命名建议...")
    suggestions = generate_suggestions(functions_info)
    
    print("\n函数重命名建议:")
    for fun_name, suggestion in suggestions.items():
        func_info = next((f for f in functions_info if f['name'] == fun_name), None)
        if func_info:
            print(f"{fun_name} -> {suggestion}")
            print(f"  参数: {func_info['params']}")
            print(f"  调用次数: {func_info['call_count']}")
            if func_info['chinese_comments']:
                print(f"  相关注释: {func_info['chinese_comments']}")
            print()