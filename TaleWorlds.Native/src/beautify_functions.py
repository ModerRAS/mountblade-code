#!/usr/bin/env python3
"""
美化02_core_engine.c文件中的FUN_函数名
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

def beautify_function_names(content):
    """美化函数名"""
    # 创建函数名映射字典
    function_mappings = {
        'FUN_180085190': 'ProcessSystemDataTransfer',
        'FUN_180080e90': 'ProcessSystemMemoryAllocation',
        'FUN_18007b240': 'ValidateSystemStatus',
        'FUN_180252ca0': 'CalculateFloatValue',
        'FUN_180077150': 'ProcessSystemMemoryAllocation',
        'FUN_180078550': 'InitializeTargetDataStructure',
        'FUN_180084760': 'ProcessMemoryAddressMask',
        'FUN_1801fd480': 'GetSystemDataPointer',
        'FUN_1801fc6c0': 'GetSystemTimeout',
        'FUN_180191c00': 'ProcessNetworkConnection',
        'FUN_1801fca40': 'ProcessSystemTimeout',
        'FUN_1801fc9f0': 'ProcessSystemPointer',
        'FUN_1801fc9a0': 'ProcessSystemStack',
        'FUN_1801fc950': 'ProcessSystemData',
        'FUN_1801fc900': 'ProcessSystemCounter',
        'FUN_180084c70': 'ProcessSystemDataValidation',
        'FUN_180084ae0': 'ProcessSystemData',
        'FUN_180639bf0': 'ProcessDataStructure',
        'FUN_180080380': 'CalculateMemoryAllocation',
        'FUN_1808fcb90': 'CheckRenderParameterStatus',
        'FUN_1800623b0': 'ValidateSystemConfiguration',
        'FUN_180080ca0': 'AllocateSystemMemoryBuffer',
        'FUN_180082290': 'ReallocateCoreEngineDataBuffer',
        'FUN_180081010': 'ProcessSystemDataStructureExpansion',
        'FUN_180080fa0': 'CleanupSystemDataStructure',
        'FUN_180082880': 'CleanCoreEngineDataStructure',
        'FUN_1800824a0': 'ExpandCoreEngineDataBuffer',
        'FUN_1800810b0': 'ValidateSystemDataStructure',
        'FUN_1800826b0': 'ProcessCoreEngineDataStructureCopy',
        'FUN_180080c10': 'InitializeTargetDataStructure',
        'FUN_1800846d0': 'ProcessSystemBuffer',
        'FUN_18005ce30': 'AllocateSystemData',
        'FUN_180086010': 'ProcessSystemData',
        'FUN_180080ccb': 'CopySystemDataStructure',
        'FUN_180080da6': 'InitializeSystemMemory',
        'FUN_180080dd9': 'CalculateSystemContextOffset',
        'FUN_180080df0': 'CleanTargetDataStructure',
        'FUN_180083260': 'GetSystemFunctionPointer1',
        'FUN_1800831c0': 'GetSystemFunctionPointer2',
        'FUN_180081220': 'ProcessSystemMemoryAllocation',
        'FUN_1802037e0': 'ProcessSystemOperation',
        'FUN_1800828d0': 'ProcessSystemData',
        'FUN_180083820': 'ProcessSystemReturn',
        'FUN_1800839a0': 'ProcessSystemAllocation',
        'FUN_180255880': 'AllocateSystemMemory',
        'FUN_180255b70': 'AllocateSystemMemoryExtended',
        'FUN_1808fc8a8': 'ProcessSystemInitialization',
        'FUN_180045af0': 'ProcessSystemCallback',
        'FUN_1802349a0': 'CalculateDistance',
        'FUN_1800f8a50': 'ProcessSystemDataPointer'
    }
    
    # 替换函数名
    for old_name, new_name in function_mappings.items():
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c'
    
    # 读取文件
    content = read_file(file_path)
    
    # 美化函数名
    beautified_content = beautify_function_names(content)
    
    # 写入文件
    write_file(file_path, beautified_content)
    
    print("函数名美化完成")

if __name__ == '__main__':
    main()