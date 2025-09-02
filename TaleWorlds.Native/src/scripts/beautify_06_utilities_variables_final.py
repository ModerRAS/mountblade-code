#!/usr/bin/env python3
"""
美化06_utilities.c文件中的变量名
将通用变量名替换为更具语义的名称
"""

import re
import os

def beautify_utilities_variables():
    """美化utilities文件中的变量名"""
    
    # 读取文件
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义变量名替换映射
    variable_replacements = {
        'loopCounter': 'ResourceCleanupIterator',
        'TaskInputParameter': 'SystemTaskContext',
        'TaskLoopCounter': 'TaskIterationCounter',
        'StackMemoryOffset': 'MemoryStackPointer',
        'StackOffset': 'StackDataPointer',
        'StackLocation': 'StackMemoryLocation',
        'StackPointer': 'StackMemoryPointer',
        'StackParameterBuffer': 'ParameterStackBuffer',
        'StackBuffer': 'StackDataBuffer',
        'StackContextPointer': 'ContextStackPointer',
        'UnaffectedRegisterValue': 'RegisterContextValue',
        'ResourceValidationStackBuffer': 'ValidationResourceStack',
        'ValidationStackBuffer': 'StackValidationBuffer',
        'ResourceValidationBuffer': 'ValidationResourceBuffer',
        'RetrievedObjectDataBuffer': 'RetrievedDataBuffer',
        'SystemObjectDataBuffer': 'ObjectSystemDataBuffer',
        'StackParameterContext': 'ParameterContextBuffer',
        'StackParameter': 'StackParameterVariable',
        'StackParameterContextSixty': 'ParameterContextSixty',
        'StackParameterContextExtended': 'ParameterContextExtended',
        'StackParameterPointer': 'ParameterPointer',
        'StackParameterFloat': 'ParameterFloatValue',
        'StackParameterFlags': 'ParameterFlags',
        'StackParameterOffset': 'ParameterOffset',
        'StackParameterCalculation': 'ParameterCalculation',
        'StackParameterResult': 'ParameterResult',
        'StackParameterPrimary': 'ParameterPrimary',
        'StackParameterSecondary': 'ParameterSecondary',
        'StackParameterFinal': 'ParameterFinal',
        'StackParameterValidationCode': 'ParameterValidationCode',
        'StackParameterSecurityCode': 'ParameterSecurityCode',
        'StackParameterContextExtended': 'ParameterContextExtended',
        'StackTransformParameter': 'TransformParameter',
        'StackParameter50': 'Parameter50',
        'SecondaryStackParameter': 'SecondaryParameter',
        'PointerStackValue8': 'StackValue8',
        'StackParameter220': 'Parameter220',
        'StackRegisterStorage': 'RegisterStorage',
        'StackParameterContextForty': 'ParameterContextForty'
    }
    
    # 执行替换
    for old_name, new_name in variable_replacements.items():
        # 使用正则表达式确保只替换变量声明和使用
        # 匹配变量声明
        pattern = r'\b(int64_t|uint64_t|int32_t|uint32_t|int16_t|uint16_t|int8_t|uint8_t|void\*|float|double|char|uint|int)\s+' + re.escape(old_name) + r'\b'
        replacement = r'\1 ' + new_name
        content = re.sub(pattern, replacement, content)
        
        # 匹配变量使用（但不要替换函数名中的部分）
        pattern = r'(?<!\w)' + re.escape(old_name) + r'(?!\w)'
        content = re.sub(pattern, new_name, content)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量名美化完成")

if __name__ == "__main__":
    beautify_utilities_variables()