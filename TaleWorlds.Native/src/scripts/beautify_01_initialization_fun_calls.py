#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
01_initialization.c 文件中的 FUN_ 函数名美化脚本
将逆向工程生成的函数名替换为语义化名称
"""

import re
import sys

# FUN_ 函数名映射表
FUNCTION_MAPPINGS = {
    # 系统资源管理相关
    'FUN_1806272a0': 'FormatSystemResourceData',
    'FUN_18005db30': 'ResumeSystemThreads',
    'FUN_18004c2b0': 'InitializeSystemConfiguration',
    'FUN_180627e10': 'AllocateSystemMemoryBuffer',
    'FUN_1800f96b0': 'SetSystemConfigurationValue',
    'FUN_180049910': 'ProcessSystemMemoryAllocation',
    'FUN_1800861a0': 'GetSystemCharacterInput',
    'FUN_18063a240': 'ProcessSystemDataOperation',
    'FUN_1800b9f60': 'CleanupSystemDataBuffer',
    'FUN_18007f4c0': 'InitializeSystemEncryption',
    'FUN_18007f770': 'ProcessSystemResourceCounter',
    'FUN_1800860f0': 'ConfigureSystemResourceFloat',
    'FUN_180086090': 'ConfigureSystemResourceData',
    'FUN_180085fb0': 'ConfigureSystemResourceExtended',
    'FUN_180085ec0': 'ConfigureSystemResourceFinal',
    'FUN_18007f840': 'FinalizeSystemResourceProcessing',
    'FUN_18007f6a0': 'CleanupSystemEncryption',
    'FUN_180085c10': 'InitializeSystemFloatProcessing',
    'FUN_180085ac0': 'ConfigureSystemFloatValue',
    'FUN_180085970': 'FinalizeSystemFloatProcessing',
    'FUN_1800791a0': 'ValidateSystemString',
    'FUN_180085900': 'AllocateSystemResourcePool',
    'FUN_18022f2e0': 'InitializeSystemDataBuffer',
    'FUN_18022f9b0': 'ProcessSystemBufferData',
    'FUN_18022f410': 'CleanupSystemDataBuffer',
    'FUN_180075030': 'InitializeSystemResourceManager',
    'FUN_1800588c0': 'ProcessSystemThreadConfiguration',
    'FUN_180076910': 'ConfigureSystemThread',
    'FUN_180079520': 'ExecuteSystemOperation',
    'FUN_180085530': 'ProcessSystemResourceRelease',
    'FUN_180075b70': 'ProcessSystemResourceFloat',
    'FUN_18007b1e0': 'CleanupSystemResource',
    'FUN_180076b90': 'ValidateSystemResource',
    'FUN_1800b6f90': 'ProcessSystemResourceValidation',
    'FUN_18066c220': 'ProcessSystemResourceCounterExtended',
    'FUN_180083b20': 'FinalizeSystemResourceCounter',
    'FUN_180080df0': 'InitializeSystemThreadContext',
    'FUN_18023b050': 'CleanupSystemMemory',
    'FUN_180240430': 'AllocateSystemMemoryContext',
    'FUN_180237d00': 'ProcessSystemMemoryAllocation',
    'FUN_18022f390': 'ConfigureSystemMemory',
    'FUN_180238950': 'FinalizeSystemMemoryAllocation',
    'FUN_18022d470': 'GetSystemCode',
    'FUN_180084ea0': 'ProcessSystemConfigurationFlags',
    'FUN_180077420': 'ConfigureSystemResourceManagerExtended',
    'FUN_180079270': 'ProcessSystemResourceOperation',
    'FUN_18007ee70': 'FinalizeSystemResource',
    'FUN_1800e94a0': 'ProcessSystemHashData',
    'FUN_180080e90': 'ProcessSystemMemoryData',
    'FUN_180085190': 'ConfigureSystemDataParameters',
    'FUN_18024a290': 'ProcessSystemSecurityValidation',
    'FUN_180252ca0': 'CreateSystemThread',
    'FUN_180077150': 'ValidateSystemResourceManager',
    'FUN_180078550': 'ExecuteSystemResourceCleanup',
    'FUN_180084ae0': 'AllocateSystemResource',
    'FUN_180084760': 'ConfigureSystemResource',
    'FUN_180084c70': 'ProcessSystemResourceAllocation',
    'FUN_180080380': 'InitializeSystemResourceContext',
    'FUN_1800802e0': 'FinalizeSystemResourceContext',
    'FUN_1802349a0': 'GetSystemFloatValue',
    'FUN_180080ca0': 'ProcessSystemResourceBuffer',
    'FUN_180082290': 'ConfigureSystemResourceSize',
    'FUN_180081010': 'ProcessSystemResult',
    'FUN_180080fa0': 'InitializeSystemProcessing',
    'FUN_180082880': 'ExecuteSystemSecondaryOperation',
    'FUN_1800824a0': 'ProcessSystemThreadOperation',
    'FUN_1800810b0': 'FinalizeSystemThreadOperation',
    'FUN_1800826b0': 'CleanupSystemThreadOperation',
    'FUN_180080c10': 'ProcessSystemIntegerOperation',
    'FUN_1800846d0': 'ProcessSystemThreadData',
    'FUN_18007b240': 'ValidateSystemThread',
    'FUN_18007baa0': 'InitializeSystemMemoryOperationStatus',
    'FUN_18005e450': 'ReleaseSystemResourceSemaphore',
    'FUN_18007e080': 'ProcessSystemResourceAllocationExtended',
    'FUN_18007c8e0': 'ProcessSystemResourceData',
    'FUN_18007c490': 'ProcessSystemResourceConfiguration',
    'FUN_180080810': 'ConfigureSystemMemoryRegion',
    'FUN_180627020': 'InitializeSystemStatusBuffer',
    'FUN_1800be9a0': 'AllocateSystemMemoryBlock',
    'FUN_1800781e0': 'ProcessSystemResourceManager',
    'FUN_180081120': 'ProcessSystemDataPointer',
    'FUN_180255880': 'InitializeSystemThreadLocalStorage',
    'FUN_180255b70': 'ConfigureSystemThreadLocalStorage',
    'FUN_180081480': 'ProcessSystemResourceAllocationFinal',
    'FUN_18063b470': 'ProcessSystemFloatOperation',
    'FUN_180084000': 'FinalizeSystemFloatOperation',
    'FUN_180081350': 'AllocateSystemResourceExtended',
    'FUN_180081220': 'FinalizeSystemResourceAllocation',
    'FUN_18007cbb0': 'ProcessSystemDataCopy',
    'FUN_18007df50': 'ValidateSystemMemory',
    'FUN_180080650': 'InitializeSystemResourceBasic',
    'FUN_180086010': 'ConfigureSystemResourceExtended',
    'FUN_1800806e0': 'ProcessSystemResourceDataExtended',
    'FUN_180078c70': 'ProcessSystemResourceMemory',
    'FUN_18063a180': 'FinalizeSystemResourceData',
    'FUN_18007e990': 'InitializeSystemResourceConfiguration',
    'FUN_18007ea10': 'ProcessSystemResourceFinal',
    'FUN_18007f2f0': 'ProcessSystemResourceManagerPointer',
    'FUN_18007f3b0': 'ConfigureSystemResourceManagerPointer',
    'FUN_18007eb80': 'ProcessSystemResourceRelease',
    'FUN_18007edd0': 'CleanupSystemResourceFinal',
    'FUN_18007eea1': 'ProcessSystemResourceCounterExtended',
    'FUN_18007ef9a': 'ProcessSystemResourceFinal',
    'FUN_18007f0e0': 'ProcessSystemResourceThread',
    'FUN_180080480': 'GetSystemThreadID',
}

def replace_function_calls(content):
    """替换函数调用"""
    for old_name, new_name in FUNCTION_MAPPINGS.items():
        # 替换函数调用
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    return content

def main():
    # 读取文件
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
    
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 替换函数调用
        new_content = replace_function_calls(content)
        
        # 写回文件
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(new_content)
        
        print(f"成功美化 {len(FUNCTION_MAPPINGS)} 个函数调用")
        
    except Exception as e:
        print(f"处理文件时出错: {e}")

if __name__ == "__main__":
    main()