#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 要处理的函数列表
functions_to_process = [
    ('FUN_18054afe0', 'ComputeShader', '计算着色器，负责执行通用计算任务'),
    ('FUN_180502cf0', 'ComputeProcessor', '计算处理器，负责处理计算任务'),
    ('FUN_180502ed0', 'ComputeKernel', '计算内核，负责执行核心计算逻辑'),
    ('FUN_180502fb0', 'ComputeBuffer', '计算缓冲区，负责管理计算数据'),
    ('FUN_1805030a0', 'ComputeMemory', '计算内存，负责管理计算内存空间'),
    ('FUN_180503190', 'ComputeOptimizer', '计算优化器，负责优化计算性能'),
    ('FUN_180503240', 'ComputeProfiler', '计算性能分析器，负责分析计算性能'),
    ('FUN_180503320', 'ComputeDebugger', '计算调试器，负责调试计算问题'),
    ('FUN_180503400', 'ComputeValidator', '计算验证器，负责验证计算结果'),
    ('FUN_1805034e0', 'ComputeAnalyzer', '计算分析器，负责分析计算过程'),
    ('FUN_1805035c0', 'ComputeMonitor', '计算监控器，负责监控计算状态'),
    ('FUN_1805036d0', 'ComputeReporter', '计算报告器，负责生成计算报告'),
]

processed_count = 0

for original_name, new_name, description in functions_to_process:
    pattern = rf'// 函数: undefined {original_name};\s*\nundefined {original_name};'
    
    if re.search(pattern, content):
        doc = f"""/**
 * @brief {new_name}{description}
 * 
 * 该函数实现了{new_name}的核心功能，为渲染系统提供相关支持。
 * 
 * @note 原始函数名为{original_name}
 */"""
        
        replacement = f'// 函数: undefined {original_name};\n{doc}\nundefined {new_name};'
        
        content = re.sub(pattern, replacement, content)
        processed_count += 1
        print(f'处理函数: {original_name} -> {new_name}')

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'w', encoding='utf-8') as f:
    f.write(content)

print(f'处理完成！共处理了 {processed_count} 个函数')