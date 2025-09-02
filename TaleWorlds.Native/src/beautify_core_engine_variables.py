#!/usr/bin/env python3
"""
美化02_core_engine.c文件中的变量名
将类似于iVar1、uVar2等变量名替换为有意义的名称
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_variables(content):
    """美化变量名"""
    # 定义变量名映射
    variable_mappings = {
        # iVar系列 - 整数变量
        'iVar1': 'MutexOwnershipResult',
        'iVar2': 'ConditionWaitResult',
        'iVar3': 'StringLength',
        'iVar4': 'CharacterIndex',
        'iVar5': 'StringCompareResult',
        'iVar6': 'MemoryAllocationResult',
        'iVar7': 'OperationStatus',
        'iVar8': 'ValidationResult',
        'iVar9': 'ProcessCounter',
        'iVar10': 'SystemState',
        'iVar11': 'ErrorCode',
        'iVar12': 'ReturnValue',
        'iVar13': 'LoopCounter',
        'iVar14': 'ArrayIndex',
        'iVar15': 'BufferPosition',
        'iVar16': 'DataSize',
        'iVar17': 'ConfigurationEntryCounter',
        'iVar18': 'MemoryBlockIndex',
        'iVar19': 'ProcessStatus',
        'iVar20': 'ResourceCount',
        
        # uVar系列 - 无符号整数变量
        'uVar1': 'UnsignedParameter',
        'uVar2': 'UnsignedResult',
        'uVar3': 'UnsignedPointer',
        'uVar4': 'UnsignedValue',
        'uVar5': 'UnsignedCounter',
        'uVar6': 'UnsignedLoopControl',
        'uVar7': 'UnsignedBufferSize',
        'uVar8': 'UnsignedMemorySize',
        'uVar9': 'UnsignedDataLength',
        'uVar10': 'UnsignedProcessId',
        
        # 更高位数的变量
        'iVar11': 'SystemContextPointer',
        'iVar12': 'MemoryBlockSize',
        'iVar13': 'ArrayIterationIndex',
        'iVar14': 'ValidationFlag',
        'iVar15': 'OperationResult',
        'iVar16': 'DataBufferPointer',
        'iVar17': 'ConfigurationEntryCounter',
        'iVar18': 'MemoryAllocationIndex',
        'iVar19': 'ProcessState',
        'iVar20': 'ResourceHandle',
    }
    
    # 应用变量名替换
    for old_name, new_name in variable_mappings.items():
        # 使用正则表达式确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c'
    
    print("正在读取文件...")
    content = read_file(file_path)
    
    print("正在美化变量名...")
    beautified_content = beautify_variables(content)
    
    print("正在写入文件...")
    write_file(file_path, beautified_content)
    
    print("变量名美化完成！")

if __name__ == '__main__':
    main()