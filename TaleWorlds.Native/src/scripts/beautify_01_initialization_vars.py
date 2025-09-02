#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
美化01_initialization.c文件中的变量名
"""

import re
import sys

def beautify_variables(content):
    """美化变量名"""
    
    # 变量名映射表
    variable_mappings = {
        # 系统值变量
        'unsignedSystemValue8': 'MemoryPoolOffset',
        'unsignedSystemValue7': 'SystemConfigurationFlag',
        'unsignedSystemValue9': 'SystemOperationCounter',
        'SystemOperationStatus6': 'SystemOperationResult',
        'SystemOperationStatus7': 'SystemOperationSecondaryResult',
        'SystemOperationStatus9': 'SystemOperationTertiaryResult',
        
        # 指针变量
        'pointerUnsigned30': 'SystemDataPointer',
        'pointerUnsigned38': 'SystemResourcePointer',
        'pointerUnsigned268': 'SystemContextPointer',
        'pointerUnsigned258': 'SystemBufferPointer',
        'pointerUnsigned238': 'SystemMemoryPointer',
        'pointerUnsigned1b8': 'SystemAllocationPointer',
        'pointerUnsigned1b0': 'SystemReferencePointer',
        'pointerUnsigned190': 'SystemHandlePointer',
        
        # 栈变量
        'punsignedSystemValue9': 'SystemDataReference',
        'ppppunsignedSystemValue9': 'SystemDataTablePointer',
        'pUnsignedStackFlagC0': 'SystemStackFlagPointer',
        
        # 临时变量
        'charValue': 'ValidationResult',
        'charValue338': 'StringTerminator',
        'systemValue': 'CalculatedSystemValue',
        
        # 其他变量
        'localDataIndex': 'DataIndex',
        'localSystemHandle': 'SystemHandle',
        'localSystemFlags': 'SystemFlags',
        'localSystemPointer': 'SystemContextData',
        'encryptionPointerTripleX': 'EncryptionContext',
        'ppSystemDataPointer': 'SystemDataArrayPointer',
        'pppEncryptionValue68': 'EncryptionDataArray',
        'systemMemoryContext': 'SystemMemoryContext',
        'processFlags58': 'ProcessConfigurationFlags',
        'processFlags70': 'ProcessExecutionFlags',
        'UnsignedStackFlag88': 'StackFlag88',
        'UnsignedStackFlag80': 'StackFlag80',
        'UnsignedStackFlag78': 'StackFlag78',
        
        # 系统相关变量
        'aunsignedValue20': 'SystemValue20',
        'aunsignedValue30': 'SystemValue30',
        'unsignedValue20': 'SystemLimit20',
    }
    
    # 应用变量名替换
    for old_name, new_name in variable_mappings.items():
        # 使用词边界确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def main():
    """主函数"""
    input_file = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 执行变量美化
        beautified_content = beautify_variables(content)
        
        # 写回文件
        with open(input_file, 'w', encoding='utf-8') as f:
            f.write(beautified_content)
        
        print("变量名美化完成")
        
    except Exception as e:
        print(f"处理文件时出错: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()