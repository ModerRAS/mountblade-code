#!/usr/bin/env python3
"""
核心引擎函数重命名脚本
重命名02_core_engine.c文件中的FUN_函数调用为语义化名称
"""

import re
import sys

def rename_functions_in_file(file_path):
    """重命名文件中的函数调用"""
    
    # 函数重命名映射表
    function_mapping = {
        'FUN_18004b560': 'CoreEngineInitializeSystemInfoBuffer',
        'FUN_180061380': 'CoreEngineSetupSystemInfoContext',
        'FUN_1800636f0': 'CoreEngineAllocateSystemMemory',
        'FUN_1800624c0': 'CoreEngineConfigureSystemSettings',
        'FUN_180627160': 'CoreEngineInitializeNetworkComponent',
        'FUN_1808fcdc8': 'CoreEngineSetupNetworkConnection',
        'FUN_1800623b0': 'CoreEngineApplySystemConfiguration',
        'FUN_18004b860': 'CoreEngineInitializeSystemInfoHandler',
        'FUN_18064e900': 'CoreEngineProcessSystemEvent',
        'FUN_1808dbcd0': 'CoreEngineInitializeSecurityContext',
        'FUN_180046e20': 'CoreEngineInitializeEventProcessor',
        'FUN_180050b00': 'CoreEngineInitializeResourceManager',
        'FUN_180049830': 'CoreEngineProcessDataLinkNode',
        'FUN_18006e990': 'CoreEngineInitializeNetworkStack',
        'FUN_180044dc0': 'CoreEngineHandleSystemErrorAndInitializeErrorHandler',
        'FUN_180045380': 'CoreEngineInitializeThreadStringProcessor',
        'FUN_180046130': 'CoreEngineReleaseSemaphore',
        'FUN_180046160': 'CoreEngineUnlockMutex',
        'FUN_180044a50': 'CoreEngineInitializeSystemInfoAndConfigurationProcessor',
        'FUN_1807681a0': 'CoreEnginePerformSystemCheck',
        'FUN_180943180': 'CoreEngineValidateSystemStatus',
        'FUN_180943200': 'CoreEngineVerifySystemConfiguration'
    }
    
    # 读取文件内容
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 执行函数重命名
    original_content = content
    for old_name, new_name in function_mapping.items():
        # 只替换函数调用，不替换注释中的函数名
        pattern = r'\b' + re.escape(old_name) + r'\b(?!\s*//)'
        content = re.sub(pattern, new_name, content)
    
    # 如果内容有变化，写回文件
    if content != original_content:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"已重命名文件中的函数调用: {file_path}")
        return True
    else:
        print(f"未找到需要重命名的函数调用: {file_path}")
        return False

if __name__ == "__main__":
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
    rename_functions_in_file(file_path)