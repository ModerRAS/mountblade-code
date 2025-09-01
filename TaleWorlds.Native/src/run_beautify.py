#!/usr/bin/env python3
"""
代码美化脚本：重命名06_utilities.c文件中的函数和变量
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

def beautify_utilities_code(content):
    """美化工具代码"""
    
    # 1. 重命名FUN_180xxxxx函数
    function_renames = {
        'FUN_180085530': 'ReleaseSystemResourceHandle',
        'FUN_180047e40': 'DestroySystemContext',
        'FUN_18008d1f0': 'InitializeMemoryManagement',
        'FUN_180057010': 'ReleaseSystemMemory',
        'FUN_180067070': 'CleanupSystemState',
        'FUN_1800a19c0': 'ProcessResourcePointer',
        'FUN_18009fb60': 'ValidateSystemResource',
        'FUN_1800ad6f0': 'ExecuteSystemCleanup',
        'FUN_180152b00': 'ProcessMemoryAllocation',
        'FUN_18005d560': 'ReleaseResourceHandle',
        'FUN_1800adb30': 'UpdateResourceTable',
        'FUN_1800b9210': 'ProcessResourceHashOperation',
        'FUN_1800b9030': 'HandleResourceTableAccess',
        'FUN_1800b9270': 'ManageResourceTableEntry',
        'FUN_1802ab7f0': 'ProcessResourceRegistration',
        'FUN_1800ba100': 'ExecuteResourceInitialization',
        'FUN_1800c2ca0': 'HandleResourceDataTransfer',
        'FUN_1800c2ff0': 'ProcessResourceDataValidation',
        'FUN_1800ed380': 'ExecuteResourceManagement',
        'FUN_180057340': 'PerformMemoryOperation',
        'FUN_1802c24b0': 'ProcessMemoryDataAccess',
        'FUN_1801b9690': 'HandleResourceTypeRegistration',
        'FUN_1800e7ca0': 'ProcessResourceCacheOperation',
        'FUN_1800e7f20': 'HandleResourceValidation',
        'FUN_180080df0': 'ExecuteSystemInitialization',
        'FUN_180051d00': 'ProcessResourceAllocation',
        'FUN_1800e7b80': 'HandleResourceBufferOperation',
        'FUN_1800e7d00': 'ProcessResourceDataManagement',
        'FUN_1800e7c40': 'HandleResourceControlOperation',
        'FUN_1800e7be0': 'ProcessResourceInfoAccess',
        'FUN_1800edc10': 'HandleResourceEventProcessing',
        'FUN_1800ee130': 'ExecuteResourceDataProcessing',
        'FUN_1800edd10': 'ProcessResourceTableUpdate',
        'FUN_1800ee080': 'HandleResourceDataValidation',
        'FUN_1800f89b0': 'ExecuteResourceFinalization',
        'FUN_1800f7260': 'ProcessResourceConfiguration',
        'FUN_1800f7320': 'HandleResourceOptimization',
        'FUN_1800f8930': 'ProcessResourceCleanup',
        'FUN_1800f88f0': 'HandleResourceManagement',
        'FUN_180059ba0': 'ProcessResourceOperation',
        'FUN_18011d900': 'HandleResourceDataTransfer',
        'FUN_180296b70': 'ExecuteSystemFinalization',
        'FUN_18094136c': 'ProcessSystemStateReset',
        'FUN_180941383': 'ProcessSystemStateResetWithCallback',
        'FUN_18094139f': 'ConfigureSystemParameters',
        'FUN_1809414f0': 'InitializeSystemUtilities',
        'FUN_180941610': 'SetupSystemConfiguration',
        'FUN_180941880': 'ConfigureSystemDataTable',
        'FUN_1809418a0': 'SetupSystemResourcePointer',
        'FUN_1809418c0': 'InitializeSystemDataStructure',
        'FUN_1809418e0': 'ConfigureSystemMemoryManager',
        'FUN_180941900': 'SetupSystemMemoryPool',
        'FUN_180941920': 'ProcessSystemMemoryOperation'
    }
    
    # 2. 重命名UNK_180xxxxx变量
    variable_renames = {
        'UNK_1809ff498': 'ResourceHashTable001',
        'UNK_1809feeb8': 'ResourceHashTable002',
        'UNK_180a07cd0': 'ResourceHashTable003',
        'UNK_1809ff488': 'ResourceHashTable004',
        'UNK_1809ffa18': 'ResourceHashTable005',
        'UNK_180a02e68': 'ResourceHashTable006',
        'UNK_180a14bb8': 'ResourceValidationTable001',
        'UNK_180a14c60': 'ResourceValidationTable002',
        'UNK_180a14d00': 'ResourceValidationTable003',
        'UNK_18098b928': 'SystemDataTable001',
        'UNK_180a01668': 'SystemDataPointer001',
        'UNK_180a17010': 'SystemDataPointer002',
        'UNK_180a07218': 'SystemMemoryTable001',
        'UNK_180a03ad8': 'SystemMemoryPointer001',
        'UNK_180a05068': 'SystemResourceTable001',
        'UNK_1809fcca0': 'SystemResourceTable002',
        'UNK_1809fcd18': 'SystemResourceTable003',
        'UNK_180fcc88': 'SystemResourceTable004',
        'UNK_180a05240': 'SystemResourceTable005',
        'UNK_180a05168': 'SystemResourcePointer001',
        'UNK_180d49260': 'SystemStatusFlag001',
        'UNK_18098bcb0': 'SystemDataStructure001',
        'UNK_180a3c3e0': 'SystemMemoryStructure001',
        'UNK_18009ee10': 'SystemCodePointer001',
        'UNK_1800a0f67': 'SystemDataPointer002',
        'UNK_1800a127e': 'SystemDataPointer003',
        'UNK_180c8a9a8': 'SystemResourcePointer001',
        'UNK_180944718': 'SystemLocaleData001'
    }
    
    # 3. 替换undefined类型
    undefined_replacements = {
        'undefined': 'uint8_t',
        'undefined1': 'uint8_t',
        'undefined2': 'uint16_t',
        'undefined4': 'uint32_t',
        'undefined8': 'uint64_t',
        'undefined *': 'void *',
        'undefined1 *': 'uint8_t *',
        'undefined2 *': 'uint16_t *',
        'undefined4 *': 'uint32_t *',
        'undefined8 *': 'uint64_t *'
    }
    
    # 应用函数重命名
    for old_name, new_name in function_renames.items():
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    # 应用变量重命名
    for old_name, new_name in variable_renames.items():
        content = re.sub(r'\b' + old_name + r'\b', new_name, content)
    
    # 应用undefined类型替换
    for old_type, new_type in undefined_replacements.items():
        content = re.sub(r'\b' + old_type + r'\b', new_type, content)
    
    return content

# 直接执行
file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'

try:
    # 读取文件
    content = read_file(file_path)
    print(f"已读取文件: {file_path}")
    
    # 美化代码
    beautified_content = beautify_utilities_code(content)
    print("代码美化完成")
    
    # 写入文件
    write_file(file_path, beautified_content)
    print(f"已写入文件: {file_path}")
    
except Exception as e:
    print(f"处理文件时出错: {e}")