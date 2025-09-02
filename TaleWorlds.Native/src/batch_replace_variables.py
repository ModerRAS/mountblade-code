#!/usr/bin/env python3
"""
批量替换02_core_engine.c中的变量名
"""

import re

# 定义变量名映射规则
variable_replacements = {
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
    'iVar13': 'ArrayIterationIndex',
    'iVar14': 'ArrayIndex',
    'iVar15': 'BufferPosition',
    'iVar16': 'DataSize',
    'iVar17': 'OperationResult',
    'iVar18': 'MemoryBlockIndex',
    'iVar19': 'ProcessState',
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
}

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 执行替换
for old_name, new_name in variable_replacements.items():
    # 使用正则表达式确保只替换完整的变量名
    pattern = r'\b' + re.escape(old_name) + r'\b'
    content = re.sub(pattern, new_name, content)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'w', encoding='utf-8') as f:
    f.write(content)

print("变量名替换完成！")