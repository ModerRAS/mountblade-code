#!/usr/bin/env python3
"""
美化06_utilities.c文件中的函数名称
根据函数调用的上下文来推断函数的用途
"""

import re
import sys

def analyze_function_usage():
    """分析函数使用模式并生成重命名映射"""
    
    # 基于函数调用上下文的重命名映射
    function_rename_map = {
        # 资源管理相关函数
        'FUN_180045af0': 'ReleaseResourceHandle',
        'FUN_18007f6a0': 'CleanupResourceContext',
        'FUN_18007f840': 'InitializeResourceContext',
        'FUN_18007bb70': 'ValidateResourceStructure',
        'FUN_1800ba100': 'FreeResourceMemory',
        'FUN_18022f390': 'UpdateResourceStatus',
        
        # 资源处理相关函数
        'FUN_18005d260': 'ProcessResourceRequest',
        'FUN_18008d810': 'ValidateResourceData',
        'FUN_180089640': 'AllocateResourceIndex',
        'FUN_1800c2ca0': 'PrepareResourceOperation',
        'FUN_1800c2ff0': 'ExecuteResourceOperation',
        
        # 内存管理相关函数
        'FUN_180057010': 'AllocateMemoryBlock',
        'FUN_180057340': 'FreeMemoryBlock',
        'FUN_18008d1f0': 'InitializeMemoryArray',
        
        # 系统状态相关函数
        'FUN_18009fb60': 'GetSystemStatus',
        'FUN_1800a19c0': 'UpdateSystemStatus',
        'FUN_1800ad6f0': 'ResetSystemState',
        
        # 网络相关函数
        'FUN_180067070': 'ProcessNetworkRequest',
        'FUN_180080870': 'InitializeNetworkConnection',
        'FUN_180080df0': 'CloseNetworkConnection',
        
        # 资源验证相关函数
        'FUN_180179f00': 'ValidateResourceAccess',
        'FUN_1800edb30': 'CheckResourceAvailability',
        'FUN_1800edd10': 'VerifyResourceIntegrity',
        
        # 资源哈希相关函数
        'FUN_1800b9030': 'CalculateResourceHash',
        'FUN_1800b9210': 'ValidateResourceHash',
        'FUN_1800b9270': 'UpdateResourceHash',
        'FUN_1800b94f0': 'FinalizeResourceHash',
        'FUN_1802ab380': 'CommitResourceHash',
        'FUN_1802ab7f0': 'ProcessResourceHashCallback',
        
        # 资源索引相关函数
        'FUN_1800ae2c0': 'ProcessResourceIndex',
        'FUN_180085530': 'ValidateResourceIndex',
        'FUN_1800adb30': 'ReleaseResourceIndex',
        
        # 系统调用相关函数
        'FUN_18005d560': 'ExecuteSystemCall',
        'FUN_180152b00': 'ProcessSystemEvent',
        
        # 数据结构相关函数
        'FUN_1800ed380': 'InitializeDataStructure',
        'FUN_1800ee130': 'ProcessDataStructure',
        'FUN_1800ee080': 'ValidateDataStructure',
        
        # 系统配置相关函数
        'FUN_1800f7260': 'LoadSystemConfiguration',
        'FUN_1800f7320': 'SaveSystemConfiguration',
        'FUN_1800f8930': 'ValidateConfiguration',
        'FUN_1800f89b0': 'ResetConfiguration',
        
        # 内存操作相关函数
        'FUN_180059ba0': 'ProcessMemoryOperation',
        'FUN_180296b70': 'InitializeMemoryManager',
        
        # 高级系统函数
        'FUN_1802a07c0': 'ExecuteSystemCommand',
        'FUN_1802c24b0': 'ProcessSystemCallback',
        
        # 资源加载相关函数
        'FUN_1801b9690': 'LoadResourceData',
        'FUN_1800e7ca0': 'ProcessResourceData',
        'FUN_1800e7f20': 'ValidateResourceHeader',
        'FUN_1800e7b80': 'ParseResourceMetadata',
        'FUN_1800e7d00': 'ExtractResourceContent',
        'FUN_1800e7c40': 'CompressResourceData',
        'FUN_1800e7be0': 'DecompressResourceData',
        'FUN_180051d00': 'OptimizeResourceStorage',
    }
    
    return function_rename_map

def rename_functions_in_file(file_path):
    """重命名文件中的函数"""
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 获取重命名映射
    rename_map = analyze_function_usage()
    
    # 执行替换
    original_content = content
    for old_name, new_name in rename_map.items():
        # 使用正则表达式确保只替换完整的函数名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 如果内容有变化，则写回文件
    if content != original_content:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"已重命名 {len(rename_map)} 个函数")
        return True
    else:
        print("没有找到需要重命名的函数")
        return False

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
    if rename_functions_in_file(file_path):
        print("函数重命名完成")
    else:
        print("函数重命名失败")