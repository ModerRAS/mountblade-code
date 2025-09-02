#!/usr/bin/env python3
"""
核心引擎变量美化脚本
用于美化02_core_engine.c文件中的变量名
"""

import re

def beautify_core_engine_variables():
    """美化核心引擎文件中的变量名"""
    
    # 读取文件
    with open('02_core_engine.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 变量名替换映射
    variable_map = {
        'uVar6': 'DataSize',
        'uVar8': 'DataPointer',
        'iVar1': 'IntegerValue',
        'iVar9': 'LoopCounter',
        'iVar13': 'IterationIndex',
        'iVar15': 'SecondaryIndex',
        'lVar9': 'LongValue',
        'bVar3': 'BooleanFlag',
        'uStack_e0': 'StackDataSize',
        'uStack_1a0': 'StackAllocationSize',
        'uStack_1f8': 'StackOperationFlag',
        'uStack_d0': 'StackSourceData',
        'uStack_60': 'StackSourceDataCopy',
        'uStack_d8': 'StackPadding1',
        'lStack_e8': 'StackPointer',
        'uStack_68': 'StackAlignment1',
        'uStack_48': 'StackAlignment2',
        'uStack_c0': 'StackBufferSize',
        'uStack_b0': 'StackBufferOffset',
        'iStack_f8': 'StackLoopCounter',
        'puStack_f0': 'StackEventPointer',
        'puStack_1b0': 'StackBufferPointer',
        'puStack_1a8': 'StackDataPointer',
        'LongVariable1': 'SystemLongValue',
        'IntegerVariable4': 'BufferSize',
        'IntegerVariable6': 'ComparisonResult',
        'UnsignedVariable3': 'ProcessId',
        'UnsignedValue': 'MemoryStatus',
        'SystemLongVariable10': 'StringLength',
        'SystemLongVariable12': 'SystemOffset',
        'ReturnValue1': 'AllocationResult',
        'StackVariable198': 'MemoryInfo',
        'MemoryOffsetValue': 'DataOffset',
        'TempBuffer': 'TemporaryBuffer',
        'tertiaryDataPointer': 'DataBufferPointer',
        'bufferAllocationStatus': 'AllocationStatus',
        'SystemDataBufferPointer': 'SystemBufferPointer'
    }
    
    # 应用替换
    for old_name, new_name in variable_map.items():
        # 使用单词边界确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 写入文件
    with open('02_core_engine.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print('变量名美化完成')

if __name__ == '__main__':
    beautify_core_engine_variables()