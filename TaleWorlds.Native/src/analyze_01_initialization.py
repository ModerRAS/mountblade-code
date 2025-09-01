#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
分析01_initialization.c文件中的FUN_函数
识别需要重命名和美化的函数
"""

import re
import os
from collections import defaultdict

def analyze_initialization_file():
    """分析01_initialization.c文件"""
    file_path = "TaleWorlds.Native/src/01_initialization.c"
    
    if not os.path.exists(file_path):
        print(f"文件不存在: {file_path}")
        return
    
    with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    
    # 统计FUN_函数出现次数
    fun_pattern = r'FUN_[0-9a-f]{8}'
    fun_matches = re.findall(fun_pattern, content)
    fun_counts = defaultdict(int)
    
    for fun in fun_matches:
        fun_counts[fun] += 1
    
    # 按出现频率排序
    sorted_funs = sorted(fun_counts.items(), key=lambda x: x[1], reverse=True)
    
    print("=== 01_initialization.c 文件分析报告 ===")
    print(f"文件大小: {len(content)} 字符")
    print(f"FUN_函数总出现次数: {len(fun_matches)}")
    print(f"不同的FUN_函数数量: {len(fun_counts)}")
    print()
    
    print("=== 出现频率最高的FUN_函数 (前20个) ===")
    for i, (fun_name, count) in enumerate(sorted_funs[:20]):
        print(f"{i+1:2d}. {fun_name}: {count} 次")
    
    print()
    
    # 分析函数调用模式
    print("=== 函数调用模式分析 ===")
    
    # 查找函数调用模式
    call_patterns = [
        (r'FUN_[0-9a-f]{8}\s*\([^)]*\);', '直接调用'),
        (r'\w+\s*=\s*FUN_[0-9a-f]{8}\s*\([^)]*\);', '赋值调用'),
        (r'if\s*\([^)]*FUN_[0-9a-f]{8}[^)]*\)', '条件判断'),
        (r'return\s+FUN_[0-9a-f]{8}\s*\([^)]*\);', '返回调用'),
        (r'RegisterSystemCallback\([^)]*FUN_[0-9a-f]{8}[^)]*\)', '回调注册'),
    ]
    
    for pattern, desc in call_patterns:
        matches = re.findall(pattern, content)
        if matches:
            print(f"{desc}: {len(matches)} 次")
    
    print()
    
    # 查找可能已经定义的函数
    print("=== 已定义的函数示例 ===")
    defined_pattern = r'^\s*(?:void|int|long|char|bool|\w+\s*\*)\s+(\w+)\s*\([^)]*\)\s*\{'
    defined_functions = re.findall(defined_pattern, content, re.MULTILINE)
    
    for i, func in enumerate(defined_functions[:10]):
        print(f"{i+1}. {func}")
    
    if len(defined_functions) > 10:
        print(f"... 还有 {len(defined_functions) - 10} 个已定义函数")
    
    print()
    
    # 生成重命名建议
    print("=== 重命名建议 ===")
    
    # 根据调用频率和模式给出重命名建议
    rename_suggestions = []
    
    for fun_name, count in sorted_funs[:10]:
        if count > 10:
            # 高频函数可能是核心功能
            suggestion = f"{fun_name} -> {get_function_suggestion(fun_name, count)}"
            rename_suggestions.append(suggestion)
    
    for suggestion in rename_suggestions:
        print(suggestion)
    
    # 生成批量重命名脚本
    print()
    print("=== 批量重命名脚本生成 ===")
    
    script_content = generate_rename_script(sorted_funs[:20])
    print(script_content)

def get_function_suggestion(fun_name, count):
    """根据函数名和调用频率生成命名建议"""
    
    # 根据地址后缀推断功能
    address_suffix = fun_name[9:]
    
    if count > 100:
        return "HighFrequencySystemFunction"
    elif count > 50:
        return "CoreSystemHandler"
    elif count > 20:
        return "SystemOperationFunction"
    elif "00" in address_suffix[:2]:
        return "SystemInitializationFunction"
    elif "20" in address_suffix[:2]:
        return "MemoryManagementFunction"
    elif "40" in address_suffix[:2]:
        return "DataProcessingFunction"
    elif "60" in address_suffix[:2]:
        return "SystemConfigurationFunction"
    elif "80" in address_suffix[:2]:
        return "ResourceManagementFunction"
    elif "a0" in address_suffix[:2]:
        return "NetworkOperationFunction"
    elif "c0" in address_suffix[:2]:
        return "ValidationFunction"
    elif "e0" in address_suffix[:2]:
        return "CleanupFunction"
    else:
        return f"SystemFunction_{address_suffix[:4]}"

def generate_rename_script(top_functions):
    """生成批量重命名脚本"""
    
    script = """#!/bin/bash
# 01_initialization.c 文件 FUN_函数重命名脚本

echo "开始重命名 01_initialization.c 中的 FUN_ 函数..."

"""
    
    for fun_name, count in top_functions:
        suggestion = get_function_suggestion(fun_name, count)
        script += f"# {fun_name} (出现 {count} 次) -> {suggestion}\n"
        script += f'sed -i "s/{fun_name}/{suggestion}/g" TaleWorlds.Native/src/01_initialization.c\n'
        script += f'echo "已重命名: {fun_name} -> {suggestion}"\n'
        script += "\n"
    
    script += """
echo "FUN_函数重命名完成！"
echo "请检查代码并测试功能是否正常。"
"""
    
    return script

if __name__ == "__main__":
    analyze_initialization_file()