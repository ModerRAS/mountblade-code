#!/usr/bin/env python3
"""
美化 06_utilities.c 文件中的类型定义和变量名
"""

import re
import sys

def beautify_utilities_file():
    """美化 utilities 文件"""
    input_file = "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
    
    # 读取文件内容
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 类型定义替换映射
    type_replacements = {
        'uint8_t8': 'UInt64',
        'longlong': 'Int64',
        'ulonglong': 'UInt64',
        'UInt8Type8': 'UInt64',
        'uint8_t4': 'UInt32',
        'uint8_t2': 'UInt16',
        'uint8_t1': 'UInt8',
        'int8_t8': 'Int64',
        'int8_t4': 'Int32',
        'int8_t2': 'Int16',
        'int8_t1': 'Int8',
    }
    
    # 变量名替换映射
    variable_replacements = {
        'SystemPerformanceCounterData': 'SystemPerformanceCounter',
        'SecurityAccessToken': 'SecurityToken',
        'SecurityEncryptionKey': 'EncryptionKey',
        'ObjectMetadataBuffer': 'MetadataBuffer',
        'CurrentObjectPointer': 'ObjectPointer',
        'ContextHandles': 'ContextHandleArray',
        'SystemObjectContext': 'SystemContext',
        'ObjectDataList': 'DataList',
        'ObjectCollectionArray': 'ObjectCollection',
        'ObjectOffset': 'CollectionOffset',
        'OperationStatus': 'Status',
        'ObjectValidationResult': 'ValidationResult',
        'ValidationStatus': 'ValidationState',
        'SystemObjectHandle': 'ObjectHandle',
    }
    
    # 应用类型替换
    for old_type, new_type in type_replacements.items():
        content = re.sub(r'\b' + re.escape(old_type) + r'\b', new_type, content)
    
    # 应用变量名替换
    for old_var, new_var in variable_replacements.items():
        content = re.sub(r'\b' + re.escape(old_var) + r'\b', new_var, content)
    
    # 写回文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("文件美化完成")

if __name__ == "__main__":
    beautify_utilities_file()