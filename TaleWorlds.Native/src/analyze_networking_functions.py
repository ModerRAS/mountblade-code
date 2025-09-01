#!/usr/bin/env python3
"""
分析05_networking.c文件中的func_0x函数调用
根据上下文推断函数功能并生成有意义的函数名
"""

import re
from collections import defaultdict

def analyze_networking_functions():
    """分析网络相关函数的功能"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c', 'r') as f:
        content = f.read()
    
    # 找到所有func_0x函数调用
    func_pattern = r'func_0x([a-f0-9]+)'
    functions = re.findall(func_pattern, content)
    
    # 统计每个函数的调用次数
    func_counts = defaultdict(int)
    for func in functions:
        func_counts[func] += 1
    
    # 分析每个函数的上下文
    function_analysis = {}
    
    for func_addr in func_counts.keys():
        func_name = f'func_0x{func_addr}'
        
        # 查找该函数的所有调用
        call_pattern = rf'{func_name}\s*\([^)]*\)'
        calls = re.findall(call_pattern, content)
        
        # 分析函数参数
        param_analysis = []
        for call in calls:
            # 提取参数
            param_match = re.search(rf'{func_name}\s*\(([^)]*)\)', call)
            if param_match:
                params = param_match.group(1).split(',')
                param_analysis.append([p.strip() for p in params])
        
        # 分析函数的上下文使用
        context_patterns = [
            (rf'NetworkOperationStatus\d+\s*=\s*{func_name}', 'operation_status'),
            (rf'NetworkContextPointer\d+\s*=\s*{func_name}', 'context_pointer'),
            (rf'NetworkFloatValue\d+\s*=\s*\([^)]*\)\s*{func_name}', 'float_value'),
            (rf'networkChar\d+\s*=\s*{func_name}', 'char_value'),
            (rf'NetworkConnectionIndex\d+\s*=\s*{func_name}', 'connection_index'),
            (rf'NetworkConnectionHandle\d+\s*=\s*{func_name}', 'connection_handle'),
            (rf'NetworkFlagsValue\s*=\s*{func_name}', 'flags_value'),
            (rf'NetworkStatusFlag\d+\s*=\s*{func_name}', 'status_flag'),
            (rf'validationStatus\s*=\s*{func_name}', 'validation'),
            (rf'initializationResult\s*=\s*{func_name}', 'initialization'),
            (rf'resourceCleanupResult\s*=\s*{func_name}', 'cleanup'),
            (rf'networkCurrentChar\s*=\s*{func_name}', 'current_char'),
            (rf'networkChar\d+\s*=\s*{func_name}', 'char_value'),
            (rf'cVar\d+\s*=\s*{func_name}', 'char_variable'),
            (rf'lVar\d+\s*=\s*{func_name}', 'long_variable'),
            (rf'fVar\d+\s*=\s*\([^)]*\)\s*{func_name}', 'float_variable'),
            (rf'{func_name}\s*\([^)]*\);\s*$', 'void_return'),
        ]
        
        context_usage = []
        for pattern, context_type in context_patterns:
            if re.search(pattern, content):
                context_usage.append(context_type)
        
        # 根据地址范围推测功能类别
        addr_int = int(func_addr, 16)
        
        if '0x85' in func_addr:
            category = 'network_connection'
        elif '0x86' in func_addr:
            category = 'network_protocol'
        elif '0x87' in func_addr:
            category = 'network_data'
        elif '0x88' in func_addr:
            category = 'network_management'
        elif '0x8b' in func_addr:
            category = 'network_buffer'
        elif '0x8c' in func_addr:
            category = 'network_operation'
        elif '0x8d' in func_addr:
            category = 'network_validation'
        elif '0x8e' in func_addr:
            category = 'network_advanced'
        else:
            category = 'network_general'
        
        # 根据调用次数和上下文推断具体功能
        suggested_name = None
        description = ""
        
        if func_counts[func_addr] >= 10:
            if 'operation_status' in context_usage:
                suggested_name = "ExecuteNetworkOperation"
                description = "执行网络操作并返回状态"
            elif 'context_pointer' in context_usage:
                suggested_name = "GetNetworkContext"
                description = "获取网络上下文指针"
            elif 'connection_handle' in context_usage:
                suggested_name = "CreateNetworkConnection"
                description = "创建网络连接句柄"
            else:
                suggested_name = "ProcessNetworkRequest"
                description = "处理网络请求"
        
        # 特定函数分析
        if func_addr == '00018085f4a0':
            suggested_name = "CompareNetworkHandles"
            description = "比较两个网络句柄"
        elif func_addr == '0001808c1740':
            suggested_name = "GetNetworkFloatValue"
            description = "获取网络浮点数值"
        elif func_addr == '00018084d100':
            suggested_name = "AccessNetworkContext"
            description = "访问网络上下文数据"
        elif func_addr == '0001808c6c50':
            suggested_name = "ProcessNetworkDataStream"
            description = "处理网络数据流"
        elif func_addr == '00018085de10':
            suggested_name = "CleanupNetworkResources"
            description = "清理网络资源"
        elif func_addr == '00018085e3f0':
            suggested_name = "ReleaseNetworkConnection"
            description = "释放网络连接"
        elif func_addr == '00018085deb0':
            suggested_name = "FreeNetworkMemory"
            description = "释放网络内存"
        elif func_addr == '00018084de30':
            suggested_name = "GetNetworkCharacter"
            description = "获取网络字符数据"
        elif func_addr == '000180857b20':
            suggested_name = "ReadNetworkChar"
            description = "读取网络字符"
        elif func_addr == '00018086dc30':
            suggested_name = "GetNetworkPointer"
            description = "获取网络指针"
        elif func_addr == '0001808674c0':
            suggested_name = "FlushNetworkBuffer"
            description = "刷新网络缓冲区"
        elif func_addr == '000180875460':
            suggested_name = "CheckNetworkFlags"
            description = "检查网络标志"
        elif func_addr == '000180853cc0':
            suggested_name = "SetNetworkParameter"
            description = "设置网络参数"
        elif func_addr == '00018084e700':
            suggested_name = "SendNetworkError"
            description = "发送网络错误"
        elif func_addr == '000180851e30':
            suggested_name = "GetNetworkParameter"
            description = "获取网络参数"
        
        function_analysis[func_addr] = {
            'function_name': func_name,
            'call_count': func_counts[func_addr],
            'category': category,
            'suggested_name': suggested_name or f"Network{category.title()}Function",
            'description': description or f"网络{category}相关函数",
            'context_usage': context_usage,
            'param_analysis': param_analysis[:3]  # 只保存前3个调用的参数分析
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
            print(f"功能描述: {analysis['description']}")
            
            if analysis['context_usage']:
                print(f"上下文使用: {', '.join(analysis['context_usage'])}")
            
            if analysis['param_analysis']:
                print("参数示例:")
                for i, params in enumerate(analysis['param_analysis'][:2]):
                    print(f"  调用{i+1}: {len(params)}个参数 - {', '.join(params)}")
            
            print()
    
    # 生成替换脚本
    print("\n=== 替换脚本 ===")
    print("#!/bin/bash")
    print("cd /dev/shm/mountblade-code/TaleWorlds.Native/src")
    print("cp 05_networking.c 05_networking.c.backup")
    print()
    
    for addr, analysis in function_analysis.items():
        if analysis['suggested_name']:
            old_name = analysis['function_name']
            new_name = analysis['suggested_name']
            print(f"sed -i 's/{old_name}/{new_name}/g' 05_networking.c")
    
    print()
    print("echo '函数替换完成'")
    print("echo '请检查替换结果并编译测试'")

if __name__ == "__main__":
    analysis = analyze_networking_functions()
    generate_replacement_table(analysis)