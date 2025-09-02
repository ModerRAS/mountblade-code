#!/usr/bin/env python3
"""
美化99_unmatched_functions.c文件中的函数名
将func_0x开头的函数名重命名为有意义的名称
"""

import re
import os

# 函数映射表：将地址映射到有意义的函数名
function_mappings = {
    'func_0x000180225d90': 'GetNetworkStatus',
    'func_0x0001800ab000': 'ProcessNetworkRequest',
    'func_0x0001800aada0': 'ParseCharacterData',
    'func_0x0001802a1d70': 'ValidateCharacter',
    'func_0x0001800adfc0': 'UpdateOperationCounter',
    'func_0x0001802a0ec0': 'ProcessNetworkResponse',
    'func_0x0001800ab240': 'InitializeSystemContext',
    'func_0x0001800ab380': 'AllocateSystemResource',
    'func_0x0001800ab2c0': 'CreateSystemHandle',
    'func_0x000180085de0': 'GetSystemDataPointer',
    'func_0x00018022d300': 'GetSystemStatus',
    'func_0x00018066bd70': 'NavigateToNextNode',
    'func_0x00018066b9a0': 'GetCurrentNodeData',
    'func_0x00018005d390': 'ProcessSystemData',
    'func_0x00018029db20': 'ExecuteSystemCommand',
    'func_0x0001800e2bf0': 'CompareSystemParameters',
    'func_0x0001800ed880': 'CheckSystemReady',
    'func_0x00018024c420': 'ProcessParameterData',
    'func_0x0001800ae1f0': 'CreateDataBuffer',
    'func_0x0001800ed840': 'InitializeDataBuffer',
    'func_0x0001800e7950': 'ProcessStringData',
    'func_0x0001800da750': 'GetCharacterAtPosition',
    'func_0x0001800ba3b0': 'ValidateSystemFlag',
    'func_0x00018024c040': 'ExtractParameterData',
    'func_0x00018029dab0': 'ProcessConfigurationData',
    'func_0x0001800d4090': 'CompareMemoryRegions',
    'func_0x0001800d40c0': 'ValidateMemoryAccess',
    'func_0x000180079240': 'GetSystemMemoryInfo',
    'func_0x00018066c530': 'ProcessXmlStringData',
    'func_0x00018066d300': 'GetXmlDocumentRoot',
    'func_0x0001801c0ee0': 'ExecuteSystemCleanup',
    'func_0x0001803b0980': 'InitializeXmlParser',
    'func_0x00018031cb70': 'ProcessXmlDocument',
    'func_0x00018023a1e0': 'CalculateSystemMetrics',
    'func_0x0001802eeba0': 'ExecuteSystemValidation',
    'func_0x0001801be7c0': 'ProcessSystemMetrics',
    'func_0x0001801be740': 'UpdateSystemMetrics',
    'func_0x0001801bb330': 'ProcessSystemBuffer',
    'func_0x000180360380': 'ValidateSystemData',
    'func_0x0001802e1840': 'ExecuteSystemOperation',
    'func_0x0001801be000': 'ProcessCharacterStream',
    'func_0x0001801bb270': 'UpdateSystemStatus',
    'func_0x000180388c90': 'GetResourceHandle',
    'func_0x00018038d2f0': 'CalculateResourceMetrics',
    'func_0x0001801ece00': 'InitializeSystemComponents',
    'func_0x0001801eb6f0': 'CompareSystemData',
    'func_0x0001801c7f00': 'ProcessNodeData',
    'func_0x0001801808f3ad0': 'HandleSystemException',
}

def beautify_function_names(content):
    """美化函数名"""
    for old_name, new_name in function_mappings.items():
        # 替换函数调用
        content = re.sub(r'\b' + re.escape(old_name) + r'\b', new_name, content)
    return content

def main():
    # 读取文件
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c'
    
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 美化函数名
    beautified_content = beautify_function_names(content)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(beautified_content)
    
    print("函数名美化完成")

if __name__ == "__main__":
    main()