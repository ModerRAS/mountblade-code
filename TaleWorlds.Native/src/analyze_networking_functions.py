#!/usr/bin/env python3
"""
分析05_networking.c文件中的FUN_函数
根据函数地址和上下文推断函数功能并生成有意义的函数名
"""

import re
from collections import defaultdict

def analyze_networking_functions():
    """分析网络相关函数的功能"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'r') as f:
        content = f.read()
    
    # 找到所有FUN_函数定义
    func_pattern = r'FUN_180([0-9a-f]{4,5})\s*\([^)]*\)\s*\n*\s*\{'
    functions = re.findall(func_pattern, content)
    
    print(f"找到 {len(functions)} 个FUN_函数")
    
    # 分析每个函数
    function_analysis = {}
    
    for func_addr in functions:
        func_name = f'FUN_180{func_addr}'
        
        # 查找该函数的调用
        call_pattern = rf'{func_name}\s*\([^)]*\)'
        calls = re.findall(call_pattern, content)
        call_count = len(calls)
        
        # 分析函数的上下文使用
        context_patterns = [
            (rf'=\s*{func_name}\s*\([^)]*\)', 'assignment'),
            (rf'return\s+{func_name}\s*\([^)]*\)', 'return_value'),
            (rf'if\s*\(\s*{func_name}\s*\([^)]*\)', 'condition_check'),
            (rf'{func_name}\s*\([^)]*\);\s*$', 'standalone_call'),
        ]
        
        context_usage = []
        for pattern, context_type in context_patterns:
            if re.search(pattern, content):
                context_usage.append(context_type)
        
        # 根据地址范围推测功能类别
        addr_int = int(func_addr, 16)
        
        if 0x74000 <= addr_int < 0x75000:
            category = 'connection'
            base_name = 'NetworkConnection'
        elif 0x75000 <= addr_int < 0x76000:
            category = 'socket'
            base_name = 'NetworkSocket'
        elif 0x76000 <= addr_int < 0x77000:
            category = 'protocol'
            base_name = 'NetworkProtocol'
        elif 0x77000 <= addr_int < 0x78000:
            category = 'data'
            base_name = 'NetworkData'
        elif 0x78000 <= addr_int < 0x79000:
            category = 'packet'
            base_name = 'NetworkPacket'
        elif 0x79000 <= addr_int < 0x7a000:
            category = 'buffer'
            base_name = 'NetworkBuffer'
        elif 0x7a000 <= addr_int < 0x7b000:
            category = 'security'
            base_name = 'NetworkSecurity'
        elif 0x7b000 <= addr_int < 0x7c000:
            category = 'validation'
            base_name = 'NetworkValidation'
        elif 0x7c000 <= addr_int < 0x7d000:
            category = 'transfer'
            base_name = 'NetworkTransfer'
        elif 0x7d000 <= addr_int < 0x7e000:
            category = 'session'
            base_name = 'NetworkSession'
        elif 0x7e000 <= addr_int < 0x7f000:
            category = 'message'
            base_name = 'NetworkMessage'
        elif 0x7f000 <= addr_int < 0x80000:
            category = 'event'
            base_name = 'NetworkEvent'
        elif 0x80000 <= addr_int < 0x81000:
            category = 'stream'
            base_name = 'NetworkStream'
        elif 0x81000 <= addr_int < 0x82000:
            category = 'channel'
            base_name = 'NetworkChannel'
        elif 0x82000 <= addr_int < 0x83000:
            category = 'queue'
            base_name = 'NetworkQueue'
        elif 0x83000 <= addr_int < 0x84000:
            category = 'thread'
            base_name = 'NetworkThread'
        elif 0x84000 <= addr_int < 0x85000:
            category = 'pool'
            base_name = 'NetworkPool'
        elif 0x85000 <= addr_int < 0x86000:
            category = 'cache'
            base_name = 'NetworkCache'
        elif 0x86000 <= addr_int < 0x87000:
            category = 'state'
            base_name = 'NetworkState'
        elif 0x87000 <= addr_int < 0x88000:
            category = 'handle'
            base_name = 'NetworkHandle'
        elif 0x88000 <= addr_int < 0x89000:
            category = 'context'
            base_name = 'NetworkContext'
        elif 0x89000 <= addr_int < 0x8a000:
            category = 'request'
            base_name = 'NetworkRequest'
        elif 0x8a000 <= addr_int < 0x8b000:
            category = 'response'
            base_name = 'NetworkResponse'
        elif 0x8b000 <= addr_int < 0x8c000:
            category = 'error'
            base_name = 'NetworkError'
        elif 0x8c000 <= addr_int < 0x8d000:
            category = 'timeout'
            base_name = 'NetworkTimeout'
        elif 0x8d000 <= addr_int < 0x8e000:
            category = 'priority'
            base_name = 'NetworkPriority'
        elif 0x8e000 <= addr_int < 0x8f000:
            category = 'flow'
            base_name = 'NetworkFlow'
        elif 0x8f000 <= addr_int < 0x90000:
            category = 'rate'
            base_name = 'NetworkRate'
        else:
            category = 'utility'
            base_name = 'NetworkUtility'
        
        # 根据地址后缀生成动作
        last_byte = addr_int & 0xFF
        action_map = {
            0x00: 'Initialize',
            0x10: 'Configure',
            0x20: 'Setup',
            0x30: 'Create',
            0x40: 'Open',
            0x50: 'Close',
            0x60: 'Connect',
            0x70: 'Disconnect',
            0x80: 'Send',
            0x90: 'Receive',
            0xA0: 'Process',
            0xB0: 'Handle',
            0xC0: 'Validate',
            0xD0: 'Check',
            0xE0: 'Update',
            0xF0: 'Reset',
        }
        
        action = action_map.get(last_byte & 0xF0, 'Manage')
        
        # 生成最终名称
        suggested_name = f"{action}{base_name}"
        
        # 根据调用上下文调整名称
        if 'condition_check' in context_usage:
            suggested_name = f"Check{base_name}"
        elif 'return_value' in context_usage:
            suggested_name = f"Get{base_name}"
        elif 'assignment' in context_usage:
            suggested_name = f"Set{base_name}"
        
        function_analysis[func_addr] = {
            'function_name': func_name,
            'call_count': call_count,
            'category': category,
            'suggested_name': suggested_name,
            'context_usage': context_usage,
        }
    
    return function_analysis

def generate_replacement_table(function_analysis):
    """生成替换映射表"""
    
    print("=== 网络函数美化替换映射表 ===\n")
    
    # 按功能分类
    categories = {}
    for addr, analysis in function_analysis.items():
        category = analysis['category']
        if category not in categories:
            categories[category] = []
        categories[category].append((addr, analysis))
    
    for category, funcs in categories.items():
        print(f"## {category.upper()} 功能类别")
        print("-" * 50)
        
        for addr, analysis in funcs:
            print(f"原函数名: {analysis['function_name']}")
            print(f"建议名称: {analysis['suggested_name']}")
            print(f"调用次数: {analysis['call_count']}")
            
            if analysis['context_usage']:
                print(f"上下文使用: {', '.join(analysis['context_usage'])}")
            
            print()
    
    # 生成替换脚本
    print("\n=== 替换脚本 ===")
    print("#!/bin/bash")
    print("cd /dev/shm/mountblade-code/TaleWorlds.Native/src")
    print("cp 05_networking.c 05_networking.c.backup")
    print()
    
    for addr, analysis in function_analysis.items():
        old_name = analysis['function_name']
        new_name = analysis['suggested_name']
        print(f"sed -i 's/{old_name}/{new_name}/g' 05_networking.c")
    
    print()
    print("echo '函数替换完成'")
    print("echo '请检查替换结果并编译测试'")

def generate_beautification_script(function_analysis):
    """生成美化脚本"""
    
    script_content = '''#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re

def beautify_networking_functions():
    """美化05_networking.c文件中的FUN_函数"""
    
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c'
    
    # 读取文件
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 替换映射
    replacements = {
'''
    
    for addr, analysis in function_analysis.items():
        old_name = analysis['function_name']
        new_name = analysis['suggested_name']
        script_content += f"        '{old_name}': '{new_name}',\n"
    
    script_content += '''    }
    
    # 执行替换
    for old_name, new_name in replacements.items():
        # 替换函数定义
        pattern = f'{old_name}\\\\s*\\\\('
        content = re.sub(pattern, f'{new_name}(', content)
        # 替换函数调用
        content = content.replace(f' {old_name}(', f' {new_name}(')
        content = content.replace(f'\\\\n{old_name}(', f'\\\\n{new_name}(')
        content = content.replace(f'*{old_name}', f'*{new_name}')
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"替换了 {len(replacements)} 个函数名")

if __name__ == '__main__':
    beautify_networking_functions()
'''
    
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/beautify_networking_functions.py', 'w', encoding='utf-8') as f:
        f.write(script_content)
    
    print("美化脚本已创建: beautify_networking_functions.py")

if __name__ == "__main__":
    analysis = analyze_networking_functions()
    generate_replacement_table(analysis)
    generate_beautification_script(analysis)