#!/usr/bin/env python3
"""
批量美化02_core_engine.c文件中的变量名和函数名
"""

import re
import sys

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_variables(content):
    """美化变量名"""
    replacements = {
        # 浮点变量
        r'\bfVar([0-9]+)\b': r'FloatVariable\1',
        r'\bfStack_([0-9a-fA-F]+)\b': r'StackFloat\1',
        r'\bfStackX_([0-9a-fA-F]+)\b': r'StackFloatX\1',
        
        # 长整型变量
        r'\blVar([0-9]+)\b': r'LongVariable\1',
        r'\blStack_([0-9a-fA-F]+)\b': r'StackLong\1',
        r'\blStackX_([0-9a-fA-F]+)\b': r'StackLongX\1',
        
        # 无符号变量
        r'\buVar([0-9]+)\b': r'UnsignedVariable\1',
        r'\buStack_([0-9a-fA-F]+)\b': r'StackUnsigned\1',
        r'\buStackX_([0-9a-fA-F]+)\b': r'StackUnsignedX\1',
        
        # 布尔变量
        r'\bbVar([0-9]+)\b': r'BooleanVariable\1',
        
        # 字符变量
        r'\bcVar([0-9]+)\b': r'CharacterVariable\1',
        r'\bcStack_([0-9a-fA-F]+)\b': r'StackChar\1',
        r'\bcStackX_([0-9a-fA-F]+)\b': r'StackCharX\1',
        
        # 整型变量
        r'\biVar([0-9]+)\b': r'IntegerVariable\1',
        
        # 指针变量
        r'\bpiVar([0-9]+)\b': r'PointerToInteger\1',
        r'\bplVar([0-9]+)\b': r'PointerToLong\1',
        r'\bpuVar([0-9]+)\b': r'PointerToUnsigned\1',
        r'\bppplVar([0-9]+)\b': r'PointerToPointerToPointerToLong\1',
        
        # 长长整型变量
        r'\bLongVariable([0-9]+)\b': r'LongLongVariable\1',
        r'\bpLongVariable([0-9]+)\b': r'PointerToLong\1',
        
        # 数据指针
        r'\bprimaryDataPointer([0-9]*)\b': r'PrimaryDataPointer\1',
        r'\bsecondaryDataPointer([0-9]*)\b': r'SecondaryDataPointer\1',
        r'\btertiaryDataPointer([0-9]*)\b': r'TertiaryDataPointer\1',
        r'\bDataBuffer([0-9]+)\b': r'DataBuffer\1',
        
        # 系统变量
        r'\bunaff_R([A-Z0-9]+)\b': r'UnaffectedRegister\1',
        r'\bThreadLocalStorageData\b': r'ThreadLocalStoragePointer',
        r'\bExceptionList\b': r'ExceptionHandlingList',
        
        # 临时变量
        r'\bTempBuffer\b': r'TemporaryBuffer',
        r'\bstatusFlag([0-9]+)\b': r'StatusFlag\1',
        r'\bpstatusFlag([0-9]+)\b': r'PointerToStatusFlag\1',
        r'\bSystemConfigData([A-Z])\b': r'SystemConfigurationData\1',
        r'\bin_SF\b': r'StatusFlag',
        r'\bFloatVariable([0-9]+)\b': r'EngineParameter\1',
    }
    
    for pattern, replacement in replacements.items():
        content = re.sub(pattern, replacement, content)
    
    return content

def beautify_functions(content):
    """美化函数名"""
    replacements = {
        r'\bFUN_([0-9a-fA-F]+)\b': r'CoreEngineFunction_\1',
        r'\bfunc_0x([0-9a-fA-F]+)\b': r'CoreEngineFunction_\1',
        r'\b__Throw_C_error_std__YAXH_Z\b': r'TrowCErrorStd',
    }
    
    for pattern, replacement in replacements.items():
        content = re.sub(pattern, replacement, content)
    
    return content

def beautify_data_references(content):
    """美化数据引用"""
    replacements = {
        r'\b_DAT_([0-9a-fA-F]+)\b': r'DataReference_\1',
        r'\b_invalid_parameter_noinfo_noreturn\b': r'InvalidParameterNoInfoNoReturn',
    }
    
    for pattern, replacement in replacements.items():
        content = re.sub(pattern, replacement, content)
    
    return content

def main():
    if len(sys.argv) != 2:
        print("Usage: python beautify_core_engine.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    print(f"Reading file: {file_path}")
    
    content = read_file(file_path)
    print(f"File size: {len(content)} characters")
    
    print("Beautifying variables...")
    content = beautify_variables(content)
    
    print("Beautifying functions...")
    content = beautify_functions(content)
    
    print("Beautifying data references...")
    content = beautify_data_references(content)
    
    write_file(file_path, content)
    print("Beautification completed!")

if __name__ == "__main__":
    main()