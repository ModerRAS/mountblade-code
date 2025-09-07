#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
最终变量名美化脚本
处理99_unmatched_functions.c文件中的所有剩余变量
"""

import re
import shutil
from datetime import datetime

def finalize_variable_processing():
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
    
    # 创建备份
    backup_file = f"{input_file}.final_backup.{datetime.now().strftime('%Y%m%d_%H%M%S')}"
    shutil.copy2(input_file, backup_file)
    print(f"已创建最终备份文件: {backup_file}")
    
    # 读取文件
    with open(input_file, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    
    print("开始处理剩余变量...")
    
    # 统计处理前的变量数量
    iVar_count = len(re.findall(r'\biVar[0-9]+\b', content))
    uVar_count = len(re.findall(r'\buVar[0-9]+\b', content))
    lStack_count = len(re.findall(r'\blStack_[0-9]+\b', content))
    
    print(f"处理前统计:")
    print(f"  iVar变量: {iVar_count} 个")
    print(f"  uVar变量: {uVar_count} 个")
    print(f"  lStack变量: {lStack_count} 个")
    
    # 处理所有iVar变量
    for i in range(1, 31):
        content = re.sub(rf'\biVar{i}\b', f'IntegerVariable_{i}', content)
    
    # 处理所有uVar变量
    for i in range(1, 31):
        content = re.sub(rf'\buVar{i}\b', f'UnsignedVariable_{i}', content)
    
    # 处理lStack变量
    content = re.sub(r'\blStack_([0-9]+)\b', r'LongStackValue_\1', content)
    
    # 处理其他Stack变量
    content = re.sub(r'\bpuStack_([0-9a-fA-F]+)\b', r'PointerStack_\1', content)
    content = re.sub(r'\buStack_([0-9a-fA-F]+)\b', r'UnsignedStack_\1', content)
    content = re.sub(r'\biStack_([0-9a-fA-F]+)\b', r'IntegerStack_\1', content)
    
    # 统计处理后的变量数量
    iVar_count_after = len(re.findall(r'\biVar[0-9]+\b', content))
    uVar_count_after = len(re.findall(r'\buVar[0-9]+\b', content))
    lStack_count_after = len(re.findall(r'\blStack_[0-9]+\b', content))
    
    print(f"处理后统计:")
    print(f"  剩余iVar变量: {iVar_count_after} 个")
    print(f"  剩余uVar变量: {uVar_count_after} 个")
    print(f"  剩余lStack变量: {lStack_count_after} 个")
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量名美化完成！")
    
    return {
        'iVar_processed': iVar_count - iVar_count_after,
        'uVar_processed': uVar_count - uVar_count_after,
        'lStack_processed': lStack_count - lStack_count_after
    }

if __name__ == "__main__":
    result = finalize_variable_processing()
    print(f"处理结果: {result}")