#!/usr/bin/env python3
"""
01_initialization.c 文件中 FUN_ 函数语义化替换脚本
基于函数分析结果，为所有 FUN_ 开头的函数提供语义化名称
"""

import re
import sys

# 函数替换映射表
FUNCTION_REPLACEMENTS = {
    # 系统资源管理函数
    'FUN_18006d6c0': 'AllocateSystemResourceWithThreadManagement',
    'FUN_18006d810': 'ProcessSystemResourceAllocationRequest',
    'FUN_18006d920': 'CalculateAndFindResourceManagerPointer',
    'FUN_18006da50': 'ProcessSystemResourceDataC',
    'FUN_18006da90': 'GetSystemResourceHash',
    'FUN_18006dc10': 'CleanupSystemResourceDataB',
    'FUN_18006dcb0': 'ConfigureResourceManagerData',
    
    # 系统初始化函数
    'FUN_180072e80': 'InitializeSystemResourceWithCallbacks',
    'FUN_180072f00': 'ValidateSystemResourceInitialization',
    'FUN_180073630': 'ConfigureSystemResourceManagerA',
    'FUN_180073730': 'ConfigureSystemResourceManagerB',
    
    # 系统资源处理函数
    'FUN_180073adc': 'ProcessSystemResourceQueue',
    'FUN_180073b64': 'ValidateSystemResourceStatus',
    'FUN_180073e0b': 'ProcessSystemResourceValidation',
    'FUN_1800740a2': 'ManageSystemResourceMemory',
    'FUN_1800742ea': 'ProcessSystemResourceAllocation',
    'FUN_1800746c0': 'ConfigureSystemResourceMemory',
    'FUN_180074840': 'InitializeSystemResourceBuffer',
    'FUN_1800748d0': 'ProcessSystemResourceBufferData',
    'FUN_180074a80': 'ManageSystemResourcePointer',
    'FUN_180074b30': 'InitializeSystemResourcePointerArray',
    'FUN_180074c20': 'ConfigureSystemResourcePointers',
    'FUN_180074ed0': 'CleanupSystemResourcePointers',
    'FUN_180074f70': 'DestroySystemResourcePointers',
    'FUN_180075030': 'InitializeSystemResourcePointerSet',
    
    # 内存管理函数
    'FUN_180075580': 'FreeSystemResourceMemory',
    'FUN_1800755c0': 'ValidateSystemResourceOperation',
    'FUN_180075630': 'ProcessSystemResourceDataWithPointers',
    'FUN_1800756e0': 'ResetSystemResourceMemory',
    'FUN_180075af0': 'GetSystemResourceConfiguration',
    'FUN_180075b70': 'ProcessSystemResourceFloatData',
    'FUN_180075ff0': 'ConfigureSystemResourceFlags',
    'FUN_1800763c0': 'InitializeSystemResourceMemoryBlock',
    
    # 系统状态管理函数
    'FUN_180076760': 'ManageSystemResourceStatus',
    'FUN_180076910': 'ProcessSystemResourceConfigurationData',
    'FUN_180076a20': 'ResetSystemResourceConfiguration',
    'FUN_180076b90': 'ValidateSystemResourceAvailability',
    'FUN_180076c50': 'CheckSystemResourceIntegrity',
    'FUN_180077020': 'InitializeSystemResourceValidation',
    'FUN_180077040': 'GetSystemResourceStatusValue',
    'FUN_180077150': 'ConfigureSystemResourceValidation',
    
    # 系统操作函数
    'FUN_180077420': 'ExecuteSystemResourceOperation',
    'FUN_180077710': 'ProcessSystemResourceCommand',
    'FUN_180077750': 'ConfigureSystemResourceParameters',
    'FUN_180077ad8': 'SystemNoOperationE',
    'FUN_180077c96': 'SystemNoOperationF',
    'FUN_180077dc6': 'SystemNoOperationG',
    'FUN_180077dec': 'SystemNoOperationH',
    'FUN_180077ef9': 'GetSystemOperationStatus',
    'FUN_180077f20': 'ProcessSystemResourceCreation',
    
    # 数据处理函数
    'FUN_180078051': 'ProcessSystemResourceFloatParameters',
    'FUN_180078143': 'SystemCleanupFunctionC',
    'FUN_1800781e0': 'ConfigureSystemResourceMemoryManager',
    'FUN_1800781f4': 'InitializeSystemResourceMemoryPool',
    'FUN_180078239': 'ProcessSystemResourceFloatOperations',
    'FUN_1800782a8': 'ManageSystemResourceAllocation',
    'FUN_1800783b0': 'SystemNoOperationI',
    'FUN_1800784e0': 'InitializeSystemResourceManagerPointers',
    'FUN_180078550': 'ConfigureSystemResourceManagerPointers',
    'FUN_1800786e0': 'ProcessSystemResourceManagerData',
    
    # 高级系统函数
    'FUN_180078c10': 'ExecuteSystemResourceFinalization',
    'FUN_180078c70': 'ValidateSystemResourceFinalization',
    'FUN_180079284': 'ProcessSystemResourceOptimization',
    'FUN_1800792ea': 'SystemNoOperationJ',
    'FUN_180079309': 'ConfigureSystemResourceOptimization',
    'FUN_18007940e': 'SystemNoOperationK',
    'FUN_1800795b0': 'ProcessSystemResourceFloatValidation',
    'FUN_1800796b0': 'FinalizeSystemResourceProcessing',
    
    # 系统资源验证函数
    'FUN_18007b1a0': 'ValidateSystemResourceMemoryA',
    'FUN_18007b1c0': 'ValidateSystemResourceMemoryB',
    'FUN_18007b1e0': 'CheckSystemResourceMemoryStatus',
    'FUN_18007b240': 'ProcessSystemResourceMemoryValidation',
    'FUN_18007b930': 'ManageSystemResourceMemoryValidation',
    'FUN_18007ba60': 'InitializeSystemResourceMemoryCheck',
    'FUN_18007baa0': 'ProcessSystemResourceMemoryCheck',
    'FUN_18007bb70': 'ExecuteSystemResourceMemoryValidation',
    
    # 系统配置函数
    'FUN_18007c790': 'ConfigureSystemResourceMemoryA',
    'FUN_18007c7f0': 'InitializeSystemResourceConfiguration',
    'FUN_18007c860': 'ProcessSystemResourceConfigurationRequest',
    'FUN_18007cbb0': 'ExecuteSystemResourceConfiguration',
    
    # 系统管理函数
    'FUN_18007e990': 'ManageSystemResourceThreads',
    'FUN_18007ea10': 'ProcessSystemResourceThreadData',
    'FUN_18007eea1': 'ConfigureSystemResourceThreadParameters',
    'FUN_18007ef9a': 'ProcessSystemResourceThreadManagement',
    'FUN_18007f0ca': 'InitializeSystemResourceThreadManager',
    'FUN_18007f0e0': 'ManageSystemResourceThreadOperations',
    
    # 系统工具函数
    'FUN_18007f11f': 'SystemNoOperationL',
    'FUN_18007f176': 'SystemNoOperationM',
    'FUN_18007f27a': 'SystemNoOperationN',
    'FUN_18007f2cf': 'SystemNoOperationO',
    'FUN_18007f2f0': 'InitializeSystemResourceUtility',
    'FUN_18007f3b0': 'ConfigureSystemResourceUtility',
    'FUN_18007f4c0': 'ProcessSystemResourceUtilityData',
    'FUN_18007f6a0': 'ManageSystemResourceUtility',
    
    # 系统状态函数
    'FUN_18007f820': 'SystemNoOperationP',
    'FUN_18007f859': 'GetSystemResourceUtilityStatus',
    'FUN_18007f8bb': 'ValidateSystemResourceUtility',
    'FUN_18007f8f0': 'ConfigureSystemResourceUtilityParameters',
    'FUN_18007f90f': 'ProcessSystemResourceUtilityFinalization',
    'FUN_18007f933': 'InitializeSystemResourceUtilityFinalization',
    'FUN_18007f976': 'SystemNoOperationQ',
    'FUN_18007f983': 'SystemNoOperationR',
    'FUN_18007fb5f': 'SystemNoOperationS',
    'FUN_18007fc19': 'SystemNoOperationT',
    'FUN_18007fc35': 'ProcessSystemResourceUtilityCleanup',
    'FUN_18007fc63': 'SystemNoOperationU',
    'FUN_18007fc68': 'SystemNoOperationV',
    'FUN_18007fc6d': 'SystemNoOperationW',
}

def replace_functions_in_file(file_path):
    """
    在文件中替换所有 FUN_ 函数名
    """
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        original_content = content
        replacement_count = 0
        
        # 执行替换
        for old_name, new_name in FUNCTION_REPLACEMENTS.items():
            # 替换函数定义
            pattern = r'\b' + re.escape(old_name) + r'\b'
            content = re.sub(pattern, new_name, content)
            
            # 统计替换次数
            if old_name in original_content:
                count = original_content.count(old_name)
                replacement_count += count
                print(f"替换 {old_name} -> {new_name} (出现次数: {count})")
        
        # 写回文件
        if replacement_count > 0:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            print(f"\n总共替换了 {replacement_count} 处函数名")
        else:
            print("未找到需要替换的函数名")
            
        return True
        
    except Exception as e:
        print(f"处理文件时出错: {e}")
        return False

def generate_replacement_report():
    """
    生成替换报告
    """
    print("\n" + "="*60)
    print("01_initialization.c 函数替换映射表")
    print("="*60)
    
    categories = {
        "系统资源管理函数": [
            ('FUN_18006d6c0', 'AllocateSystemResourceWithThreadManagement'),
            ('FUN_18006d810', 'ProcessSystemResourceAllocationRequest'),
            ('FUN_18006d920', 'CalculateAndFindResourceManagerPointer'),
            ('FUN_18006da50', 'ProcessSystemResourceDataC'),
            ('FUN_18006da90', 'GetSystemResourceHash'),
            ('FUN_18006dc10', 'CleanupSystemResourceDataB'),
            ('FUN_18006dcb0', 'ConfigureResourceManagerData'),
        ],
        "系统初始化函数": [
            ('FUN_180072e80', 'InitializeSystemResourceWithCallbacks'),
            ('FUN_180072f00', 'ValidateSystemResourceInitialization'),
            ('FUN_180073630', 'ConfigureSystemResourceManagerA'),
            ('FUN_180073730', 'ConfigureSystemResourceManagerB'),
        ],
        "内存管理函数": [
            ('FUN_180075580', 'FreeSystemResourceMemory'),
            ('FUN_1800755c0', 'ValidateSystemResourceOperation'),
            ('FUN_180075630', 'ProcessSystemResourceDataWithPointers'),
            ('FUN_1800756e0', 'ResetSystemResourceMemory'),
            ('FUN_180075af0', 'GetSystemResourceConfiguration'),
            ('FUN_180075b70', 'ProcessSystemResourceFloatData'),
            ('FUN_180075ff0', 'ConfigureSystemResourceFlags'),
            ('FUN_1800763c0', 'InitializeSystemResourceMemoryBlock'),
        ]
    }
    
    for category, functions in categories.items():
        print(f"\n{category}:")
        print("-" * 40)
        for old_name, new_name in functions:
            print(f"  {old_name} -> {new_name}")

def main():
    """
    主函数
    """
    if len(sys.argv) != 2:
        print("使用方法: python replace_01_init_functions.py <文件路径>")
        print("例如: python replace_01_init_functions.py 01_initialization.c")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    # 生成替换报告
    generate_replacement_report()
    
    print(f"\n开始处理文件: {file_path}")
    print("="*60)
    
    # 执行替换
    if replace_functions_in_file(file_path):
        print("文件处理完成!")
    else:
        print("文件处理失败!")
        sys.exit(1)

if __name__ == "__main__":
    main()