#!/usr/bin/env python3
"""
美化01_initialization.c文件中的变量名和函数名
"""

import re
import sys

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_functions(content):
    """美化函数名"""
    # 函数映射表
    function_map = {
        'FUN_18004b1f0': 'InitializeSystemResourceValidation',
        'FUN_18004b820': 'GetSystemResourcePointer',
        'FUN_18004b920': 'GetSystemResourceSecondaryPointer',
        'FUN_18004b960': 'GetSystemResourceTertiaryPointer',
        'FUN_18004c050': 'GetSystemResourceQuaternaryPointer',
        'FUN_18004c480': 'GetSystemResourceQuinaryPointer',
        'FUN_18004ca00': 'CleanupSystemResource',
        'FUN_18004caa0': 'InitializeSystemResourcePointer',
        'FUN_18004cc20': 'ReleaseSystemResource',
        'FUN_18004d020': 'ProcessSystemResourceOperation',
        'FUN_1800ba940': 'InitializeStackPointer',
        'FUN_1806277c0': 'ProcessStackOperation',
        'FUN_18062dee0': 'ConfigureSystemTemplate',
        'FUN_1800ae730': 'ProcessPrimaryResource',
        'FUN_1800aecf0': 'InitializeSystemNode',
        'FUN_18004a500': 'GetSystemStatus',
        'FUN_18004b730': 'InitializeSystemInput',
        'FUN_1800b4550': 'ProcessInputManager',
        'FUN_18004b790': 'InitializeSystemContext',
        'FUN_180057010': 'ProcessMemoryOperation',
        'FUN_180058370': 'ProcessBlockCleanup',
        'FUN_180058420': 'ProcessMemoryRegionOperation',
        'FUN_18004bd10': 'GetSystemResourcePrimaryPointer',
        'FUN_18004bb60': 'CleanupSystemResourcePointer',
        'FUN_18004bb90': 'ProcessSystemResourceData',
        'FUN_18004bcb0': 'ProcessSystemMemoryRegion',
        'FUN_18004bce0': 'ProcessSystemMemoryContext',
        'FUN_180049010': 'ProcessSystemResourceAllocation',
        'FUN_1800491b0': 'InitializeSystemResourceData',
        'FUN_1800499c0': 'ProcessSystemResourceConfiguration',
        'FUN_180049b30': 'ConfigureSystemResourceParameters',
        'FUN_1800ba6f0': 'CleanupSystemOperations',
        'FUN_180627910': 'ProcessSystemNodeOperation',
        'FUN_18062de90': 'ReleaseSystemMemory',
        'FUN_180060a50': 'GetSystemMemoryStatus',
        'FUN_180085900': 'GetSystemMemoryPointer',
        'FUN_18005ff50': 'GetSystemResourceOffset',
        'FUN_1808fcb90': 'ProcessSystemDataAccess',
    }
    
    # 替换函数名
    for old_name, new_name in function_map.items():
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    return content

def beautify_variables(content):
    """美化变量名"""
    # 变量映射表
    variable_map = {
        'cVar1': 'statusFlag',
        'cVar2': 'systemStatusFlag',
        'iVar1': 'threadId',
        'iVar5': 'stackOffset',
        'param_1': 'systemParameter',
        'param_2': 'resourceParameter',
        'param_3': 'operationParameter',
        'param_4': 'configurationParameter',
        'uVar1': 'unsignedValue',
        'uVar2': 'unsignedCounter',
        'local_': 'local',
        'puStack_': 'stackPointer',
        'uStack_': 'stackData',
        'lStack_': 'stackLong',
        'punsigned': 'pointerUnsigned',
        'pointerToUnsigned': 'unsignedPointer',
        'unsignedSystemValue': 'systemValue',
        'PrimaryResourcePointer': 'primaryResourcePointer',
        'SystemResourcePointer': 'systemResourcePointer',
        'SystemNodeManagerPointer': 'systemNodeManagerPointer',
        'SystemStatusFlagsPointer': 'systemStatusFlagsPointer',
        'SystemStringTemplate': 'systemStringTemplate',
        'SystemConfigurationDataTemplate': 'systemConfigurationDataTemplate',
        'SystemGlobalDataReference': 'systemGlobalDataReference',
        'SystemReferenceCounterStorage': 'systemReferenceCounterStorage',
        'SystemAllocationFlagsTemplate': 'systemAllocationFlagsTemplate',
        'SystemVersionCheckStorage': 'systemVersionCheckStorage',
    }
    
    # 替换变量名
    for old_name, new_name in variable_map.items():
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    return content

def main():
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化函数名
    content = beautify_functions(content)
    
    # 美化变量名
    content = beautify_variables(content)
    
    # 写入文件
    write_file(file_path, content)
    
    print("文件美化完成")

if __name__ == '__main__':
    main()