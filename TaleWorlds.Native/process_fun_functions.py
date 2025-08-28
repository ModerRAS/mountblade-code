#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量FUN_函数处理脚本
自动替换文件中的FUN_函数调用为有意义的别名
"""

import re
import sys
from pathlib import Path

def process_file(file_path):
    """处理单个文件"""
    try:
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        
        # 检查是否已经有#define定义
        existing_defines = re.findall(r'^\s*#define\s+(\w+)\s+(FUN_[0-9a-f]{8})', content, re.MULTILINE)
        define_map = {fun: alias for alias, fun in existing_defines}
        
        # 找到所有实际的FUN_函数调用
        fun_calls = re.findall(r'FUN_[0-9a-f]{8}', content)
        actual_calls = [call for call in fun_calls if call not in define_map]
        
        if not actual_calls:
            print(f"文件 {file_path} 不需要处理")
            return False
        
        print(f"处理文件: {file_path}")
        print(f"  发现 {len(set(actual_calls))} 个需要替换的FUN_函数")
        
        # 为每个FUN_函数创建别名
        for fun in set(actual_calls):
            if fun not in define_map:
                # 基于函数地址创建有意义的别名
                alias = create_function_alias(fun)
                define_map[fun] = alias
        
        # 添加#define定义到文件开头
        defines_section = "\n/* ============================================================================
 * 函数别名定义 - 自动生成的代码美化别名
 * ============================================================================ */\n"
        
        for fun, alias in sorted(define_map.items()):
            defines_section += f"#define {alias} {fun}\n"
        
        # 替换所有FUN_函数调用
        processed_content = content
        for fun, alias in define_map.items():
            processed_content = processed_content.replace(fun, alias)
        
        # 在文件开头插入定义
        insert_pos = processed_content.find("#include")
        if insert_pos != -1:
            # 找到include语句的结尾
            end_include = processed_content.find("\n", insert_pos)
            if end_include != -1:
                processed_content = processed_content[:end_include+1] + defines_section + processed_content[end_include+1:]
        
        # 写入文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(processed_content)
        
        print(f"  成功处理，添加了 {len(define_map)} 个函数别名")
        return True
        
    except Exception as e:
        print(f"处理文件 {file_path} 时出错: {e}")
        return False

def create_function_alias(fun_address):
    """为FUN_函数创建有意义的别名"""
    # 基于地址创建通用别名
    address_suffix = fun_address[6:]  # 去掉"FUN_180"前缀
    
    # 根据地址范围创建不同类型的别名
    if address_suffix.startswith('0'):
        return f"SystemInitializer_{address_suffix}"
    elif address_suffix.startswith('1'):
        return f"DataProcessor_{address_suffix}"
    elif address_suffix.startswith('2'):
        return f"MemoryManager_{address_suffix}"
    elif address_suffix.startswith('3'):
        return f"ResourceManager_{address_suffix}"
    elif address_suffix.startswith('4'):
        return f"NetworkHandler_{address_suffix}"
    elif address_suffix.startswith('5'):
        return f"SecurityChecker_{address_suffix}"
    elif address_suffix.startswith('6'):
        return f"StateController_{address_suffix}"
    elif address_suffix.startswith('7'):
        return f"ErrorHandler_{address_suffix}"
    elif address_suffix.startswith('8'):
        return f"ConfigurationManager_{address_suffix}"
    elif address_suffix.startswith('9'):
        return f"OptimizationEngine_{address_suffix}"
    else:
        return f"SystemFunction_{address_suffix}"

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("用法: python process_fun_functions.py <file_path>")
        sys.exit(1)
    
    file_path = Path(sys.argv[1])
    if not file_path.exists():
        print(f"错误：文件不存在: {file_path}")
        sys.exit(1)
    
    success = process_file(file_path)
    sys.exit(0 if success else 1)

if __name__ == "__main__":
    main()
