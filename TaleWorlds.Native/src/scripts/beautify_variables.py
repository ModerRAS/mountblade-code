#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
变量名美化处理脚本
处理99_unmatched_functions.c文件中的iVar, uVar, lStack等变量
"""

import re
import shutil
from datetime import datetime

def process_file():
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    
    # 创建备份
    backup_file = f"{input_file}.backup.{datetime.now().strftime('%Y%m%d_%H%M%S')}"
    shutil.copy2(input_file, backup_file)
    print(f"已创建备份文件: {backup_file}")
    
    # 读取文件
    with open(input_file, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    
    # 处理iVar变量
    print("处理iVar变量...")
    content = re.sub(r'\biVar1\b', 'IntegerVariable_1', content)
    content = re.sub(r'\biVar2\b', 'IntegerVariable_2', content)
    content = re.sub(r'\biVar3\b', 'IntegerVariable_3', content)
    content = re.sub(r'\biVar4\b', 'IntegerVariable_4', content)
    content = re.sub(r'\biVar5\b', 'IntegerVariable_5', content)
    content = re.sub(r'\biVar6\b', 'IntegerVariable_6', content)
    content = re.sub(r'\biVar7\b', 'IntegerVariable_7', content)
    content = re.sub(r'\biVar8\b', 'IntegerVariable_8', content)
    content = re.sub(r'\biVar9\b', 'IntegerVariable_9', content)
    content = re.sub(r'\biVar10\b', 'IntegerVariable_10', content)
    content = re.sub(r'\biVar11\b', 'IntegerVariable_11', content)
    content = re.sub(r'\biVar12\b', 'IntegerVariable_12', content)
    content = re.sub(r'\biVar13\b', 'IntegerVariable_13', content)
    content = re.sub(r'\biVar14\b', 'IntegerVariable_14', content)
    content = re.sub(r'\biVar15\b', 'IntegerVariable_15', content)
    content = re.sub(r'\biVar16\b', 'IntegerVariable_16', content)
    content = re.sub(r'\biVar17\b', 'IntegerVariable_17', content)
    content = re.sub(r'\biVar18\b', 'IntegerVariable_18', content)
    content = re.sub(r'\biVar19\b', 'IntegerVariable_19', content)
    content = re.sub(r'\biVar20\b', 'IntegerVariable_20', content)
    
    # 处理uVar变量
    print("处理uVar变量...")
    content = re.sub(r'\buVar1\b', 'UnsignedVariable_1', content)
    content = re.sub(r'\buVar2\b', 'UnsignedVariable_2', content)
    content = re.sub(r'\buVar3\b', 'UnsignedVariable_3', content)
    content = re.sub(r'\buVar4\b', 'UnsignedVariable_4', content)
    content = re.sub(r'\buVar5\b', 'UnsignedVariable_5', content)
    content = re.sub(r'\buVar6\b', 'UnsignedVariable_6', content)
    content = re.sub(r'\buVar7\b', 'UnsignedVariable_7', content)
    content = re.sub(r'\buVar8\b', 'UnsignedVariable_8', content)
    content = re.sub(r'\buVar9\b', 'UnsignedVariable_9', content)
    content = re.sub(r'\buVar10\b', 'UnsignedVariable_10', content)
    
    # 处理lStack变量
    print("处理lStack变量...")
    content = re.sub(r'\blStack_([0-9]+)\b', r'LongStackValue_\1', content)
    
    # 处理uStack变量
    print("处理uStack变量...")
    content = re.sub(r'\buStack_([0-9a-fA-F]+)\b', r'UnsignedStack_\1', content)
    
    # 处理iStack变量
    print("处理iStack变量...")
    content = re.sub(r'\biStack_([0-9a-fA-F]+)\b', r'IntegerStack_\1', content)
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量名美化完成！")

if __name__ == "__main__":
    process_file()