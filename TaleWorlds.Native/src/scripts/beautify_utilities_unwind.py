#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re
import sys

def process_utilities_file():
    """处理06_utilities.c文件中的Unwind函数重命名"""
    
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
    
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 统计替换次数
        replacements = 0
        
        # 函数定义模式
        function_pattern = r'void\s+(Unwind_[0-9a-fA-F]+)\s*\(([^)]*)\)\s*\{'
        
        def replace_function(match):
            nonlocal replacements
            original_name = match.group(1)
            params = match.group(2)
            
            # 基于参数生成有意义的函数名
            param_count = len([p.strip() for p in params.split(',') if p.strip()])
            
            # 根据参数类型和数量生成函数名
            if param_count == 2:
                new_name = "CleanupResourceContext"
            elif param_count == 4:
                new_name = "CleanupResourceWithOptions"
            elif "uint8_t ObjectContextParameter" in params and "int64_t ValidationContextParameter" in params:
                if "uint8_t CleanupOption" in params:
                    new_name = "ValidateAndCleanupResource"
                else:
                    new_name = "ValidateResourceContext"
            else:
                new_name = f"ProcessUnwindFunction_{original_name.split('_')[-1][:4]}"
            
            # 更新计数
            replacements += 1
            
            # 返回替换后的函数定义
            return f'void {new_name}({params})\n{{'
        
        # 执行替换
        new_content = re.sub(function_pattern, replace_function, content)
        
        # 同时替换函数调用
        call_pattern = r'([a-zA-Z_][a-zA-Z0-9_]*)\s*\(\s*([a-zA-Z_][a-zA-Z0-9_]*)\s*,\s*([a-zA-Z_][a-zA-Z0-9_]*)\s*(?:,\s*([a-zA-Z_][a-zA-Z0-9_]*)\s*,\s*([a-zA-Z_][a-zA-Z0-9_]*)\s*)?\)\s*;'
        
        def replace_call(match):
            # 这里可以根据上下文进行更复杂的替换逻辑
            return match.group(0)  # 暂时保持原样
        
        # 应用函数调用替换
        new_content = re.sub(call_pattern, replace_call, new_content)
        
        # 写回文件
        with open(input_file, 'w', encoding='utf-8') as f:
            f.write(new_content)
        
        print(f"处理完成，共替换了 {replacements} 个函数定义")
        
    except Exception as e:
        print(f"处理文件时出错: {e}")
        sys.exit(1)

if __name__ == "__main__":
    process_utilities_file()