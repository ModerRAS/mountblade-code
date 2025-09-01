#!/usr/bin/env python3
"""
批量重命名局部变量为PascalCase格式
针对01_initialization.c文件中的局部变量进行美化
"""

import re

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_variables(content):
    """美化变量名为PascalCase格式"""
    
    # 定义需要替换的变量映射
    variable_replacements = {
        # 常见的小写变量名模式
        r'\blocalSystemHandle\b': 'LocalSystemHandle',
        r'\bmemoryComparisonResult\b': 'MemoryComparisonResult',
        r'\bmemoryCompareResult\b': 'MemoryCompareResult',
        r'\bisSystemNodeActive\b': 'IsSystemNodeActive',
        r'\bsystemNodeFlag\b': 'SystemNodeFlag',
        r'\bsystemInitializationFlag\b': 'SystemInitializationFlag',
        r'\bstatusFlag\b': 'StatusFlag',
        r'\bcomparisonResult\b': 'ComparisonResult',
        r'\binitializationStatus\b': 'InitializationStatus',
        r'\bprimaryResourcePointer\b': 'PrimaryResourcePointer',
        
        # 其他常见的小写变量名
        r'\blocalHandle\b': 'LocalHandle',
        r'\blocalPointer\b': 'LocalPointer',
        r'\blocalBuffer\b': 'LocalBuffer',
        r'\blocalData\b': 'LocalData',
        r'\blocalContext\b': 'LocalContext',
        r'\blocalConfig\b': 'LocalConfig',
        r'\blocalFlag\b': 'LocalFlag',
        r'\blocalStatus\b': 'LocalStatus',
        r'\blocalSize\b': 'LocalSize',
        r'\blocalOffset\b': 'LocalOffset',
        r'\blocalIndex\b': 'LocalIndex',
        r'\blocalCount\b': 'LocalCount',
        r'\blocalValue\b': 'LocalValue',
        r'\blocalResult\b': 'LocalResult',
        r'\btempHandle\b': 'TempHandle',
        r'\btempPointer\b': 'TempPointer',
        r'\btempBuffer\b': 'TempBuffer',
        r'\btempData\b': 'TempData',
        r'\btempContext\b': 'TempContext',
        r'\btempConfig\b': 'TempConfig',
        r'\btempFlag\b': 'TempFlag',
        r'\btempStatus\b': 'TempStatus',
        r'\btempSize\b': 'TempSize',
        r'\btempOffset\b': 'TempOffset',
        r'\btempIndex\b': 'TempIndex',
        r'\btempCount\b': 'TempCount',
        r'\btempValue\b': 'TempValue',
        r'\btempResult\b': 'TempResult',
        r'\bcurrentHandle\b': 'CurrentHandle',
        r'\bcurrentPointer\b': 'CurrentPointer',
        r'\bcurrentBuffer\b': 'CurrentBuffer',
        r'\bcurrentData\b': 'CurrentData',
        r'\bcurrentContext\b': 'CurrentContext',
        r'\bcurrentConfig\b': 'CurrentConfig',
        r'\bcurrentFlag\b': 'CurrentFlag',
        r'\bcurrentStatus\b': 'CurrentStatus',
        r'\bcurrentSize\b': 'CurrentSize',
        r'\bcurrentOffset\b': 'CurrentOffset',
        r'\bcurrentIndex\b': 'CurrentIndex',
        r'\bcurrentCount\b': 'CurrentCount',
        r'\bcurrentValue\b': 'CurrentValue',
        r'\bcurrentResult\b': 'CurrentResult',
    }
    
    # 应用替换
    for pattern, replacement in variable_replacements.items():
        content = re.sub(pattern, replacement, content)
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    print("正在读取文件...")
    content = read_file(file_path)
    
    print("正在美化变量名...")
    beautified_content = beautify_variables(content)
    
    print("正在写入文件...")
    write_file(file_path, beautified_content)
    
    print("变量美化完成！")

if __name__ == '__main__':
    main()