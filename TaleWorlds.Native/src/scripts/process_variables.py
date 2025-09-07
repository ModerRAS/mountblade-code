#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
美化99_unmatched_functions.c文件中的变量名
作者: Claude Code
日期: 2025-09-07
"""

import re
import os
import shutil
from datetime import datetime

def process_variables():
    """处理变量名美化"""
    
    # 文件路径
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    backup_file = f"{input_file}.backup.{datetime.now().strftime('%Y%m%d_%H%M%S')}"
    
    # 创建备份
    shutil.copy2(input_file, backup_file)
    print(f"已创建备份文件: {backup_file}")
    
    # 读取文件内容
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量替换规则
    variable_rules = [
        # iVar变量
        (r'\biVar1\b', 'IntegerVariable_1'),
        (r'\biVar2\b', 'IntegerVariable_2'),
        (r'\biVar3\b', 'IntegerVariable_3'),
        (r'\biVar4\b', 'IntegerVariable_4'),
        (r'\biVar5\b', 'IntegerVariable_5'),
        (r'\biVar6\b', 'IntegerVariable_6'),
        (r'\biVar7\b', 'IntegerVariable_7'),
        (r'\biVar8\b', 'IntegerVariable_8'),
        (r'\biVar9\b', 'IntegerVariable_9'),
        (r'\biVar10\b', 'IntegerVariable_10'),
        (r'\biVar11\b', 'IntegerVariable_11'),
        (r'\biVar12\b', 'IntegerVariable_12'),
        (r'\biVar13\b', 'IntegerVariable_13'),
        (r'\biVar14\b', 'IntegerVariable_14'),
        (r'\biVar15\b', 'IntegerVariable_15'),
        (r'\biVar16\b', 'IntegerVariable_16'),
        (r'\biVar17\b', 'IntegerVariable_17'),
        (r'\biVar18\b', 'IntegerVariable_18'),
        (r'\biVar19\b', 'IntegerVariable_19'),
        (r'\biVar20\b', 'IntegerVariable_20'),
        
        # uVar变量
        (r'\buVar1\b', 'UnsignedVariable_1'),
        (r'\buVar2\b', 'UnsignedVariable_2'),
        (r'\buVar3\b', 'UnsignedVariable_3'),
        (r'\buVar4\b', 'UnsignedVariable_4'),
        (r'\buVar5\b', 'UnsignedVariable_5'),
        (r'\buVar6\b', 'UnsignedVariable_6'),
        (r'\buVar7\b', 'UnsignedVariable_7'),
        (r'\buVar8\b', 'UnsignedVariable_8'),
        (r'\buVar9\b', 'UnsignedVariable_9'),
        (r'\buVar10\b', 'UnsignedVariable_10'),
        
        # piVar变量
        (r'\bpiVar1\b', 'PointerInteger_1'),
        (r'\bpiVar2\b', 'PointerInteger_2'),
        (r'\bpiVar3\b', 'PointerInteger_3'),
        
        # lStack变量
        (r'\blStack_([0-9]+)\b', r'LongStackValue_\1'),
        
        # puStack变量
        (r'\bpuStack_([0-9a-fA-F]+)\b', r'PointerStack_\1'),
        
        # uStack变量
        (r'\buStack_([0-9a-fA-F]+)\b', r'UnsignedStack_\1'),
        
        # iStack变量
        (r'\biStack_([0-9a-fA-F]+)\b', r'IntegerStack_\1'),
    ]
    
    # 应用替换规则
    original_content = content
    for pattern, replacement in variable_rules:
        content = re.sub(pattern, replacement, content)
    
    # 统计替换数量
    total_replacements = 0
    for pattern, replacement in variable_rules:
        matches = re.findall(pattern, original_content)
        total_replacements += len(matches)
        if matches:
            print(f"替换 {pattern} -> {replacement}: {len(matches)} 处")
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"\n变量名美化完成！")
    print(f"总共替换了 {total_replacements} 处变量名")
    print(f"处理后的文件: {input_file}")
    print(f"备份文件: {backup_file}")

if __name__ == "__main__":
    process_variables()